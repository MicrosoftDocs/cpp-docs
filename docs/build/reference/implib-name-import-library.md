---
description: "Learn more about: /IMPLIB (Name Import Library)"
title: "/IMPLIB (Name Import Library)"
ms.date: 03/24/2025
f1_keywords: ["/implib", "VC.Project.VCLinkerTool.ImportLIbrary"]
helpviewer_keywords: ["IMPLIB linker option", "/IMPLIB linker option", "-IMPLIB linker option", "import libraries, overriding default name"]
---
# `/IMPLIB` (Name Import Library)

## Syntax

> /IMPLIB:*filename*

## Argument

*`filename`*\
A user-specified name for the import library. It replaces the default name. When expanded, the fully qualified filename must not exceed `MAX_PATH` (260 characters).

## Remarks

The `/IMPLIB` option overrides the default name for the import library that LINK creates when it builds a program that contains exports. The default name is formed from the base name of the main output file and the extension `.lib`. A program contains exports if one or more of the following are specified:

- The [__declspec(dllexport)](../../cpp/dllexport-dllimport.md) keyword in the source code
- [EXPORTS](exports.md) statement in a .def file
- An [/EXPORT](export-exports-a-function.md) specification in a LINK command

LINK ignores `/IMPLIB` when an import library isn't being created. If no exports are specified, LINK doesn't create an import library. If an export file is used in the build, LINK assumes that an import library already exists and doesn't create one. For information on import libraries and export files, see [LIB Reference](lib-reference.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).
1. Select the **Configuration Properties** > **Linker** > **Advanced** property page.
1. Modify the **Import Library** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ImportLibrary%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC Linker Options](linker-options.md)
