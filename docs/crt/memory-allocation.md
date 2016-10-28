---
title: "Memory Allocation"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "c.memory"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "memory allocation, routines"
  - "memory, managing"
  - "memory, allocation"
ms.assetid: b4470556-a128-4782-9943-2ccf7a7d9979
caps.latest.revision: 10
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Memory Allocation
Use these routines to allocate, free, and reallocate memory.  
  
### Memory-Allocation Routines  
  
|Routine|Use|.NET Framework equivalent|  
|-------------|---------|-------------------------------|  
|[_alloca](../crt/_alloca.md), [_malloca](../crt/_malloca.md)|Allocate memory from stack|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[calloc](../crt/calloc.md)|Allocate storage for array, initializing every byte in allocated block to 0|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_calloc_dbg](../crt/_calloc_dbg.md)|Debug version of `calloc`; only available in the debug versions of the run-time libraries|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[operator delete](../crt/operator-delete--crt-.md)|Free allocated block|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[operator delete&#91;&#93;](../crt/operator-delete-crt-.md)|Free allocated block|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_expand](../crt/_expand.md)|Expand or shrink block of memory without moving it|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_expand_dbg](../crt/_expand_dbg.md)|Debug version of `_expand`; only available in the debug versions of the run-time libraries|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[free](../crt/free.md)|Free allocated block|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_free_dbg](../crt/_free_dbg.md)|Debug version of `free`; only available in the debug versions of the run-time libraries|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_freea](../crt/_freea.md)|Free allocated block from stack|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_get_heap_handle](../crt/_get_heap_handle.md)|Get Win32 HANDLE of the CRT heap.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_heapadd](../crt/_heapadd.md)|Add memory to heap|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_heapchk](../crt/_heapchk.md)|Check heap for consistency|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_heapmin](../crt/_heapmin.md)|Release unused memory in heap|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_heapset](../crt/_heapset.md)|Fill free heap entries with specified value|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_heapwalk](../crt/_heapwalk.md)|Return information about each entry in heap|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[malloc](../crt/malloc.md)|Allocate block of memory from heap|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_malloc_dbg](../crt/_malloc_dbg.md)|Debug version of `malloc`; only available in the debug versions of the run-time libraries|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_msize](../crt/_msize.md)|Return size of allocated block|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_msize_dbg](../crt/_msize_dbg.md)|Debug version of `_msize`; only available in the debug versions of the run-time libraries|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[new](../crt/operator-new--crt-.md)|Allocate block of memory from heap|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[new&#91;&#93;](../crt/operator-new-crt-.md)|Allocate block of memory from heap|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_query_new_handler](../crt/_query_new_handler.md)|Return address of current new handler routine as set by `_set_new_handler`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_query_new_mode](../crt/_query_new_mode.md)|Return integer indicating new handler mode set by `_set_new_mode` for `malloc`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[realloc](../crt/realloc.md)|Reallocate block to new size|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_realloc_dbg](../crt/_realloc_dbg.md)|Debug version of `realloc`; only available in the debug versions of the run-time libraries|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_set_new_handler](../crt/_set_new_handler.md)|Enable error-handling mechanism when `new` operator fails (to allocate memory) and enable compilation of Standard Template Libraries (STL)|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_set_new_mode](../crt/_set_new_mode.md)|Set new handler mode for `malloc`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
  
## See Also  
 [Run-Time Routines by Category](../crt/run-time-routines-by-category.md)