#!/usr/bin/env bash
# Entrypoint for the Flash Studio container.
#
#   gui (default)      start TigerVNC X server + openbox + noVNC and run Flash Studio in it
#   anything else      run the Flash Studio binary headless with the given CLI args, e.g.
#                      docker run --rm -v $PWD:/work flashstudio --load-settings ... --slice 0 --export-3mf /work/out.3mf /work/in.stl
set -euo pipefail

APP=/opt/flashstudio/bin/FlashStudio
export LC_NUMERIC=C
# Software OpenGL through Mesa llvmpipe; the VNC X server has no GPU.
export LIBGL_ALWAYS_SOFTWARE=1 GALLIUM_DRIVER=llvmpipe
# Keep WebKitGTK (embedded web pages) away from GL/dmabuf paths that fail under Xvnc.
export WEBKIT_DISABLE_COMPOSITING_MODE=1 WEBKIT_DISABLE_DMABUF_RENDERER=1
export GDK_BACKEND=x11 NO_AT_BRIDGE=1
# System CA bundle for libcurl/OpenSSL (otherwise the app asks about it at every start).
export SSL_CERT_FILE=/etc/ssl/certs/ca-certificates.crt SSL_CERT_DIR=/etc/ssl/certs

PUID=${PUID:-1000}; PGID=${PGID:-1000}
if [[ "$(id -u)" == "0" ]]; then
    if [[ "$(id -u flash)" != "$PUID" || "$(id -g flash)" != "$PGID" ]]; then
        groupmod -o -g "$PGID" flash
        usermod  -o -u "$PUID" -g "$PGID" flash
    fi
    chown -R flash:flash /config 2>/dev/null || true
    chown flash:flash /prints /opt/flashstudio 2>/dev/null || true
fi

if [[ "${1:-gui}" != "gui" ]]; then
    # Headless CLI mode (slicing, exporting, profile tools). No X server needed.
    # Runs as the unprivileged user so output files in /prints get PUID:PGID ownership.
    if [[ "$(id -u)" == "0" ]]; then
        exec runuser -u flash -- env HOME=/config LC_NUMERIC=C SSL_CERT_FILE="$SSL_CERT_FILE" "$APP" --datadir /config "$@"
    fi
    exec "$APP" --datadir /config "$@"
fi

# ---------- GUI mode ----------
shift || true

W=${DISPLAY_WIDTH:-1920}; H=${DISPLAY_HEIGHT:-1080}
VNC_PORT=${VNC_PORT:-5901}; NOVNC_PORT=${NOVNC_PORT:-6080}
export DISPLAY=:1
export XDG_RUNTIME_DIR=/tmp/xdg-flash; mkdir -p "$XDG_RUNTIME_DIR"; chown flash:flash "$XDG_RUNTIME_DIR"; chmod 700 "$XDG_RUNTIME_DIR"

SEC=(-SecurityTypes None)
if [[ -n "${VNC_PASSWORD:-}" ]]; then
    mkdir -p /config/.vnc
    echo "$VNC_PASSWORD" | vncpasswd -f > /config/.vnc/passwd
    chmod 600 /config/.vnc/passwd; chown -R flash:flash /config/.vnc
    SEC=(-SecurityTypes VncAuth -PasswordFile /config/.vnc/passwd)
fi

pids=()
cleanup() { echo "shutting down"; kill "${pids[@]}" 2>/dev/null || true; wait 2>/dev/null || true; }
trap cleanup TERM INT

echo "[entrypoint] starting X/VNC server ${W}x${H} on port ${VNC_PORT}"
Xtigervnc "$DISPLAY" -geometry "${W}x${H}" -depth 24 -rfbport "$VNC_PORT" -localhost no \
    -AlwaysShared -desktop "Flash Studio" "${SEC[@]}" >/tmp/xvnc.log 2>&1 &
pids+=($!)
for _ in $(seq 1 50); do [[ -S /tmp/.X11-unix/X1 ]] && break; sleep 0.2; done

echo "[entrypoint] starting window manager"
runuser -u flash -- env DISPLAY="$DISPLAY" HOME=/config openbox >/tmp/openbox.log 2>&1 &
pids+=($!)
xsetroot -solid "#2b2b2b" 2>/dev/null || true

echo "[entrypoint] starting noVNC on http://0.0.0.0:${NOVNC_PORT}/"
websockify --web=/opt/novnc "$NOVNC_PORT" "localhost:${VNC_PORT}" >/tmp/websockify.log 2>&1 &
pids+=($!)

echo "[entrypoint] starting Flash Studio (data dir /config)"
# Restart the app if the user closes it, so the browser session always has something to show.
(
  while true; do
      runuser -u flash -- env DISPLAY="$DISPLAY" HOME=/config LC_NUMERIC=C \
          LIBGL_ALWAYS_SOFTWARE=1 GALLIUM_DRIVER=llvmpipe \
          WEBKIT_DISABLE_COMPOSITING_MODE=1 WEBKIT_DISABLE_DMABUF_RENDERER=1 \
          GDK_BACKEND=x11 NO_AT_BRIDGE=1 SSL_CERT_FILE="$SSL_CERT_FILE" SSL_CERT_DIR="$SSL_CERT_DIR" \
          "$APP" --datadir /config "$@" || echo "[entrypoint] Flash Studio exited with $?"
      sleep 3
  done
) &
pids+=($!)

wait -n "${pids[@]}" || true
cleanup
