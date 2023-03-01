---
description: "Learn more about: _CrtDoForAllClientObjects"
title: "_CrtDoForAllClientObjects"
ms.date: "11/04/2016"
api_name: ["_CrtDoForAllClientObjects"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_CrtDoForAllClientObjects", "CrtDoForAllClientObjects", "crtdbg/_CrdDoForAllClientObjects"]
helpviewer_keywords: ["_CrtDoForAllClientObjects function", "CrtDoForAllClientObjects function"]
ms.assetid: d0fdb835-3cdc-45f1-9a21-54208e8df248
---
# `_CrtDoForAllClientObjects`

Calls an application-supplied function for all `_CLIENT_BLOCK` types in the heap (debug version only).

## Syntax

```C
void _CrtDoForAllClientObjects(
   void ( * pfn )( void *, void * ),
   void *context
);
```

### Parameters

*`pfn`*\
Pointer to the application-supplied function callback function. The first parameter to this function points to the data. The second parameter is the context pointer that is passed to the call to **`_CrtDoForAllClientObjects`**.

*`context`*\
Pointer to the application-supplied context to pass to the application-supplied function.

## Remarks

The **`_CrtDoForAllClientObjects`** function searches the heap's linked list for memory blocks with the `_CLIENT_BLOCK` type and calls the application-supplied function when a block of this type is found. The found block and the *`context`* parameter are passed as arguments to the application-supplied function. During debugging, an application can track a specific group of allocations by explicitly calling the debug heap functions to allocate the memory and specifying that the blocks be assigned the `_CLIENT_BLOCK` block type. These blocks can then be tracked separately and reported on differently during leak detection and memory state reporting.

If the `_CRTDBG_ALLOC_MEM_DF` bit field of the [`_crtDbgFlag`](../crtdbgflag.md) flag isn't turned on, **`_CrtDoForAllClientObjects`** immediately returns. When [`_DEBUG`](../debug.md) isn't defined, calls to **`_CrtDoForAllClientObjects`** are removed during preprocessing.

For more information about the `_CLIENT_BLOCK` type and how it can be used by other debug functions, see [Types of blocks on the debug heap](../crt-debug-heap-details.md#types-of-blocks-on-the-debug-heap). For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT debug heap details](../crt-debug-heap-details.md).

If *`pfn`* is `NULL`, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md) is set to `EINVAL` and the function returns.

## Requirements

| Routine | Required header |
|---|---|
| **`_CrtDoForAllClientObjects`** | \<crtdbg.h>, \<errno.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

**Libraries:** Debug versions of  universal C run-time libraries only.

## See also

[Debug routines](../debug-routines.md)\
[`_CrtSetDbgFlag`](crtsetdbgflag.md)\
[Heap state reporting functions](../crt-debug-heap-details.md#heap-state-reporting-functions)\
[`_CrtReportBlockType`](crtreportblocktype.md)
