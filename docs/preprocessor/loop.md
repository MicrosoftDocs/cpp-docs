---
description: "Learn more about: loop pragma"
title: "loop pragma"
ms.date: "08/29/2019"
f1_keywords: ["loop_CPP", "vc-pragma.loop"]
ms.assetid: 6d5bb428-cead-47e7-941d-7513bbb162c7
---
# loop pragma

Controls how loop code is to be considered by the auto-parallelizer, or excludes a loop from consideration by the auto-vectorizer.

## Syntax

> **#pragma loop( hint_parallel(** *n* **) )**\
> **#pragma loop( no_vector )**\
> **#pragma loop( ivdep )**

### Parameters

**hint_parallel(** *n* **)**\
A hint to the compiler that this loop should be parallelized across *n* threads, where *n* is a positive integer literal or zero. If *n* is zero, the maximum number of threads is used at run time. It's a hint to the compiler, not a command. There's no guarantee that the loop will be parallelized. If the loop has data dependencies, or structural issues, then it won't be parallelized. For example, it isn't parallelized if it stores to a scalar that's used beyond the loop body.

The compiler ignores this option unless the [/Qpar](../build/reference/qpar-auto-parallelizer.md) compiler switch is specified.

**no_vector**\
By default, the auto-vectorizer attempts to vectorize all loops that it evaluates may benefit from it. Specify this pragma to disable the auto-vectorizer for the loop that follows.

**ivdep**\
A hint to the compiler to ignore vector dependencies for this loop.

## Remarks

To use the **loop** pragma, place it immediately before, not in, a loop definition. The pragma takes effect for the scope of the loop that follows it. You can apply multiple pragmas to a loop, in any order, but you must state each one in a separate pragma statement.

## See also

[Auto-Parallelization and Auto-Vectorization](../parallel/auto-parallelization-and-auto-vectorization.md)\
[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
