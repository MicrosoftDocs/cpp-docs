---
title: "MSVC C/C++ compiler reference - Visual Studio"
description: "MSVC compiler toolset options."
ms.date: "12/10/2018"
helpviewer_keywords: ["cl.exe compiler", "cl.exe compiler, setting options"]
ms.assetid: f3eef5ab-d0be-4fb2-90f9-927e6ed58736
---
# Compiling a C/C++ project

C and C++ compiler options can be set either in the Visual Studio IDE or on the command line.

## In Visual Studio

You can set compiler options for each project in its Visual Studio **Property Pages** dialog box. In the left pane, select **Configuration Properties**, **C/C++** and then choose the compiler option category. The topic for each compiler option describes how it can be set and where it is found in the development environment. For more information and a complete list of options, see [MSVC compiler options](compiler-options.md).

## From the command line

You can set compiler (CL.exe) options:

- [On the command line](compiler-command-line-syntax.md)

- [In command files](cl-command-files.md)

- [In the CL environment variable](cl-environment-variables.md)

Options specified in the CL environment variable are used every time you invoke CL. If a command file is named in the CL environment variable or on the command line, the options specified in the command file are used. Unlike either the command line or the CL environment variable, a command file allows you to use multiple lines of options and filenames.

Compiler options are processed "left to right," and when a conflict is detected, the last (rightmost) option wins. The CL environment variable is processed before the command line, so in any conflicts between CL and the command line, the command line takes precedence.

## Additional Compiler Topics

- [MSVC Compiler Options](compiler-options.md)

- [Precompiled Header Files](../creating-precompiled-header-files.md)

- [CL Invokes the Linker](cl-invokes-the-linker.md)

For information on choosing the compiler host and target architecture, see [Configure C++ projects for 64-bit, x64 targets](../configuring-programs-for-64-bit-visual-cpp.md).

## See also

[C/C++ Building Reference](c-cpp-building-reference.md)
