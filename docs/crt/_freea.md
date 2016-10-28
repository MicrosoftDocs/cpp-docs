---
title: "_freea"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "_freea"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
apitype: "DLLExport"
f1_keywords: 
  - "freea"
  - "_freea"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_freea function"
  - "freea function"
  - "memory deallocation"
ms.assetid: dcd30584-dd9d-443b-8c4c-13237a1cecac
caps.latest.revision: 18
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# _freea
Deallocates or frees a memory block.  
  
## Syntax  
  
```  
void _freea(   
   void *memblock   
);  
```  
  
#### Parameters  
 `memblock`  
 Previously allocated memory block to be freed.  
  
## Return Value  
 None.  
  
## Remarks  
 The `_freea` function deallocates a memory block (`memblock`) that was previously allocated by a call to [_malloca](../crt/_malloca.md). `_freea` checks to see if the memory was allocated on the heap or the stack. If it was allocated on the stack, `_freea` does nothing. If it was allocated on the heap, the number of freed bytes is equivalent to the number of bytes requested when the block was allocated. If `memblock` is `NULL`, the pointer is ignored and `_freea` immediately returns. Attempting to free an invalid pointer (a pointer to a memory block that was not allocated by `_malloca`) might affect subsequent allocation requests and cause errors.  
  
 _`freea` calls `free` internally if it finds that the memory is allocated on the heap. Whether the memory is on the heap or the stack is determined by a marker placed in memory at the address immediately preceding the allocated memory.  
  
 If an error occurs in freeing the memory, `errno` is set with information from the operating system on the nature of the failure. For more information, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../crt/errno--_doserrno--_sys_errlist--and-_sys_nerr.md).  
  
 After a memory block has been freed, [_heapmin](../crt/_heapmin.md) minimizes the amount of free memory on the heap by coalescing the unused regions and releasing them back to the operating system. Freed memory that is not released to the operating system is restored to the free pool and is available for allocation again.  
  
 A call to `_freea` must accompany all calls to `_malloca`. It is also an error to call `_freea` twice on the same memory. When the application is linked with a debug version of the C run-time libraries, particularly with [_malloc_dbg](../crt/_malloc_dbg.md) features enabled by defining `_CRTDBG_MAP_ALLOC`, it is easier to find missing or duplicated calls to `_freea`. For more information about how the heap is managed during the debugging process, see [The CRT Debug Heap](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
 `_freea` is marked `__declspec(noalias)`, meaning that the function is guaranteed not to modify global variables. For more information, see [noalias](../cpp/noalias.md).  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`_freea`|\<stdlib.h> and \<malloc.h>|  
  
 For more compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## Example  
 See the example for [_malloca](../crt/_malloca.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Memory Allocation](../crt/memory-allocation.md)   
 [_malloca](../crt/_malloca.md)   
 [calloc](../crt/calloc.md)   
 [malloc](../crt/malloc.md)   
 [_malloc_dbg](../crt/_malloc_dbg.md)   
 [realloc](../crt/realloc.md)   
 [_free_dbg](../crt/_free_dbg.md)   
 [_heapmin](../crt/_heapmin.md)