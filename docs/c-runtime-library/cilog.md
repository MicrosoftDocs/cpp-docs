---
description: "Learn more about: _CIlog"
title: "_CIlog"
ms.date: "4/2/2020"
api_name: ["_CIlog", "_o__CIlog"]
api_location: ["msvcr90.dll", "msvcr120.dll", "msvcr80.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr100.dll", "msvcrt.dll", "api-ms-win-crt-math-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_CIlog", "CIlog"]
helpviewer_keywords: ["_CIlog intrinsic", "CIlog intrinsic"]
ms.assetid: 23503854-ddaa-4fe0-a4a3-7fbb3a43bdec
---
# _CIlog

Calculates the natural logarithm of the top value in the stack.

## Syntax

```cpp
void __cdecl _CIlog();
```

## Remarks

This version of the `log` function has a specialized calling convention that the compiler understands. It speeds up the execution because it prevents copies from being generated and helps with register allocation.

The resulting value is pushed onto the top of the stack.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](global-state.md).

## Requirements

**Platform:** x86

## See also

[Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[log, logf, log10, log10f](../c-runtime-library/reference/log-logf-log10-log10f.md)
