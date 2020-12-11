---
description: "Learn more about: _CIfmod"
title: "_CIfmod"
ms.date: "4/2/2020"
api_name: ["_CIfmod", "_o__CIfmod"]
api_location: ["msvcrt.dll", "msvcr110_clr0400.dll", "msvcr100.dll", "msvcr80.dll", "msvcr90.dll", "msvcr120.dll", "msvcr110.dll", "api-ms-win-crt-math-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_CIfmod", "CIfmod"]
helpviewer_keywords: ["CIfmod intrinsic", "_CIfmod intrinsic"]
ms.assetid: 7c050653-7ec6-4810-b3a7-7a0057ea65ed
---
# _CIfmod

Calculates the floating-point remainder of the top two values on the stack.

## Syntax

```cpp
void __cdecl _CIfmod();
```

## Remarks

This version of the `fmod` function has a specialized calling convention that the compiler understands. It speeds up the execution because it prevents copies from being generated and helps with register allocation.

The resulting value is pushed onto the top of the stack.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](global-state.md).

## Requirements

**Platform:** x86

## See also

[Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[fmod, fmodf](../c-runtime-library/reference/fmod-fmodf.md)
