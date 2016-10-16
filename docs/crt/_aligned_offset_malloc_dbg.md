---
title: "_aligned_offset_malloc_dbg"
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
  - "_aligned_offset_malloc_dbg"
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
  - "_aligned_offset_malloc_dbg"
  - "aligned_offset_malloc_dbg"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_aligned_offset_malloc_dbg function"
  - "aligned_offset_malloc_dbg function"
ms.assetid: 6c242307-c59e-4d63-aae5-d8cbec8e021c
caps.latest.revision: 8
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
# _aligned_offset_malloc_dbg
Allocates memory on a specified alignment boundary (debug version only).  
  
## Syntax  
  
```  
void * _aligned_offset_malloc_dbg(  
   size_t size,   
   size_t alignment,   
   size_t offset,  
   const char *filename,  
   int linenumber   
);  
```  
  
#### Parameters  
 [in] `size`  
 The size of the requested memory allocation.  
  
 [in] `alignment`  
 The alignment value, which must be an integer power of 2.  
  
 [in] `offset`  
 The offset into the memory allocation to force the alignment.  
  
 [in] `filename`  
 Pointer to the name of the source file that requested the allocation operation or NULL.  
  
 [in] `linenumber`  
 Line number in the source file where the allocation operation was requested or NULL.  
  
## Return Value  
 A pointer to the memory block that was allocated or `NULL` if the operation failed.  
  
## Remarks  
 `_aligned_offset_malloc_dbg` is a debug version of the [_aligned_offset_malloc](../crt/_aligned_offset_malloc.md) function. When [_DEBUG](../crt/_debug.md) is not defined, each call to `_aligned_offset_malloc_dbg` is reduced to a call to `_aligned_offset_malloc`. Both `_aligned_offset_malloc` and `_aligned_offset_malloc_dbg` allocate a block of memory in the base heap, but `_aligned_offset_malloc_dbg` offers several debugging features: buffers on either side of the user portion of the block to test for leaks, a block type parameter to track specific allocation types, and `filename`/`linenumber` information to determine the origin of allocation requests.  
  
 `_aligned_offset_malloc_dbg` allocates the memory block with slightly more space than the requested `size`. The additional space is used by the debug heap manager to link the debug memory blocks and to provide the application with debug header information and overwrite buffers. When the block is allocated, the user portion of the block is filled with the value 0xCD and each of the overwrite buffers are filled with 0xFD.  
  
 `_aligned_offset_malloc_dbg` is useful in situations where alignment is needed on a nested element; for example, if alignment was needed on a nested class.  
  
 `_aligned_offset_malloc_dbg` is based on `malloc`; for more information, see [malloc](../crt/malloc.md).  
  
 This function sets `errno` to `ENOMEM` if the memory allocation failed or if the requested size was greater than `_HEAP_MAXREQ`. For more information about `errno`, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../crt/errno--_doserrno--_sys_errlist--and-_sys_nerr.md). Also, `_aligned_offset_malloc` validates its parameters. If `alignment` is not a power of 2 or if `offset` is greater than or equal to `size` and nonzero, this function invokes the invalid parameter handler, as described in [Parameter Validation](../crt/parameter-validation.md). If execution is allowed to continue, this function returns `NULL` and sets `errno` to `EINVAL`.  
  
 For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
 For information about the allocation block types and how they are used, see [Types of blocks on the debug heap](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Types_of_blocks_on_the_debug_heap).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_aligned_offset_malloc_dbg`|\<crtdbg.h>|  
  
 For more compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## Libraries  
 Debug versions of [C run-time libraries](../crt/crt-library-features.md) only.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Debug Routines](../crt/debug-routines.md)