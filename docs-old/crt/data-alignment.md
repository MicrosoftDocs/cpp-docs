---
title: "Data Alignment"
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
  - "data.alignment"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "data alignment [C++]"
ms.assetid: 35ac3d2d-a4b3-421b-954f-b7372b1f18e1
caps.latest.revision: 9
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
# Data Alignment
The following C run-time functions support data alignment.  
  
### Data-Alignment Routines  
  
|Routine|Use|.NET Framework equivalent|  
|-------------|---------|-------------------------------|  
|[_aligned_free](../crt/_aligned_free.md)|Frees a block of memory that was allocated with [_aligned_malloc](../crt/_aligned_malloc.md)or [_aligned_offset_malloc](../crt/_aligned_offset_malloc.md).|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_aligned_free_dbg](../crt/_aligned_free_dbg.md)|Frees a block of memory that was allocated with [_aligned_malloc](../crt/_aligned_malloc.md) or [_aligned_offset_malloc](../crt/_aligned_offset_malloc.md) (debug only).|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_aligned_malloc](../crt/_aligned_malloc.md)|Allocates memory on a specified alignment boundary.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_aligned_malloc_dbg](../crt/_aligned_malloc_dbg.md)|Allocates memory on a specified alignment boundary with additional space for a debugging header and overwrite buffers (debug version only).|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_aligned_msize](../crt/_aligned_msize.md)|Returns the size of a memory block allocated in the heap.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_aligned_msize_dbg](../crt/_aligned_msize_dbg.md)|Returns the size of a memory block allocated in the heap (debug version only).|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_aligned_offset_malloc](../crt/_aligned_offset_malloc.md)|Allocates memory on a specified alignment boundary.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_aligned_offset_malloc_dbg](../crt/_aligned_offset_malloc_dbg.md)|Allocates memory on a specified alignment boundary (debug version only).|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_aligned_offset_realloc](../crt/_aligned_offset_realloc.md)|Changes the size of a memory block that was allocated with [_aligned_malloc](../crt/_aligned_malloc.md) or [_aligned_offset_malloc](../crt/_aligned_offset_malloc.md).|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_aligned_offset_realloc_dbg](../crt/_aligned_offset_realloc_dbg.md)|Changes the size of a memory block that was allocated with [_aligned_malloc](../crt/_aligned_malloc.md) or [_aligned_offset_malloc](../crt/_aligned_offset_malloc.md) (debug version only).|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_aligned_offset_recalloc](../crt/_aligned_offset_recalloc.md)|Changes the size of a memory block that was allocated with [_aligned_malloc](../crt/_aligned_malloc.md) or [_aligned_offset_malloc](../crt/_aligned_offset_malloc.md) and initializes the memory to 0.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_aligned_offset_recalloc_dbg](../crt/_aligned_offset_recalloc_dbg.md)|Changes the size of a memory block that was allocated with [_aligned_malloc](../crt/_aligned_malloc.md) or [_aligned_offset_malloc](../crt/_aligned_offset_malloc.md) and initializes the memory to 0 (debug version only).|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_aligned_realloc](../crt/_aligned_realloc.md)|Changes the size of a memory block that was allocated with [_aligned_malloc](../crt/_aligned_malloc.md) or [_aligned_offset_malloc](../crt/_aligned_offset_malloc.md).|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_aligned_realloc_dbg](../crt/_aligned_realloc_dbg.md)|Changes the size of a memory block that was allocated with [_aligned_malloc](../crt/_aligned_malloc.md) or [_aligned_offset_malloc](../crt/_aligned_offset_malloc.md) (debug version only).|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_aligned_recalloc](../crt/_aligned_recalloc.md)|Changes the size of a memory block that was allocated with [_aligned_malloc](../crt/_aligned_malloc.md) or [_aligned_offset_malloc](../crt/_aligned_offset_malloc.md) and initializes the memory to 0.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_aligned_recalloc_dbg](../crt/_aligned_recalloc_dbg.md)|Changes the size of a memory block that was allocated with [_aligned_malloc](../crt/_aligned_malloc.md) or [_aligned_offset_malloc](../crt/_aligned_offset_malloc.md) and initializes the memory to 0 (debug version only).|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
  
## See Also  
 [Run-Time Routines by Category](../crt/run-time-routines-by-category.md)