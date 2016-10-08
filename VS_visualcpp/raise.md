---
title: "raise"
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
  - raise
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
  - api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
ms.assetid: a3ccd3ad-f68f-4a7b-a005-c3ebfb217e8b
caps.latest.revision: 14
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
# raise
Sends a signal to the executing program.  
  
> [!NOTE]
>  Do not use this method to shut down a Windows 8.x Store app, except in testing or debugging scenarios. Programmatic or UI ways to close a Windows 8.x Store app are not permitted according to Section 3.6 of the [Windows 8 app certification requirements](http://go.microsoft.com/fwlink/?LinkId=262889). For more information, see [Application lifecycle (Windows Store apps)](http://go.microsoft.com/fwlink/?LinkId=262853).  
  
## Syntax  
  
```  
  
      int raise(  
int sig   
);  
```  
  
#### Parameters  
 *sig*  
 Signal to be raised.  
  
## Return Value  
 If successful, **raise** returns 0. Otherwise, it returns a nonzero value.  
  
## Remarks  
 The **raise** function sends *sig* to the executing program. If a previous call to **signal** has installed a signal-handling function for *sig*, **raise** executes that function. If no handler function has been installed, the default action associated with the signal value *sig* is taken, as follows.  
  
|Signal|Meaning|Default|  
|------------|-------------|-------------|  
|`SIGABRT`|Abnormal termination|Terminates the calling program with exit code 3|  
|`SIGFPE`|Floating-point error|Terminates the calling program|  
|`SIGILL`|Illegal instruction|Terminates the calling program|  
|`SIGINT`|CTRL+C interrupt|Terminates the calling program|  
|`SIGSEGV`|Illegal storage access|Terminates the calling program|  
|`SIGTERM`|Termination request sent to the program|Ignores the signal|  
  
 If the argument is not a valid signal as specified above, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If not handled, the function sets `errno` to `EINVAL` and returns a nonzero value.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|**raise**|<signal.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../VS_visualcpp/CRT-Library-Features.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Process and Environment Control](../VS_visualcpp/Process-and-Environment-Control.md)   
 [abort](../VS_visualcpp/abort.md)   
 [signal](../VS_visualcpp/signal.md)