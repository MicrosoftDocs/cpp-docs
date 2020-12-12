---
description: "Learn more about: /MAP (Generate Mapfile)"
title: "/MAP (Generate Mapfile)"
ms.date: "11/04/2016"
f1_keywords: ["/map", "VC.Project.VCLinkerTool.MapFileName", "VC.Project.VCLinkerTool.GenerateMapFile"]
helpviewer_keywords: ["mapfiles, creating linker", "generate mapfile linker option", "mapfile linker option", "mapfiles, information about program being linked", "MAP linker option", "-MAP linker option", "mapfiles, specifying file name", "/MAP linker option"]
ms.assetid: 9ccce53d-4e36-43da-87b0-7603ddfdea63
---
# /MAP (Generate Mapfile)

```
/MAP[:filename]
```

## Arguments

*filename*<br/>
A user-specified name for the mapfile. It replaces the default name.

## Remarks

The /MAP option tells the linker to create a mapfile.

By default, the linker names the mapfile with the base name of the program and the extension .map. The optional *filename* allows you to override the default name for a mapfile.

A mapfile is a text file that contains the following information about the program being linked:

- The module name, which is the base name of the file

- The timestamp from the program file header (not from the file system)

- A list of groups in the program, with each group's start address (as *section*:*offset*), length, group name, and class

- A list of public symbols, with each address (as *section*:*offset*), symbol name, flat address, and .obj file where the symbol is defined

- The entry point (as *section*:*offset*)

The [/MAPINFO](mapinfo-include-information-in-mapfile.md) option specifies additional information to be included in the mapfile.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **Debug** property page.

1. Modify the **Generate Map File** property.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateMapFile%2A> and <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MapFileName%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
