---
description: "Learn more about: Command-Line Warning D9035"
title: "Command-Line Warning D9035"
ms.date: "12/10/2018"
f1_keywords: ["D9035"]
helpviewer_keywords: ["D9035"]
ms.assetid: 6254f933-e37a-45ba-b860-1a870d1bc8e8
---
# Command-Line Warning D9035

> option '*option*' has been deprecated and will be removed in a future release

## Remarks

You specified a compiler option that will be removed in a future release of the compiler. If there is a suggested replacement for *option*, this warning is followed by warning [D9036](../../error-messages/tool-errors/command-line-warning-d9036.md).

The specified option still works, but you should update your build configuration now. As a result, your project is more likely to continue to build when you upgrade the compiler.

## See also

[Deprecated and removed compiler options](../../build/reference/compiler-options-listed-by-category.md#deprecated-and-removed-compiler-options)<br/>
[Command-Line Warning D9036](command-line-warning-d9036.md)
