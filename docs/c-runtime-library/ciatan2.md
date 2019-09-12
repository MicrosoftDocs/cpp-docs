---
title: "_CIatan2"
ms.date: "11/04/2016"
api_name: ["_CIatan2"]
api_location: ["msvcr80.dll", "msvcrt.dll", "msvcr120.dll", "msvcr110_clr0400.dll", "msvcr110.dll", "msvcr100.dll", "msvcr90.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: "DLLExport"
topic_type: ["apiref"]
f1_keywords: ["CIatan2", "_CIatan2"]
helpviewer_keywords: ["_CIatan2 intrinsic", "CIatan2 intrinsic"]
ms.assetid: 31f8cc78-b79f-4576-b73b-8add18e08680
---
# _CIatan2

Calculates the arctangent of *x* / *y* where *x* and *y* are values on the top of the stack.

## Syntax

```
void __cdecl _CIatan2();
```

## Remarks

This version of the `atan2` function has a specialized calling convention that the compiler understands. It speeds up the execution because it prevents copies from being generated and helps with register allocation.

The resulting value is pushed onto the top of the stack.

## Requirements

**Platform:** x86

## See also

[Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[atan, atanf, atanl, atan2, atan2f, atan2l](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)
