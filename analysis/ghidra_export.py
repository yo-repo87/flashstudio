# Ghidra headless post-script (Jython 2.7 inside Ghidra).
# Exports, for the current program:
#   <out>/functions.tsv      every function: address, name, size, #callers, #callees
#   <out>/decompiled/*.c     pseudo-C of each named (non-thunk) function, one file per 500 funcs
#   <out>/strings_xref.tsv   defined strings with the functions that reference them
#   <out>/imports.tsv        imported symbols
# Usage (see analysis/run_ghidra.sh):
#   analyzeHeadless <proj_dir> <proj_name> -import <dll> -postScript ghidra_export.py <out_dir>
import os, sys
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

args = getScriptArgs()
out = args[0] if len(args) > 0 else os.path.join(os.getcwd(), "ghidra_out")
if not os.path.isdir(out):
    os.makedirs(out)
dec_dir = os.path.join(out, "decompiled")
if not os.path.isdir(dec_dir):
    os.makedirs(dec_dir)

prog = currentProgram
fm = prog.getFunctionManager()
listing = prog.getListing()
refmgr = prog.getReferenceManager()
monitor = ConsoleTaskMonitor()

# ---- functions.tsv
funcs = list(fm.getFunctions(True))
with open(os.path.join(out, "functions.tsv"), "w") as f:
    f.write("address\tname\tsize\tcallers\tcallees\n")
    for fn in funcs:
        try:
            callers = len(fn.getCallingFunctions(monitor))
            callees = len(fn.getCalledFunctions(monitor))
        except Exception:
            callers = callees = -1
        f.write("%s\t%s\t%d\t%d\t%d\n" % (fn.getEntryPoint(), fn.getName(), fn.getBody().getNumAddresses(), callers, callees))

# ---- imports.tsv
with open(os.path.join(out, "imports.tsv"), "w") as f:
    for sym in prog.getSymbolTable().getExternalSymbols():
        f.write("%s\t%s\n" % (sym.getParentNamespace().getName(), sym.getName()))

# ---- strings_xref.tsv
with open(os.path.join(out, "strings_xref.tsv"), "w") as f:
    f.write("address\tstring\treferencing_functions\n")
    for data in listing.getDefinedData(True):
        if monitor.isCancelled():
            break
        dt = data.getDataType().getName().lower()
        if "string" not in dt and "unicode" not in dt:
            continue
        try:
            val = data.getValue()
            if val is None:
                continue
            s = unicode(val).replace("\t", " ").replace("\n", "\\n").replace("\r", "")
        except Exception:
            continue
        refs = refmgr.getReferencesTo(data.getAddress())
        names = set()
        for r in refs:
            fn = fm.getFunctionContaining(r.getFromAddress())
            if fn is not None:
                names.add(fn.getName())
        f.write("%s\t%s\t%s\n" % (data.getAddress(), s.encode("utf-8", "replace"), ";".join(sorted(names)).encode("utf-8", "replace")))

# ---- decompiled pseudo-C
ifc = DecompInterface()
ifc.openProgram(prog)
chunk = 0
count = 0
cur = None
for fn in funcs:
    if fn.isThunk() or fn.isExternal():
        continue
    name = fn.getName()
    # skip compiler/library noise that adds nothing to a feature inventory
    if name.startswith(("FUN_", "thunk_", "_", "?__", "std::", "boost::", "Eigen::", "__")) and fn.getBody().getNumAddresses() < 64:
        continue
    if cur is None or count % 500 == 0:
        if cur is not None:
            cur.close()
        chunk += 1
        cur = open(os.path.join(dec_dir, "part%03d.c" % chunk), "w")
    count += 1
    try:
        res = ifc.decompileFunction(fn, 60, monitor)
        body = res.getDecompiledFunction().getC() if res.getDecompiledFunction() else "/* decompile failed */\n"
    except Exception as e:
        body = "/* decompile error: %s */\n" % e
    cur.write("// ===== %s @ %s (size %d)\n" % (name.encode("utf-8", "replace"), fn.getEntryPoint(), fn.getBody().getNumAddresses()))
    cur.write(body.encode("utf-8", "replace"))
    cur.write("\n\n")
if cur is not None:
    cur.close()
ifc.dispose()
print("ghidra_export: %d functions listed, %d decompiled into %d files -> %s" % (len(funcs), count, chunk, out))
