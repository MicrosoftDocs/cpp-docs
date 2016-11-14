---
title: "getenv_s, _wgetenv_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "getenv_s"
  - "_wgetenv_s"
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
  - "getenv_s"
  - "_tgetenv_s"
  - "_wgetenv_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_tgetenv_s function"
  - "wgetenv_s function"
  - "_wgetenv_s function"
  - "getenv_s function"
  - "environment variables"
  - "tgetenv_s function"
ms.assetid: c3ae1ffe-d4cd-4bae-bcb1-3afa754c613a
caps.latest.revision: 42
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
# getenv_s, _wgetenv_s
Gets a value from the current environment. These versions of [getenv, _wgetenv](../../c-runtime-library/reference/getenv-wgetenv.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)]. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
errno_t getenv_s(   
   size_t *pReturnValue,  
   char* buffer,  
   size_t numberOfElements,  
   const char *varname   
);  
errno_t _wgetenv_s(   
   size_t *pReturnValue,  
   wchar_t *buffer,  
   size_t numberOfElements,  
   const wchar_t *varname   
);  
template <size_t size>  
errno_t getenv_s(   
   size_t *pReturnValue,  
   char (&buffer)[size],  
   const char *varname   
); // C++ only  
template <size_t size>  
errno_t _wgetenv_s(   
   size_t *pReturnValue,  
   wchar_t (&buffer)[size],  
   const wchar_t *varname   
); // C++ only  
```  
  
#### Parameters  
 `pReturnValue`  
 The buffer size that's required, or 0 if the variable is not found.  
  
 `buffer`  
 Buffer to store the value of the environment variable.  
  
 `numberOfElements`  
 Size of `buffer`.  
  
 `varname`  
 Environment variable name.  
  
## Return Value  
 Zero if successful; otherwise, an error code on failure.  
  
### Error Conditions  
  
|`pReturnValue`|`buffer`|`numberOfElements`|`varname`|Return Value|  
|--------------------|--------------|------------------------|---------------|------------------|  
|`NULL`|any|any|any|`EINVAL`|  
|any|`NULL`|>0|any|`EINVAL`|  
|any|any|any|`NULL`|`EINVAL`|  
  
 Any of these error conditions invokes an invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the functions set `errno` to `EINVAL` and return `EINVAL`.  
  
 Also, if the buffer is too small, these functions return `ERANGE`. They do not invoke an invalid parameter handler. They write out the required buffer size in `pReturnValue`, and thereby enable programs to call the function again with a larger buffer.  
  
## Remarks  
 The `getenv_s` function searches the list of environment variables for `varname`. `getenv_s` is not case sensitive in the Windows operating system. `getenv_s` and `_putenv_s` use the copy of the environment that's pointed to by the global variable `_environ` to access the environment. `getenv_s` operates only on the data structures that are accessible to the run-time library and not on the environment "segment" that's created for the process by the operating system. Therefore, programs that use the `envp` argument to [main](../../cpp/main-program-startup.md) or [wmain](../../cpp/main-program-startup.md) might retrieve invalid information.  
  
 `_wgetenv_s` is a wide-character version of `getenv_s`; the argument and return value of `_wgetenv_s` are wide-character strings. The `_wenviron` global variable is a wide-character version of `_environ`.  
  
 In an MBCS program (for example, in an SBCS ASCII program), `_wenviron` is initially `NULL` because the environment is composed of multibyte-character strings. Then, on the first call to `_wputenv`, or on the first call to `_wgetenv_s`, if an (MBCS) environment already exists, a corresponding wide-character string environment is created and is then pointed to by `_wenviron`.  
  
 Similarly in a Unicode `(_wmain`) program, `_environ` is initially `NULL` because the environment is composed of wide-character strings. Then, on the first call to `_putenv`, or on the first call to `getenv_s` if a (Unicode) environment already exists, a corresponding MBCS environment is created and is then pointed to by `_environ`.  
  
 When two copies of the environment (MBCS and Unicode) exist simultaneously in a program, the run-time system must maintain both copies, and this causes slower execution time. For example, when you call `_putenv`, a call to `_wputenv` is also executed automatically so that the two environment strings correspond.  
  
> [!CAUTION]
>  In rare instances, when the run-time system is maintaining both a Unicode version and a multibyte version of the environment, the two environment versions may not correspond exactly. This happens because, although any unique multibyte-character string maps to a unique Unicode string, the mapping from a unique Unicode string to a multibyte-character string is not necessarily unique. For more information, see [_environ, _wenviron](../../c-runtime-library/environ-wenviron.md).  
  
> [!NOTE]
>  The `_putenv_s` and `_getenv_s` families of functions are not thread-safe. `_getenv_s` could return a string pointer while `_putenv_s` is modifying the string and thereby cause random failures. Make sure that calls to these functions are synchronized.  
  
 In C++, use of these functions is simplified by template overloads; the overloads can infer buffer length automatically and thereby eliminate the need to specify a size argument. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tgetenv_s`|`getenv_s`|`getenv_s`|`_wgetenv_s`|  
  
 To check or change the value of the `TZ` environment variable, use `getenv_s`, `_putenv`, and `_tzset`, as required. For more information about `TZ`, see [_tzset](../../c-runtime-library/reference/tzset.md) and [_daylight, _dstbias, _timezone, and _tzname](../../c-runtime-library/daylight-dstbias-timezone-and-tzname.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`getenv_s`|\<stdlib.h>|  
|`_wgetenv_s`|\<stdlib.h> or \<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
  
```  
  
      // crt_getenv_s.c  
// This program uses getenv_s to retrieve  
// the LIB environment variable and then uses  
// _putenv to change it to a new value.  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char* libvar;  
   size_t requiredSize;  
  
   getenv_s( &requiredSize, NULL, 0, "LIB");  
   if (requiredSize == 0)  
   {  
      printf("LIB doesn't exist!\n");  
      exit(1);  
   }  
  
   libvar = (char*) malloc(requiredSize * sizeof(char));  
   if (!libvar)  
   {  
      printf("Failed to allocate memory!\n");  
      exit(1);  
   }  
  
   // Get the value of the LIB environment variable.  
   getenv_s( &requiredSize, libvar, requiredSize, "LIB" );  
  
   printf( "Original LIB variable is: %s\n", libvar );  
  
   // Attempt to change path. Note that this only affects  
   // the environment variable of the current process. The command  
   // processor's environment is not changed.  
   _putenv_s( "LIB", "c:\\mylib;c:\\yourlib" );  
  
   getenv_s( &requiredSize, NULL, 0, "LIB");  
  
   libvar = (char*) realloc(libvar, requiredSize * sizeof(char));  
   if (!libvar)  
   {  
      printf("Failed to allocate memory!\n");  
      exit(1);  
   }  
  
   // Get the new value of the LIB environment variable.   
   getenv_s( &requiredSize, libvar, requiredSize, "LIB" );  
  
   printf( "New LIB variable is: %s\n", libvar );  
  
   free(libvar);  
}  
```  
  
```Output  
Original LIB variable is: c:\vctools\lib;c:\vctools\atlmfc\lib;c:\vctools\PlatformSDK\lib;c:\vctools\Visual Studio SDKs\DIA Sdk\lib;c:\vctools\Visual Studio SDKs\BSC Sdk\lib  
New LIB variable is: c:\mylib;c:\yourlib  
```  
  
## .NET Framework Equivalent  
 [System::Environment::GetEnvironmentVariable](https://msdn.microsoft.com/en-us/library/system.environment.getenvironmentvariable.aspx)  
  
## See Also  
 [Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)   
 [Environmental Constants](../../c-runtime-library/environmental-constants.md)   
 [_putenv, _wputenv](../../c-runtime-library/reference/putenv-wputenv.md)   
 [_dupenv_s, _wdupenv_s](../../c-runtime-library/reference/dupenv-s-wdupenv-s.md)