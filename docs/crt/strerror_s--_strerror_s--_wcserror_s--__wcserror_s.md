---
title: "strerror_s, _strerror_s, _wcserror_s, __wcserror_s"
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
  - "__wcserror_s"
  - "_strerror_s"
  - "_wcserror_s"
  - "strerror_s"
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
  - "wcserror_s"
  - "__wcserror_s"
  - "_tcserror_s"
  - "_wcserror_s"
  - "tcserror_s"
  - "strerror_s"
  - "_strerror_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "__wcserror_s function"
  - "error messages, printing"
  - "tcserror_s function"
  - "printing error messages"
  - "strerror_s function"
  - "_wcserror_s function"
  - "_tcserror_s function"
  - "_strerror_s function"
  - "wcserror_s function"
  - "error messages, getting"
ms.assetid: 9e5b15a0-efe1-4586-b7e3-e1d7c31a03d6
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
# strerror_s, _strerror_s, _wcserror_s, __wcserror_s
Get a system error message (`strerror_s`, `_wcserror_s`) or print a user-supplied error message (`_strerror_s`, `__wcserror_s`). These are versions of [strerror, _strerror, _wcserror, \__wcserror](../crt/strerror--_strerror--_wcserror--__wcserror.md) with security enhancements as described in [Security Features in the CRT](../crt/security-features-in-the-crt.md).  
  
## Syntax  
  
```  
errno_t strerror_s(  
   char *buffer,  
   size_t numberOfElements,  
   int errnum   
);  
errno_t _strerror_s(  
   char *buffer,  
   size_t numberOfElements,  
   const char *strErrMsg   
);  
errno_t _wcserror_s(  
   wchar_t *buffer,  
   size_t numberOfElements,  
   int errnum   
);  
errno_t __wcserror_s(  
   wchar_t *buffer,  
   size_t numberOfElements,  
   const wchar_t *strErrMsg   
);  
template <size_t size>  
errno_t strerror_s(  
   char (&buffer)[size],  
   int errnum   
); // C++ only  
template <size_t size>  
errno_t _strerror_s(  
   char (&buffer)[size],  
   const char *strErrMsg   
); // C++ only  
template <size_t size>  
errno_t _wcserror_s(  
   wchar_t (&buffer)[size],  
   int errnum   
); // C++ only  
template <size_t size>  
errno_t __wcserror_s(  
   wchar_t (&buffer)[size],  
   const wchar_t *strErrMsg   
); // C++ only  
```  
  
#### Parameters  
 `buffer`  
 Buffer to hold error string.  
  
 `numberOfElements`  
 Size of buffer.  
  
 `errnum`  
 Error number.  
  
 `strErrMsg`  
 User-supplied message.  
  
## Return Value  
 Zero if successful, an error code on failure.  
  
### Error Condtions  
  
|`buffer`|`numberOfElements`|`strErrMsg`|Contents of `buffer`|  
|--------------|------------------------|-----------------|--------------------------|  
|`NULL`|any|any|n/a|  
|any|0|any|not modified|  
  
## Remarks  
 The `strerror_s` function maps `errnum` to an error-message string, returning the string in `buffer`. `_strerror_s` doesn't take the error number; it uses the current value of `errno` to determine the appropriate message. Neither `strerror_s` nor `_strerror_s` actually prints the message: For that, you need to call an output function such as [fprintf](../crt/fprintf--_fprintf_l--fwprintf--_fwprintf_l.md):  
  
```  
if (( _access( "datafile",2 )) == -1 )  
{  
   _strerror_s(buffer, 80);  
   fprintf( stderr, buffer );  
}  
```  
  
 If `strErrMsg` is `NULL`, `_strerror_s` returns a string in `buffer` containing the system error message for the last library call that produced an error. The error-message string is terminated by the newline character ('\n'). If `strErrMsg` is not equal to `NULL`, then `_strerror_s` returns a string in `buffer` containing (in order) your string message, a colon, a space, the system error message for the last library call producing an error, and a newline character. Your string message can be, at most, 94 characters long.  
  
 These functions truncate the error message if its length exceeds `numberOfElements` -1. The resulting string in `buffer` is always null-terminated.  
  
 The actual error number for `_strerror_s` is stored in the variable [errno](../crt/errno--_doserrno--_sys_errlist--and-_sys_nerr.md). The system error messages are accessed through the variable [_sys_errlist](../crt/errno--_doserrno--_sys_errlist--and-_sys_nerr.md), which is an array of messages ordered by error number. `_strerror_s` accesses the appropriate error message by using the `errno` value as an index to the variable `_sys_errlist`. The value of the variable [_sys_nerr](../crt/errno--_doserrno--_sys_errlist--and-_sys_nerr.md) is defined as the maximum number of elements in the `_sys_errlist` array. To produce accurate results, call `_strerror_s` immediately after a library routine returns with an error. Otherwise, subsequent calls to `strerror_s` or `_strerror_s` can overwrite the `errno` value.  
  
 `_wcserror_s` and `__wcserror_s`are wide-character versions of `strerror_s`and `_strerror_s`, respectively.  
  
 These functions validate their parameters. If buffer is `NULL` or if the size parameter is 0, the invalid parameter handler is invoked, as described in [Parameter Validation](../crt/parameter-validation.md) . If execution is allowed to continue, the functions return `EINVAL` and set `errno` to `EINVAL`.  
  
 `_strerror_s, _wcserror_s,` and `__wcserror_s` are not part of the ANSI definition but are instead Microsoft extensions to it. Do not use them where portability is desired; for ANSI compatibility, use `strerror_s` instead.  
  
 In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically, eliminating the need to specify a size argument. For more information, see [Secure Template Overloads](../crt/secure-template-overloads.md).  
  
 The debug versions of these functions first fill the buffer with 0xFD. To disable this behavior, use [_CrtSetDebugFillThreshold](../crt/_crtsetdebugfillthreshold.md).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcserror_s`|`strerror_s`|`strerror_s`|`_wcserror_s`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`strerror_s`, `_strerror_s`|\<string.h>|  
|`_wcserror_s`, `__wcserror_s`|\<string.h> or \<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## Example  
 See the example for [perror](../crt/perror--_wperror.md).  
  
## .NET Framework Equivalent  
 [System::Exception::Message](https://msdn.microsoft.com/en-us/library/system.exception.message.aspx)  
  
## See Also  
 [String Manipulation](../crt/string-manipulation--crt-.md)   
 [clearerr](../crt/clearerr.md)   
 [ferror](../crt/ferror.md)   
 [perror, _wperror](../crt/perror--_wperror.md)