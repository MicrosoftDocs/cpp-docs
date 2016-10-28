---
title: "_CrtGetReportHook"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "_CrtGetReportHook"
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
  - "CrtGetReportHook"
  - "_CrtGetReportHook"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "CrtGetReportHook function"
  - "_CrtGetReportHook function"
ms.assetid: 922758ed-7edd-4359-9c92-0535192dc11a
caps.latest.revision: 12
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
# _CrtGetReportHook
Retrieves the client-defined reporting function for hooking it into the C run time for the debug reporting process (debug version only).  
  
## Syntax  
  
```  
_CRT_REPORT_HOOK _CrtGetReportHook( void );  
```  
  
## Return Value  
 Returns the current client-defined reporting function.  
  
## Remarks  
 `_CrtGetReportHook` allows an application to retrieve the current reporting function for the C run-time debug library reporting process.  
  
 For more information about using other hook-capable run-time functions and writing your own client-defined hook functions, see [Debug Hook Function Writing](../Topic/Debug%20Hook%20Function%20Writing.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_CrtGetReportHook`|\<crtdbg.h>|  
  
 For more compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## Libraries  
 Debug versions of [C run-time libraries](../crt/crt-library-features.md) only.  
  
## Example  
 For a sample of how to use `_CrtSetReportHook`, see [report](assetId:///f6e08c30-6bd9-459a-830a-56deec0d2051).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Debug Routines](../crt/debug-routines.md)   
 [_CrtSetReportHook](../crt/_crtsetreporthook.md)