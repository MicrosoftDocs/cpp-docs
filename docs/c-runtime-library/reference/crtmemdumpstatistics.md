---
title: "_CrtMemDumpStatistics | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_CrtMemDumpStatistics"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
apitype: "DLLExport"
f1_keywords: ["CrtMemDumpStatistics", "_CrtMemDumpStatistics"]
dev_langs: ["C++"]
helpviewer_keywords: ["_CrtMemDumpStatistics function", "CrtMemDumpStatistics function"]
ms.assetid: 27b9d731-3184-4a2d-b9a7-6566ab28a9fe
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _CrtMemDumpStatistics

Dumps the debug header information for a specified heap state in a user-readable form (debug version only).

## Syntax

```C
void _CrtMemDumpStatistics(
   const _CrtMemState *state
);
```

### Parameters

*state*<br/>
Pointer to the heap state to dump.

## Remarks

The **_CrtMemDumpStatistics** function dumps the debug header information for a specified state of the heap in a user-readable form. The dump statistics can be used by the application to track allocations and detect memory problems. The memory state can contain a specific heap state or the difference between two states. When [_DEBUG](../../c-runtime-library/debug.md) is not defined, calls to **_CrtMemDumpStatistics** are removed during preprocessing.

The *state* parameter must be a pointer to a **_CrtMemState** structure that has been filled in by [_CrtMemCheckpoint](crtmemcheckpoint.md) or returned by [_CrtMemDifference](crtmemdifference.md) before **_CrtMemDumpStatistics** is called. If *state* is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **errno** is set to **EINVAL** and no action is taken. For more information, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

For more information about heap state functions and the **_CrtMemState** structure, see [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details). For more information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

## Requirements

|Routine|Required header|Optional headers|
|-------------|---------------------|----------------------|
|**_CrtMemDumpStatistics**|\<crtdbg.h>|\<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

**Libraries:** Debug versions of [CRT Library Features](../../c-runtime-library/crt-library-features.md) only.

## See also

[Debug Routines](../../c-runtime-library/debug-routines.md)<br/>
