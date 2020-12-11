---
description: "Learn more about: inline_recursion pragma"
title: "inline_recursion pragma"
ms.date: "08/29/2019"
f1_keywords: ["inline_recursion_CPP", "vc-pragma.inline_recursion"]
helpviewer_keywords: ["pragmas, inline_recursion", "inline_recursion pragma"]
ms.assetid: cfef5791-63b7-45ac-9574-623747b9b9c9
---
# inline_recursion pragma

Controls the inline expansion of direct or mutually recursive function calls.

## Syntax

> **#pragma inline_recursion(** [ { **on** | **off** } ] **)**

## Remarks

Use this pragma to control functions marked as [inline](../cpp/inline-functions-cpp.md) and [__inline](../cpp/inline-functions-cpp.md) or functions that the compiler automatically expands under the `/Ob2` option. Use of this pragma requires an [/Ob](../build/reference/ob-inline-function-expansion.md) compiler option setting of either 1 or 2. The default state for **inline_recursion** is off. This pragma takes effect at the first function call after the pragma is seen and doesn't affect the definition of the function.

The **inline_recursion** pragma controls how recursive functions are expanded. If **inline_recursion** is off, and if an inline function calls itself, either directly or indirectly, the function is expanded only one time. If **inline_recursion** is on, the function is expanded multiple times until it reaches the value set with the [inline_depth](../preprocessor/inline-depth.md) pragma, the default value for recursive functions that is defined by the `inline_depth` pragma, or a capacity limit.

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)\
[inline_depth](../preprocessor/inline-depth.md)\
[/Ob (Inline Function Expansion)](../build/reference/ob-inline-function-expansion.md)
