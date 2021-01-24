---
description: "Learn more about: Additional MSVC Build Tools"
title: "Additional MSVC Build Tools"
ms.date: "08/28/2019"
f1_keywords: ["c.build"]
helpviewer_keywords: ["builds [C++], C/C++ tools", "tools [C++], build"]
ms.assetid: 48d9daf4-6bbf-473a-8ce2-bf2923b69f80
---
# Additional MSVC Build Tools

Visual Studio provides the following command-line utilities for viewing or manipulating build output:

- [LIB.EXE](lib-reference.md) is used to create and manage a library of Common Object File Format (COFF) object files. It can also be used to create export files and import libraries to reference exported definitions.

- [EDITBIN.EXE](editbin-reference.md) is used to modify COFF binary files.

- [DUMPBIN.EXE](dumpbin-reference.md) displays information (such as a symbol table) about COFF binary files.

- [NMAKE](nmake-reference.md) reads and executes makefiles.

- [ERRLOOK](value-edit-control.md), the Error Lookup utility, retrieves a system error message or module error message based on the value entered.

- [XDCMake](xdcmake-reference.md). A tool for processing source code files that contain documentation comments marked up with XML tags.

- [BSCMAKE.EXE](bscmake-reference.md) (provided for backward compatibility only) builds a browse information file (.bsc) that contains information about the symbols (classes, functions, data, macros, and types) in your program. You view this information in browse windows within the development environment. (A .bsc file can also be built in the development environment.)

The Windows SDK also has several build tools, including [RC.EXE](/windows/win32/menurc/resource-compiler), which the C++ compiler invokes to compile native Windows resources such as dialogs, property pages, bitmaps, string tables and so on.

## See also

[C/C++ Building Reference](c-cpp-building-reference.md)<br/>
[Decorated Names](decorated-names.md)<br/>
[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Linker Options](linker-options.md)
