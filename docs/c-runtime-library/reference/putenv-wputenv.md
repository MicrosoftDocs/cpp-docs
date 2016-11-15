---
title: "_putenv, _wputenv | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_putenv"
  - "_wputenv"
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
  - "api-ms-win-crt-environment-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_tputenv"
  - "_wputenv"
  - "_putenv"
  - "wputenv"
  - "tputenv"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_putenv function"
  - "environment variables, deleting"
  - "putenv function"
  - "tputenv function"
  - "environment variables, creating"
  - "wputenv function"
  - "_wputenv function"
  - "_tputenv function"
  - "environment variables, modifying"
ms.assetid: 9ba9b7fd-276e-45df-8420-d70c4204b8bd
caps.latest.revision: 22
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
# _putenv, _wputenv
Creates, modifies, or removes environment variables. More secure versions of these functions are available; see [_putenv_s, _wputenv_s](../../c-runtime-library/reference/putenv-s-wputenv-s.md).  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
int _putenv(  
   const char *envstring   
);  
int _wputenv(  
   const wchar_t *envstring   
);  
```  
  
#### Parameters  
 `envstring`  
 Environment-string definition.  
  
## Return Value  
 Return 0 if successful or –1 in the case of an error.  
  
## Remarks  
 The `_putenv` function adds new environment variables or modifies the values of existing environment variables. Environment variables define the environment in which a process executes (for example, the default search path for libraries to be linked with a program). `_wputenv` is a wide-character version of `_putenv`; the `envstring` argument to `_wputenv` is a wide-character string.  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tputenv`|`_putenv`|`_putenv`|`_wputenv`|  
  
 The `envstring` argument must be a pointer to a string of the form `varname=string`, where `varname` is the name of the environment variable to be added or modified and `string` is the variable's value. If `varname` is already part of the environment, its value is replaced by `string`; otherwise, the new `varname` variable and its `string` value are added to the environment. You can remove a variable from the environment by specifying an empty `string` — in other words, by specifying only `varname=`.  
  
 `_putenv` and `_wputenv` affect only the environment that is local to the current process; you cannot use them to modify the command-level environment. That is, these functions operate only on data structures accessible to the run-time library and not on the environment segment created for a process by the operating system. When the current process terminates, the environment reverts to the level of the calling process (in most cases, the operating-system level). However, the modified environment can be passed to any new processes created by `_spawn`, `_exec`, or `system`, and these new processes get any new items added by `_putenv` and `_wputenv`.  
  
 Do not change an environment entry directly: instead, use `_putenv` or `_wputenv` to change it. In particular, direct freeing elements of the `_environ[]` global array might lead to invalid memory being addressed.  
  
 `getenv` and `_putenv` use the global variable `_environ` to access the environment table; `_wgetenv` and `_wputenv` use `_wenviron`. `_putenv` and `_wputenv` might change the value of `_environ` and `_wenviron`, thus invalidating the `_envp` argument to `main` and the _`wenvp` argument to `wmain`. Therefore, it is safer to use `_environ` or `_wenviron` to access the environment information. For more information about the relation of `_putenv` and `_wputenv` to global variables, see [_environ, _wenviron](../../c-runtime-library/environ-wenviron.md).  
  
> [!NOTE]
>  The `_putenv` and `_getenv` families of functions are not thread-safe. `_getenv` could return a string pointer while `_putenv` is modifying the string, causing random failures. Make sure that calls to these functions are synchronized.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_putenv`|\<stdlib.h>|  
|`_wputenv`|\<stdlib.h> or \<wchar.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
 For a sample of how to use `_putenv`, see [getenv, _wgetenv](../../c-runtime-library/reference/getenv-wgetenv.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)   
 [getenv, _wgetenv](../../c-runtime-library/reference/getenv-wgetenv.md)   
 [_searchenv, _wsearchenv](../../c-runtime-library/reference/searchenv-wsearchenv.md)