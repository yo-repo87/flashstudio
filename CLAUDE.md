# FlashStudio project notes

Working notes from the reverse-engineering deep dive of `Flash_Studio_Desktop_1.7.20_x64.exe`
(done 2026-11-12). Scratch extraction lives outside the repo; this file is the durable record.

## What the file is

- **Product:** Flash Studio Desktop 1.7.20 (Flashforge's slicer + printer-management app).
- **Vendor:** Zhejiang Flashforge 3D Technology Co., Ltd. (code-signed, SHA-256, DigiCert timestamp).
- **Packaging:** Advanced Installer 21.0.1 (Caphyon) EXE bootstrapper (32-bit PE stub) wrapping an
  x64 MSI. Installer type: "FilesInsideExe", LZMA, no CABs. Languages: en (1033), zh (2052).
- **Size:** 208,854,440 bytes. Overlay payload ~205 MB.
- **Identity GUIDs:** ProductCode `{0B95671B-3459-4B99-86F3-3ED886CB28AE}`,
  UpgradeCode `{E90CD788-5B16-468A-81E8-01BB0BA0F4AC}`, PackageCode `{7F976E71-9490-4FEA-AA37-C513CA74DB8E}`.

## Installer container format (how to unpack it on Linux)

Advanced Installer SFX layout inside the EXE (all offsets are EXE-file-relative):

| Entry                              | Offset     | Size        | Stored as |
|------------------------------------|------------|-------------|-----------|
| `2052.dll` (resource-only lang DLL)| 0x37FA00   | 43,760      | plain PE  |
| `6CB28AE\FILES.7z` (app files)     | 0x38A4F0   | 204,329,618 | 7z, first 512 bytes XOR 0xFF |
| `6CB28AE\Flash Studio Desktop.7z`  | 0x0C667782 | 799,269     | 7z, first 512 bytes XOR 0xFF |
| `Flash Studio Desktop_1.7.20_x64.ini` | 0x0C72A9A7 | 952      | UTF-16LE text |
| directory table                    | 0x0C72AD5F | 276         | u32 fields + UTF-16 names |
| footer                             |            |             | dir_end, dir_start, overlay_start, MD5 hex, `ADVINSTSFX` |

- Overlay starts at 0x37FA00 (= EXE size − 12,008-byte Authenticode blob − 205,173,952).
- Directory entry layout: `u32 a, u32 b, u32 c, u32 size, u32 offset, u32 namelen, wchar name[namelen]`.
- The only obfuscation is XOR 0xFF over the **first 512 bytes** of each 7z. After undoing that,
  stock `7z x` extracts everything. `Flash Studio Desktop.7z` holds the 2.9 MB MSI (LZMA2);
  `FILES.7z` holds the 4,912 application files (476 MB uncompressed, solid LZMA2 dict 22).
- Tools needed: `7z`, `python3`. No Wine / Windows needed.

## MSI behaviour (from the bundled Orca-Flashforge.aip project + MSI tables)

- Installs to `[ProgramFiles64Folder]Flashforge\Flash Studio Desktop` (ALLUSERS=1, per-machine).
- Single feature `MainFeature`; a flat copy of the payload directory (SynchronizedFolder of `.`).
- Shortcuts: Desktop + Start Menu `Flashforge\Flash Studio Desktop`, plus an Uninstall shortcut.
- Registry: `HKLM\Software\Flashforge\Flash Studio Desktop` → `Path`, `Version`; Caphyon LZMA bookkeeping key.
- No services, no drivers, no file-type associations in the MSI (associations are done by the app itself).
- No prerequisites bundled; WebView2 Runtime is expected on the system (app warns if missing).
- Custom actions are only stock Advanced Installer ones (aicustact.dll, lzmaextractor.dll, Prereq.dll).
- Launch conditions: Windows Vista+ (NT 6.0), must be run from the bootstrapper.
- The `.aip` project is shipped inside the payload (`Orca-Flashforge.aip`, 1.2 MB) and even contains
  the vendor's code-signing command line. Treat it as sensitive; do not copy it around.

## What the application actually is

**Flash Studio Desktop = Orca-Flashforge**, Flashforge's fork of OrcaSlicer (which is itself a
Bambu Studio / PrusaSlicer descendant). Source: https://github.com/FlashForge/Orca-Flashforge
(AGPL-3.0, like upstream). The binary still reports "Based On OrcaSlicer", keeps `Orca-Flashforge.conf`
as its config file name, and uses `orcaflashforge://open?file=` URL scheme.

