---
description: "Learn more about: _seh_filter_dll, _seh_filter_exe"
title: "_seh_filter_dll, _seh_filter_exe"
ms.date: "4/2/2020"
api_name: ["_XcptFilter", "_seh_filter_dll", "_seh_filter_exe", "_o__seh_filter_dll", "_o__seh_filter_exe"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["XcptFilter", "_XcptFilter", "_seh_filter_dll", "_seh_filter_exe", "corecrt_startup/_seh_filter_exe", "corecrt_startup/_seh_filter_dll"]
helpviewer_keywords: ["XcptFilter function", "_XcptFilter function", "_seh_filter_dll function", "_seh_filter_exe function"]
ms.assetid: 747e5963-3a12-4bf5-b5c4-d4c1b6068e15
---
# `_seh_filter_dll`, `_seh_filter_exe`

Identifies the exception and the related action to be taken.

## Syntax

```C
int __cdecl _seh_filter_dll(
   unsigned long exceptionNum,
   struct _EXCEPTION_POINTERS* exceptionPtr
);
int __cdecl _seh_filter_exe(
   unsigned long exceptionNum,
   struct _EXCEPTION_POINTERS* exceptionPtr
);
```

### Parameters

*`exceptionNum`*\
The identifier for the exception.

*`exceptionPtr`*\
A pointer to the exception information.

## Return value

An integer that indicates the action to be taken, based on the result of exception processing.

## Remarks

These methods are called by the exception-filter expression of the [try-except Statement](../../cpp/try-except-statement.md). The method consults a constant internal table to identify the exception and determine the appropriate action, as shown here. The exception numbers are defined in winnt.h and the signal numbers are defined in signal.h.

| Exception number (unsigned long) | Signal number |
|---|---|
| `STATUS_ACCESS_VIOLATION` | `SIGSEGV` |
| `STATUS_ILLEGAL_INSTRUCTION` | `SIGILL` |
| `STATUS_PRIVILEGED_INSTRUCTION` | `SIGILL` |
| `STATUS_FLOAT_DENORMAL_OPERAND` | `SIGFPE` |
| `STATUS_FLOAT_DIVIDE_BY_ZERO` | `SIGFPE` |
| `STATUS_FLOAT_INEXACT_RESULT` | `SIGFPE` |
| `STATUS_FLOAT_INVALID_OPERATION` | `SIGFPE` |
| `STATUS_FLOAT_OVERFLOW` | `SIGFPE` |
| `STATUS_FLOAT_STACK_CHECK` | `SIGFPE` |
| `STATUS_FLOAT_UNDERFLOW` | `SIGFPE` |

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

**Header:** corecrt_startup.h

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)
