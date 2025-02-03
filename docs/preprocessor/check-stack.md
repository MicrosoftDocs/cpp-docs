---
description: "Learn more about the check_stack pragma directive in Microsoft C/C++"
title: "check_stack pragma"
ms.date: 01/22/2021
f1_keywords: ["vc-pragma.check_stack", "check_stack_CPP"]
helpviewer_keywords: ["check_stack pragma", "pragma, check_stack", "pragma, check_stack usage table"]
no-loc: ["pragma"]
---
# `check_stack` pragma

Instructs the compiler to turn off stack probes if **`off`** (or **`-`**) is specified, or to turn on stack probes if **`on`** (or **`+`**) is specified.

## Syntax

> **`#pragma check_stack(`** [{ **`on`** | **`off`** }] **`)`**\
> **`#pragma check_stack`** { **`+`** | **`-`** }

## Remarks

This pragma takes effect at the first function defined after the pragma is seen. Stack probes are neither a part of macros nor of functions that are generated inline.

If you don't give an argument for the **`check_stack`** pragma, stack checking reverts to the behavior specified on the command line. For more information, see [Compiler options](../build/reference/compiler-options.md). The interaction of the `#pragma check_stack` and the [`/Gs`](../build/reference/gs-control-stack-checking-calls.md) option is summarized in the following table.

### Using the check_stack Pragma

| Syntax | Compiled with<br /><br /> `/Gs` option? | Action |
|--|--|--|
| `#pragma check_stack( )` or<br /><br /> `#pragma check_stack` | Yes | Turns on stack checking for functions that follow |
| `#pragma check_stack( )` or<br /><br /> `#pragma check_stack` | No | Turns off stack checking for functions that follow |
| `#pragma check_stack(on)`<br /><br /> or `#pragma check_stack +` | Yes or No | Turns on stack checking for functions that follow |
| `#pragma check_stack(off)`<br /><br /> or `#pragma check_stack -` | Yes or No | Turns off stack checking for functions that follow |

## See also

[Pragma directives and the `__pragma` and `_Pragma` keywords](./pragma-directives-and-the-pragma-keyword.md)
