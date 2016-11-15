---
title: "_CrtMemDumpAllObjectsSince | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CrtMemDumpAllObjectsSince"
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
  - "CrtMemDumpAllObjectsSince"
  - "_CrtMemDumpAllObjectsSince"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_CrtMemDumpAllObjectsSince function"
  - "CrtMemDumpAllObjectsSince function"
ms.assetid: c48a447a-e6bb-475c-9271-a3021182a0dc
caps.latest.revision: 11
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
 The `_CrtMemDumpAllObjectsSince` function dumps the debug header information of objects allocated in the heap in a user-readable form. The dump information can be used by the application to track allocations and detect memory problems. When [_DEBUG](../../c-runtime-library/debug.md) is not defined, calls to `_CrtMemDumpAllObjectsSince` are removed during preprocessing.  
  
 `_CrtMemDumpAllObjectsSince` uses the value of the `state` parameter to determine where to initiate the dump operation. To begin dumping from a specified heap state, the `state` parameter must be a pointer to a **_CrtMemState** structure that has been filled in by [_CrtMemCheckpoint](../../c-runtime-library/reference/crtmemcheckpoint.md) before `_CrtMemDumpAllObjectsSince` was called. When `state` is **NULL**, the function begins the dump from the start of program execution.  
  
 If the application has installed a dump hook function by calling [_CrtSetDumpClient](../../c-runtime-library/reference/crtsetdumpclient.md), then every time `_CrtMemDumpAllObjectsSince` dumps information about a `_CLIENT_BLOCK` type of block, it calls the application-supplied dump function as well. By default, internal C run-time blocks (`_CRT_BLOCK`) are not included in memory dump operations. The [_CrtSetDbgFlag](../../c-runtime-library/reference/crtsetdbgflag.md) function can be used to turn on the `_CRTDBG_CHECK_CRT_DF` bit of **_crtDbgFlag** to include these blocks. In addition, blocks marked as freed or ignored (**_FREE_BLOCK**, **_IGNORE_BLOCK**) are not included in the memory dump.  
  
 For more information about heap state functions and the `_CrtMemState` structure, see [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details). For more information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|**_CrtMemDumpAll-ObjectsSince**|\<crtdbg.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Libraries  
 Debug versions of [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.  
  
## Example  
 For a sample of how to use `_CrtMemDumpAllObjectsSince`, see [crt_dbg2](http://msdn.microsoft.com/en-us/21e1346a-6a17-4f57-b275-c76813089167).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Debug Routines](../../c-runtime-library/debug-routines.md)   
 [_crtDbgFlag](../../c-runtime-library/crtdbgflag.md)