---
title: "strcpy_s, wcscpy_s, _mbscpy_s"
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
  - "wcscpy_s"
  - "_mbscpy_s"
  - "strcpy_s"
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
  - "api-ms-win-crt-multibyte-l1-1-0.dll"
  - "api-ms-win-crt-string-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "strcpy_s"
  - "_mbscpy_s"
  - "_tcscpy_s"
  - "wcscpy_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "strcpy_s function"
  - "_tcscpy_s function"
  - "_mbscpy_s function"
  - "copying strings"
  - "strings [C++], copying"
  - "tcscpy_s function"
  - "wcscpy_s function"
ms.assetid: 611326f3-7929-4a5d-a465-a4683af3b053
caps.latest.revision: 39
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# strcpy_s, wcscpy_s, _mbscpy_s
Copies a string. These versions of [strcpy, wcscpy, _mbscpy](../crt/strcpy--wcscpy--_mbscpy.md) have security enhancements, as described in [Security Features in the CRT](../crt/security-features-in-the-crt.md).  
  
> [!IMPORTANT]
>  `_mbscpy_s` cannot be used in applications that execute in the [!INCLUDE[wrt](../atl/includes/wrt_md.md)]. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
errno_t strcpy_s(  
   char *strDestination,  
   size_t numberOfElements,  
   const char *strSource   
);  
errno_t wcscpy_s(  
   wchar_t *strDestination,  
   size_t numberOfElements,  
   const wchar_t *strSource   
);  
errno_t _mbscpy_s(  
   unsigned char *strDestination,  
   size_t numberOfElements,  
   const unsigned char *strSource   
);  
template <size_t size>  
errno_t strcpy_s(  
   char (&strDestination)[size],  
   const char *strSource   
); // C++ only  
template <size_t size>  
errno_t wcscpy_s(  
   wchar_t (&strDestination)[size],  
   const wchar_t *strSource   
); // C++ only  
template <size_t size>  
errno_t _mbscpy_s(  
   unsigned char (&strDestination)[size],  
   const unsigned char *strSource   
); // C++ only  
```  
  
#### Parameters  
 `strDestination`  
 Location of the destination string buffer.  
  
 `numberOfElements`  
 Size of the destination string buffer in `char` units for narrow and multi-byte functions, and `wchar_t` units for wide functions.  
  
 `strSource`  
 Null-terminated source string buffer.  
  
## Return Value  
 Zero if successful; otherwise, an error.  
  
### Error Conditions  
  
|`strDestination`|`numberOfElements`|`strSource`|Return value|Contents of `strDestination`|  
|----------------------|------------------------|-----------------|------------------|----------------------------------|  
|`NULL`|any|any|`EINVAL`|not modified|  
|any|any|`NULL`|`EINVAL`|`strDestination`[0] set to 0|  
|any|0, or too small|any|`ERANGE`|`strDestination`[0] set to 0|  
  
## Remarks  
 The `strcpy_s` function copies the contents in the address of `strSource`, including the terminating null character, to the location that's specified by `strDestination`. The destination string must be large enough to hold the source string and its terminating null character. The behavior of `strcpy_s` is undefined if the source and destination strings overlap.  
  
 `wcscpy_s` is the wide-character version of `strcpy_s`, and `_mbscpy_s` is the multibyte-character version. The arguments and return value of `wcscpy_s` are wide-character strings; those of `_mbscpy_s` are multibyte-character strings. These three functions behave identically otherwise.  
  
 If `strDestination` or `strSource` is a null pointer, or if the destination string is too small, the invalid parameter handler is invoked, as described in [Parameter Validation](../crt/parameter-validation.md). If execution is allowed to continue, these functions return `EINVAL` and set `errno` to `EINVAL` when `strDestination` or `strSource` is a null pointer, and they return `ERANGE` and set `errno` to `ERANGE` when the destination string is too small.  
  
 Upon successful execution, the destination string is always null-terminated.  
  
 In C++, use of these functions is simplified by template overloads that can infer buffer length automatically so that you don't have to specify a size argument, and they can automatically replace older, less-secure functions with their newer, more secure counterparts. For more information, see [Secure Template Overloads](../crt/secure-template-overloads.md).  
  
 The debug versions of these functions first fill the buffer with 0xFE. To disable this behavior, use [_CrtSetDebugFillThreshold](../crt/_crtsetdebugfillthreshold.md).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcscpy_s`|`strcpy_s`|`_mbscpy_s`|`wcscpy_s`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`strcpy_s`|\<string.h>|  
|`wcscpy_s`|\<string.h> or \<wchar.h>|  
|`_mbscpy_s`|\<mbstring.h>|  
  
 For additional compatibility information, see [Compatibility](../crt/compatibility.md).  
  
## Example  
  
```  
// crt_strcpy_s.cpp  
// This program uses strcpy_s and strcat_s  
// to build a phrase.  
//  
  
#include <string.h>  
#include <stdlib.h>  
#include <stdio.h>  
#include <errno.h>  
  
int main( void )  
{  
   char string[80];  
   // using template versions of strcpy_s and strcat_s:  
   strcpy_s( string, "Hello world from " );  
   strcat_s( string, "strcpy_s " );  
   strcat_s( string, "and " );  
   // of course we can supply the size explicitly if we want to:  
   strcat_s( string, _countof(string), "strcat_s!" );  
  
   printf( "String = %s\n", string );  
}  
```  
  
 **String = Hello world from strcpy_s and strcat_s!**   
## .NET Framework Equivalent  
 [System::String::Copy](https://msdn.microsoft.com/en-us/library/system.string.copy.aspx)  
  
## See Also  
 [String Manipulation](../crt/string-manipulation--crt-.md)   
 [strcat, wcscat, _mbscat](../crt/strcat--wcscat--_mbscat.md)   
 [strcmp, wcscmp, _mbscmp](../crt/strcmp--wcscmp--_mbscmp.md)   
 [strncat_s, _strncat_s_l, wcsncat_s, _wcsncat_s_l, _mbsncat_s, _mbsncat_s_l](../crt/strncat_s--_strncat_s_l--wcsncat_s--_wcsncat_s_l--_mbsncat_s--_mbsncat_s_l.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../crt/strncmp--wcsncmp--_mbsncmp--_mbsncmp_l.md)   
 [strncpy_s, _strncpy_s_l, wcsncpy_s, _wcsncpy_s_l, _mbsncpy_s, _mbsncpy_s_l](../crt/strncpy_s--_strncpy_s_l--wcsncpy_s--_wcsncpy_s_l--_mbsncpy_s--_mbsncpy_s_l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../crt/_strnicmp--_wcsnicmp--_mbsnicmp--_strnicmp_l--_wcsnicmp_l--_mbsnicmp_l.md)   
 [strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](../crt/strrchr--wcsrchr--_mbsrchr--_mbsrchr_l.md)   
 [strspn, wcsspn, _mbsspn, _mbsspn_l](../crt/strspn--wcsspn--_mbsspn--_mbsspn_l.md)