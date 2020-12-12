---
description: "Learn more about: inline_depth pragma"
title: "inline_depth pragma"
ms.date: "08/29/2019"
f1_keywords: ["inline_depth_CPP", "vc-pragma.inline_depth"]
helpviewer_keywords: ["pragmas, inline_depth", "inline_depth pragma"]
ms.assetid: 2bba60fe-43ea-4d09-90f7-aafaba3bad07
---
# inline_depth pragma

Specifies the inline heuristic search depth. Functions at a depth in the call graph greater than the specified value aren't inlined.

## Syntax

> **#pragma inline_depth(** [ *n* ] **)**

## Remarks

This pragma controls the inlining of functions marked [inline](../cpp/inline-functions-cpp.md) and [__inline](../cpp/inline-functions-cpp.md), or inlined automatically under the `/Ob` option.

*n* can be a value between 0 and 255, where 255 means unlimited depth in the call graph. A value of 0 inhibits inline expansion. When *n* isn't specified, the default value 254 is used.

The **inline_depth** pragma controls the number of times a series of function calls can be expanded. For example, assume the inline depth is 4. If A calls B, and B then calls C, all three calls are expanded inline. However, if the closest inline depth expansion is 2, only A and B are expanded, and C remains as a function call.

To use this pragma, you must set the `/Ob` compiler option to 1 or higher. The depth set using this pragma takes effect at the first function call after the pragma.

The inline depth can be decreased during expansion, but not increased. If the inline depth is 6, and during expansion the preprocessor encounters an **inline_depth** pragma with a value of 8, the depth remains 6.

The **inline_depth** pragma has no effect on functions marked with **`__forceinline`**.

> [!NOTE]
> Recursive functions can be substituted inline to a maximum depth of 16 calls.

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)\
[inline_recursion](../preprocessor/inline-recursion.md)
