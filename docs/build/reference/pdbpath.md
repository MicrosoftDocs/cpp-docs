---
description: "Learn more about: /PDBPATH"
title: "/PDBPATH"
ms.date: "11/04/2016"
f1_keywords: ["/PDBPATH"]
helpviewer_keywords: [".pdb files, path", "-PDBPATH dumpbin option", "/PDBPATH dumpbin option", "PDBPATH dumpbin option", "PDB files, path"]
---
# `/PDBPATH`

```
/PDBPATH[:VERBOSE] filename
```

### Parameters

*filename*\
The name of the .dll or `.exe` file for which you want to find the matching `.pdb` file.

**`:VERBOSE`**\
(Optional) Reports all directories where an attempt was made to locate the `.pdb` file.

## Remarks

`/PDBPATH` searches your computer along the same paths that the debugger searches for a `.pdb` file and reports which, if any, `.pdb` files correspond to the file specified in *filename*.

When using the Visual Studio debugger, you may experience a problem because the debugger is using a `.pdb` file for a different version of the file you're debugging.

`/PDBPATH` will search for `.pdb` files along the following paths:

- Check the location where the executable resides.
- Check the location of the PDB written into the executable. This is usually the location at the time the image was linked.
- Check along the search path configured in the Visual Studio IDE.
- Check along the paths in the `_NT_SYMBOL_PATH` and `_NT_ALT_SYMBOL_PATH` environment variables.
- Check in the Windows directory.

## See also

[`DUMPBIN` Options](dumpbin-options.md)\
[`/PDBALTPATH` (Use Alternate PDB Path)](pdbaltpath-use-alternate-pdb-path.md)
