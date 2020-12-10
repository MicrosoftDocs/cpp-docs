---
description: "Learn more about: _freea"
title: "_freea"
ms.date: "11/04/2016"
api_name: ["_freea"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["freea", "_freea"]
helpviewer_keywords: ["_freea function", "freea function", "memory deallocation"]
ms.assetid: dcd30584-dd9d-443b-8c4c-13237a1cecac
---
# _freea

Deallocates or frees a memory block.

## Syntax

```C
void _freea(
   void *memblock
);
```

### Parameters

*memblock*<br/>
Previously allocated memory block to be freed.

## Return Value

None.

## Remarks

The **_freea** function deallocates a memory block (*memblock*) that was previously allocated by a call to [_malloca](malloca.md). **_freea** checks to see if the memory was allocated on the heap or the stack. If it was allocated on the stack, **_freea** does nothing. If it was allocated on the heap, the number of freed bytes is equivalent to the number of bytes requested when the block was allocated. If *memblock* is **NULL**, the pointer is ignored and **_freea** immediately returns. Attempting to free an invalid pointer (a pointer to a memory block that was not allocated by **_malloca**) might affect subsequent allocation requests and cause errors.

**_freea** calls **free** internally if it finds that the memory is allocated on the heap. Whether the memory is on the heap or the stack is determined by a marker placed in memory at the address immediately preceding the allocated memory.

If an error occurs in freeing the memory, **errno** is set with information from the operating system on the nature of the failure. For more information, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

After a memory block has been freed, [_heapmin](heapmin.md) minimizes the amount of free memory on the heap by coalescing the unused regions and releasing them back to the operating system. Freed memory that is not released to the operating system is restored to the free pool and is available for allocation again.

A call to **_freea** must accompany all calls to **_malloca**. It is also an error to call **_freea** twice on the same memory. When the application is linked with a debug version of the C run-time libraries, particularly with [_malloc_dbg](malloc-dbg.md) features enabled by defining **_CRTDBG_MAP_ALLOC**, it is easier to find missing or duplicated calls to **_freea**. For more information about how the heap is managed during the debugging process, see [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details).

**_freea** is marked `__declspec(noalias)`, meaning that the function is guaranteed not to modify global variables. For more information, see [noalias](../../cpp/noalias.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**_freea**|\<stdlib.h> and \<malloc.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example for [_malloca](malloca.md).

## See also

[Memory Allocation](../../c-runtime-library/memory-allocation.md)<br/>
[_malloca](malloca.md)<br/>
[calloc](calloc.md)<br/>
[malloc](malloc.md)<br/>
[_malloc_dbg](malloc-dbg.md)<br/>
[realloc](realloc.md)<br/>
[_free_dbg](free-dbg.md)<br/>
[_heapmin](heapmin.md)<br/>
