---
title: "_free_dbg | Microsoft Docs"
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
  - "_free_dbg"
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
  - "_free_dbg"
  - "free_dbg"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "memory blocks, deallocating"
  - "freeing memory"
  - "_free_dbg function"
  - "free_dbg function"
ms.assetid: fc5e8299-616d-48a0-b979-e037117278c6
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _free_dbg
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_free_dbg](https://docs.microsoft.com/cpp/c-runtime-library/reference/free-dbg).  
  
Frees a block of memory in the heap (debug version only).  
  
## Syntax  
  
```  
void _free_dbg(   
   void *userData,  
   int blockType   
);  
```  
  
#### Parameters  
 `userData`  
 Pointer to the allocated memory block to be freed.  
  
 `blockType`  
 Type of allocated memory block to be freed: `_CLIENT_BLOCK`, `_NORMAL_BLOCK`, or `_IGNORE_BLOCK`.  
  
## Remarks  
 The `_free_dbg` function is a debug version of the [free](../../c-runtime-library/reference/free.md) function. When [_DEBUG](../../c-runtime-library/debug.md) is not defined, each call to `_free_dbg` is reduced to a call to `free`. Both `free` and `_free_dbg` free a memory block in the base heap, but `_free_dbg` accommodates two debugging features: the ability to keep freed blocks in the heap's linked list to simulate low memory conditions and a block type parameter to free specific allocation types.  
  
 `_free_dbg` performs a validity check on all specified files and block locations before performing the free operation. The application is not expected to provide this information. When a memory block is freed, the debug heap manager automatically checks the integrity of the buffers on either side of the user portion and issues an error report if overwriting has occurred. If the `_CRTDBG_DELAY_FREE_MEM_DF` bit field of the [_crtDbgFlag](../../c-runtime-library/crtdbgflag.md) flag is set, the freed block is filled with the value 0xDD, assigned the `_FREE_BLOCK` block type, and kept in the heap's linked list of memory blocks.  
  
 If an error occurs in freeing the memory, `errno` is set with information from the operating system on the nature of the failure. For more information, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](http://msdn.microsoft.com/library/bf78ace6-28e4-4a04-97c6-39e0cdd00ba4). For information about the allocation block types and how they are used, see [Types of blocks on the debug heap](http://msdn.microsoft.com/library/bf78ace6-28e4-4a04-97c6-39e0cdd00ba4#BKMK_Types_of_blocks_on_the_debug_heap). For information about the differences between calling a standard heap function and its debug version in a debug build of an application, see [Debug Versions of Heap Allocation Functions](http://msdn.microsoft.com/library/91748bdc-f4cd-4d8b-ab98-0493dab7ed0d).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_free_dbg`|\<crtdbg.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
 For a sample of how to use `_free_dbg`, see [crt_dbg2](http://msdn.microsoft.com/en-us/21e1346a-6a17-4f57-b275-c76813089167).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Debug Routines](../../c-runtime-library/debug-routines.md)   
 [_malloc_dbg](../../c-runtime-library/reference/malloc-dbg.md)





