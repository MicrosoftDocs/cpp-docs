---
title: "quick_exit1"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C
  - C++
ms.reviewer: na
ms.suite: na
ms.technology: 
  - cpp
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - quick_exit
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
H1: quick_exit
ms.assetid: ecfbdae6-01c4-45fa-aaeb-b368e1de2a9c
caps.latest.revision: 3
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
# quick_exit1
Causes normal program termination to occur.  
  
## Syntax  
  
```  
__declspec(noreturn) void quick_exit(  
    int status  
);  
```  
  
#### Parameters  
 status  
 The status code to return to the host environment.  
  
## Return Value  
 The `quick_exit` function cannot return to its caller.  
  
## Remarks  
 The `quick_exit` function causes normal program termination. It calls no functions registered by `atexit`, `_onexit` or signal handlers registered by the `signal` function. Behavior is undefined if `quick_exit` is called more than once, or if the `exit` function is also called.  
  
 The `quick_exit` function calls, in last-in, first-out (LIFO) order, the functions registered by `at_quick_exit`, except for those functions already called when the function was registered.  Behavior is undefined if a [longjmp](../VS_visualcpp/longjmp.md) call is made during a call to a registered function that would terminate the call to the  function.  
  
 After the registered functions have been called, `quick_exit` invokes `_Exit` by using the `status` value to return control to the host environment.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`quick_exit`|<process.h> or <stdlib.h>|  
  
 For more information about compatibility, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## See Also  
 [Process and Environment Control](../VS_visualcpp/Process-and-Environment-Control.md)   
 [abort](../VS_visualcpp/abort.md)   
 [atexit](../VS_visualcpp/atexit.md)   
 [_exec, _wexec Functions](../VS_visualcpp/_exec--_wexec-Functions.md)   
 [exit, _Exit, _exit](../VS_visualcpp/exit--_Exit--_exit.md)   
 [_onexit, _onexit_m](../VS_visualcpp/_onexit--_onexit_m.md)   
 [_spawn, _wspawn Functions](../VS_visualcpp/_spawn--_wspawn-Functions.md)   
 [system, _wsystem](../VS_visualcpp/system--_wsystem.md)