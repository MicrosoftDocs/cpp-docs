---
title: "quick_exit1 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
  
 The `quick_exit` function calls, in last-in, first-out (LIFO) order, the functions registered by `at_quick_exit`, except for those functions already called when the function was registered.  Behavior is undefined if a [longjmp](../../c-runtime-library/reference/longjmp.md) call is made during a call to a registered function that would terminate the call to the  function.  
  
 After the registered functions have been called, `quick_exit` invokes `_Exit` by using the `status` value to return control to the host environment.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`quick_exit`|\<process.h> or \<stdlib.h>|  
  
 For more information about compatibility, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## See Also  
 [Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [atexit](../../c-runtime-library/reference/atexit.md)   
 [_exec, _wexec Functions](../../c-runtime-library/exec-wexec-functions.md)   
 [exit, _Exit, _exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [_onexit, _onexit_m](../../c-runtime-library/reference/onexit-onexit-m.md)   
 [_spawn, _wspawn Functions](../../c-runtime-library/spawn-wspawn-functions.md)   
 [system, _wsystem](../../c-runtime-library/reference/system-wsystem.md)