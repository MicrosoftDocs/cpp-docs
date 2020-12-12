---
description: "Learn more about: Compiler Warning (level 1) C4274"
title: "Compiler Warning (level 1) C4274"
ms.date: "11/04/2016"
f1_keywords: ["C4274"]
helpviewer_keywords: ["C4274"]
ms.assetid: 5a948680-7ed1-469f-978d-ae99d154e161
---
# Compiler Warning (level 1) C4274

\#ident ignored; see documentation for #pragma comment(exestr, 'string')

The `#ident` directive, which inserts a user-specified string in the object or executable file, is deprecated. Consequently, the compiler ignores the directive.

> [!CAUTION]
> Warning C4274 advises you to use the [#pragma comment(exestr, 'string')](../../preprocessor/comment-c-cpp.md) directive. However, this advice is deprecated and will be revised in a future release of the compiler. If you use the `#pragma` directive, the linker tool (LINK.exe) ignores the comment record produced by the directive and issues warning [LNK4229](../../error-messages/tool-errors/linker-tools-warning-lnk4229.md). Instead of the `#ident` directive, we recommend that you use a file version resource string in your application.

## To correct this error

- Remove the `#ident "`*string*`"` directive.

## See also

[comment (C/C++)](../../preprocessor/comment-c-cpp.md)<br/>
[Linker Tools Warning LNK4229](../../error-messages/tool-errors/linker-tools-warning-lnk4229.md)<br/>
[Working with Resource Files](../../windows/working-with-resource-files.md)
