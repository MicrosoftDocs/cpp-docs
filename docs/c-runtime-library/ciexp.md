---
title: "_CIexp"
ms.date: "11/04/2016"
api_name: ["_CIexp"]
api_location: ["msvcr120.dll", "msvcr80.dll", "msvcr110.dll", "msvcr100.dll", "msvcrt.dll", "msvcr110_clr0400.dll", "msvcr90.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: "DLLExport"
topic_type: ["apiref"]
f1_keywords: ["CIexp", "_CIexp"]
helpviewer_keywords: ["CIexp intrinsic", "_CIexp intrinsic"]
ms.assetid: f8a3e3b7-fa57-41a3-9983-6c81914cbb55
---
# _CIexp

Calculates the exponential of the top value on the stack.

## Syntax

```
void __cdecl _CIexp();
```

## Remarks

This version of the `exp` function has a specialized calling convention that the compiler understands. It speeds up the execution because it prevents copies from being generated and helps with register allocation.

The resulting value is pushed onto the top of the stack.

## Requirements

**Platform:** x86

## See also

[Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[exp, expf, expl](../c-runtime-library/reference/exp-expf.md)
