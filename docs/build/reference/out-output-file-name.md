---
title: "/OUT (Output File Name)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.OutputFile", "/out"]
helpviewer_keywords: ["output files, name linker option", "-OUT linker option", "OUT linker option", "/OUT C++ linker option", "linker [C++], output files"]
ms.assetid: 976210a4-e51f-4cfb-af5e-c16344455834
---
# /OUT (Output File Name)

```
/OUT:filename
```

## Arguments

*filename*<br/>
A user-specified name for the output file. It replaces the default name.

## Remarks

The /OUT option overrides the default name and location of the program that the linker creates.

By default, the linker forms the file name using the base name of the first .obj file specified and the appropriate extension (.exe or .dll).

This option the default base name for a .mapfile or import library. For details, see [Generate Mapfile](../../build/reference/map-generate-mapfile.md) (/MAP) and [/IMPLIB](../../build/reference/implib-name-import-library.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **General** property page.

1. Modify the **Output File** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OutputFile%2A>.

## See also

- [Setting Linker Options](../../build/reference/setting-linker-options.md)
- [Linker Options](../../build/reference/linker-options.md)
