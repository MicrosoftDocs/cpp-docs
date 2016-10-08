---
title: "_CrtMemCheckpoint"
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
  - _CrtMemCheckpoint
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
ms.assetid: f1bacbaa-5a0c-498a-ac7a-b6131d83dfbc
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
# _CrtMemCheckpoint
Obtains the current state of the debug heap and stores in an application-supplied `_CrtMemState` structure (debug version only).  
  
## Syntax  
  
```  
void _CrtMemCheckpoint(  
   _CrtMemState *state   
);  
```  
  
#### Parameters  
 `state`  
 Pointer to `_CrtMemState` structure to fill with the memory checkpoint.  
  
## Remarks  
 The `_CrtMemCheckpoint` function creates a snapshot of the current state of the debug heap at any given moment. This snapshot can be used by other heap state functions such as [_CrtMemDifference](../VS_visualcpp/_CrtMemDifference.md) to help detect memory leaks and other problems. When [_DEBUG](../VS_visualcpp/_DEBUG.md) is not defined, calls to `_CrtMemState` are removed during preprocessing.  
  
 The application must pass a pointer to a previously allocated instance of the `_CrtMemState` structure, defined in Crtdbg.h, in the `state` parameter. If `_CrtMemCheckpoint` encounters an error during the checkpoint creation, the function generates a `_CRT_WARN` debug report describing the problem.  
  
 For more information about heap state functions and the `_CrtMemState` structure, see [Heap State Reporting Functions](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Heap_State_Reporting_Functions). For more information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
 If `state` is `NULL`, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, [errno, _doserrno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md) is set to `EINVAL` and the function returns.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_CrtMemCheckpoint`|<crtdbg.h>, <errno.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
 **Libraries:** Debug versions of the UCRT only.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Debug Routines](../VS_visualcpp/Debug-Routines.md)   
 [_CrtMemDifference](../VS_visualcpp/_CrtMemDifference.md)