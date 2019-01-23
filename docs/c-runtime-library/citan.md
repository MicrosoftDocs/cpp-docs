---
title: "_CItan"
ms.date: "04/11/2018"
apiname: ["_CItan"]
apilocation: ["msvcr100.dll", "msvcr110_clr0400.dll", "msvcr80.dll", "msvcrt.dll", "msvcr110.dll", "msvcr90.dll", "msvcr120.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_CItan", "CItan"]
helpviewer_keywords: ["CItan intrinsic", "_CItan intrinsic"]
ms.assetid: d1ea3113-50a2-45a6-b6bc-680fcdcc0928
---
# _CItan

Calculates the tangent of the top value on the floating-point stack.

## Syntax

```C
void __cdecl _CItan();
```

## Remarks

This version of the [tan](../c-runtime-library/reference/tan-tanf-tanl.md) function has a specialized calling convention that the compiler understands. The function speeds up the execution because it prevents copies from being generated and helps with register allocation.

The resulting value is pushed onto the top of the floating-point stack.

## Requirements

**Platform:** x86

## See also

[Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[tan, tanf, tanl](../c-runtime-library/reference/tan-tanf-tanl.md)<br/>
