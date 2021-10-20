---
description: "Learn more about: Compiler Warning (level 4) C4710"
title: "Compiler Warning (level 4) C4710"
ms.date: 10/19/2021
f1_keywords: ["C4710"]
helpviewer_keywords: ["C4710"]
ms.assetid: 76381ec7-3fc1-4bee-9a0a-c2c8307b92e2
---
# Compiler Warning (level 4) C4710

> '*function*' : function not inlined

The specified function was marked for inline expansion, but the compiler didn't inline the function.

Inlining is done at the compiler's discretion. The **`inline`** keyword, like the deprecated (and, in C++17 and later standards, removed) **`register`** keyword, is used as a hint for the compiler. The compiler uses heuristics to determine if it should inline a particular function to speed up the code when it optimizes for speed, or if it should inline a particular function to make the code smaller when it optimizes for space. The compiler inlines only the smallest functions when compiling for space.

In some cases, the compiler doesn't inline a particular function for mechanical reasons. See [C4714](../../error-messages/compiler-warnings/compiler-warning-level-4-c4714.md) for a list of reasons the compiler may not inline a function.

This warning is off by default. For more information, see [Compiler warnings that are off by default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).
