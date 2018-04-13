---
title: "_aligned_malloc_dbg | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["_aligned_malloc_dbg"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
apitype: "DLLExport"
f1_keywords: ["_aligned_malloc_dbg", "aligned_malloc_dbg"]
dev_langs: ["C++"]
helpviewer_keywords: ["aligned_malloc_dbg function", "_aligned_malloc_dbg function"]
ms.assetid: fb0429c3-685d-4826-9075-2515c5bdc5c6
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# _aligned_malloc_dbg

Allocates memory on a specified alignment boundary with additional space for a debugging header and overwrite buffers (debug version only).

## Syntax

```C
void * _aligned_malloc_dbg(
    size_t size,
    size_t alignment,
   const char *filename,
   int linenumber
);
```

### Parameters

*size*
Size of the requested memory allocation.

*alignment*
The alignment value, which must be an integer power of 2.

*filename*
Pointer to the name of the source file that requested the allocation operation or NULL.

*linenumber*
Line number in the source file where the allocation operation was requested or NULL.

## Return Value

A pointer to the memory block that was allocated or `NULL` if the operation failed.

## Remarks

`_aligned_malloc_dbg` is a debug version of the [_aligned_malloc](aligned-malloc.md) function. When [_DEBUG](../../c-runtime-library/debug.md) is not defined, each call to `_aligned_malloc_dbg` is reduced to a call to `_aligned_malloc`. Both `_aligned_malloc` and `_aligned_malloc_dbg` allocate a block of memory in the base heap, but `_aligned_malloc_dbg` offers several debugging features: buffers on either side of the user portion of the block to test for leaks, and *filename*/*linenumber* information to determine the origin of allocation requests.

`_aligned_malloc_dbg` allocates the memory block with slightly more space than the requested *size*. The additional space is used by the debug heap manager to link the debug memory blocks and to provide the application with debug header information and overwrite buffers. When the block is allocated, the user portion of the block is filled with the value 0xCD and each of the overwrite buffers are filled with 0xFD.

`_aligned_malloc_dbg` sets `errno` to `ENOMEM` if a memory allocation fails or if the amount of memory needed (including the overhead mentioned previously) exceeds `_HEAP_MAXREQ`. For information about this and other error codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). Also, `_aligned_malloc_dbg` validates its parameters. If *alignment* is not a power of 2 or *size* is zero, this function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function returns `NULL` and sets `errno` to `EINVAL`.

For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). For information about the allocation block types and how they are used, see [Types of blocks on the debug heap](/visualstudio/debugger/crt-debug-heap-details). For information about the differences between calling a standard heap function and its debug version in a debug build of an application, see [Debug Versions of Heap Allocation Functions](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`_aligned_malloc_dbg`|\<crtdbg.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.

## Libraries

Debug versions of [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.

## See also

[Debug Routines](../../c-runtime-library/debug-routines.md)<br/>
