---
title: "_free_dbg"
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
apiname: 
  - _free_dbg
apilocation: 
  - msvcrt.dll
  - msvcr80.dll
  - msvcr90.dll
  - msvcr100.dll
  - msvcr100_clr0400.dll
  - msvcr110.dll
  - msvcr110_clr0400.dll
  - msvcr120.dll
  - msvcr120_clr0400.dll
  - ucrtbase.dll
apitype: DLLExport
ms.assetid: fc5e8299-616d-48a0-b979-e037117278c6
caps.latest.revision: 16
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# _free_dbg
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
 The `_free_dbg` function is a debug version of the [free](../VS_visualcpp/free.md) function. When [_DEBUG](../VS_visualcpp/_DEBUG.md) is not defined, each call to `_free_dbg` is reduced to a call to `free`. Both `free` and `_free_dbg` free a memory block in the base heap, but `_free_dbg` accommodates two debugging features: the ability to keep freed blocks in the heap's linked list to simulate low memory conditions and a block type parameter to free specific allocation types.  
  
 `_free_dbg` performs a validity check on all specified files and block locations before performing the free operation. The application is not expected to provide this information. When a memory block is freed, the debug heap manager automatically checks the integrity of the buffers on either side of the user portion and issues an error report if overwriting has occurred. If the `_CRTDBG_DELAY_FREE_MEM_DF` bit field of the [_crtDbgFlag](../VS_visualcpp/_crtDbgFlag.md) flag is set, the freed block is filled with the value 0xDD, assigned the `_FREE_BLOCK` block type, and kept in the heap's linked list of memory blocks.  
  
 If an error occurs in freeing the memory, `errno` is set with information from the operating system on the nature of the failure. For more information, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md).  
  
 For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](../Topic/CRT%20Debug%20Heap%20Details.md). For information about the allocation block types and how they are used, see [Types of blocks on the debug heap](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Types_of_blocks_on_the_debug_heap). For information about the differences between calling a standard heap function and its debug version in a debug build of an application, see [Debug Versions of Heap Allocation Functions](../Topic/Debug%20Versions%20of%20Heap%20Allocation%20Functions.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_free_dbg`|<crtdbg.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
 For a sample of how to use `_free_dbg`, see [crt_dbg2](assetId:///21e1346a-6a17-4f57-b275-c76813089167).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Debug Routines](../VS_visualcpp/Debug-Routines.md)   
 [_malloc_dbg](../VS_visualcpp/_malloc_dbg.md)