---
title: "Memory Allocation | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
author: "corob-msft"
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
|[_alloca](../c-runtime-library/reference/alloca.md), [_malloca](../c-runtime-library/reference/malloca.md)|Allocate memory from stack|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[calloc](../c-runtime-library/reference/calloc.md)|Allocate storage for array, initializing every byte in allocated block to 0|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_calloc_dbg](../c-runtime-library/reference/calloc-dbg.md)|Debug version of `calloc`; only available in the debug versions of the run-time libraries|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[operator delete](../c-runtime-library/operator-delete-crt.md)|Free allocated block|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[operator delete&#91;&#93;](../c-runtime-library/delete-operator-crt.md)|Free allocated block|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_expand](../c-runtime-library/reference/expand.md)|Expand or shrink block of memory without moving it|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_expand_dbg](../c-runtime-library/reference/expand-dbg.md)|Debug version of `_expand`; only available in the debug versions of the run-time libraries|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[free](../c-runtime-library/reference/free.md)|Free allocated block|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_free_dbg](../c-runtime-library/reference/free-dbg.md)|Debug version of `free`; only available in the debug versions of the run-time libraries|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_freea](../c-runtime-library/reference/freea.md)|Free allocated block from stack|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_get_heap_handle](../c-runtime-library/reference/get-heap-handle.md)|Get Win32 HANDLE of the CRT heap.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_heapadd](../c-runtime-library/heapadd.md)|Add memory to heap|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_heapchk](../c-runtime-library/reference/heapchk.md)|Check heap for consistency|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_heapmin](../c-runtime-library/reference/heapmin.md)|Release unused memory in heap|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_heapset](../c-runtime-library/heapset.md)|Fill free heap entries with specified value|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_heapwalk](../c-runtime-library/reference/heapwalk.md)|Return information about each entry in heap|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[malloc](../c-runtime-library/reference/malloc.md)|Allocate block of memory from heap|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_malloc_dbg](../c-runtime-library/reference/malloc-dbg.md)|Debug version of `malloc`; only available in the debug versions of the run-time libraries|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_msize](../c-runtime-library/reference/msize.md)|Return size of allocated block|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_msize_dbg](../c-runtime-library/reference/msize-dbg.md)|Debug version of `_msize`; only available in the debug versions of the run-time libraries|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[new](../c-runtime-library/operator-new-crt.md)|Allocate block of memory from heap|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[new&#91;&#93;](../c-runtime-library/new-operator-crt.md)|Allocate block of memory from heap|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_query_new_handler](../c-runtime-library/reference/query-new-handler.md)|Return address of current new handler routine as set by `_set_new_handler`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_query_new_mode](../c-runtime-library/reference/query-new-mode.md)|Return integer indicating new handler mode set by `_set_new_mode` for `malloc`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[realloc](../c-runtime-library/reference/realloc.md)|Reallocate block to new size|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_realloc_dbg](../c-runtime-library/reference/realloc-dbg.md)|Debug version of `realloc`; only available in the debug versions of the run-time libraries|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_set_new_handler](../c-runtime-library/reference/set-new-handler.md)|Enable error-handling mechanism when `new` operator fails (to allocate memory) and enable compilation of Standard Template Libraries (STL)|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_set_new_mode](../c-runtime-library/reference/set-new-mode.md)|Set new handler mode for `malloc`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
  
## See Also  
 [Run-Time Routines by Category](../c-runtime-library/run-time-routines-by-category.md)