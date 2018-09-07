---
title: "calloc | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["calloc"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["calloc"]
dev_langs: ["C++"]
helpviewer_keywords: ["memory allocation, arrays", "calloc function"]
ms.assetid: 17bb79a1-98cf-4096-90cb-1f9365cd6829
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# calloc

Allocates an array in memory with elements initialized to 0.

## Syntax

```C
void *calloc(
   size_t num,
   size_t size
);
```

### Parameters

*number*<br/>
Number of elements.

*size*<br/>
Length in bytes of each element.

## Return Value

**calloc** returns a pointer to the allocated space. The storage space pointed to by the return value is guaranteed to be suitably aligned for storage of any type of object. To get a pointer to a type other than **void**, use a type cast on the return value.

## Remarks

The **calloc** function allocates storage space for an array of *number* elements, each of length *size* bytes. Each element is initialized to 0.

**calloc** sets **errno** to **ENOMEM** if a memory allocation fails or if the amount of memory requested exceeds **_HEAP_MAXREQ**. For information on this and other error codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

**calloc** calls **malloc** to use the C++ [_set_new_mode](set-new-mode.md) function to set the new handler mode. The new handler mode indicates whether, on failure, **malloc** is to call the new handler routine as set by [_set_new_handler](set-new-handler.md). By default, **malloc** does not call the new handler routine on failure to allocate memory. You can override this default behavior so that, when **calloc** fails to allocate memory, **malloc** calls the new handler routine in the same way that the **new** operator does when it fails for the same reason. To override the default, call

```C
_set_new_mode(1);
```

early in your program, or link with NEWMODE.OBJ (see [Link Options](../../c-runtime-library/link-options.md)).

When the application is linked with a debug version of the C run-time libraries, **calloc** resolves to [_calloc_dbg](calloc-dbg.md). For more information about how the heap is managed during the debugging process, see [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details).

**calloc** is marked `__declspec(noalias)` and `__declspec(restrict)`, meaning that the function is guaranteed not to modify global variables, and that the pointer returned is not aliased. For more information, see [noalias](../../cpp/noalias.md) and [restrict](../../cpp/restrict.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**calloc**|\<stdlib.h> and \<malloc.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

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

[Memory Allocation](../../c-runtime-library/memory-allocation.md)<br/>
[free](free.md)<br/>
[malloc](malloc.md)<br/>
[realloc](realloc.md)<br/>
