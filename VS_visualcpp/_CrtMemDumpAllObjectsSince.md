---
title: "_CrtMemDumpAllObjectsSince"
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
  - _CrtMemDumpAllObjectsSince
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
ms.assetid: c48a447a-e6bb-475c-9271-a3021182a0dc
caps.latest.revision: 11
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
# _CrtMemDumpAllObjectsSince
Dumps information about objects in the heap from the start of program execution or from a specified heap state (debug version only).  
  
## Syntax  
  
```  
  
      void _CrtMemDumpAllObjectsSince(   
   const _CrtMemState *state   
);  
```  
  
#### Parameters  
 `state`  
 Pointer to the heap state to begin dumping from or **NULL**.  
  
## Remarks  
 The `_CrtMemDumpAllObjectsSince` function dumps the debug header information of objects allocated in the heap in a user-readable form. The dump information can be used by the application to track allocations and detect memory problems. When [_DEBUG](../VS_visualcpp/_DEBUG.md) is not defined, calls to `_CrtMemDumpAllObjectsSince` are removed during preprocessing.  
  
 `_CrtMemDumpAllObjectsSince` uses the value of the `state` parameter to determine where to initiate the dump operation. To begin dumping from a specified heap state, the `state` parameter must be a pointer to a **_CrtMemState** structure that has been filled in by [_CrtMemCheckpoint](../VS_visualcpp/_CrtMemCheckpoint.md) before `_CrtMemDumpAllObjectsSince` was called. When `state` is **NULL**, the function begins the dump from the start of program execution.  
  
 If the application has installed a dump hook function by calling [_CrtSetDumpClient](../VS_visualcpp/_CrtSetDumpClient.md), then every time `_CrtMemDumpAllObjectsSince` dumps information about a `_CLIENT_BLOCK` type of block, it calls the application-supplied dump function as well. By default, internal C run-time blocks (`_CRT_BLOCK`) are not included in memory dump operations. The [_CrtSetDbgFlag](../VS_visualcpp/_CrtSetDbgFlag.md) function can be used to turn on the `_CRTDBG_CHECK_CRT_DF` bit of **_crtDbgFlag** to include these blocks. In addition, blocks marked as freed or ignored (**_FREE_BLOCK**, **_IGNORE_BLOCK**) are not included in the memory dump.  
  
 For more information about heap state functions and the `_CrtMemState` structure, see [Heap State Reporting Functions](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Heap_State_Reporting_Functions). For more information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|**_CrtMemDumpAll-ObjectsSince**|<crtdbg.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Libraries  
 Debug versions of [C run-time libraries](../VS_visualcpp/CRT-Library-Features.md) only.  
  
## Example  
 For a sample of how to use `_CrtMemDumpAllObjectsSince`, see [crt_dbg2](assetId:///21e1346a-6a17-4f57-b275-c76813089167).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Debug Routines](../VS_visualcpp/Debug-Routines.md)   
 [_crtDbgFlag](../VS_visualcpp/_crtDbgFlag.md)