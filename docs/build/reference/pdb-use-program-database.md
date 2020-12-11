---
description: "Learn more about: /PDB (Use Program Database)"
title: "/PDB (Use Program Database)"
ms.date: "11/04/2016"
f1_keywords: ["/pdb", "VC.Project.VCLinkerTool.ProgramDatabaseFile"]
helpviewer_keywords: ["-PDB linker option", "/PDB linker option", "PDB linker option", "PDB files, creating", ".pdb files, creating"]
ms.assetid: d23db0ce-10cb-427a-bc60-d6b2a852723d
---
# /PDB (Use Program Database)

```
/PDB:filename
```

## Arguments

*filename*<br/>
A user-specified name for the program database (PDB) that the linker creates. It replaces the default name.

## Remarks

By default, when [/DEBUG](debug-generate-debug-info.md) is specified, the linker creates a program database (PDB) which holds debugging information. The default file name for the PDB has the base name of the program and the extension .pdb.

Use /PDB:*filename* to specify the name of the PDB file. If /DEBUG is not specified, the /PDB option is ignored.

A PDB file can be up to 2GB.

For more information, see [.pdb Files as Linker Input](dot-pdb-files-as-linker-input.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **Debug** property page.

1. Modify the **Generate Program Database File** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ProgramDatabaseFile%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
