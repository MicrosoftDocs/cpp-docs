---
title: "_CrtMemDumpStatistics"
description: "Learn more about: _CrtMemDumpStatistics"
ms.date: "11/04/2016"
api_name: ["_CrtMemDumpStatistics"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CrtMemDumpStatistics", "_CrtMemDumpStatistics"]
helpviewer_keywords: ["_CrtMemDumpStatistics function", "CrtMemDumpStatistics function"]
---
# `_CrtMemDumpStatistics`

Dumps the debug header information for a specified heap state in a user-readable form (debug version only).

## Syntax

```C
void _CrtMemDumpStatistics(
   const _CrtMemState *state
);
```

### Parameters

*`state`*\
Pointer to the heap state to dump.

## Remarks

The **`_CrtMemDumpStatistics`** function dumps the debug header information for a specified state of the heap in a user-readable form. The dump statistics can be used by the application to track allocations and detect memory problems. The memory state can contain a specific heap state or the difference between two states. When [`_DEBUG`](../debug.md) isn't defined, calls to **`_CrtMemDumpStatistics`** are removed during preprocessing.

The *`state`* parameter must be a pointer to a `_CrtMemState` structure that has been filled in by [`_CrtMemCheckpoint`](crtmemcheckpoint.md) or returned by [`_CrtMemDifference`](crtmemdifference.md) before **`_CrtMemDumpStatistics`** is called. If *`state`* is `NULL`, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, `errno` is set to `EINVAL`, and no action is taken. For more information, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

For more information about heap state functions and the `_CrtMemState` structure, see [Heap state reporting functions](../crt-debug-heap-details.md#heap-state-reporting-functions). For more information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT debug heap details](../crt-debug-heap-details.md).

## Requirements

| Routine | Required header | Optional headers |
|---|---|---|
| **`_CrtMemDumpStatistics`** | \<crtdbg.h> | \<errno.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

**Libraries:** Debug versions of the [C runtime libraries](../crt-library-features.md) only.

## See also

[Debug routines](../debug-routines.md)
