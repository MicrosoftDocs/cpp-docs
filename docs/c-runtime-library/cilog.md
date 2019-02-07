---
title: "_CIlog"
ms.date: "11/04/2016"
apiname: ["_CIlog"]
apilocation: ["msvcr90.dll", "msvcr120.dll", "msvcr80.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr100.dll", "msvcrt.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_CIlog", "CIlog"]
helpviewer_keywords: ["_CIlog intrinsic", "CIlog intrinsic"]
ms.assetid: 23503854-ddaa-4fe0-a4a3-7fbb3a43bdec
---
# _CIlog

Calculates the natural logarithm of the top value in the stack.

## Syntax

```
void __cdecl _CIlog();
```

## Remarks

This version of the `log` function has a specialized calling convention that the compiler understands. It speeds up the execution because it prevents copies from being generated and helps with register allocation.

The resulting value is pushed onto the top of the stack.

## Requirements

**Platform:** x86

## See also

- [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)
- [log, logf, log10, log10f](../c-runtime-library/reference/log-logf-log10-log10f.md)
