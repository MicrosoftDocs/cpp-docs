---
title: "_CrtSetReportHook"
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
  - _CrtSetReportHook
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
ms.assetid: 1ae7c64f-8c84-4797-9574-b59f00f7a509
caps.latest.revision: 13
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
# _CrtSetReportHook
Installs a client-defined reporting function by hooking it into the C run-time debug reporting process (debug version only).  
  
## Syntax  
  
```  
_CRT_REPORT_HOOK _CrtSetReportHook(   
   _CRT_REPORT_HOOK reportHook   
);  
```  
  
#### Parameters  
 `reportHook`  
 New client-defined reporting function to hook into the C run-time debug reporting process.  
  
## Return Value  
 Returns the previous client-defined reporting function.  
  
## Remarks  
 `_CrtSetReportHook` allows an application to use its own reporting function into the C run-time debug library reporting process. As a result, whenever [_CrtDbgReport](../VS_visualcpp/_CrtDbgReport--_CrtDbgReportW.md) is called to generate a debug report, the application's reporting function is called first. This functionality enables an application to perform operations such as filtering debug reports so it can focus on specific allocation types or send a report to destinations not available by using `_CrtDbgReport`. When [_DEBUG](../VS_visualcpp/_DEBUG.md) is not defined, calls to `_CrtSetReportHook` are removed during preprocessing.  
  
 For a more robust version of `_CrtSetReportHook`, see [_CrtSetReportHook2](../VS_visualcpp/_CrtSetReportHook2--_CrtSetReportHookW2.md).  
  
 The `_CrtSetReportHook` function installs the new client-defined reporting function specified in `reportHook` and returns the previous client-defined hook. The following example demonstrates how a client-defined report hook should be prototyped:  
  
```  
int YourReportHook( int reportType, char *message, int *returnValue );  
```  
  
 where `reportType` is the debug report type (`_CRT_WARN`, `_CRT_ERROR`, or `_CRT_ASSERT`), `message` is the fully assembled debug user message to be contained in the report, and `returnValue` is the value specified by the client-defined reporting function that should be returned by `_CrtDbgReport`. For a complete description of the available report types, see the [_CrtSetReportMode](../VS_visualcpp/_CrtSetReportMode.md) function.  
  
 If the client-defined reporting function completely handles the debug message such that no further reporting is required, then the function should return `TRUE`. When the function returns `FALSE`, `_CrtDbgReport` is called to generate the debug report using the current settings for the report type, mode, and file. In addition, by specifying the `_CrtDbgReport` return value in `returnValue`, the application can also control whether a debug break occurs. For a complete description of how the debug report is configured and generated, see `_CrtSetReportMode`, [_CrtSetReportFile](../VS_visualcpp/_CrtSetReportFile.md), and `_CrtDbgReport`.  
  
 For more information about using other hook-capable run-time functions and writing your own client-defined hook functions, see [Debug Hook Function Writing](../Topic/Debug%20Hook%20Function%20Writing.md).  
  
> [!NOTE]
>  If your application is compiled with `/clr` and the reporting function is called after the application has exited main, the CLR will throw an exception if the reporting function calls any CRT functions.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_CrtSetReportHook`|<crtdbg.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Libraries  
 Debug versions of [C run-time libraries](../VS_visualcpp/CRT-Library-Features.md) only.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Debug Routines](../VS_visualcpp/Debug-Routines.md)   
 [_CrtGetReportHook](../VS_visualcpp/_CrtGetReportHook.md)