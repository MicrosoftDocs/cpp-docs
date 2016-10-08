---
title: "malloc"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - malloc
apilocation: 
  - msvcrt.dll
  - msvcr80.dll
  - msvcr90.dll
  - msvcr100.dll
  - msvcr100_clr0400.dll
  - msvcr110.dll
  - msvcr110_clr0400.dll
  - msvcr120.dll
  - msvcr120_clr0400.dll
  - ucrtbase.dll
  - api-ms-win-crt-heap-l1-1-0.dll
apitype: DLLExport
ms.assetid: 144fcee2-be34-4a03-bb7e-ed6d4b99eea0
caps.latest.revision: 20
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# malloc
Allocates memory blocks.  
  
## Syntax  
  
```  
void *malloc(  
   size_t size   
);  
```  
  
#### Parameters  
 `size`  
 Bytes to allocate.  
  
## Return Value  
 `malloc` returns a void pointer to the allocated space, or `NULL` if there is insufficient memory available. To return a pointer to a type other than `void`, use a type cast on the return value. The storage space pointed to by the return value is guaranteed to be suitably aligned for storage of any type of object that has an alignment requirement less than or equal to that of the fundamental alignment. (In Visual C++, the fundamental alignment is the alignment that's required for a `double`, or 8 bytes. In code that targets 64-bit platforms, it’s 16 bytes.) Use [_aligned_malloc](../VS_visualcpp/_aligned_malloc.md) to allocate storage for objects that have a larger alignment requirement—for example, the SSE types [__m128](../VS_visualcpp/__m128.md) and `__m256`, and types that are declared by using `__declspec(align(``n``))` where `n` is greater than 8. If `size` is 0, `malloc` allocates a zero-length item in the heap and returns a valid pointer to that item. Always check the return from `malloc`, even if the amount of memory requested is small.  
  
## Remarks  
 The `malloc` function allocates a memory block of at least `size` bytes. The block may be larger than `size` bytes because of the space that's required for alignment and maintenance information.  
  
 `malloc` sets `errno` to `ENOMEM` if a memory allocation fails or if the amount of memory requested exceeds `_HEAP_MAXREQ`. For information about this and other error codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md).  
  
 The startup code uses `malloc` to allocate storage for the `_environ`, `envp`, and `argv` variables. The following functions and their wide-character counterparts also call `malloc`.  
  
|||||  
|-|-|-|-|  
|[calloc](../VS_visualcpp/calloc.md)|[fscanf](../VS_visualcpp/fscanf--_fscanf_l--fwscanf--_fwscanf_l.md)|[_getw](../VS_visualcpp/_getw.md)|[setvbuf](../VS_visualcpp/setvbuf.md)|  
|[_exec functions](../VS_visualcpp/_exec--_wexec-Functions.md)|[fseek](../VS_visualcpp/fseek--_fseeki64.md)|[_popen](../VS_visualcpp/_popen--_wpopen.md)|[_spawn functions](../VS_visualcpp/_spawn--_wspawn-Functions.md)|  
|[fgetc](../VS_visualcpp/fgetc--fgetwc.md)|[fsetpos](../VS_visualcpp/fsetpos.md)|[printf](../VS_visualcpp/printf--_printf_l--wprintf--_wprintf_l.md)|[_strdup](../VS_visualcpp/_strdup--_wcsdup--_mbsdup.md)|  
|[_fgetchar](../VS_visualcpp/fgetc--fgetwc.md)|[_fullpath](../VS_visualcpp/_fullpath--_wfullpath.md)|[putc](../VS_visualcpp/putc--putwc.md)|[system](../VS_visualcpp/system--_wsystem.md)|  
|[fgets](../VS_visualcpp/fgets--fgetws.md)|[fwrite](../VS_visualcpp/fwrite.md)|[putchar](../VS_visualcpp/putc--putwc.md)|[_tempnam](../VS_visualcpp/_tempnam--_wtempnam--tmpnam--_wtmpnam.md)|  
|[fprintf](../VS_visualcpp/fprintf--_fprintf_l--fwprintf--_fwprintf_l.md)|[getc](../VS_visualcpp/getc--getwc.md)|[_putenv](../VS_visualcpp/_putenv--_wputenv.md)|[ungetc](../VS_visualcpp/ungetc--ungetwc.md)|  
|[fputc](../VS_visualcpp/fputc--fputwc.md)|[getchar](../VS_visualcpp/getc--getwc.md)|[puts](../VS_visualcpp/puts--_putws.md)|[vfprintf](../VS_visualcpp/vfprintf--_vfprintf_l--vfwprintf--_vfwprintf_l.md)|  
|[_fputchar](../VS_visualcpp/fputc--fputwc.md)|[_getcwd](../VS_visualcpp/_getcwd--_wgetcwd.md)|[_putw](../VS_visualcpp/_putw.md)|[vprintf](../VS_visualcpp/vprintf--_vprintf_l--vwprintf--_vwprintf_l.md)|  
|[fputs](../VS_visualcpp/fputs--fputws.md)|[_getdcwd](../VS_visualcpp/_getcwd--_wgetcwd.md)|[scanf](../VS_visualcpp/scanf--_scanf_l--wscanf--_wscanf_l.md)||  
|[fread](../VS_visualcpp/fread.md)|[gets](../VS_visualcpp/gets--_getws.md)|[_searchenv](../VS_visualcpp/_searchenv--_wsearchenv.md)||  
  
 The C++ [_set_new_mode](../VS_visualcpp/_set_new_mode.md) function sets the new handler mode for `malloc`. The new handler mode indicates whether, on failure, `malloc` is to call the new handler routine as set by [_set_new_handler](../VS_visualcpp/_set_new_handler.md). By default, `malloc` does not call the new handler routine on failure to allocate memory. You can override this default behavior so that, when `malloc` fails to allocate memory, `malloc` calls the new handler routine in the same way that the `new` operator does when it fails for the same reason. To override the default, call  
  
```cpp  
_set_new_mode(1)  
```  
  
 early in your program, or link with NEWMODE.OBJ (see [Link Options](../VS_visualcpp/Link-Options.md)).  
  
 When the application is linked with a debug version of the C run-time libraries, `malloc` resolves to [_malloc_dbg](../VS_visualcpp/_malloc_dbg.md). For more information about how the heap is managed during the debugging process, see [CRT Debug Heap Details](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
 `malloc` is marked `__declspec(noalias)` and `__declspec(restrict)`; this means that the function is guaranteed not to modify global variables, and that the pointer returned is not aliased. For more information, see [noalias](../VS_visualcpp/noalias.md) and [restrict](../VS_visualcpp/restrict.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`malloc`|<stdlib.h> and <malloc.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../VS_visualcpp/CRT-Library-Features.md).  
  
## Example  
  
```c  
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
  
 **Memory space allocated for path name**  
**Memory freed**   
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Memory Allocation](../VS_visualcpp/Memory-Allocation.md)   
 [calloc](../VS_visualcpp/calloc.md)   
 [free](../VS_visualcpp/free.md)   
 [realloc](../VS_visualcpp/realloc.md)   
 [_aligned_malloc](../VS_visualcpp/_aligned_malloc.md)