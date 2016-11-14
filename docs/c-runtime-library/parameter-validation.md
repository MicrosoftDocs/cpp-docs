---
title: "Parameter Validation | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "parameters, validation"
ms.assetid: 019dd5f0-dc61-4d2e-b4e9-b66409ddf1f2
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Parameter Validation
Most of the security-enhanced CRT functions and many of the preexisting functions validate their parameters. This could include checking pointers for NULL, checking that integers fall into a valid range, or checking that enumeration values are valid. When an invalid parameter is found, the invalid parameter handler is executed.  
  
## Invalid Parameter Handler Routine  
 When a C Runtime Library function detects an invalid parameter, it captures some information about the error, and then calls a macro that wraps an invalid parameter handler dispatch function, one of [_invalid_parameter](../c-runtime-library/reference/invalid-parameter-functions.md), [_invalid_parameter_noinfo](../c-runtime-library/reference/invalid-parameter-functions.md), or [_invalid_parameter_noinfo_noreturn](../c-runtime-library/reference/invalid-parameter-functions.md). The dispatch function called depends on whether your code is, respectively, a debug build, a retail build, or the error is not considered recoverable. 
 
 In Debug builds, the invalid parameter macro usually raises a failed assertion and a debugger breakpoint before the dispatch function is called. When the code is executed, the assertion may be reported to the user in a dialog box that has "Abort", "Retry", and "Continue" or similar choices, depending on the operating system and runtime library version. These options allow the user to immediately terminate the program, to attach a debugger, or to let the existing code continue to run, which calls the dispatch function. 
 
 The invalid parameter handler dispatch function in turn calls the currently assigned invalid parameter handler. By default, the invalid parameter calls `_invoke_watson` which causes the application to "crash," that is, terminate and generate a mini-dump. If enabled by the operating system, a dialog box asks the user if they want to load the crash dump to Microsoft for analysis.   
  
 This behavior can be changed by using the functions [_set_invalid_parameter_handler](../c-runtime-library/reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md) or [_set_thread_local_invalid_parameter_handler](../c-runtime-library/reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md) to set the invalid parameter handler to your own function. If the function you specify does not terminate the application, control is returned to the function that received the invalid parameters. In the CRT, these functions will normally cease function execution, set `errno` to an error code, and return an error code. In many cases, the `errno` value and the return value are both `EINVAL`, indicating an invalid parameter. In some cases, a more specific error code is returned, such as `EBADF` for a bad file pointer passed in as a parameter. For more information on `errno`, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## See Also  
 [Security Features in the CRT](../c-runtime-library/security-features-in-the-crt.md)   
 [CRT Library Features](../c-runtime-library/crt-library-features.md)