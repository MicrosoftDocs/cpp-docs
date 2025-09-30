---
title: "_CrtDumpMemoryLeaks"
description: "Learn more about: _CrtDumpMemoryLeaks"
ms.date: "11/04/2016"
api_name: ["_CrtDumpMemoryLeaks"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CRTDBG_LEAK_CHECK_DF", "CRTDBG_CHECK_CRT_DF", "_CRTDBG_LEAK_CHECK_DF", "CrtDumpMemoryLeaks", "_CrtDumpMemoryLeaks", "_CRTDBG_CHECK_CRT_DF"]
helpviewer_keywords: ["CrtDumpMemoryLeaks function", "CRTDBG_LEAK_CHECK_DF macro", "_CRTDBG_LEAK_CHECK_DF macro", "_CrtDumpMemoryLeaks function", "CRTDBG_CHECK_CRT_DF macro", "_CRTDBG_CHECK_CRT_DF macro"]
---
# `_CrtDumpMemoryLeaks`

Dumps all the memory blocks in the debug heap when a memory leak has occurred (debug version only).

## Syntax

```C
int _CrtDumpMemoryLeaks( void );
```

## Return value

**`_CrtDumpMemoryLeaks`** returns `TRUE` if a memory leak is found. Otherwise, the function returns `FALSE`.

## Remarks

The **`_CrtDumpMemoryLeaks`** function determines whether a memory leak has occurred since the start of program execution. When a leak is found, the debug header information for all the objects in the heap is dumped in a user-readable form. When [`_DEBUG`](../debug.md) isn't defined, calls to **`_CrtDumpMemoryLeaks`** are removed during preprocessing.

**`_CrtDumpMemoryLeaks`** is frequently called at the end of program execution to verify that all memory allocated by the application has been freed. The function can be called automatically at program termination by turning on the `_CRTDBG_LEAK_CHECK_DF` bit field of the [`_crtDbgFlag`](../crtdbgflag.md) flag using the [`_CrtSetDbgFlag`](crtsetdbgflag.md) function.

**`_CrtDumpMemoryLeaks`** calls [`_CrtMemCheckpoint`](crtmemcheckpoint.md) to obtain the current state of the heap and then scans the state for blocks that haven't been freed. When an unfreed block is encountered, **`_CrtDumpMemoryLeaks`** calls [`_CrtMemDumpAllObjectsSince`](crtmemdumpallobjectssince.md) to dump information for all the objects allocated in the heap from the start of program execution.

By default, internal C run-time blocks (`_CRT_BLOCK`) aren't included in memory dump operations. The [`_CrtSetDbgFlag`](crtsetdbgflag.md) function can be used to turn on the `_CRTDBG_CHECK_CRT_DF` bit of **`_crtDbgFlag`** to include these blocks in the leak detection process.

For more information about heap state functions and the **`_CrtMemState`** structure, see [Heap state reporting functions](../crt-debug-heap-details.md#heap-state-reporting-functions). For more information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT debug heap details](../crt-debug-heap-details.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_CrtDumpMemoryLeaks`** | `<crtdbg.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Libraries

Debug versions of [C run-time libraries](../crt-library-features.md) only.

## Example

For a sample of how to use **`_CrtDumpMemoryLeaks`**, see [`crt_dbg1`](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg1).

## See also

[Debug routines](../debug-routines.md)
