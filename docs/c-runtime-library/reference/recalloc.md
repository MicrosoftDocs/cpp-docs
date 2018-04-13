---
title: "_recalloc | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["_recalloc"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_recalloc", "recalloc"]
dev_langs: ["C++"]
helpviewer_keywords: ["_recalloc function", "recalloc function"]
ms.assetid: 1db8305a-3f03-418c-8844-bf9149f63046
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# _recalloc

A combination of `realloc` and `calloc`. Reallocates an array in memory and initializes its elements to 0.

## Syntax

```C
void *_recalloc(
   void *memblock
   size_t num,
   size_t size
);
```

### Parameters

*memblock*
Pointer to previously allocated memory block.

*number*
Number of elements.

*size*
Length in bytes of each element.

## Return Value

`_recalloc` returns a `void` pointer to the reallocated (and possibly moved) memory block.

If there is not enough available memory to expand the block to the given size, the original block is left unchanged, and `NULL` is returned.

If the requested size is zero, then the block pointed to by *memblock* is freed; the return value is `NULL`, and *memblock* is left pointing at a freed block.

The return value points to a storage space that is guaranteed to be suitably aligned for storage of any type of object. To get a pointer to a type other than `void`, use a type cast on the return value.

## Remarks

The `_recalloc` function changes the size of an allocated memory block. The *memblock* argument points to the beginning of the memory block. If *memblock* is `NULL`, `_recalloc` behaves the same way as [calloc](../../c-runtime-library/reference/calloc.md) and allocates a new block of *number* * *size* bytes. Each element is initialized to 0. If *memblock* is not `NULL`, it should be a pointer returned by a previous call to `calloc`, [malloc](../../c-runtime-library/reference/malloc.md), or [realloc](../../c-runtime-library/reference/realloc.md).

Because the new block can be in a new memory location, the pointer returned by `_recalloc` is not guaranteed to be the pointer passed through the *memblock* argument.

`_recalloc` sets `errno` to `ENOMEM` if the memory allocation fails or if the amount of memory requested exceeds `_HEAP_MAXREQ`. For information on this and other error codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

`recalloc` calls `realloc` in order to use the C++ [_set_new_mode](../../c-runtime-library/reference/set-new-mode.md) function to set the new handler mode. The new handler mode indicates whether, on failure, `realloc` is to call the new handler routine as set by [_set_new_handler](../../c-runtime-library/reference/set-new-handler.md). By default, `realloc` does not call the new handler routine on failure to allocate memory. You can override this default behavior so that, when `_recalloc` fails to allocate memory, `realloc` calls the new handler routine in the same way that the `new` operator does when it fails for the same reason. To override the default, call

```
_set_new_mode(1)
```

early in the program, or link with NEWMODE.OBJ.

When the application is linked with a debug version of the C run-time libraries, `_recalloc` resolves to [_recalloc_dbg](../../c-runtime-library/reference/recalloc-dbg.md). For more information about how the heap is managed during the debugging process, see [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details).

`_recalloc` is marked `__declspec(noalias)` and `__declspec(restrict)`, meaning that the function is guaranteed not to modify global variables, and that the pointer returned is not aliased. For more information, see [noalias](../../cpp/noalias.md) and [restrict](../../cpp/restrict.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`_recalloc`|\<stdlib.h> and \<malloc.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.

## See also

[Memory Allocation](../../c-runtime-library/memory-allocation.md)<br/>
[_recalloc_dbg](../../c-runtime-library/reference/recalloc-dbg.md)<br/>
[_aligned_recalloc](../../c-runtime-library/reference/aligned-recalloc.md)<br/>
[_aligned_offset_recalloc](../../c-runtime-library/reference/aligned-offset-recalloc.md)<br/>
[free](../../c-runtime-library/reference/free.md)<br/>
[Link Options](../../c-runtime-library/link-options.md)<br/>
