---
title: "/PDB (Use Program Database)"
description: "Learn more about: /PDB (Use Program Database)"
ms.date: 03/24/2025
f1_keywords: ["/pdb", "VC.Project.VCLinkerTool.ProgramDatabaseFile"]
helpviewer_keywords: ["-PDB linker option", "/PDB linker option", "PDB linker option", "PDB files, creating", ".pdb files, creating"]
---
# /PDB (Use Program Database)

Specify the name of the program database (PDB) file that the linker creates.

## Syntax

> /PDB:filename

## Arguments

*`filename`*\
A user-specified name for the program database (PDB) that the linker creates. It replaces the default name. When expanded, the fully qualified filename must not exceed `MAX_PATH` (260 characters).

## Remarks

By default, when [`/DEBUG`](debug-generate-debug-info.md) is specified, the linker creates a program database (PDB) which holds debugging information. The default file name for the PDB has the base name of the program and the extension .pdb.

Use `/PDB:`*`filename`* to specify the name of the PDB file. If `/DEBUG` is not specified, the `/PDB` option is ignored.

A PDB file can be up to 2GB in size.

For more information, see [.pdb Files as Linker Input](dot-pdb-files-as-linker-input.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).
1. Select the **Configuration Properties** > **Linker** > **Debug** property page.
1. Modify the **Generate Program Database File** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ProgramDatabaseFile%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC Linker Options](linker-options.md)
