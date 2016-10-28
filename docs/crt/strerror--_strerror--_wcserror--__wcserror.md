---
title: "strerror, _strerror, _wcserror, __wcserror"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "strerror"
  - "_strerror"
  - "_wcserror"
  - "__wcserror"
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
  - "__sys_errlist"
  - "wcserror"
  - "_strerror"
  - "__wcserror"
  - "strerror"
  - "__sys_nerr"
  - "_tcserror"
  - "_wcserror"
  - "tcserror"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "strerror function"
  - "_strerror function"
  - "__sys_errlist"
  - "wcserror function"
  - "error messages, printing"
  - "__sys_nerr"
  - "tcserror function"
  - "printing error messages"
  - "_wcserror function"
  - "_tcserror function"
  - "__wcserror function"
  - "error messages, getting"
ms.assetid: 27b72255-f627-43c0-8836-bcda8b003e14
caps.latest.revision: 21
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
# strerror, _strerror, _wcserror, __wcserror
Gets a system error message string (`strerror`, `_wcserror`) or formats a user-supplied error message string (`_strerror`, `__wcserror`). More secure versions of these functions are available; see [strerror_s, _strerror_s, _wcserror_s, \__wcserror_s](../crt/strerror_s--_strerror_s--_wcserror_s--__wcserror_s.md).  
  
## Syntax  
  
```  
char *strerror(  
   int errnum   
);  
char *_strerror(  
   const char *strErrMsg   
);  
wchar_t * _wcserror(  
   int errnum   
);  
wchar_t * __wcserror(  
   const wchar_t *strErrMsg   
);  
```  
  
#### Parameters  
 `errnum`  
 Error number.  
  
 `strErrMsg`  
 User-supplied message.  
  
## Return Value  
 All of these functions return a pointer to the error-message string. Subsequent calls can overwrite the string.  
  
## Remarks  
 The `strerror` function maps `errnum` to an error-message string and returns a pointer to the string. Neither `strerror` nor `_strerror` actually prints the message: For that, you have to call an output function such as [fprintf](../crt/fprintf--_fprintf_l--fwprintf--_fwprintf_l.md):  
  
```  
if (( _access( "datafile",2 )) == -1 )  
   fprintf( stderr, _strerror(NULL) );  
```  
  
 If `strErrMsg` is passed as `NULL`, `_strerror` returns a pointer to a string that contains the system error message for the last library call that produced an error. The error-message string is terminated by the newline character ('\n'). If `strErrMsg` is not equal to `NULL`, then `_strerror` returns a pointer to a string that contains (in order) your string message, a colon, a space, the system error message for the last library call that produces an error, and a newline character. Your string message can be, at most, 94 characters long.  
  
 The actual error number for `_strerror` is stored in the variable [errno](../crt/errno--_doserrno--_sys_errlist--and-_sys_nerr.md). To produce accurate results, call `_strerror` immediately after a library routine returns with an error. Otherwise, subsequent calls to `strerror` or `_strerror` can overwrite the `errno` value.  
  
 `_wcserror` and `__wcserror` are wide-character versions of `strerror` and `_strerror`, respectively.  
  
 `_strerror`, `_wcserror`, and `__wcserror` are not part of the ANSI definition; they are Microsoft extensions and we recommend that you do not use them where you want portable code. For ANSI compatibility, use `strerror` instead.  
  
 To get error strings, we recommend `strerror` or `_wcserror` instead of the deprecated macros [_sys_errlist](../crt/errno--_doserrno--_sys_errlist--and-_sys_nerr.md) and [_sys_nerr](../crt/errno--_doserrno--_sys_errlist--and-_sys_nerr.md) and the deprecated internal functions `__sys_errlist` and `__sys_nerr`.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcserror`|`strerror`|`strerror`|`_wcserror`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`strerror`|\<string.h>|  
|`_strerror`|\<string.h>|  
|`_wcserror`, `__wcserror`|\<string.h>|  
  
 For additional compatibility information, see [Compatibility](../crt/compatibility.md).  
  
## Example  
 See the example for [perror](../crt/perror--_wperror.md).  
  
## .NET Framework Equivalent  
 [System::Exception::Message](https://msdn.microsoft.com/en-us/library/system.exception.message.aspx)  
  
## See Also  
 [String Manipulation](../crt/string-manipulation--crt-.md)   
 [clearerr](../crt/clearerr.md)   
 [ferror](../crt/ferror.md)   
 [perror, _wperror](../crt/perror--_wperror.md)