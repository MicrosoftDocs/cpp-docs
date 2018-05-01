---
title: "_get_invalid_parameter_handler, _get_thread_local_invalid_parameter_handler | Microsoft Docs"
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
  - "_get_invalid_parameter_handler"
  - "_get_thread_local_invalid_parameter_handler"
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
  - "api-ms-win-crt-runtime-l1-1-0.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "_get_invalid_parameter_handler"
  - "stdlib/_get_invalid_parameter_handler"
  - "_get_thread_local_invalid_parameter_handler"
  - "stdlib/_get_thread_local_invalid_parameter_handler"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "_get_thread_local_invalid_parameter_handler function"
  - "_get_invalid_parameter_handler function"
ms.assetid: a176da0e-38ca-4d99-92bb-b0e2b8072f53
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _get_invalid_parameter_handler, _get_thread_local_invalid_parameter_handler
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_get_invalid_parameter_handler, _get_thread_local_invalid_parameter_handler](https://docs.microsoft.com/cpp/c-runtime-library/reference/get-invalid-parameter-handler-get-thread-local-invalid-parameter-handler).  
  
Gets the function that is called when the CRT detects an invalid argument.  
  
## Syntax  
  
```  
_invalid_parameter_handler _get_invalid_parameter_handler(void);  
_invalid_parameter_handler _get_thread_local_invalid_parameter_handler(void);  
```  
  
## Return Value  
 A pointer to the currently set invalid parameter handler function, or a null pointer if none has been set.  
  
## Remarks  
 The `_get_invalid_parameter_handler` function gets the currently set global invalid parameter handler. It returns a null pointer if no global invalid parameter handler was set. Similarly, the `_get_thread_local_invalid_parameter_handler` gets the current thread-local invalid parameter handler of the thread it is called on, or a null pointer if no handler was set. For information about how to set global and thread-local invalid parameter handlers, see [_set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler](../../c-runtime-library/reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md).  
  
 The returned invalid parameter handler function pointer has the following type:  
  
```c  
typedef void (__cdecl* _invalid_parameter_handler)(  
    wchar_t const*,  
    wchar_t const*,  
    wchar_t const*,   
    unsigned int,  
    uintptr_t  
    );  
```  
  
 For details on the invalid parameter handler, see the prototype in [_set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler](../../c-runtime-library/reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_get_invalid_parameter_handler`, `_get_thread_local_invalid_parameter_handler`|C: \<stdlib.h><br /><br /> C++: \<cstdlib> or \<stdlib.h>|  
  
 The `_get_invalid_parameter_handler` and `_get_thread_local_invalid_parameter_handler` functions are Microsoft specific. For compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## See Also  
 [_set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler](../../c-runtime-library/reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md)   
 [Security-Enhanced Versions of CRT Functions](../../c-runtime-library/security-enhanced-versions-of-crt-functions.md)





