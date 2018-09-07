---
title: "Compiler Options | Microsoft Docs"
ms.custom: ""
ms.date: "01/29/2018"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["cl.exe compiler", "x86 Visual C++ compiler", "ARM Visual C++ compiler", "compiler options, C++", "x64 Visual C++ compiler"]
ms.assetid: ed3376c8-bef4-4c9a-80e9-3b5da232644c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Options

cl.exe is a tool that controls the Microsoft Visual C++ (MSVC) C and C++ compilers and linker. cl.exe can be run only on operating systems that support Microsoft Visual Studio for Windows.

> [!NOTE]  
> You can start this tool only from a Visual Studio developer command prompt. You cannot start it from a system command prompt or from File Explorer. For more information, see [Build C/C++ code on the command line](../building-on-the-command-line.md).

The compilers produce Common Object File Format (COFF) object (.obj) files. The linker produces executable (.exe) files or dynamic-link libraries (DLLs).

Note that all compiler options are case sensitive. You may use either a forward slash (`/`) or a dash (`-`) to specify a compiler option.

To compile without linking, use the [/c](../../build/reference/c-compile-without-linking.md) option.

## Find a compiler option

To find a particular compiler option, see one of the following lists:

- [Compiler Options Listed Alphabetically](../../build/reference/compiler-options-listed-alphabetically.md)

- [Compiler Options Listed by Category](../../build/reference/compiler-options-listed-by-category.md)

## Specify compiler options

The topic for each compiler option discusses how it can be set in the development environment. For information on specifying options outside the development environment, see:

- [Compiler Command-Line Syntax](../../build/reference/compiler-command-line-syntax.md)

- [CL Command Files](../../build/reference/cl-command-files.md)

- [CL Environment Variables](../../build/reference/cl-environment-variables.md)

## Related build tools

[Linker options](../../build/reference/linker-options.md) also affect how your program is built.

## See also

[C/C++ Building Reference](../../build/reference/c-cpp-building-reference.md)  
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)  
[Fast Compilation](../../build/reference/fast-compilation.md)  
[CL Invokes the Linker](../../build/reference/cl-invokes-the-linker.md)  
