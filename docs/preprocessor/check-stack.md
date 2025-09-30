---
description: "Learn more about the check_stack pragma directive in Microsoft C/C++"
title: "check_stack pragma"
ms.date: 2/7/2025
f1_keywords: ["vc-pragma.check_stack", "check_stack_CPP"]
helpviewer_keywords: ["check_stack pragma", "pragma, check_stack"]
no-loc: ["pragma"]
---
# `check_stack` pragma

Instructs the compiler to turn off stack probes if **`off`** (or **`-`**) is specified, or to turn on stack probes if **`on`** (or **`+`**) is specified.

## Syntax

> **`#pragma check_stack(`** { **`on`** | **`off`** } **`)`**\
> **`#pragma check_stack`** { **`+`** | **`-`** }

## Remarks

This pragma only applies to 32-bit platforms (x86, ARM32). It has no effect on 64-bit platforms.

This pragma takes effect at the first function defined after the pragma is seen. Stack probes are not inserted for macros or functions that are generated inline.

`#pragma check_stack(off)` / `#pragma Check_stack-` is ignored if the size of the function locals is larger than 4096 or the value specified by `/Gs`.

The default behavior of the compiler is to insert stack probes at the beginning of each function if the size of the locals exceeds 4096 or the value specified by `/Gs`.

Use [/Gs (Control stack checking calls)](../build/reference/gs-control-stack-checking-calls.md) to change the threshold of the locals that trigger stack probes. Use with caution.

Using `#pragma check_stack()` without arguments is deprecated.

## See also

[Compiler options](../build/reference/compiler-options.md)\
[Pragma directives and the `__pragma` and `_Pragma` keywords](./pragma-directives-and-the-pragma-keyword.md)
