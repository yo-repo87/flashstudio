# syntax=docker/dockerfile:1.7
#
# Flash Studio (Orca-Flashforge) for Linux, in Docker, GUI via noVNC.
#
# Stage 1 "builder": compiles Orca-Flashforge 1.7.15 (the newest public source tag)
#   from ./src exactly like the upstream GitHub Actions Linux job
#   (Ubuntu 24.04, clang + lld, Ninja Multi-Config, static deps).
# Stage 2 "runtime": slim Ubuntu with GTK3/WebKit/GStreamer/Mesa, TigerVNC + noVNC,
#   the built binary, and the resources from the 1.7.20 Windows build layered on top
#   (profiles, printer definitions, HMS DB, web pages, translations, images).
#
# Build context must be the project root (see docker/docker-compose.yml, docker/build.sh).

ARG BASE_IMAGE=ubuntu:24.04

############################
# Stage 1: build
############################
FROM ${BASE_IMAGE} AS builder
ARG NCORES=3
ENV DEBIAN_FRONTEND=noninteractive \
    LC_ALL=C.UTF-8 \
    CMAKE_POLICY_VERSION_MINIMUM=3.5

# scripts/linux.d/debian list from the source tree, plus X11/Wayland/GL headers that
# the GLFW / wxWidgets dependency builds need.
RUN apt-get update && apt-get install -y --no-install-recommends \
      autoconf automake autopoint libtool-bin build-essential cmake eglexternalplatform-dev extra-cmake-modules file g++ \
      gettext git gstreamer1.0-gtk3 libcurl4-openssl-dev libdbus-1-dev libglew-dev \
      libgstreamerd-3-dev libgstreamer1.0-dev libgstreamer-plugins-base1.0-dev libgtk-3-dev \
      libmspack-dev libsecret-1-dev libspnav-dev libssl-dev libtool libudev-dev clang lld nasm \
      ninja-build texinfo wget libwebkit2gtk-4.1-dev \
      ca-certificates curl pkg-config python3 m4 perl bison flex \
      libglu1-mesa-dev libegl1-mesa-dev libosmesa6-dev libxkbcommon-dev libwayland-dev \
      wayland-protocols libx11-dev libxext-dev libxrandr-dev libxinerama-dev libxcursor-dev \
      libxi-dev libxxf86vm-dev libxfixes-dev \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /src
COPY src/ /src/

# 1) third-party dependencies (Boost, wxWidgets, OCCT, OpenVDB, CGAL, FFmpeg, ...).
#    Source tarballs are cached between builds in a BuildKit cache mount.
RUN --mount=type=cache,target=/src/deps/DL_CACHE,sharing=locked \
    cmake -S deps -B deps/build -G Ninja \
      -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ \
      -DCMAKE_EXE_LINKER_FLAGS=-fuse-ld=lld -DCMAKE_SHARED_LINKER_FLAGS=-fuse-ld=lld \
      -DCMAKE_MODULE_LINKER_FLAGS=-fuse-ld=lld \
      -DDEP_DOWNLOAD_DIR=/src/deps/DL_CACHE \
    && cmake --build deps/build -j${NCORES}

# 2) the application itself (same flags as build_linux.sh -s with -l -L).
RUN sed -i "s/+UNKNOWN/_$(date '+%F')/" version.inc \
    && cmake -S . -B build -G "Ninja Multi-Config" \
      -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ \
      -DCMAKE_EXE_LINKER_FLAGS=-fuse-ld=lld -DCMAKE_SHARED_LINKER_FLAGS=-fuse-ld=lld \
      -DCMAKE_MODULE_LINKER_FLAGS=-fuse-ld=lld \
      -DSLIC3R_PCH=ON -DORCA_TOOLS=ON \
    && cmake --build build --config Release --target Orca-Flashforge -j${NCORES}

# 3) package layout: /pkg/bin/FlashStudio + /pkg/resources (1.7.15 resources from the tree)
RUN mkdir -p /pkg/bin && cp build/src/Release/FlashStudio /pkg/bin/FlashStudio \
    && cp -R resources /pkg/resources \
    && strip /pkg/bin/FlashStudio || true

