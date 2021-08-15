---
description: "Learn more about: _expand"
title: "_expand"
ms.date: "4/2/2020"
api_name: ["_expand", "_o__expand"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_bexpand", "fexpand", "expand", "nexpand", "_fexpand", "_nexpand", "bexpand", "_expand"]
helpviewer_keywords: ["memory blocks, changing size", "_expand function", "expand function"]
ms.assetid: 4ac55410-39c8-45c7-bccd-3f1042ae2ed3
---
# _expand

Changes the size of a memory block.

## Syntax

```C
void *_expand(
   void *memblock,
   size_t size
);
```

### Parameters

*memblock*<br/>
Pointer to previously allocated memory block.

*size*<br/>
New size in bytes.

## Return Value

**_expand** returns a void pointer to the reallocated memory block. **_expand**, unlike **realloc**, cannot move a block to change its size. Thus, if there is sufficient memory available to expand the block without moving it, the *memblock* parameter to **_expand** is the same as the return value.

**_expand** returns **NULL** when an error is detected during its operation. For example, if **_expand** is used to shrink a memory block, it might detect corruption in the small block heap or an invalid block pointer and return **NULL**.

If there is insufficient memory available to expand the block to the given size without moving it, the function returns **NULL**. **_expand** never returns a block expanded to a size less than requested. If a failure occurs, **errno** indicates the nature of the failure. For more information about **errno**, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

The return value points to a storage space that is guaranteed to be suitably aligned for storage of any type of object. To check the new size of the item, use **_msize**. To get a pointer to a type other than **`void`**, use a type cast on the return value.

## Remarks

The **_expand** function changes the size of a previously allocated memory block by trying to expand or contract the block without moving its location in the heap. The *memblock* parameter points to the beginning of the block. The *size* parameter gives the new size of the block, in bytes. The contents of the block are unchanged up to the shorter of the new and old sizes. *memblock* should not be a block that has been freed.

> [!NOTE]
> On 64-bit platforms, **_expand** might not contract the block if the new size is less than the current size; in particular, if the block was less than 16K in size and therefore allocated in the Low Fragmentation Heap, **_expand** leaves the block unchanged and returns *memblock*.

When the application is linked with a debug version of the C run-time libraries, **_expand** resolves to [_expand_dbg](expand-dbg.md). For more information about how the heap is managed during the debugging process, see [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details).

This function validates its parameters. If *memblock* is a null pointer, this function invokes an invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **errno** is set to **EINVAL** and the function returns **NULL**. If *size* is greater than **_HEAP_MAXREQ**, **errno** is set to **ENOMEM** and the function returns **NULL**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**_expand**|\<malloc.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_expand.c

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main( void )
{
   char *bufchar;
   printf( "Allocate a 512 element buffer\n" );
   if( (bufchar = (char *)calloc( 512, sizeof( char ) )) == NULL )
      exit( 1 );
   printf( "Allocated %d bytes at %Fp\n",
         _msize( bufchar ), (void *)bufchar );
   if( (bufchar = (char *)_expand( bufchar, 1024 )) == NULL )
      printf( "Can't expand" );
   else
      printf( "Expanded block to %d bytes at %Fp\n",
            _msize( bufchar ), (void *)bufchar );
   // Free memory
   free( bufchar );
   exit( 0 );
}
```

```Output
Allocate a 512 element buffer
Allocated 512 bytes at 002C12BC
Expanded block to 1024 bytes at 002C12BC
```

## See also

[Memory Allocation](../../c-runtime-library/memory-allocation.md)<br/>
[calloc](calloc.md)<br/>
[free](free.md)<br/>
[malloc](malloc.md)<br/>
[_msize](msize.md)<br/>
[realloc](realloc.md)<br/>
