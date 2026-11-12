# Flash Studio (Orca-Flashforge) in Docker

Flashforge's **Flash Studio Desktop** slicer, rebuilt for Linux from the public
[Orca-Flashforge](https://github.com/FlashForge/Orca-Flashforge) source and served through a
browser with noVNC. The image carries the 1.7.15 code (newest public tag) with the printer,
filament and process profiles, HMS error database, web pages and translations taken from the
1.7.20 Windows installer.

This repo also documents the reverse engineering of the Windows installer
(`CLAUDE.md`) and ships a Linux unpacker for it (`tools/unpack_installer.py`).

## Run it

```bash
# prerequisites: docker + compose, ~4 GB disk for the image
git clone https://github.com/yo-repo87/flashstudio.git && cd flashstudio

# the image needs two inputs that are not in git:
git clone --depth 1 --branch 1.7.15 https://github.com/FlashForge/Orca-Flashforge.git src
python3 -I tools/unpack_installer.py Flash_Studio_Desktop_1.7.20_x64.exe extracted   # installer from flashforge.com
mv extracted/6CB28AE_FILES extracted/win-1.7.20

docker compose -f docker/docker-compose.yml up -d --build     # first build: ~1 h on 6 cores / 8 GB
```

Open `http://<host>:6080/` for the desktop. Config lives in the `flashstudio-config` volume,
`docker/prints/` is mounted at `/prints` for models and G-code.

Headless slicing (no display):

```bash
R=/opt/flashstudio/resources/profiles/Flashforge
docker run --rm -v "$PWD/docker/prints:/prints" flashstudio:1.7.15-res1.7.20 \
  --load-settings "$R/machine/Flashforge Adventurer 5M 0.4 Nozzle.json;$R/process/0.20mm Standard @Flashforge AD5M 0.4 Nozzle.json" \
  --load-filaments "$R/filament/Flashforge Generic PLA.json" \
  --slice 0 --export-3mf /prints/out.3mf /prints/model.stl
```

## What works / what does not

| Feature | Status |
|---|---|
| Slicing, multi-plate 3MF, STL/STEP/OBJ import, calibration, G-code preview | works |
| All printer/filament/process profiles from the 1.7.20 release | works |
| CLI slicing | works |
| Send to Flashforge printer over LAN (TCP 8899 / HTTP 8898 built-in host) | works, no cloud account needed |
| OctoPrint / Klipper / Moonraker / Prusa Connect hosts | works |
| Flashforge account login, cloud device list, MQTT monitor, camera, AI, time-lapse | **absent**: needs the proprietary `FlashNetwork` library, Windows/macOS only |
| 3D rendering | software OpenGL (llvmpipe); usable, not fast |

Networking is `host` mode by default so LAN printer discovery (UDP 48899 / 18007) works.

## Layout

- `docker/` – Dockerfile (multi-stage build), entrypoint, compose file, `build.sh`
- `tools/unpack_installer.py` – carves the Advanced Installer EXE into its MSI and 7z payload on Linux
- `analysis/` – Ghidra headless scripts used for the DLL teardown
- `CLAUDE.md` – full technical notes: installer format, binaries, protocols, build decisions

License: the slicer is AGPL-3.0 (upstream). The scripts in this repo are MIT.
