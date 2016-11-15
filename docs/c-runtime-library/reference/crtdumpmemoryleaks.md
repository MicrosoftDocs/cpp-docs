---
title: "_CrtDumpMemoryLeaks | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CrtDumpMemoryLeaks"
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
  - "CRTDBG_LEAK_CHECK_DF"
  - "CRTDBG_CHECK_CRT_DF"
  - "_CRTDBG_LEAK_CHECK_DF"
  - "CrtDumpMemoryLeaks"
  - "_CrtDumpMemoryLeaks"
  - "_CRTDBG_CHECK_CRT_DF"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "CrtDumpMemoryLeaks function"
  - "CRTDBG_LEAK_CHECK_DF macro"
  - "_CRTDBG_LEAK_CHECK_DF macro"
  - "_CrtDumpMemoryLeaks function"
  - "CRTDBG_CHECK_CRT_DF macro"
  - "_CRTDBG_CHECK_CRT_DF macro"
ms.assetid: 71b2eab4-7f55-44e8-a55a-bfea4f32d34c
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
# _CrtDumpMemoryLeaks
Dumps all the memory blocks in the debug heap when a memory leak has occurred (debug version only).  
  
## Syntax  
  
```  
  
int _CrtDumpMemoryLeaks( void );  
```  
  
## Return Value  
 `_CrtDumpMemoryLeaks` returns TRUE if a memory leak is found. Otherwise, the function returns FALSE.  
  
## Remarks  
 The `_CrtDumpMemoryLeaks` function determines whether a memory leak has occurred since the start of program execution. When a leak is found, the debug header information for all the objects in the heap is dumped in a user-readable form. When [_DEBUG](../../c-runtime-library/debug.md) is not defined, calls to `_CrtDumpMemoryLeaks` are removed during preprocessing.  
  
 `_CrtDumpMemoryLeaks` is frequently called at the end of program execution to verify that all memory allocated by the application has been freed. The function can be called automatically at program termination by turning on the `_CRTDBG_LEAK_CHECK_DF` bit field of the [_crtDbgFlag](../../c-runtime-library/crtdbgflag.md) flag using the [_CrtSetDbgFlag](../../c-runtime-library/reference/crtsetdbgflag.md) function.  
  
 `_CrtDumpMemoryLeaks` calls [_CrtMemCheckpoint](../../c-runtime-library/reference/crtmemcheckpoint.md) to obtain the current state of the heap and then scans the state for blocks that have not been freed. When an unfreed block is encountered, `_CrtDumpMemoryLeaks` calls [_CrtMemDumpAllObjectsSince](../../c-runtime-library/reference/crtmemdumpallobjectssince.md) to dump information for all the objects allocated in the heap from the start of program execution.  
  
 By default, internal C run-time blocks (`_CRT_BLOCK`) are not included in memory dump operations. The [_CrtSetDbgFlag](../../c-runtime-library/reference/crtsetdbgflag.md) function can be used to turn on the `_CRTDBG_CHECK_CRT_DF` bit of `_crtDbgFlag` to include these blocks in the leak detection process.  
  
 For more information about heap state functions and the `_CrtMemState` structure, see [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details). For more information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_CrtDumpMemoryLeaks`|\<crtdbg.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Libraries  
 Debug versions of [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.  
  
## Example  
 For a sample of how to use `_CrtDumpMemoryLeaks`, see [crt_dbg1](http://msdn.microsoft.com/en-us/17b4b20c-e849-48f5-8eb5-dca6509cbaf9).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Debug Routines](../../c-runtime-library/debug-routines.md)