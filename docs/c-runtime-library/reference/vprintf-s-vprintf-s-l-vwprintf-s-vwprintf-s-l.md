---
title: "vprintf_s, _vprintf_s_l, vwprintf_s, _vwprintf_s_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_vwprintf_s_l"
  - "vwprintf_s"
  - "_vprintf_s_l"
  - "vprintf_s"
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
  - "vprintf_s"
  - "vwprintf_s"
  - "_vtprintf_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "vwprintf_s_l function"
  - "_vwprintf_s_l function"
  - "vwprintf_s function"
  - "_vtprintf_s_l function"
  - "vprintf_s_l function"
  - "vtprintf_s_l function"
  - "_vtprintf_s function"
  - "vtprintf_s function"
  - "_vprintf_s_l function"
  - "formatted text [C++]"
  - "vprintf_s function"
ms.assetid: cf864996-a530-4b40-9c30-54c4cef439c8
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
# vprintf_s, _vprintf_s_l, vwprintf_s, _vwprintf_s_l
Writes formatted output by using a pointer to a list of arguments. These versions of [vprintf, _vprintf_l, vwprintf, _vwprintf_l](../../c-runtime-library/reference/vprintf-vprintf-l-vwprintf-vwprintf-l.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Syntax  
  
```  
int vprintf_s(  
   const char *format,  
   va_list argptr   
);  
int _vprintf_s_l(  
   const char *format,  
   locale_t locale,  
   va_list argptr   
);  
int vwprintf_s(  
   const wchar_t *format,  
   va_list argptr   
);  
int _vwprintf_s_l(  
   const wchar_t *format,  
   locale_t locale,  
   va_list argptr   
);  
```  
  
#### Parameters  
 `format`  
 Format specification.  
  
 `argptr`  
 Pointer to list of arguments.  
  
 `locale`  
 The locale to use.  
  
 For more information, see [Format Specifications](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).  
  
## Return Value  
 `vprintf_s` and `vwprintf_s` return the number of characters written, not including the terminating null character, or a negative value if an output error occurs. If `format` is a null pointer, or if the format string contains invalid formatting characters, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the functions return -1 and set `errno` to `EINVAL`.  
  
 For information on these and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Remarks  
 Each of these functions takes a pointer to an argument list, then formats and writes the given data to `stdout`.  
  
 The secure versions of these functions differ from `vprintf` and `vwprintf` only in that the secure versions check that the format string contains valid formatting characters.  
  
 `vwprintf_s` is the wide-character version of `vprintf_s`; the two functions behave identically if the stream is opened in ANSI mode. `vprintf_s` doesn't currently support output into a UNICODE stream.  
  
 The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.  
  
> [!IMPORTANT]
>  Ensure that `format` is not a user-defined string. For more information, see [Avoiding Buffer Overruns](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_vtprintf_s`|`vprintf_s`|`vprintf_s`|`vwprintf_s`|  
|`_vtprintf_s_l`|`_vprintf_s_l`|`_vprintf_s_l`|`_vwprintf_s_l`|  
  
## Requirements  
  
|Routine|Required header|Optional headers|  
|-------------|---------------------|----------------------|  
|`vprintf_s`, `_vprintf_s_l`|\<stdio.h> and \<stdarg.h>|\<varargs.h>*|  
|`vwprintf_s`, `_vwprintf_s_l`|\<stdio.h> or \<wchar.h>, and \<stdarg.h>|\<varargs.h>*|  
  
 \* Required for UNIX V compatibility.  
  
 The console is not supported in [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] apps. The standard stream handles that are associated with the console—`stdin`, `stdout`, and `stderr`—must be redirected before C run-time functions can use them in [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] apps. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## .NET Framework Equivalent  
 [System::Console::Write](https://msdn.microsoft.com/en-us/library/system.console.write.aspx)  
  
## See Also  
 [Stream I/O](../../c-runtime-library/stream-i-o.md)   
 [vprintf Functions](../../c-runtime-library/vprintf-functions.md)   
 [fprintf, _fprintf_l, fwprintf, _fwprintf_l](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)   
 [printf, _printf_l, wprintf, _wprintf_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [va_arg, va_copy, va_end, va_start](../../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)