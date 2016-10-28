---
title: "strcpy, wcscpy, _mbscpy"
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
  - "strcpy"
  - "wcscpy"
  - "_mbscpy"
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
  - "_mbscpy"
  - "_ftcscpy"
  - "wcscpy"
  - "_tcscpy"
  - "strcpy"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "strcpy function"
  - "tcscpy function"
  - "ftcscpy function"
  - "mbscpy function"
  - "wcscpy function"
  - "copying strings"
  - "strings [C++], copying"
  - "_tcscpy function"
  - "_ftcscpy function"
  - "_mbscpy function"
ms.assetid: f97a4f81-e9ee-4f15-888a-0fa5d7094c5a
caps.latest.revision: 29
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
# strcpy, wcscpy, _mbscpy
Copies a string. More secure versions of these functions are available; see [strcpy_s, wcscpy_s, _mbscpy_s](../crt/strcpy_s--wcscpy_s--_mbscpy_s.md).  
  
> [!IMPORTANT]
>  `_mbscpy` cannot be used in applications that execute in the [!INCLUDE[wrt](../atl/includes/wrt_md.md)]. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
char *strcpy(  
   char *strDestination,  
   const char *strSource   
);  
wchar_t *wcscpy(  
   wchar_t *strDestination,  
   const wchar_t *strSource   
);  
unsigned char *_mbscpy(  
   unsigned char *strDestination,  
   const unsigned char *strSource   
);  
template <size_t size>  
char *strcpy(  
   char (&strDestination)[size],  
   const char *strSource   
); // C++ only  
template <size_t size>  
wchar_t *wcscpy(  
   wchar_t (&strDestination)[size],  
   const wchar_t *strSource   
); // C++ only  
template <size_t size>  
unsigned char *_mbscpy(  
   unsigned char (&strDestination)[size],  
   const unsigned char *strSource   
); // C++ only  
```  
  
#### Parameters  
 `strDestination`  
 Destination string.  
  
 `strSource`  
 Null-terminated source string.  
  
## Return Value  
 Each of these functions returns the destination string. No return value is reserved to indicate an error.  
  
## Remarks  
 The `strcpy` function copies `strSource`, including the terminating null character, to the location that's specified by `strDestination`. The behavior of `strcpy` is undefined if the source and destination strings overlap.  
  
> [!IMPORTANT]
>  Because `strcpy` does not check for sufficient space in `strDestination` before it copies `strSource`, it is a potential cause of buffer overruns. Therefore, we recommend that you use [strcpy_s](../crt/strcpy_s--wcscpy_s--_mbscpy_s.md) instead.  
  
 `wcscpy` and `_mbscpy` are, respectively, wide-character and multibyte-character versions of `strcpy`. The arguments and return value of `wcscpy` are wide-character strings; those of `_mbscpy` are multibyte-character strings. These three functions behave identically otherwise.  
  
 In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure Template Overloads](../crt/secure-template-overloads.md).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcscpy`|`strcpy`|`_mbscpy`|`wcscpy`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`strcpy`|\<string.h>|  
|`wcscpy`|\<string.h> or \<wchar.h>|  
|`_mbscpy`|\<mbstring.h>|  
  
 For additional compatibility information, see [Compatibility](../crt/compatibility.md).  
  
## Example  
  
```  
// crt_strcpy.c  
// compile with: /W3  
// This program uses strcpy  
// and strcat to build a phrase.  
  
#include <string.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char string[80];  
  
   // If you change the previous line to  
   //   char string[20];  
   // strcpy and strcat will happily overrun the string  
   // buffer.  See the examples for strncpy and strncat  
   // for safer string handling.  
  
   strcpy( string, "Hello world from " ); // C4996  
   // Note: strcpy is deprecated; use strcpy_s instead  
   strcat( string, "strcpy " );           // C4996  
   // Note: strcat is deprecated; use strcat_s instead  
   strcat( string, "and " );              // C4996  
   strcat( string, "strcat!" );           // C4996  
   printf( "String = %s\n", string );  
}  
```  
  
 **String = Hello world from strcpy and strcat!**   
## .NET Framework Equivalent  
 [System::String::Copy](https://msdn.microsoft.com/en-us/library/system.string.copy.aspx)  
  
## See Also  
 [String Manipulation](../crt/string-manipulation--crt-.md)   
 [strcat, wcscat, _mbscat](../crt/strcat--wcscat--_mbscat.md)   
 [strcmp, wcscmp, _mbscmp](../crt/strcmp--wcscmp--_mbscmp.md)   
 [strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](../crt/strncat--_strncat_l--wcsncat--_wcsncat_l--_mbsncat--_mbsncat_l.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../crt/strncmp--wcsncmp--_mbsncmp--_mbsncmp_l.md)   
 [strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](../crt/strncpy--_strncpy_l--wcsncpy--_wcsncpy_l--_mbsncpy--_mbsncpy_l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../crt/_strnicmp--_wcsnicmp--_mbsnicmp--_strnicmp_l--_wcsnicmp_l--_mbsnicmp_l.md)   
 [strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](../crt/strrchr--wcsrchr--_mbsrchr--_mbsrchr_l.md)   
 [strspn, wcsspn, _mbsspn, _mbsspn_l](../crt/strspn--wcsspn--_mbsspn--_mbsspn_l.md)