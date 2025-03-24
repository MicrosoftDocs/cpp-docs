---
description: "Learn more about: /STUB (MS-DOS Stub File Name)"
title: "/STUB (MS-DOS Stub File Name)"
ms.date: 03/24/2025
f1_keywords: ["/stub", "VC.Project.VCLinkerTool.DosStub"]
helpviewer_keywords: ["Win32 [C++], attaching MS-DOS stub program", "STUB linker option", "MS-DOS stub file name linker option", "/STUB linker option", "Windows API [C++], attaching MS-DOS stub program", "-STUB linker option"]
---
# /STUB (MS-DOS Stub File Name)

```cmd
/STUB:filename
```

## Arguments

*`filename`*\
An MS-DOS application. Must not exceed `MAX_PATH` (260) characters.

## Remarks

The `/STUB` option attaches an MS-DOS stub program to a Win32 program.

A stub program is invoked if the file is executed in MS-DOS. It usually displays an appropriate message; however, any valid MS-DOS application can be a stub program.

Specify a *`filename`* for the stub program after a colon (:) on the command line. The linker checks *filename* and issues an error message if the file is not an executable. The program must be an `.exe` file; a `.com` file is invalid for a stub program.

If this option is not used, the linker attaches a default stub program that issues the following message:

```cmd
This program cannot be run in MS-DOS mode.
```

When building a virtual device driver, *`filename`* allows the user to specify a file name that contains an IMAGE_DOS_HEADER structure (defined in WINNT.H) to be used in the VXD, rather than the default header.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. Enter the option into the **Additional Options** box.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC Linker Options](linker-options.md)
