---
title: "_strlwr, _wcslwr, _mbslwr, _strlwr_l, _wcslwr_l, _mbslwr_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_strlwr_l"
  - "_strlwr"
  - "_wcslwr_l"
  - "_mbslwr_l"
  - "_wcslwr"
  - "_mbslwr"
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
apitype: "DLLExport"
f1_keywords: 
  - "_strlwr"
  - "wcslwr_l"
  - "_ftcslwr"
  - "mbslwr_l"
  - "_mbslwr"
  - "_wcslwr"
  - "strlwr_l"
  - "_tcslwr"
  - "mbslwr"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "tcslwr function"
  - "_strlwr function"
  - "converting case"
  - "string conversion [C++], case"
  - "mbslwr function"
  - "_strlwr_l function"
  - "strlwr_l function"
  - "_wcslwr function"
  - "ftcslwr function"
  - "strings [C++], case"
  - "_tcslwr_l function"
  - "_wcslwr_l function"
  - "wcslwr_l function"
  - "mbslwr_l function"
  - "tcslwr_l function"
  - "_tcslwr function"
  - "converting case, CRT functions"
  - "_ftcslwr function"
  - "_mbslwr function"
  - "case, converting"
  - "strings [C++], converting case"
  - "_mbslwr_l function"
ms.assetid: d279181d-2e7d-401f-ab44-6e7c2786a046
caps.latest.revision: 36
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
# _strlwr, _wcslwr, _mbslwr, _strlwr_l, _wcslwr_l, _mbslwr_l
Converts a string to lowercase. More secure versions of these functions are available; see [_strlwr_s, _strlwr_s_l, _mbslwr_s, _mbslwr_s_l, _wcslwr_s, _wcslwr_s_l](../../c-runtime-library/reference/strlwr-s-strlwr-s-l-mbslwr-s-mbslwr-s-l-wcslwr-s-wcslwr-s-l.md).  
  
> [!IMPORTANT]
>  `_mbslwr` and `_mbslwr_l` cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
char *_strlwr(  
   char * str  
);  
wchar_t *_wcslwr(  
   wchar_t * str  
);  
unsigned char *_mbslwr(  
   unsigned char * str  
);  
char *_strlwr_l(  
   char * str,  
   _locale_t locale  
);  
wchar_t *_wcslwr_l(  
   wchar_t * str,  
   _locale_t locale  
);  
unsigned char *_mbslwr_l(  
   unsigned char * str,  
   _locale_t locale   
);  
template <size_t size>  
char *_strlwr(  
   char (&str)[size]  
); // C++ only  
template <size_t size>  
wchar_t *_wcslwr(  
   wchar_t (&str)[size]  
); // C++ only  
template <size_t size>  
unsigned char *_mbslwr(  
   unsigned char (&str)[size]  
); // C++ only  
template <size_t size>  
char *_strlwr_l(  
   char (&str)[size],  
   _locale_t locale  
); // C++ only  
template <size_t size>  
wchar_t *_wcslwr_l(  
   wchar_t (&str)[size],  
   _locale_t locale  
); // C++ only  
template <size_t size>  
unsigned char *_mbslwr_l(  
   unsigned char (&str)[size],  
   _locale_t locale   
); // C++ only  
```  
  
#### Parameters  
 `str`  
 Null-terminated string to convert to lowercase.  
  
 `locale`  
 The locale to use.  
  
## Return Value  
 Each of these functions returns a pointer to the converted string. Because the modification is done in place, the pointer returned is the same as the pointer passed as the input argument. No return value is reserved to indicate an error.  
  
## Remarks  
 The `_strlwr` function converts any uppercase letters in `str` to lowercase as determined by the `LC_CTYPE` category setting of the locale. Other characters are not affected. For more information on `LC_CTYPE`, see [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). The versions of these functions without the`_l` suffix use the current locale for their locale-dependent behavior; the versions with the `_l` suffix are identical except that they use the locale passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
 The `_wcslwr` and `_mbslwr` functions are wide-character and multibyte-character versions of `_strlwr`. The argument and return value of `_wcslwr` are wide-character strings; those of `_mbslwr` are multibyte-character strings. These three functions behave identically otherwise.  
  
 If `str` is a `NULL` pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md) . If execution is allowed to continue, these functions return the original string and set `errno` to `EINVAL`.  
  
 In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcslwr`|`_strlwr`|`_mbslwr`|`_wcslwr`|  
|`_tcslwr_l`|`_strlwr_l`|`_mbslwr_l`|`_wcslwr_l`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_strlwr`, `_strlwr_l`|\<string.h>|  
|`_wcslwr`, `_wcslwr_l`|\<string.h> or \<wchar.h>|  
|`_mbslwr`, `_mbslwr_l`|\<mbstring.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
  
```  
// crt_strlwr.c  
// compile with: /W3  
// This program uses _strlwr and _strupr to create  
// uppercase and lowercase copies of a mixed-case string.  
#include <string.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char string[100] = "The String to End All Strings!";  
   char * copy1 = _strdup( string ); // make two copies  
   char * copy2 = _strdup( string );  
  
   _strlwr( copy1 ); // C4996  
   // Note: _strlwr is deprecated; consider using _strlwr_s instead  
   _strupr( copy2 ); // C4996  
   // Note: _strupr is deprecated; consider using _strupr_s instead  
  
   printf( "Mixed: %s\n", string );  
   printf( "Lower: %s\n", copy1 );  
   printf( "Upper: %s\n", copy2 );  
  
   free( copy1 );  
   free( copy2 );  
}  
```  
  
```Output  
Mixed: The String to End All Strings!  
Lower: the string to end all strings!  
Upper: THE STRING TO END ALL STRINGS!  
```  
  
## .NET Framework Equivalent  
 [System::String::ToLower](https://msdn.microsoft.com/en-us/library/system.string.tolower.aspx)  
  
## See Also  
 [String Manipulation](../../c-runtime-library/string-manipulation-crt.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [_strupr, _strupr_l, _mbsupr, _mbsupr_l, _wcsupr_l, _wcsupr](../../c-runtime-library/reference/strupr-strupr-l-mbsupr-mbsupr-l-wcsupr-l-wcsupr.md)