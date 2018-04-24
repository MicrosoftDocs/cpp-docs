---
title: "_aligned_msize_dbg | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "_aligned_msize_dbg"
api_location: 
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
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "_aligned_msize_dbg"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_aligned_msize_dbg"
ms.assetid: f1c44af0-3f66-4033-81d1-d71d3afecba0
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _aligned_msize_dbg
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_aligned_msize_dbg](https://docs.microsoft.com/cpp/c-runtime-library/reference/aligned-msize-dbg).  
  
Returns the size of a memory block allocated in the heap (debug version only).  
  
## Syntax  
  
```  
size_t _aligned_msize_dbg(  
   void *memblock,  
   size_t alignment,  
   size_t offset  
);  
```  
  
#### Parameters  
 [in] `memblock`  
 Pointer to the memory block.  
  
 [in] `alignment`  
 The alignment value, which must be an integer power of 2.  
  
 [in] `offset`  
 The offset into the memory allocation to force the alignment.  
  
## Return Value  
 Returns the size (in bytes) as an unsigned integer.  
  
## Remarks  
 The `alignment` and `offset` values must be the same as the values passed to the function that allocated the block.  
  
 `_aligned_msize_dbg` is a debug version of the [_aligned_msize](../../c-runtime-library/reference/aligned-msize.md) function. When [_DEBUG](../../c-runtime-library/debug.md) is not defined, each call to `_aligned_msize_dbg` is reduced to a call to `_aligned_msize`. Both `_aligned_msize` and `_aligned_msize_dbg` calculate the size of a memory block in the base heap, but `_aligned_msize_dbg` adds a debugging feature: It includes the buffers on either side of the user portion of the memory block in the returned size.  
  
 This function validates its parameter. If `memblock` is a null pointer or `alignment` is not a power of 2, `_msize` invokes an invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If the error is handled, the function sets `errno` to `EINVAL` and returns -1.  
  
 For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](../Topic/CRT%20Debug%20Heap%20Details.md). For information about the allocation block types and how they are used, see [Types of blocks on the debug heap](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Types_of_blocks_on_the_debug_heap). For information about the differences between calling a standard heap function and its debug version in a debug build of an application, see [Debug Versions of Heap Allocation Functions](../Topic/Debug%20Versions%20of%20Heap%20Allocation%20Functions.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_aligned_msize_dbg`|\<crtdbg.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Libraries  
 Debug versions of [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`.  
  
## See Also  
 [Memory Allocation](../../c-runtime-library/memory-allocation.md)





