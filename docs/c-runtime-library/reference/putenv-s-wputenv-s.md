---
title: "_putenv_s, _wputenv_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wputenv_s"
  - "_putenv_s"
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
  - "putenv_s"
  - "wputenv_s"
  - "_wputenv_s"
  - "_putenv_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "wputenv_s function"
  - "_putenv_s function"
  - "environment variables, deleting"
  - "putenv_s function"
  - "_wputenv_s function"
  - "environment variables, creating"
  - "environment variables, modifying"
ms.assetid: fbf51225-a8da-4b9b-9d7c-0b84ef72df18
caps.latest.revision: 20
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
# _putenv_s, _wputenv_s
Creates, modifies, or removes environment variables. These are versions of [_putenv, _wputenv](../../c-runtime-library/reference/putenv-wputenv.md) but have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)]. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/en-us/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
errno_t _putenv_s(  
   const char *name,  
   const char *value   
);  
errno_t _wputenv_s(  
   const wchar_t *name,  
   const wchar_t *value  
);  
```  
  
#### Parameters  
 `name`  
 The environment variable name.  
  
 `value`  
 The value to set the environment variable to.  
  
## Return Value  
 Returns 0 if successful, or an error code.  
  
### Error Conditions  
  
|`name`|`value`|Return value|  
|------------|-------------|------------------|  
|`NULL`|any|`EINVAL`|  
|any|`NULL`|`EINVAL`|  
  
 If one of the error conditions occurs, these functions invoke an invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return `EINVAL` and set `errno` to `EINVAL`.  
  
## Remarks  
 The `_putenv_s` function adds new environment variables or modifies the values of existing environment variables. Environment variables define the environment in which a process executes (for example, the default search path for libraries to be linked with a program). `_wputenv_s` is a wide-character version of `_putenv_s`; the `envstring` argument to `_wputenv_s` is a wide-character string.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tputenv_s`|`_putenv_s`|`_putenv_s`|`_wputenv_s`|  
  
 `name` is the name of the environment variable to be added or modified and `value` is the variable's value. If `name` is already part of the environment, its value is replaced by `value`; otherwise, the new `name` variable and its `value` are added to the environment. You can remove a variable from the environment by specifying an empty string (that is, "") for `value`.  
  
 `_putenv_s` and `_wputenv_s` affect only the environment that is local to the current process; you cannot use them to modify the command-level environment. These functions operate only on data structures that are accessible to the run-time library and not on the environment "segment" that the operating system creates for a process. When the current process terminates, the environment reverts to the level of the calling process, which in most cases is the operating-system level. However, the modified environment can be passed to any new processes that are created by `_spawn`, `_exec`, or `system`, and these new processes get any new items that are added by `_putenv_s` and `_wputenv_s`.  
  
 Do not change an environment entry directly; instead, use `_putenv_s` or `_wputenv_s` to change it. In particular, directly freeing elements of the `_environ[]` global array might cause invalid memory to be addressed.  
  
 `getenv` and `_putenv_s` use the global variable `_environ` to access the environment table; `_wgetenv` and `_wputenv_s` use `_wenviron`. `_putenv_s` and `_wputenv_s` may change the value of `_environ` and `_wenviron`, and thereby invalidate the `envp` argument to `main` and the `_wenvp` argument to `wmain`. Therefore, it is safer to use `_environ` or `_wenviron` to access the environment information. For more information about the relationship of `_putenv_s` and `_wputenv_s` to global variables, see [_environ, _wenviron](../../c-runtime-library/environ-wenviron.md).  
  
> [!NOTE]
>  The `_putenv_s` and `_getenv_s` families of functions are not thread-safe. `_getenv_s` could return a string pointer while `_putenv_s` is modifying the string, and thereby cause random failures. Make sure that calls to these functions are synchronized.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_putenv_s`|\<stdlib.h>|  
|`_wputenv_s`|\<stdlib.h> or \<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
 For a sample that shows how to use `_putenv_s`, see [getenv_s, _wgetenv_s](../../c-runtime-library/reference/getenv-s-wgetenv-s.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)   
 [getenv, _wgetenv](../../c-runtime-library/reference/getenv-wgetenv.md)   
 [_searchenv, _wsearchenv](../../c-runtime-library/reference/searchenv-wsearchenv.md)