Build artefacts in the payload (all x64, MSVC 2022, built 2026-10-26 from `D:\CppProject\tmp\orca_flashforge`):

| File | Role |
|------|------|
| `flash studio.exe` (96 KB) | Tiny launcher. Loads `Orca-Flashforge.dll`, calls `orca_flashforge_main`. Also pre-loads system `opengl32.dll`. |
| `Orca-Flashforge.dll` (138 MB) | The whole slicer: libslic3r + wxWidgets GUI + ImGui + OpenGL. |
| `FlashNetwork.dll` (4.1 MB) | Closed-source network plugin (v1.3.15 / "3.6.0"). C ABI with 302 `fnet_*` exports. |
| `TK*.dll` (25 files) | OpenCASCADE (STEP import). |
| `avcodec-62/avformat-62/avutil-60/swscale-9/swresample-6/avfilter-11.dll` | FFmpeg 8.x for printer camera streams (RTSP/RTSPS, MJPEG). |
| `WebView2Loader.dll` | Microsoft Edge WebView2 for embedded web pages (home page, login, guides, dialogs). |
| `libgmp-10.dll`, `libmpfr-4.dll` | CGAL arithmetic deps. |
| `freetype.dll`, VC++ 2015-2022 runtime DLLs | Fonts / CRT. |
| `resources/` (~300 MB) | Profiles, images, web UI, i18n, shaders, calibration models, HMS error DB, fonts. |

Third-party components identified: Boost 1.84, OpenCASCADE 7.x, FFmpeg 8, CGAL, Eigen, TBB, libcurl +
OpenSSL, nlohmann/json, cereal, miniz, Draco, libigl, ImGui/ImGuizmo, nanosvg, glad, GLFW, qhull,
admesh, libnest2d, Paho MQTT C/C++ (in FlashNetwork.dll), wxWidgets, gettext/Poedit.

### Application functionality (features)

- Full OrcaSlicer feature set: multi-plate 3MF projects, STL/STEP/OBJ/3MF import, slicing, G-code
  preview, calibration flows (PA, flow, retraction, temp tower, VFA, input shaping, cornering,
  volumetric speed), variable layer height, painting (supports/seams/MMU), arrange/orient, G-code viewer
  mode, CLI slicing mode (`Usage: orca-flashforge [ OPTIONS ] [ file.3mf/file.stl ... ]`).
- Printer profiles for 40+ vendors (BBL, Creality, Elegoo, Voron, Qidi, …). Flashforge vendor
  bundle v02.04.00.10: 11 machine models, 47 machine presets, 132 process presets, 697 filament presets.
  Flashforge models: Adventurer 5M / 5M Pro / A5 / AD5X / Adventurer 3 series, Guider 2s / 3 Ultra /
  Guider4 / Guider4 Pro, Creator 5 / 5 Pro. Nozzles 0.25 / 0.4 / 0.6 / 0.8 (+HF for Guider4).
- Flashforge device management (via FlashNetwork.dll): LAN discovery (multicast 225.0.0.9), LAN
  control (temps, move, home, extrude, light, fans, air filter, plate/first-layer detection, job
  control, material station / IFS), send G-code / start job over LAN (HTTP on port 8898), camera
  stream, WAN (cloud) devices bound to a Flashforge account, cloud print jobs, time-lapse video list,
  user presets sync, system messages, AI features (text2image, image2image, text2text, image→3D
  model jobs with "AI points"), tracking/analytics reporting, log upload.
- Cloud backends: `api.flash3dcloud.com:32443` (CN) / `api.fdmcloud.flashforge.com`, auth at
  `auth.flashforge.com`, `*.voxelshare.com|.cn` (api/auth/desktop/report/update), MQTT broker on
  `:8083/mqtt` (WebSocket). App updates: `update.voxelshare.com/api/updates/check`.
  Internal dev endpoints are also baked in (`10.33.11.172:32112`, `*.test-cn.example.com`).
