#!/usr/bin/env python3
"""Unpack an Advanced Installer "FilesInsideExe" bootstrapper such as
Flash_Studio_Desktop_1.7.20_x64.exe on Linux, without Wine.

Layout (discovered by reverse engineering, see CLAUDE.md):
  * EXE sections + Authenticode blob, with an overlay = a tiny resource DLL stub
    followed by the payload entries.
  * The file ends with: [directory][u32 dir_end][u32 dir_start][u32 overlay_start]
    [32-hex MD5 ':' quote NUL][NUL 'ADVINSTSFX' NUL NUL NUL].
  * Directory = consecutive entries (no count field):
        u32 a, u32 b, u32 c, u32 size, u32 offset(EXE-relative), u32 namelen, UTF-16LE name
  * .7z entries have their first 512 bytes XOR 0xFF; everything else is stored verbatim.

Usage: unpack_installer.py <installer.exe> <outdir>  [--no-extract]
Writes the carved entries to <outdir>/carved and, unless --no-extract, runs `7z x`
on each 7z archive into <outdir>/<archive-stem>/.
"""
import os, struct, subprocess, sys

def main():
    if len(sys.argv) < 3:
        print(__doc__); sys.exit(1)
    exe, out = sys.argv[1], sys.argv[2]
    extract = '--no-extract' not in sys.argv
    data = open(exe, 'rb').read()
    # The Authenticode blob (~12 KB) follows the overlay, so search the last 64 KB.
    sig = data.rfind(b'ADVINSTSFX', max(0, len(data) - 65536))
    if sig < 0:
        sys.exit('not an Advanced Installer SFX (no ADVINSTSFX trailer)')
    # walk back: NUL + 34-byte "<md5>:'" + NUL + 12 bytes of u32 triplet
    t = sig - 1 - 34 - 1
    dir_end, dir_start, overlay_start = struct.unpack_from('<III', data, t - 12)
    print(f'overlay_start=0x{overlay_start:x} directory=0x{dir_start:x}..0x{dir_end:x}')
    d = data[dir_start:dir_end]
    pos = 0  # entries start immediately (first entry: 5, 11, 0, size, off, namelen)
    entries = []
    while pos + 24 <= len(d):
        a, b, c, size, off, nlen = struct.unpack_from('<6I', d, pos); pos += 24
        if nlen == 0 or nlen > 512: break
        name = d[pos:pos + 2 * nlen].decode('utf-16-le'); pos += 2 * nlen
        entries.append((name, off, size))
    carved = os.path.join(out, 'carved'); os.makedirs(carved, exist_ok=True)
    for name, off, size in entries:
        blob = bytearray(data[off:off + size])
        if name.lower().endswith('.7z'):
            for i in range(min(512, len(blob))): blob[i] ^= 0xFF
        dest = os.path.join(carved, name.replace('\\', '_'))
        open(dest, 'wb').write(blob)
        print(f'{name:45s} off=0x{off:x} size={size}')
        if extract and name.lower().endswith('.7z'):
            tgt = os.path.join(out, os.path.splitext(os.path.basename(dest))[0])
            os.makedirs(tgt, exist_ok=True)
            r = subprocess.run(['7z', 'x', '-y', f'-o{tgt}', dest], capture_output=True, text=True)
            print('  7z:', 'OK' if r.returncode == 0 else r.stdout[-400:] + r.stderr[-400:])

if __name__ == '__main__':
    main()
