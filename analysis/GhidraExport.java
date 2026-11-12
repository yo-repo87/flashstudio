// Ghidra headless post-script (Java). Exports for the current program:
//   <out>/functions.tsv      every function: address, name, size, #callers, #callees
//   <out>/imports.tsv        imported symbols (library \t name)
//   <out>/strings_xref.tsv   defined strings with the functions that reference them
//   <out>/decompiled/partNNN.c   pseudo-C of named, non-thunk functions (500 per file)
// Usage: analyzeHeadless <proj> <name> -import <dll> -scriptPath analysis -postScript GhidraExport.java <out_dir>
//@category FlashStudio
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.*;
import ghidra.program.model.data.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class GhidraExport extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File out = new File(args.length > 0 ? args[0] : "ghidra_out");
        File dec = new File(out, "decompiled");
        dec.mkdirs();
        FunctionManager fm = currentProgram.getFunctionManager();
        ReferenceManager rm = currentProgram.getReferenceManager();
        Listing listing = currentProgram.getListing();

        // functions.tsv
        List<Function> funcs = new ArrayList<>();
        for (Function f : fm.getFunctions(true)) funcs.add(f);
        try (PrintWriter w = new PrintWriter(new FileWriter(new File(out, "functions.tsv")))) {
            w.println("address\tname\tsize\tcallers\tcallees");
            for (Function f : funcs) {
                int callers = -1, callees = -1;
                try { callers = f.getCallingFunctions(monitor).size(); callees = f.getCalledFunctions(monitor).size(); } catch (Exception e) {}
                w.println(f.getEntryPoint() + "\t" + f.getName() + "\t" + f.getBody().getNumAddresses() + "\t" + callers + "\t" + callees);
            }
        }
        // imports.tsv
        try (PrintWriter w = new PrintWriter(new FileWriter(new File(out, "imports.tsv")))) {
            SymbolIterator it = currentProgram.getSymbolTable().getExternalSymbols();
            while (it.hasNext()) { Symbol s = it.next(); w.println(s.getParentNamespace().getName() + "\t" + s.getName()); }
        }
        // strings_xref.tsv
        try (PrintWriter w = new PrintWriter(new FileWriter(new File(out, "strings_xref.tsv")))) {
            w.println("address\tstring\treferencing_functions");
            DataIterator di = listing.getDefinedData(true);
            while (di.hasNext() && !monitor.isCancelled()) {
                Data d = di.next();
                DataType dt = d.getDataType();
                if (!(dt instanceof AbstractStringDataType)) continue;
                Object v = d.getValue();
                if (v == null) continue;
                String s = v.toString().replace("\t", " ").replace("\r", "").replace("\n", "\\n");
                TreeSet<String> names = new TreeSet<>();
                for (Reference r : rm.getReferencesTo(d.getAddress())) {
                    Function f = fm.getFunctionContaining(r.getFromAddress());
                    if (f != null) names.add(f.getName());
                }
                w.println(d.getAddress() + "\t" + s + "\t" + String.join(";", names));
            }
        }
        // decompiled pseudo-C
        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);
        int chunk = 0, count = 0;
        PrintWriter cur = null;
        for (Function f : funcs) {
            if (monitor.isCancelled()) break;
            if (f.isThunk() || f.isExternal()) continue;
            String name = f.getName();
            long size = f.getBody().getNumAddresses();
            if ((name.startsWith("FUN_") || name.startsWith("thunk_") || name.startsWith("_") || name.startsWith("std::") || name.startsWith("boost::") || name.startsWith("Eigen::")) && size < 64) continue;
            if (cur == null || count % 500 == 0) {
                if (cur != null) cur.close();
                chunk++;
                cur = new PrintWriter(new FileWriter(new File(dec, String.format("part%03d.c", chunk))));
            }
            count++;
            String body;
            try {
                DecompileResults res = ifc.decompileFunction(f, 60, monitor);
                body = (res != null && res.getDecompiledFunction() != null) ? res.getDecompiledFunction().getC() : "/* decompile failed */\n";
            } catch (Exception e) { body = "/* decompile error: " + e + " */\n"; }
            cur.println("// ===== " + name + " @ " + f.getEntryPoint() + " (size " + size + ")");
            cur.println(body);
            cur.println();
        }
        if (cur != null) cur.close();
        ifc.dispose();
        println("GhidraExport: " + funcs.size() + " functions listed, " + count + " decompiled into " + chunk + " files -> " + out);
    }
}
