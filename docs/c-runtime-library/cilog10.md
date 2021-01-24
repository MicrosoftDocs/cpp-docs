---
description: "Learn more about: _CIlog10"
title: "_CIlog10"
ms.date: "4/2/2020"
api_name: ["_CIlog10", "_o__CIlog10"]
api_location: ["msvcr100.dll", "msvcr120.dll", "msvcr80.dll", "msvcr90.dll", "msvcr110_clr0400.dll", "msvcrt.dll", "msvcr110.dll", "api-ms-win-crt-math-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CIlog10", "_CIlog10"]
helpviewer_keywords: ["_CIlog10 intrinsic", "CIlog10 intrinsic"]
ms.assetid: 05d7fcaa-3cff-4cc5-8d44-015e7cacba24
---
# _CIlog10

Performs a `log10` operation on the top value in the stack.

## Syntax

```cpp
void __cdecl _CIlog10();
```

## Remarks

This version of the `log10` function has a specialized calling convention that the compiler understands. The function speeds up the execution because it prevents copies from being generated and helps with register allocation.

The resulting value is pushed onto the top of the stack.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](global-state.md).

## Requirements

**Platform:** x86

## See also

[Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[log, logf, log10, log10f](../c-runtime-library/reference/log-logf-log10-log10f.md)
