---
description: "Learn more about: /LIBPATH (Additional Libpath)"
title: "/LIBPATH (Additional Libpath)"
ms.date: 03/27/2025
f1_keywords: ["/libpath", "VC.Project.VCLinkerTool.AdditionalLibraryDirectories"]
helpviewer_keywords: ["LIBPATH linker option", "/LIBPATH linker option", "Additional Libpath linker option", "environment library path override", "-LIBPATH linker option", "library path linker option"]
---
# `/LIBPATH` (Additional Libpath)

## Syntax

> /LIBPATH:dir

## Argument

*`dir`*\
Specifies a path that the linker searches before it searches the path specified in the `LIB` environment option. When expanded, the fully qualified directory must not exceed `MAX_PATH` (260 characters).

## Remarks

Use the `/LIBPATH` option to override the environment library path. The linker first searches in the path specified by this option, and then searches in the path specified in the `LIB` environment variable. You can specify only one directory for each `/LIBPATH` option you enter. To specify more than one directory, specify multiple `/LIBPATH` options. The linker searches the specified directories in order.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).
1. Select the **Configuration Properties** > **Linker** > **General** property page.
1. Modify the **Additional Library Directories** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalLibraryDirectories%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC Linker Options](linker-options.md)
