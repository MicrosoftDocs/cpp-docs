---
title: "_CrtDoForAllClientObjects"
ms.custom: na
ms.date: 10/06/2016
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
  - _CrtDoForAllClientObjects
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
ms.assetid: d0fdb835-3cdc-45f1-9a21-54208e8df248
caps.latest.revision: 18
manager: ghogen
translation.priority.mt: 
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
# _CrtDoForAllClientObjects
Calls an application-supplied function for all `_CLIENT_BLOCK` types in the heap (debug version only).  
  
## Syntax  
  
```  
void _CrtDoForAllClientObjects(   
   void ( * pfn )( void *, void * ),  
   void *context  
);  
```  
  
#### Parameters  
 `pfn`  
 Pointer to the application-supplied function callback function. The first parameter to this function points to the data. The second parameter is the context pointer that is passed to the call to `_CrtDoForAllClientObjects`.  
  
 `context`  
 Pointer to the application-supplied context to pass to the application-supplied function.  
  
## Remarks  
 The `_CrtDoForAllClientObjects` function searches the heap's linked list for memory blocks with the `_CLIENT_BLOCK` type and calls the application-supplied function when a block of this type is found. The found block and the `context` parameter are passed as arguments to the application-supplied function. During debugging, an application can track a specific group of allocations by explicitly calling the debug heap functions to allocate the memory and specifying that the blocks be assigned the `_CLIENT_BLOCK` block type. These blocks can then be tracked separately and reported on differently during leak detection and memory state reporting.  
  
 If the `_CRTDBG_ALLOC_MEM_DF` bit field of the [_crtDbgFlag](../VS_visualcpp/_crtDbgFlag.md) flag is not turned on, `_CrtDoForAllClientObjects` immediately returns. When [_DEBUG](../VS_visualcpp/_DEBUG.md) is not defined, calls to `_CrtDoForAllClientObjects` are removed during preprocessing.  
  
 For more information about the `_CLIENT_BLOCK` type and how it can be used by other debug functions, see [Types of blocks on the debug heap](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Types_of_blocks_on_the_debug_heap). For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
 If `pfn` is `NULL`, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, [errno, _doserrno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md) is set to `EINVAL` and the function returns.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_CrtDoForAllClientObjects`|<crtdbg.h>, <errno.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
 **Libraries:** Debug versions of  universal C run-time libraries only.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Debug Routines](../VS_visualcpp/Debug-Routines.md)   
 [_CrtSetDbgFlag](../VS_visualcpp/_CrtSetDbgFlag.md)   
 [Heap State Reporting Functions](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Heap_State_Reporting_Functions)   
 [_CrtReportBlockType](../VS_visualcpp/_CrtReportBlockType.md)