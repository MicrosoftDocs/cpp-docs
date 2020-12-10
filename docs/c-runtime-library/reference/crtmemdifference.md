---
description: "Learn more about: _CrtMemDifference"
title: "_CrtMemDifference"
ms.date: "11/04/2016"
api_name: ["_CrtMemDifference"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_CrtMemDifference", "CrtMemDifference"]
helpviewer_keywords: ["CrtMemDifference function", "_CrtMemDifference function"]
ms.assetid: 0f327278-b551-482f-958b-76941f796ba4
---
# _CrtMemDifference

Compares two memory states and returns their differences (debug version only).

## Syntax

```C
int _CrtMemDifference(
   _CrtMemState *stateDiff,
   const _CrtMemState *oldState,
   const _CrtMemState *newState
);
```

### Parameters

*stateDiff*<br/>
Pointer to a **_CrtMemState** structure that is used to store the differences between the two memory states (returned).

*oldState*<br/>
Pointer to an earlier memory state (**_CrtMemState** structure).

*newState*<br/>
Pointer to a later memory state (**_CrtMemState** structure).

## Return Value

If the memory states are significantly different, **_CrtMemDifference** returns TRUE. Otherwise, the function returns FALSE.

## Remarks

The **_CrtMemDifference** function compares *oldState* and *newState* and stores their differences in *stateDiff*, which can then be used by the application to detect memory leaks and other memory problems. When [_DEBUG](../../c-runtime-library/debug.md) is not defined, calls to **_CrtMemDifference** are removed during preprocessing.

*newState* and *oldState* must each be a valid pointer to a **_CrtMemState** structure, defined in Crtdbg.h, that has been filled in by [_CrtMemCheckpoint](crtmemcheckpoint.md) before calling **_CrtMemDifference**. *stateDiff* must be a pointer to a previously allocated instance of the **_CrtMemState** structure. If *stateDiff*, *newState*, or *oldState* is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) is set to **EINVAL** and the function returns FALSE.

**_CrtMemDifference** compares the **_CrtMemState** field values of the blocks in *oldState* to those in *newState* and stores the result in *stateDiff*. When the number of allocated block types or total number of allocated blocks for each type differs between the two memory states, the states are said to be significantly different. The difference between the largest amount ever allocated at once for the two states and the difference between total allocations for the two states are also stored in *stateDiff*.

By default, internal C run-time blocks (**_CRT_BLOCK**) are not included in memory state operations. The [_CrtSetDbgFlag](crtsetdbgflag.md) function can be used to turn on the **_CRTDBG_CHECK_CRT_DF** bit of **_crtDbgFlag** to include these blocks in leak detection and other memory state operations. Freed memory blocks (**_FREE_BLOCK**) do not cause **_CrtMemDifference** to return TRUE.

For more information about heap state functions and the **_CrtMemState** structure, see [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details). For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_CrtMemDifference**|\<crtdbg.h>|\<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

**Libraries:** Debug versions of [CRT Library Features](../../c-runtime-library/crt-library-features.md) only.

## See also

[Debug Routines](../../c-runtime-library/debug-routines.md)<br/>
[_crtDbgFlag](../../c-runtime-library/crtdbgflag.md)<br/>
