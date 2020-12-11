---
description: "Learn more about: malloc"
title: "malloc"
ms.date: "4/2/2020"
api_name: ["malloc", "_o_malloc"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["malloc"]
helpviewer_keywords: ["malloc function", "memory allocation"]
ms.assetid: 144fcee2-be34-4a03-bb7e-ed6d4b99eea0
---
# malloc

Allocates memory blocks.

## Syntax

```C
void *malloc(
   size_t size
);
```

### Parameters

*size*<br/>
Bytes to allocate.

## Return Value

**malloc** returns a void pointer to the allocated space, or **NULL** if there is insufficient memory available. To return a pointer to a type other than **`void`**, use a type cast on the return value. The storage space pointed to by the return value is guaranteed to be suitably aligned for storage of any type of object that has an alignment requirement less than or equal to that of the fundamental alignment. (In Visual C++, the fundamental alignment is the alignment that's required for a **`double`**, or 8 bytes. In code that targets 64-bit platforms, it’s 16 bytes.) Use [_aligned_malloc](aligned-malloc.md) to allocate storage for objects that have a larger alignment requirement—for example, the SSE types [__m128](../../cpp/m128.md) and **`__m256`**, and types that are declared by using `__declspec(align( n ))` where **n** is greater than 8. If *size* is 0, **malloc** allocates a zero-length item in the heap and returns a valid pointer to that item. Always check the return from **malloc**, even if the amount of memory requested is small.

## Remarks

The **malloc** function allocates a memory block of at least *size* bytes. The block may be larger than *size* bytes because of the space that's required for alignment and maintenance information.

**malloc** sets **errno** to **ENOMEM** if a memory allocation fails or if the amount of memory requested exceeds **_HEAP_MAXREQ**. For information about this and other error codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

The startup code uses **malloc** to allocate storage for the **_environ**, *envp*, and *argv* variables. The following functions and their wide-character counterparts also call **malloc**.

:::row:::
   :::column span="":::
      [calloc](calloc.md)\
      [_exec functions](../../c-runtime-library/exec-wexec-functions.md)\
      [fgetc](fgetc-fgetwc.md)\
      [_fgetchar](fgetc-fgetwc.md)\
      [fgets](fgets-fgetws.md)\
      [fprintf](fprintf-fprintf-l-fwprintf-fwprintf-l.md)\
      [fputc](fputc-fputwc.md)\
      [_fputchar](fputc-fputwc.md)\
      [fputs](fputs-fputws.md)\
      [fread](fread.md)
   :::column-end:::
   :::column span="":::
      [fscanf](fscanf-fscanf-l-fwscanf-fwscanf-l.md)\
      [fseek](fseek-fseeki64.md)\
      [fsetpos](fsetpos.md)\
      [_fullpath](fullpath-wfullpath.md)\
      [fwrite](fwrite.md)\
      [getc](getc-getwc.md)\
      [getchar](getc-getwc.md)\
      [_getcwd](getcwd-wgetcwd.md)\
      [_getdcwd](getcwd-wgetcwd.md)\
      [gets](../../c-runtime-library/gets-getws.md)
   :::column-end:::
   :::column span="":::
      [_getw](getw.md)\
      [_popen](popen-wpopen.md)\
      [printf](printf-printf-l-wprintf-wprintf-l.md)\
      [putc](putc-putwc.md)\
      [putchar](putc-putwc.md)\
      [_putenv](putenv-wputenv.md)\
      [puts](puts-putws.md)\
      [_putw](putw.md)\
      [scanf](scanf-scanf-l-wscanf-wscanf-l.md)
   :::column-end:::
   :::column span="":::
      [_searchenv](searchenv-wsearchenv.md)\
      [setvbuf](setvbuf.md)\
      [_spawn functions](../../c-runtime-library/spawn-wspawn-functions.md)\
      [_strdup](strdup-wcsdup-mbsdup.md)\
      [system](system-wsystem.md)\
      [_tempnam](tempnam-wtempnam-tmpnam-wtmpnam.md)\
      [ungetc](ungetc-ungetwc.md)\
      [vfprintf](vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md)\
      [vprintf](vprintf-vprintf-l-vwprintf-vwprintf-l.md)
   :::column-end:::
:::row-end:::

The C++ [_set_new_mode](set-new-mode.md) function sets the new handler mode for **malloc**. The new handler mode indicates whether, on failure, **malloc** is to call the new handler routine as set by [_set_new_handler](set-new-handler.md). By default, **malloc** does not call the new handler routine on failure to allocate memory. You can override this default behavior so that, when **malloc** fails to allocate memory, **malloc** calls the new handler routine in the same way that the **`new`** operator does when it fails for the same reason. To override the default, call `_set_new_mode(1)` early in your program, or link with NEWMODE.OBJ (see [Link Options](../../c-runtime-library/link-options.md)).

When the application is linked with a debug version of the C run-time libraries, **malloc** resolves to [_malloc_dbg](malloc-dbg.md). For more information about how the heap is managed during the debugging process, see [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

**malloc** is marked `__declspec(noalias)` and `__declspec(restrict)`; this means that the function is guaranteed not to modify global variables, and that the pointer returned is not aliased. For more information, see [noalias](../../cpp/noalias.md) and [restrict](../../cpp/restrict.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**malloc**|\<stdlib.h> and \<malloc.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_malloc.c
// This program allocates memory with
// malloc, then frees the memory with free.

#include <stdlib.h>   // For _MAX_PATH definition
#include <stdio.h>
#include <malloc.h>

int main( void )
{
   char *string;

   // Allocate space for a path name
   string = malloc( _MAX_PATH );

   // In a C++ file, explicitly cast malloc's return.  For example,
   // string = (char *)malloc( _MAX_PATH );

   if( string == NULL )
      printf( "Insufficient memory available\n" );
   else
   {
      printf( "Memory space allocated for path name\n" );
      free( string );
      printf( "Memory freed\n" );
   }
}
```

```Output
Memory space allocated for path name
Memory freed
```

## See also

[Memory Allocation](../../c-runtime-library/memory-allocation.md)<br/>
[calloc](calloc.md)<br/>
[free](free.md)<br/>
[realloc](realloc.md)<br/>
[_aligned_malloc](aligned-malloc.md)<br/>
