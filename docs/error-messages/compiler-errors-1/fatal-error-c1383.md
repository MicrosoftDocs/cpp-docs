---
description: "Learn more about: Fatal Error C1383"
title: "Fatal Error C1383"
ms.date: "11/04/2016"
f1_keywords: ["C1383"]
helpviewer_keywords: ["C1383"]
ms.assetid: ca224d14-d687-4fd6-80c2-8b82f28924ea
---
# Fatal Error C1383

compiler option /GL is incompatible with the installed version of common language runtime

C1383 occurs when you are using a previous version of the common language runtime with a newer compiler, and when you compile with **/clr** and **/GL.**

To resolve, either do not use **/GL** with **/clr** or install the version of the common language runtime that shipped with your compiler.

For more information, see [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) and [/GL (Whole Program Optimization)](../../build/reference/gl-whole-program-optimization.md).