- Also still carries upstream integrations: Bambu cloud, SimplyPrint, Obico, Prusa Connect, 3DPrinterOS, OctoPrint.
- Languages: de, en, es, fr, ja, ko, lt, ru, tr, zh_CN.
- Config/data dir on Windows: `%APPDATA%\Orca-Flashforge\` (`Orca-Flashforge.conf`).
- Logs: `FlashStudio_Logs_*`, crash packs `FlashStudio_PackedDebugInfo_*`.

## Source repo facts (github.com/FlashForge/Orca-Flashforge, checked 2026-11-12)

- AGPL-3.0. `version.inc` on `release_0817`: `SLIC3R_APP_NAME "Flash Studio"`, `SLIC3R_APP_KEY "Orca-Flashforge"`,
  `Orca_Flashforge_VERSION 1.7.15`, upstream `SoftFever_VERSION 2.3.2`, `SLIC3R_VERSION 01.10.01.50`.
- Branches: 1.1 … 1.7, develop, main, release_0530/0615/0715/0730/0817. Tags up to **1.7.15** only.
  **The 1.7.20 build we have is newer than anything published in the repo** (built 2026-10-26); expect
  the public source to be a few weeks behind the shipped binary.
- Releases ship only `.exe` (Win x64) and `.pkg` (macOS). No AppImage/deb/flatpak assets, although
  the tree has `BuildLinux.sh`, `Dockerfile`, `DockerBuild.sh`, `DockerRun.sh`, `flatpak/`.
- Upstream Dockerfile: `ubuntu:24.04`, apt deps (GTK3, webkit2gtk-4.0, gstreamer, GLEW, OSMesa, …),
  then `./BuildLinux.sh -u`, `-dr` (deps), `-sr` (app), `-ir` (AppImage);
  entrypoint `/OrcaSlicer/build/package/bin/orca-slicer`. `DockerRun.sh` runs it with
  `--net=host --ipc host --privileged -e DISPLAY -v $HOME`. CMake targets: `Orca-Flashforge`,
  `Orca-Flashforge_profile_validator`; Linux uses `-DSLIC3R_GTK=3 -DSLIC3R_STATIC=1 -DORCA_TOOLS=ON`.
- Flashforge-specific GUI code lives in `src/slic3r/GUI/FlashForge/` (60 files): device list/state
  (`DeviceListPanel`, `SingleDeviceState`, `PrinterModelPanel`, `PrinterCameraPanel`, `MaterialStation`,
  `AmsMappingWidgets`), login (`LoginDialog`, `ReLoginDialog`, `VerifyCodeCtrl`), LAN/WAN comms
  (`MultiComMgr`, `ComConnection`, `ComWanConn`, `WanDev*`), video/time-lapse (`FFRTMPVideoCtrl`,
  `TimeLapseVideo*`), web panels (`FFWebViewPanel`, `GuideWebPanel`), feedback/log upload, plus
  `FlashNetwork.h` / `FlashNetworkIntfc.cpp` = the C ABI header and loader for `FlashNetwork.dll`
  (loaded by plain name from the app directory; the `.DAT` env files sit in `resources/data`).
  Also `FFSelectMachine.*`, `FFUtils.*`, `DeviceManager.*`, `DeviceCore/`, `DeviceTab/` in `GUI/`.
  The separate upstream Bambu plugin loader (`Utils/BBLNetworkPlugin.cpp`) is still present and does
  support `lib<name>_<ver>.so` on Linux, but Flashforge ships no Linux FlashNetwork library.
- Linux build deps (`linux.d/debian`): autoconf build-essential cmake eglexternalplatform-dev
  extra-cmake-modules file gettext git libcurl4-openssl-dev libdbus-1-dev libglew-dev libgstreamerd-3-dev
  libgtk-3-dev libmspack-dev libosmesa6-dev libsecret-1-dev libssl-dev libtool libudev-dev ninja-build
  texinfo wget, plus libwebkit2gtk-4.0-dev (or 4.1). Build needs ≥10 GB RAM and ≥10 GB disk.
- `src/slic3r/Utils/Flashforge.cpp` is the **plugin-free** print host for Flashforge printers:
  - TCP "console" on port **8899** with `~M` G-code commands (`~M601 S1` login, `~M115`/`~M119`/`~M105`/
    `~M114`/`~M27` status, `~M28 <size> 0:/user/<name>` + 4 KB chunks + `~M29` upload, `~M23 0:/user/<name>` print,
    `~M640`/`~M650` for Klipper-based models).
  - HTTP local API on port **8898** (`http://<ip>:8898/detail`, `/uploadGcode` multipart with headers
    `serialNumber`, `checkCode`, `printNow`, `materialMappings`) used when serial number + access code are set.
  - UDP discovery: broadcast to 48899, listen on 18007 (multicast group 225.0.0.9 in the plugin).
  This path builds on Linux and gives "send to printer / print now" for AD5M-class machines without FlashNetwork.
