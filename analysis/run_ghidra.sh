#!/usr/bin/env bash
# Headless Ghidra analysis + export of a Windows DLL from the Flash Studio payload.
#   ./analysis/run_ghidra.sh FlashNetwork.dll          (~4 MB, minutes)
#   ./analysis/run_ghidra.sh Orca-Flashforge.dll       (138 MB, hours, needs several GB RAM)
# Output: analysis/out/<dll-stem>/{functions.tsv,imports.tsv,strings_xref.tsv,decompiled/*.c}
set -euo pipefail
cd "$(dirname "$0")/.."
DLL="${1:?dll name inside extracted/win-1.7.20}"
STEM="${DLL%.dll}"
GHIDRA=analysis/tools/ghidra_12.2_PUBLIC
PROJ=analysis/ghidra_project
OUT="analysis/out/$STEM"
export MAXMEM="${MAXMEM:-3G}"
export JAVA_HOME=/usr/lib/jvm/java-21-openjdk-amd64
export PATH="$JAVA_HOME/bin:$PATH"
mkdir -p "$PROJ" "$OUT"
# JVM heap for the analysis. Ghidra reads MAXMEM from the launch properties.
"$GHIDRA/support/analyzeHeadless" "$PROJ" flashstudio \
    -import "extracted/win-1.7.20/$DLL" -overwrite \
    -max-cpu "${CPUS:-2}" \
    -scriptPath analysis \
    -postScript ghidra_export.py "$(pwd)/$OUT" \
    -analysisTimeoutPerFile "${TIMEOUT:-14400}" \
    2>&1 | tee "analysis/out/$STEM.ghidra.log"
echo "done: $OUT"
