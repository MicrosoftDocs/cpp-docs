---
title: "quick_exit1"
ms.custom: na
ms.date: "10/14/2016"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "quick_exit"
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
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "quick_exit"
  - "process/quick_exit"
  - "stdlib/quick_exit"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "quick_exit function"
ms.assetid: ecfbdae6-01c4-45fa-aaeb-b368e1de2a9c
caps.latest.revision: 3
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
# quick_exit
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
  
 The `quick_exit` function calls, in last-in, first-out (LIFO) order, the functions registered by `at_quick_exit`, except for those functions already called when the function was registered.  Behavior is undefined if a [longjmp](../crt/longjmp.md) call is made during a call to a registered function that would terminate the call to the  function.  
  
 After the registered functions have been called, `quick_exit` invokes `_Exit` by using the `status` value to return control to the host environment.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`quick_exit`|\<process.h> or \<stdlib.h>|  
  
 For more information about compatibility, see [Compatibility](../crt/compatibility.md).  
  
## See Also  
 [Process and Environment Control](../crt/process-and-environment-control.md)   
 [abort](../crt/abort.md)   
 [atexit](../crt/atexit.md)   
 [_exec, _wexec Functions](../crt/_exec--_wexec-functions.md)   
 [exit, _Exit, _exit](../crt/exit--_exit--_exit.md)   
 [_onexit, _onexit_m](../crt/_onexit--_onexit_m.md)   
 [_spawn, _wspawn Functions](../crt/_spawn--_wspawn-functions.md)   
 [system, _wsystem](../crt/system--_wsystem.md)