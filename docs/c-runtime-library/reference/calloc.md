---
title: "calloc"
description: The C runtime library function calloc allocates zero-initialized memory.
ms.date: "4/2/2020"
api_name: ["calloc", "_o_calloc"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["calloc"]
helpviewer_keywords: ["memory allocation, arrays", "calloc function"]
---
# `calloc`

Allocates an array in memory with elements initialized to 0.

## Syntax

```C
void *calloc(
   size_t number,
   size_t size
);
```

### Parameters

*`number`*\
Number of elements.

*`size`*\
Length in bytes of each element.

## Return value

**`calloc`** returns a pointer to the allocated space. The storage space pointed to by the return value is suitably aligned for storage of any type of object. To get a pointer to a type other than **`void`**, use a type cast on the return value.

## Remarks

The **`calloc`** function allocates storage space for an array of *`number`* elements, each of length *`size`* bytes. Each element is initialized to 0.

**`calloc`** sets `errno` to `ENOMEM` if a memory allocation fails or if the amount of memory requested exceeds `_HEAP_MAXREQ`. For information on this and other error codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

In the Microsoft implementation, if *`number`* or *`size`* is zero, **`calloc`** returns a pointer to an allocated block of non-zero size. An attempt to read or write through the returned pointer leads to undefined behavior.

**`calloc`** uses the C++ [`_set_new_mode`](set-new-mode.md) function to set the *new handler mode*. The new handler mode indicates whether, on failure, **`calloc`** is to call the new handler routine as set by [`_set_new_handler`](set-new-handler.md). By default, **`calloc`** doesn't call the new handler routine on failure to allocate memory. You can override this default behavior so that, when **`calloc`** fails to allocate memory, it calls the new handler routine in the same way that the **`new`** operator does when it fails for the same reason. To override the default, call

```C
_set_new_mode(1);
```

early in your program, or link with *`NEWMODE.OBJ`* (see [Link options](../link-options.md)).

When the application is linked with a debug version of the C run-time libraries, **`calloc`** resolves to [`_calloc_dbg`](calloc-dbg.md). For more information about how the heap is managed during the debugging process, see [The CRT debug heap](../crt-debug-heap-details.md).

**`calloc`** is marked `__declspec(noalias)` and `__declspec(restrict)`, meaning that the function is guaranteed not to modify global variables, and that the pointer returned isn't aliased. For more information, see [`noalias`](../../cpp/noalias.md) and [`restrict`](../../cpp/restrict.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`calloc`** | `<stdlib.h>` and `<malloc.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_calloc.c
// This program uses calloc to allocate space for
// 40 long integers. It initializes each element to zero.

#include <stdio.h>
#include <malloc.h>

int main( void )
{
   long *buffer;

   buffer = (long *)calloc( 40, sizeof( long ) );
   if( buffer != NULL )
      printf( "Allocated 40 long integers\n" );
   else
      printf( "Can't allocate memory\n" );
   free( buffer );
}
```

```Output
Allocated 40 long integers
```

## See also

[Memory allocation](../memory-allocation.md)\
[`free`](free.md)\
[`malloc`](malloc.md)\
[`realloc`](realloc.md)\
