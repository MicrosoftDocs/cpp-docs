---
description: "Learn more about: _aligned_free_dbg"
title: "_aligned_free_dbg"
ms.date: "11/04/2016"
api_name: ["_aligned_free_dbg"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_aligned_free_dbg", "aligned_free_dbg"]
helpviewer_keywords: ["_aligned_free_dbg function", "aligned_free_dbg function"]
ms.assetid: eb0cb3c8-0992-4db8-bac3-65f1b8311ca6
---
# _aligned_free_dbg

Frees a block of memory that was allocated with [_aligned_malloc](aligned-malloc.md) or [_aligned_offset_malloc](aligned-offset-malloc.md) (debug only).

## Syntax

```C
void _aligned_free_dbg(
   void *memblock
);
```

### Parameters

*memblock*<br/>
A pointer to the memory block that was returned to the [_aligned_malloc](aligned-malloc.md) or [_aligned_offset_malloc](aligned-offset-malloc.md) function.

## Remarks

The **_aligned_free_dbg** function is a debug version of the [_aligned_free](aligned-free.md) function. When [_DEBUG](../../c-runtime-library/debug.md) is not defined, each call to **_aligned_free_dbg** is reduced to a call to `_aligned_free`. Both `_aligned_free` and **_aligned_free_dbg** free a memory block in the base heap, but **_aligned_free_dbg** accommodates a debugging feature: the ability to keep freed blocks in the heap's linked list to simulate low memory conditions.

**_aligned_free_dbg** performs a validity check on all specified files and block locations before performing the free operation. The application is not expected to provide this information. When a memory block is freed, the debug heap manager automatically checks the integrity of the buffers on either side of the user portion and issues an error report if overwriting has occurred. If the _CRTDBG_DELAY_FREE_MEM_DF bit field of the [_crtDbgFlag](../../c-runtime-library/crtdbgflag.md) flag is set, the freed block is filled with the value 0xDD, assigned the _FREE_BLOCK block type, and kept in the heap's linked list of memory blocks.

If an error occurs in freeing the memory, `errno` is set with information from the operating system on the nature of the failure. For more information, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). For information about the allocation block types and how they are used, see [Types of blocks on the debug heap](/visualstudio/debugger/crt-debug-heap-details). For information about the differences between calling a standard heap function and its debug version in a debug build of an application, see [Debug Versions of Heap Allocation Functions](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_aligned_free_dbg**|\<crtdbg.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Debug Routines](../../c-runtime-library/debug-routines.md)
