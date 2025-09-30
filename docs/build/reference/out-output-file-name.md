---
description: "Learn more about: /OUT (Output File Name)"
title: "/OUT (Output File Name)"
ms.date: 03/24/2025
f1_keywords: ["VC.Project.VCLinkerTool.OutputFile", "/out"]
helpviewer_keywords: ["output files, name linker option", "-OUT linker option", "OUT linker option", "/OUT C++ linker option", "linker [C++], output files"]
---
# /OUT (Output File Name)

> /OUT:filename

## Arguments

*`filename`*\
A user-specified name for the output file. It replaces the default name. When expanded, the fully qualified filename must not exceed `MAX_PATH` (260 characters).

## Remarks

The `/OUT` option overrides the default name and location of the program that the linker creates.

By default, the linker forms the file name using the base name of the first `.obj` file specified and the appropriate extension (`.exe` or `.dll`).

This option the default base name for a `.mapfile` or import library. For details, see [Generate Mapfile](map-generate-mapfile.md) (`/MAP`) and [/IMPLIB](implib-name-import-library.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **General** property page.

1. Modify the **Output File** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OutputFile%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC Linker Options](linker-options.md)