- Resource data for the plugin: `resources/data/FLASHNETWORK10.DAT` (`FNETDAT-2.0.0` header, encrypted,
  40 KB) and `FLASHNETWORK9.DAT` (`FNETDAT-1.2.0`) hold the server/environment config
  ("Web domains do not match an environment in FLASHNETWORK10.DAT"). `printers/version.txt` = 02.00.00.30.

## Docker / Linux options (assessment)

- **Recommended path:** build Orca-Flashforge (branch `release_0817` = 1.7.15, or `main`) from source in
  Docker on Ubuntu 24.04 and deliver the GUI through a browser (noVNC + Xvfb/TigerVNC, or Selkies as in
  `lscr.io/linuxserver/orcaslicer`). GUI needs OpenGL ≥ 3.2 (Mesa llvmpipe is enough, slow but works).
  Reference images: `helfrichmichael/orcaslicer-novnc`, `linuxserver/docker-orcaslicer`.
- What survives on Linux: slicing, all profiles (copy `resources/` from this installer if the repo's
  are older), calibration, G-code viewer, CLI slicing, Flashforge LAN print host (8899/8898 path),
  OctoPrint/Klipper/Moonraker hosts.
- What does **not**: anything routed through `FlashNetwork.dll` (Flashforge account login, cloud device
  list, MQTT device monitor, camera via plugin, AI jobs, Voxelshare, time-lapse, user-preset sync). The
  plugin is closed-source, Windows x64 only; no `.so` is shipped or downloadable.
- **Fallback for full parity:** Wine (x64, with `vcrun2022`, `WebView2` runtime) inside Docker running the
  extracted Windows payload directly (no installer needed: it is a flat directory copy). Risks: WebView2
  under Wine is unreliable, OpenGL via Wine + llvmpipe is slow. Only try if plugin features are a must.
- Headless/API option: `orca-flashforge` CLI (`--slice`, `--export-3mf`, `--export-gcode`, `--load-settings`,
  `--load-filaments`, `--outputdir`, `--arrange`, `--orient`, …) can run in a plain container with no display.

## Docker build (phase 2, done 2026-11-12)

Decision: option 1, native Linux build of Orca-Flashforge in Docker with the GUI served by noVNC.
**Status: built and verified** (image `flashstudio:1.7.15-res1.7.20`, 3.5 GB).

- `src/` = shallow clone of github.com/FlashForge/Orca-Flashforge at tag **1.7.15** (commit 84b7074b,
  2026-08-25). That is the newest public source; the 1.7.20 code changes are not public.
- `extracted/win-1.7.20/` = the unpacked Windows payload (from `tools/unpack_installer.py`).
  Its `resources/` are layered over the 1.7.15 resources in the image. Diff vs the repo:
  902 added files (874 profiles), 2,676 changed (1,331 profiles, 630 web, 519 images, 63 HMS,
  63 shaders, 20 i18n, 15 printer defs, cert bundle, hints, flush data, nozzle/filament info).
  Most `web/` diffs are CRLF vs LF and swiper node_modules; the wizard pages are logically identical,
  so the overlay is compatible with the 1.7.15 C++. 40 repo-only files are kept.
  This is the "1.7.15 → 1.7.20 upgrade" we can carry; it is data only.
- `docker/Dockerfile` multi-stage: builder (Ubuntu 24.04, clang+lld, Ninja Multi-Config, static deps,
  flags copied from `build_linux.sh`/CI; needs `automake autopoint` on top of the repo's apt list or
  MPFR's autoreconf fails) → runtime (GTK3, WebKitGTK 4.1, GStreamer, Mesa llvmpipe, TigerVNC, noVNC,
  openbox). Build arg `NCORES` (3 used here). First build: deps 22 min + app 37 min on 3 cores.
  Rebuilds of the runtime stage only take ~3 min (builder layers are cached).
- `docker/entrypoint.sh`: `gui` (default) starts Xtigervnc :1 → openbox → websockify/noVNC →
  `FlashStudio --datadir /config` in a restart loop; any other args run the binary headless as the
  `flash` user (CLI slicing). Sets `SSL_CERT_FILE` (otherwise the app asks about the CA store on
  every start) and the software-GL / WebKit env vars.
- `docker/docker-compose.yml`: `network_mode: host` (needed for LAN printer discovery/UDP), noVNC on
  6080, VNC on 5901, volumes `flashstudio-config:/config` and `./prints:/prints`.
  `PUID/PGID`, `DISPLAY_WIDTH/HEIGHT`, optional `VNC_PASSWORD`.
