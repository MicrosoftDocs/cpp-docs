---
description: "Learn more about: _CrtMemCheckpoint"
title: "_CrtMemCheckpoint"
ms.date: "11/04/2016"
api_name: ["_CrtMemCheckpoint"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CrtMemCheckpoint", "_CrtMemCheckpoint", "crtdbg/_CrtMemCheckpoint"]
helpviewer_keywords: ["CrtMemCheckpoint function", "_CrtMemCheckpoint function"]
ms.assetid: f1bacbaa-5a0c-498a-ac7a-b6131d83dfbc
---
# _CrtMemCheckpoint

Obtains the current state of the debug heap and stores in an application-supplied **_CrtMemState** structure (debug version only).

## Syntax

```C
void _CrtMemCheckpoint(
   _CrtMemState *state
);
```

### Parameters

*state*<br/>
Pointer to **_CrtMemState** structure to fill with the memory checkpoint.

## Remarks

The **_CrtMemCheckpoint** function creates a snapshot of the current state of the debug heap at any given moment. This snapshot can be used by other heap state functions such as [_CrtMemDifference](crtmemdifference.md) to help detect memory leaks and other problems. When [_DEBUG](../../c-runtime-library/debug.md) is not defined, calls to **_CrtMemState** are removed during preprocessing.

The application must pass a pointer to a previously allocated instance of the **_CrtMemState** structure, defined in Crtdbg.h, in the *state* parameter. If **_CrtMemCheckpoint** encounters an error during the checkpoint creation, the function generates a **_CRT_WARN** debug report describing the problem.

For more information about heap state functions and the **_CrtMemState** structure, see [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details). For more information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

If *state* is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) is set to **EINVAL** and the function returns.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_CrtMemCheckpoint**|\<crtdbg.h>, \<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

**Libraries:** Debug versions of the UCRT only.

## See also

[Debug Routines](../../c-runtime-library/debug-routines.md)<br/>
[_CrtMemDifference](crtmemdifference.md)<br/>
