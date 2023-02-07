---
description: "Learn more about: _recalloc"
title: "_recalloc"
ms.date: "4/2/2020"
api_name: ["_recalloc", "_o__recalloc"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_recalloc", "recalloc"]
helpviewer_keywords: ["_recalloc function", "recalloc function"]
ms.assetid: 1db8305a-3f03-418c-8844-bf9149f63046
---
# `_recalloc`

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

*`memblock`*\
Pointer to previously allocated memory block.

*`number`*\
Number of elements.

*`size`*\
Length in bytes of each element.

## Return value

**`_recalloc`** returns a **`void`** pointer to the reallocated (and possibly moved) memory block.

If there isn't enough available memory to expand the block to the given size, the original block is left unchanged, and `NULL` is returned.

If the requested size is zero, then the block pointed to by *`memblock`* is freed; the return value is `NULL`, and *`memblock`* is left pointing at a freed block.

The return value points to a storage space that is suitably aligned for storage of any type of object. To get a pointer to a type other than **`void`**, use a type cast on the return value.

## Remarks

The **`_recalloc`** function changes the size of an allocated memory block. The *`memblock`* argument points to the beginning of the memory block. If *`memblock`* is `NULL`, **`_recalloc`** behaves the same way as [`calloc`](calloc.md) and allocates a new block of *`number`* * *`size`* bytes. Each element is initialized to 0. If *`memblock`* isn't `NULL`, it should be a pointer returned by a previous call to `calloc`, [`malloc`](malloc.md), or [`realloc`](realloc.md).

Because the new block can be in a new memory location, the pointer returned by **`_recalloc`** isn't guaranteed to be the pointer passed through the *`memblock`* argument.

**`_recalloc`** sets `errno` to `ENOMEM` if the memory allocation fails or if the amount of memory requested exceeds `_HEAP_MAXREQ`. For information on this and other error codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

**`recalloc`** calls `realloc` in order to use the C++ [`_set_new_mode`](set-new-mode.md) function to set the new handler mode. The new handler mode indicates whether, on failure, `realloc` is to call the new handler routine as set by [`_set_new_handler`](set-new-handler.md). By default, `realloc` doesn't call the new handler routine on failure to allocate memory. You can override this default behavior so that, when **`_recalloc`** fails to allocate memory, `realloc` calls the new handler routine in the same way that the **`new`** operator does when it fails for the same reason. To override the default, call

```C
_set_new_mode(1);
```

early in the program, or link with NEWMODE.OBJ.

When the application is linked with a debug version of the C run-time libraries, **`_recalloc`** resolves to [`_recalloc_dbg`](recalloc-dbg.md). For more information about how the heap is managed during the debugging process, see [The CRT debug heap](../crt-debug-heap-details.md).

**`_recalloc`** is marked `__declspec(noalias)` and `__declspec(restrict)`, meaning that the function is guaranteed not to modify global variables, and that the pointer returned isn't aliased. For more information, see [`noalias`](../../cpp/noalias.md) and [`restrict`](../../cpp/restrict.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_recalloc`** | \<stdlib.h> and \<malloc.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Memory allocation](../memory-allocation.md)\
[`_recalloc_dbg`](recalloc-dbg.md)\
[`_aligned_recalloc`](aligned-recalloc.md)\
[`_aligned_offset_recalloc`](aligned-offset-recalloc.md)\
[`free`](free.md)\
[Link options](../link-options.md)