############################
# Stage 2: runtime
############################
FROM ${BASE_IMAGE} AS runtime
ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update && apt-get install -y --no-install-recommends \
      # GUI toolkit + embedded web view + media
      libgtk-3-0t64 libwebkit2gtk-4.1-0 libgstreamer1.0-0 libgstreamer-plugins-base1.0-0 \
      gstreamer1.0-plugins-base gstreamer1.0-plugins-good gstreamer1.0-plugins-bad \
      gstreamer1.0-libav gstreamer1.0-gtk3 gstreamer1.0-gl \
      # OpenGL (software rendering through Mesa llvmpipe inside the VNC X server)
      libgl1 libglu1-mesa libgl1-mesa-dri libegl1 libgbm1 libglew2.2 mesa-utils \
      libxkbcommon0 libxxf86vm1 libxrandr2 libxinerama1 libxcursor1 libxi6 libxfixes3 \
      # misc runtime libs used by the slicer
      libdbus-1-3 libsecret-1-0 libcurl4t64 libssl3t64 libudev1 libspnav0 libmspack0 \
      libnotify4 libcanberra-gtk3-module ca-certificates xdg-utils dbus-x11 \
      fonts-dejavu-core fontconfig locales tzdata \
      # VNC + noVNC + a minimal window manager
      tigervnc-standalone-server tigervnc-common novnc websockify openbox x11-xserver-utils \
      xterm procps util-linux \
    && rm -rf /var/lib/apt/lists/* \
    && sed -i 's/^# *en_US.UTF-8/en_US.UTF-8/' /etc/locale.gen && locale-gen \
    # noVNC landing page: auto-connect, scale to browser window
    && cp -r /usr/share/novnc /opt/novnc \
    && printf '<meta http-equiv="refresh" content="0; url=vnc.html?autoconnect=1&resize=remote&reconnect=1">' > /opt/novnc/index.html

ENV LANG=en_US.UTF-8 LC_ALL=en_US.UTF-8 LC_NUMERIC=C \
    SSL_CERT_FILE=/etc/ssl/certs/ca-certificates.crt SSL_CERT_DIR=/etc/ssl/certs

# Built application (1.7.15 code) ...
COPY --from=builder /pkg /opt/flashstudio
# ... with the 1.7.20 resources from the Windows installer layered on top. This carries the
# newer printer/filament/process profiles, printer definitions, HMS error DB, web UI pages,
# translations, calibration models and images into the Linux build (see CLAUDE.md).
COPY extracted/win-1.7.20/resources/ /opt/flashstudio/resources/
# WebKitGTK ignores window.open(url,'_self') from these file:// wizard pages, which left the
# first-run Setup Wizard stuck on "Loading". Navigate with location.href instead (same pages,
# same flow; verified in the container).
RUN grep -rlE "window\.open\([^)]*'_self'\)" /opt/flashstudio/resources/web/guide \
      | xargs -r sed -i -E "s/window\.open\(([^,]+),'_self'\)/window.location.href=\1/g" \
    # The loader page's C++ -> JS "profiles loaded" call usually arrives before the page has finished
    # loading under WebKitGTK, so only the page's own fallback timer advances it. 180 s is far too
    # long (profiles load in ~1 s); use 3 s.
    && sed -i -E 's/setTimeout\("JumpToTarget\(\)",180\*1000\)/setTimeout("JumpToTarget()",3*1000)/' \
       /opt/flashstudio/resources/web/guide/0/load.js \
    && grep -q '3\*1000' /opt/flashstudio/resources/web/guide/0/load.js

COPY docker/entrypoint.sh /usr/local/bin/entrypoint.sh
RUN chmod +x /usr/local/bin/entrypoint.sh \
    && (userdel -r ubuntu 2>/dev/null || true) && useradd -m -u 1000 -s /bin/bash flash \
    && mkdir -p /config /prints && chown -R flash:flash /config /prints /opt/flashstudio \
    && ln -s /opt/flashstudio/bin/FlashStudio /usr/local/bin/flashstudio

ENV PUID=1000 PGID=1000 \
    DISPLAY_WIDTH=1920 DISPLAY_HEIGHT=1080 \
    VNC_PORT=5901 NOVNC_PORT=6080 \
    HOME=/config

VOLUME ["/config", "/prints"]
EXPOSE 6080 5901
LABEL org.opencontainers.image.title="Flash Studio (Orca-Flashforge) noVNC" \
      org.opencontainers.image.description="Flashforge Flash Studio slicer, Linux build of Orca-Flashforge 1.7.15 with 1.7.20 resources, GUI via noVNC" \
      org.opencontainers.image.licenses="AGPL-3.0"

ENTRYPOINT ["/usr/local/bin/entrypoint.sh"]
CMD ["gui"]
