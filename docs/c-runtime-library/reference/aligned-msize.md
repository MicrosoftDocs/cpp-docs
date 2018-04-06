---
title: "_aligned_msize | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["_aligned_msize"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_aligned_msize", "aligned_msize"]
dev_langs: ["C++"]
helpviewer_keywords: ["aligned_msize function", "_aligned_msize function"]
ms.assetid: 10995edc-2110-4212-9ca9-5e0220a464f4
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# _aligned_msize
Returns the size of a memory block allocated in the heap.  
  
## Syntax  
  
```  
size_t _msize(  
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
 The `_aligned_msize` function returns the size, in bytes, of the memory block allocated by a call to [_aligned_malloc](../../c-runtime-library/reference/aligned-malloc.md) or [_aligned_realloc](../../c-runtime-library/reference/aligned-realloc.md). The `alignment` and `offset` values must be the same as the values passed to the function that allocated the block.  
  
 When the application is linked with a debug version of the C run-time libraries, `_aligned_msize` resolves to [_aligned_msize_dbg](../../c-runtime-library/reference/aligned-msize-dbg.md). For more information about how the heap is managed during the debugging process, see [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details).  
  
 This function validates its parameter. If `memblock` is a null pointer or `alignment` is not a power of 2, `_msize` invokes an invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If the error is handled, the function sets `errno` to `EINVAL` and returns -1.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_msize`|\<malloc.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## See Also  
 [Memory Allocation](../../c-runtime-library/memory-allocation.md)