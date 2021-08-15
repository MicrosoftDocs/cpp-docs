---
description: "Learn more about: Compiler Options"
title: "MSVC Compiler Options"
ms.date: "12/14/2020"
helpviewer_keywords: ["cl.exe compiler", "x86 MSVC compiler", "ARM MSVC compiler", "compiler options, C++", "x64 MSVC compiler"]
---
# Compiler Options

cl.exe is a tool that controls the Microsoft C++ (MSVC) C and C++ compilers and linker. cl.exe can be run only on operating systems that support Microsoft Visual Studio for Windows.

> [!NOTE]
> You can start this tool only from a Visual Studio developer command prompt. You cannot start it from a system command prompt or from File Explorer. For more information, see [Use the MSVC toolset from the command line](../building-on-the-command-line.md).

The compilers produce Common Object File Format (COFF) object (.obj) files. The linker produces executable (.exe) files or dynamic-link libraries (DLLs).

All compiler options are case-sensitive. You may use either a forward slash (`/`) or a dash (`-`) to specify a compiler option.

To compile without linking, use the [/c](c-compile-without-linking.md) option.

## Find a compiler option

To find a particular compiler option, see one of the following lists:

- [Compiler Options Listed Alphabetically](compiler-options-listed-alphabetically.md)

- [Compiler Options Listed by Category](compiler-options-listed-by-category.md)

## Specify compiler options

The topic for each compiler option discusses how it can be set in the development environment. For information on specifying options outside the development environment, see:

- [MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)

- [CL Command Files](cl-command-files.md)

- [CL Environment Variables](cl-environment-variables.md)

## Related build tools

[MSVC Linker Options](linker-options.md) also affect how your program is built.

## See also

[C/C++ Building Reference](c-cpp-building-reference.md)<br/>
[CL Invokes the Linker](cl-invokes-the-linker.md)
