---
description: "Learn more about: /link (Pass Options to Linker)"
title: "/link (Pass Options to Linker)"
ms.date: "03/25/2019"
f1_keywords: ["/link"]
helpviewer_keywords: ["/link compiler option [C++]", "pass options to linker", "link compiler option [C++]", "linker [C++], passing options to", "-link compiler option [C++]", "cl.exe compiler [C++], passing options to linker"]
ms.assetid: 16902a94-c094-4328-841f-3ac94ca04848
---
# /link (Pass Options to Linker)

Passes one or more linker options to the linker.

## Syntax

> **/link** *linker-options*

## Arguments

*linker-options*<br/>
The linker option or options to be passed to the linker.

## Remarks

The **/link** option and its linker options must appear after any file names and CL options. A space is required between **/link** and any linker options. For more information, see [MSVC linker reference](linking.md).

## Example

This sample command line compiles *hello.cpp* and links it to the existing object file *there.obj*. It then passes an additional **/VERSION** command to the linker:

`cl /W4 /EHsc hello.cpp there.obj /link /VERSION:3.14`

### To set this compiler option in the Visual Studio development environment

The IDE normally sends separate commands to compile and link your code. You can set linker options in your project property pages.

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** folder.

1. Modify one or more properties. Choose **OK** to save your changes.

### To set this compiler option programmatically

- This compiler option can't be changed programmatically.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
