---
title: "_CrtGetReportHook | Microsoft Docs"
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
  - "_CrtGetReportHook"
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
  - "CrtGetReportHook"
  - "_CrtGetReportHook"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "CrtGetReportHook function"
  - "_CrtGetReportHook function"
ms.assetid: 922758ed-7edd-4359-9c92-0535192dc11a
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _CrtGetReportHook
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_CrtGetReportHook](https://docs.microsoft.com/cpp/c-runtime-library/reference/crtgetreporthook).  
  
  
Retrieves the client-defined reporting function for hooking it into the C run time for the debug reporting process (debug version only).  
  
## Syntax  
  
```  
_CRT_REPORT_HOOK _CrtGetReportHook( void );  
```  
  
## Return Value  
 Returns the current client-defined reporting function.  
  
## Remarks  
 `_CrtGetReportHook` allows an application to retrieve the current reporting function for the C run-time debug library reporting process.  
  
 For more information about using other hook-capable run-time functions and writing your own client-defined hook functions, see [Debug Hook Function Writing](http://msdn.microsoft.com/library/5510635f-cf69-4907-b72d-ae27af1f19af).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_CrtGetReportHook`|\<crtdbg.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Libraries  
 Debug versions of [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.  
  
## Example  
 For a sample of how to use `_CrtSetReportHook`, see [report](http://msdn.microsoft.com/en-us/f6e08c30-6bd9-459a-830a-56deec0d2051).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Debug Routines](../../c-runtime-library/debug-routines.md)   
 [_CrtSetReportHook](../../c-runtime-library/reference/crtsetreporthook.md)



