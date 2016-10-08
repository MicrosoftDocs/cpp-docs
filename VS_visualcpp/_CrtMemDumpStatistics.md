---
title: "_CrtMemDumpStatistics"
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
  - _CrtMemDumpStatistics
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
ms.assetid: 27b9d731-3184-4a2d-b9a7-6566ab28a9fe
caps.latest.revision: 15
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
# _CrtMemDumpStatistics
Dumps the debug header information for a specified heap state in a user-readable form (debug version only).  
  
## Syntax  
  
```  
void _CrtMemDumpStatistics(   
   const _CrtMemState *state   
);  
```  
  
#### Parameters  
 `state`  
 Pointer to the heap state to dump.  
  
## Remarks  
 The `_CrtMemDumpStatistics` function dumps the debug header information for a specified state of the heap in a user-readable form. The dump statistics can be used by the application to track allocations and detect memory problems. The memory state can contain a specific heap state or the difference between two states. When [_DEBUG](../VS_visualcpp/_DEBUG.md) is not defined, calls to `_CrtMemDumpStatistics` are removed during preprocessing.  
  
 The `state` parameter must be a pointer to a `_CrtMemState` structure that has been filled in by [_CrtMemCheckpoint](../VS_visualcpp/_CrtMemCheckpoint.md) or returned by [_CrtMemDifference](../VS_visualcpp/_CrtMemDifference.md) before `_CrtMemDumpStatistics` is called. If `state` is `NULL`, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, `errno` is set to `EINVAL` and no action is taken. For more information, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md).  
  
 For more information about heap state functions and the `_CrtMemState` structure, see [Heap State Reporting Functions](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Heap_State_Reporting_Functions). For more information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
## Requirements  
  
|Routine|Required header|Optional headers|  
|-------------|---------------------|----------------------|  
|`_CrtMemDumpStatistics`|<crtdbg.h>|<errno.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
 **Libraries:** Debug versions of [CRT Library Features](../VS_visualcpp/CRT-Library-Features.md) only.  
  
## .NET Framework Equivalent  
 <xref:System.Diagnostics.PerformanceCounter?qualifyHint=True>  
  
## See Also  
 [Debug Routines](../VS_visualcpp/Debug-Routines.md)