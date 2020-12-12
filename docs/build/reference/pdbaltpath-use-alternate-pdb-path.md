---
description: "Learn more about: /PDBALTPATH (Use Alternate PDB Path)"
title: "/PDBALTPATH (Use Alternate PDB Path)"
ms.date: "11/04/2016"
f1_keywords: ["/pdbaltpath"]
helpviewer_keywords: [".pdb files, path", "PDBALTPATH dumpbin option", "-PDBALTPATH dumpbin option", "/PDBALTPATH dumpbin option", "PDB files, path"]
ms.assetid: 72e200aa-e2c3-4ad8-b687-25528da1aaaf
---
# /PDBALTPATH (Use Alternate PDB Path)

```
/PDBALTPATH:pdb_file_name
```

## Arguments

*pdb_file_name*<br/>
The path and file name for the .pdb file.

## Remarks

Use this option to provide an alternate location for the Program Database (.pdb) file in a compiled binary file. Normally, the linker records the location of the .pdb file in the binaries that it produces. You can use this option to provide a different path and file name for the .pdb file. The information provided with /PDBALTPATH does not change the location or name of the actual .pdb file; it changes the information that the linker writes in the binary file. This enables you to provide a path that is independent of the file structure of the build computer. Two common uses for this option are to provide a network path or a file that has no path information.

The value of *pdb_file_name* can be an arbitrary string, an environment variable, or **%_PDB%**. The linker will expand an environment variable, such as **%SystemRoot%**, to its value. The linker defines the environment variables **%_PDB%** and **%_EXT%**. **%_PDB%** expands to the file name of the actual .pdb file without any path information and **%_EXT%** is the extension of the generated executable.

## See also

[DUMPBIN Options](dumpbin-options.md)<br/>
[/PDBPATH](pdbpath.md)