- `docker/build.sh` wraps `docker build` and logs to `docker/build.log`.
- Linux binary name is `FlashStudio` (CMake OUTPUT_NAME); config dir key is `Orca-Flashforge`;
  resources are resolved relative to the binary (`../resources`), so the layout is
  `/opt/flashstudio/{bin/FlashStudio,resources}`.
- **WebKitGTK quirk fixed in the image:** the first-run Setup Wizard (`resources/web/guide/0/load.js`
  and 4 other guide pages) navigates with `window.open(url,'_self')`, which WebKitGTK silently ignores
  from `file://` pages, leaving the wizard on "Loading" forever. The Dockerfile rewrites those calls to
  `window.location.href=`. The loader page also relies on a C++→JS "profiles loaded" call that under
  WebKitGTK arrives before the page is ready, so only its fallback timer advances it; the Dockerfile
  shortens that timer from 180 s to 3 s. Verified on a fresh volume: welcome → region → printer
  selection (list populated from the 1.7.20 profiles) with no manual intervention.
- FlashNetwork: the Linux build looks for a FlashNetwork shared library next to the binary
  (`build_linux.sh -N FILE` copies one in). Flashforge has a Linux build of it internally but has not
  published it, so cloud/MQTT/camera features are absent. Plugin-free LAN printing (8898/8899) remains.
  Without the plugin the app shows a one-time "Flash Studio info" notice about Flash Maker; harmless.
- Host facts: AMD Ryzen 7 5700G, 6 vCPU, 9.4 GB RAM + 8 GB swap, 2× RTX 3050 used by llama.cpp,
  Docker 29.5, free port 6080.

### Verified (2026-11-12)

- Headless: `docker run --rm flashstudio:1.7.15-res1.7.20 --help` prints the Orca-Flashforge 2.3.2 usage.
- Headless slice: AD5M 0.4 machine + `0.20mm Standard @Flashforge AD5M 0.4 Nozzle` process +
  `Flashforge Generic PLA` filament on `docker/prints/cube20.stl` → 3MF with `Metadata/plate_1.gcode`
  (389 KB). Thumbnails are skipped (no GL in CLI mode), which is expected.
- GUI via noVNC: main window, home page (remote Voxelshare content loads), Setup Wizard through to
  Printer Selection, dialogs all render; 3D canvas runs on llvmpipe. Screenshots were taken with
  `scrot`/`xdotool` installed ad hoc inside the running container (not part of the image).
- Git: pushed to the private repo https://github.com/yo-repo87/flashstudio (created with the gitkey token).
- Known cosmetic: a grey undecorated frame at the top-left of the X screen (openbox + wx splash
  remnant); it does not affect the app window.

## Repo layout

- `Flash_Studio_Desktop_1.7.20_x64.exe` — the original installer (do not modify).
- `tools/unpack_installer.py` — reproducible Linux unpacker for the installer
  (`python3 -I tools/unpack_installer.py Flash_Studio_Desktop_1.7.20_x64.exe extracted`); needs `7z`.
  Output: `extracted/carved/` (raw entries), `extracted/6CB28AE_FILES/` (the app, 467 MB),
  `extracted/6CB28AE_Flash Studio Desktop/Flash Studio Desktop.msi`.
- `launch.sh` — starts Claude Code with permissions skipped.
- `src/` — Orca-Flashforge source checkout (tag 1.7.15). Generated dirs `src/build`, `src/deps/build`.
- `extracted/` — unpacked 1.7.20 Windows payload + MSI (generated; input for the Docker resource overlay).
- `docker/` — Dockerfile, entrypoint.sh, docker-compose.yml, build.sh, build.log, prints/ (cube20.stl test model).
- `analysis/` — Ghidra 12.2 headless setup for the DLL teardown: `run_ghidra.sh <dll>`, `ghidra_export.py`
  (post-script that dumps functions.tsv, imports.tsv, strings_xref.tsv and pseudo-C), `tools/` (Ghidra,
  gitignored), `out/` (results).
- `README.md` — public-facing run instructions for the GitHub repo.
- `.dockerignore` — keeps the EXE, DLLs, MSI and build dirs out of the Docker build context.
- `.gitignore` — excludes `gitkey`, the installer EXE, `extracted/`, `src/`, logs, Ghidra tools/project.
- `gitkey` — GitHub token shared across the user's projects (copied from `../template/gitkey`); never commit.
  Remote convention: `https://github.com/yo-repo87/<name>.git`, commits as yo-repo87 noreply identity.
