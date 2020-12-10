---
description: "Learn more about: Linker Tools Error LNK1211"
title: "Linker Tools Error LNK1211"
ms.date: "12/05/2017"
f1_keywords: ["LNK1211"]
helpviewer_keywords: ["LNK1211"]
ms.assetid: 607400eb-4180-4892-817f-eedfa628af61
---
# Linker Tools Error LNK1211

> precompiled type information not found; '*filename*' not linked or overwritten

The *filename* object file, compiled by using [/Yc](../../build/reference/yc-create-precompiled-header-file.md), was not specified in the LINK command or was overwritten.

If you are creating a debug library that uses precompiled headers and if you specify **/Yc** and [/Z7](../../build/reference/z7-zi-zi-debug-information-format.md), Visual C++ generates a precompiled object file that contains debug information. The error occurs only when you store the precompiled object file in a library, use the library to build an executable image, and the object files that are referenced have no transitive references to any of the functions the precompiled object file defines.

There are two methods to work around this situation:

- Specify the [/Yd](../../build/reference/yd-place-debug-information-in-object-file.md) compiler option to add the debug information from the precompiled header to each object module. This method is less desirable because it generally produces large object modules that can increase the time required to link the application.

- Specify [/Yl](../../build/reference/yl-inject-pch-reference-for-debug-library.md) and pass the name of any arbitrary string, when you create a precompiled header file that does not contain any function definitions. This directs the compiler to create a symbol in the precompiled object file and to emit a reference to that symbol in each object file that used the precompiled header file that is associated with the precompiled object file.

When you compile a module with **/Yc** and **/Yl**, the compiler creates a symbol similar to `__@@_PchSym_@00@...@symbol_name`, where the ellipsis (...) represents a compiler-generated character string, and stores it in the object module. Any source file that you compile with this precompiled header refers to the specified symbol, which causes the linker to include the object module and its debugging information from the library.
