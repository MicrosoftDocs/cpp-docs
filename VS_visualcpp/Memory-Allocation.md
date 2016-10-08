---
title: "Memory Allocation"
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
ms.assetid: b4470556-a128-4782-9943-2ccf7a7d9979
caps.latest.revision: 10
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
# Memory Allocation
Use these routines to allocate, free, and reallocate memory.  
  
### Memory-Allocation Routines  
  
|Routine|Use|.NET Framework equivalent|  
|-------------|---------|-------------------------------|  
|[_alloca](../VS_visualcpp/_alloca.md), [_malloca](../VS_visualcpp/_malloca.md)|Allocate memory from stack|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[calloc](../VS_visualcpp/calloc.md)|Allocate storage for array, initializing every byte in allocated block to 0|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_calloc_dbg](../VS_visualcpp/_calloc_dbg.md)|Debug version of `calloc`; only available in the debug versions of the run-time libraries|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[operator delete](../VS_visualcpp/operator-delete--CRT-.md)|Free allocated block|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[operator delete&#91;&#93;](../VS_visualcpp/operator-delete-CRT-.md)|Free allocated block|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_expand](../VS_visualcpp/_expand.md)|Expand or shrink block of memory without moving it|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_expand_dbg](../VS_visualcpp/_expand_dbg.md)|Debug version of `_expand`; only available in the debug versions of the run-time libraries|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[free](../VS_visualcpp/free.md)|Free allocated block|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_free_dbg](../VS_visualcpp/_free_dbg.md)|Debug version of `free`; only available in the debug versions of the run-time libraries|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_freea](../VS_visualcpp/_freea.md)|Free allocated block from stack|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_get_heap_handle](../VS_visualcpp/_get_heap_handle.md)|Get Win32 HANDLE of the CRT heap.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_heapadd](../VS_visualcpp/_heapadd.md)|Add memory to heap|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_heapchk](../VS_visualcpp/_heapchk.md)|Check heap for consistency|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_heapmin](../VS_visualcpp/_heapmin.md)|Release unused memory in heap|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_heapset](../VS_visualcpp/_heapset.md)|Fill free heap entries with specified value|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_heapwalk](../VS_visualcpp/_heapwalk.md)|Return information about each entry in heap|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[malloc](../VS_visualcpp/malloc.md)|Allocate block of memory from heap|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_malloc_dbg](../VS_visualcpp/_malloc_dbg.md)|Debug version of `malloc`; only available in the debug versions of the run-time libraries|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_msize](../VS_visualcpp/_msize.md)|Return size of allocated block|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_msize_dbg](../VS_visualcpp/_msize_dbg.md)|Debug version of `_msize`; only available in the debug versions of the run-time libraries|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[new](../VS_visualcpp/operator-new--CRT-.md)|Allocate block of memory from heap|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[new&#91;&#93;](../VS_visualcpp/operator-new-CRT-.md)|Allocate block of memory from heap|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_query_new_handler](../VS_visualcpp/_query_new_handler.md)|Return address of current new handler routine as set by `_set_new_handler`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_query_new_mode](../VS_visualcpp/_query_new_mode.md)|Return integer indicating new handler mode set by `_set_new_mode` for `malloc`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[realloc](../VS_visualcpp/realloc.md)|Reallocate block to new size|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_realloc_dbg](../VS_visualcpp/_realloc_dbg.md)|Debug version of `realloc`; only available in the debug versions of the run-time libraries|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_set_new_handler](../VS_visualcpp/_set_new_handler.md)|Enable error-handling mechanism when `new` operator fails (to allocate memory) and enable compilation of Standard Template Libraries (STL)|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_set_new_mode](../VS_visualcpp/_set_new_mode.md)|Set new handler mode for `malloc`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
  
## See Also  
 [Run-Time Routines by Category](../VS_visualcpp/Run-Time-Routines-by-Category.md)