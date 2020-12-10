---
description: "Learn more about: Fatal Error C1853"
title: "Fatal Error C1853"
ms.date: "11/04/2016"
f1_keywords: ["C1853"]
helpviewer_keywords: ["C1853"]
ms.assetid: ceb9b4a5-92bf-4573-8a9f-3109cc7743ce
---
# Fatal Error C1853

> '*filename*' precompiled header file is from a previous version of the compiler, or the precompiled header is C++ and you are using it from C (or vice versa)

Possible causes:

- The precompiled header was compiled with a previous compiler version. Try recompiling the header with the current compiler.

- The precompiled header is C++ and you are using it from C. Try recompiling the header for use with C by specifying one of the [/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) compiler options, or changing the suffix of the source file to "c". For more information, see [Two Choices for Precompiling Code](../../build/creating-precompiled-header-files.md#two-choices-for-precompiling-code).
