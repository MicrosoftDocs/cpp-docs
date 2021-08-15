---
description: "Learn more about: _CIcos"
title: "_CIcos"
ms.date: "4/2/2020"
api_name: ["_CIcos", "_o__CIcos"]
api_location: ["msvcr90.dll", "msvcrt.dll", "msvcr120.dll", "msvcr100.dll", "msvcr80.dll", "msvcr110_clr0400.dll", "msvcr110.dll", "api-ms-win-crt-math-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CIcos", "_CIcos"]
helpviewer_keywords: ["_CIcos intrinsic", "CIcos intrinsic"]
ms.assetid: 6fc203fb-66f3-4ead-9784-f85833c26f1b
---
# _CIcos

Calculates the cosine of the top value in the floating-point stack.

## Syntax

```C
void __cdecl _CIcos();
```

## Remarks

This version of the [cos](../c-runtime-library/reference/cos-cosf-cosl.md) function has a specialized calling convention that the compiler understands. It speeds up the execution because it prevents copies from being generated and helps with register allocation.

The resulting value is pushed onto the top of the floating-point stack.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](global-state.md).

## Requirements

**Platform:** x86

## See also

[Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[cos, cosf, cosl](../c-runtime-library/reference/cos-cosf-cosl.md)<br/>
