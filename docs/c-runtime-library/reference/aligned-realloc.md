---
title: "_aligned_realloc | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_aligned_realloc"
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
  - "api-ms-win-crt-heap-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_aligned_realloc"
  - "aligned_realloc"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "aligned_realloc function"
  - "_aligned_realloc function"
ms.assetid: 80ce96e8-6087-416f-88aa-4dbb8cb1d218
caps.latest.revision: 17
author: "corob-msft"
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
# _aligned_realloc
Changes the size of a memory block that was allocated with [_aligned_malloc](../../c-runtime-library/reference/aligned-malloc.md) or [_aligned_offset_malloc](../../c-runtime-library/reference/aligned-offset-malloc.md).  
  
## Syntax  
  
```  
void * _aligned_realloc(  
   void *memblock,   
   size_t size,   
   size_t alignment  
);  
```  
  
#### Parameters  
 [in] `memblock`  
 The current memory block pointer.  
  
 [in] `size`  
 The size of the requested memory allocation.  
  
 [in] `alignment`  
 The alignment value, which must be an integer power of 2.  
  
## Return Value  
 `_aligned_realloc` returns a void pointer to the reallocated (and possibly moved) memory block. The return value is `NULL` if the size is zero and the buffer argument is not `NULL`, or if there is not enough available memory to expand the block to the given size. In the first case, the original block is freed. In the second, the original block is unchanged. The return value points to a storage space that is guaranteed to be suitably aligned for storage of any type of object. To get a pointer to a type other than void, use a type cast on the return value.  
  
 It is an error to reallocate memory and change the alignment of a block.  
  
## Remarks  
 `_aligned_realloc` is based on `malloc`. For more information about using `_aligned_offset_malloc`, see [malloc](../../c-runtime-library/reference/malloc.md).  
  
 This function sets `errno` to `ENOMEM` if the memory allocation failed or if the requested size was greater than `_HEAP_MAXREQ`. For more information about `errno`, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). Also, `_aligned_realloc` validates its parameters. If `alignment` is not a power of 2, this function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function returns `NULL` and sets `errno` to `EINVAL`.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_aligned_realloc`|\<malloc.h>|  
  
## Example  
 For more information, see [_aligned_malloc](../../c-runtime-library/reference/aligned-malloc.md).  
  
## See Also  
 [Data Alignment](../../c-runtime-library/data-alignment.md)