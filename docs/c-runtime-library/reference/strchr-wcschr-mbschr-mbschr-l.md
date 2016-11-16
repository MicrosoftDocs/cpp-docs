---
title: "strchr, wcschr, _mbschr, _mbschr_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "strchr"
  - "wcschr"
  - "_mbschr_l"
  - "_mbschr"
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
  - "_ftcschr"
  - "strchr"
  - "wcschr"
  - "_tcschr"
  - "_mbschr"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "strings [C++], searching"
  - "mbschr function"
  - "_ftcschr function"
  - "_mbschr function"
  - "characters [C++], finding in strings"
  - "_mbschr_l function"
  - "ftcschr function"
  - "wcschr function"
  - "strchr function"
  - "_tcschr function"
  - "tcschr function"
  - "mbschr_l function"
ms.assetid: 2639905d-e983-43b7-b885-abef32cfac43
caps.latest.revision: 31
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
# strchr, wcschr, _mbschr, _mbschr_l
Finds a character in a string, by using the current locale or a specified LC_CTYPE conversion-state category.  
  
> [!IMPORTANT]
>  `_mbschr` and `_mbschr_l` cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
char *strchr(  
   const char *str,  
   int c   
);  // C only  
char *strchr(  
   char * str,  
   int c   
); // C++ only  
const char *strchr(  
   const char * str,  
   int c   
); // C++ only  
wchar_t *wcschr(  
   const wchar_t *str,  
   wchar_t c   
); // C only  
wchar_t *wcschr(  
   wchar_t *str,  
   wchar_t c   
);  // C++ only  
const wchar_t *wcschr(  
   const wchar_t *str,  
   wchar_t c   
);  // C++ only  
unsigned char *_mbschr(  
   const unsigned char *str,  
   unsigned int c   
); // C only  
unsigned char *_mbschr(  
   unsigned char *str,  
   unsigned int c   
); // C++ only  
const unsigned char *_mbschr(  
   const unsigned char *str,  
   unsigned int c   
); // C++ only  
unsigned char *_mbschr_l(  
   const unsigned char *str,  
   unsigned int c,  
   _locale_t locale  
); // C only   
unsigned char *_mbschr_l(  
   unsigned char *str,  
   unsigned int c,  
   _locale_t locale  
); // C++ only  
const unsigned char *_mbschr_l(  
   const unsigned char *str,  
   unsigned int c,  
   _locale_t locale  
); // C++ only  
```  
  
#### Parameters  
 `str`  
 Null-terminated source string.  
  
 `c`  
 Character to be located.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 Each of these functions returns a pointer to the first occurrence of `c` in `str`, or `NULL` if `c` is not found.  
  
## Remarks  
 The `strchr` function finds the first occurrence of `c` in `str`, or it returns `NULL` if `c` is not found. The null terminating character is included in the search.  
  
 `wcschr`, `_mbschr` and `_mbschr_l` are wide-character and multibyte-character versions of `strchr`. The arguments and return value of `wcschr` are wide-character strings; those of `_mbschr` are multibyte-character strings. `_mbschr` recognizes multibyte-character sequences. Also, if the string is a null pointer, `_mbschr` invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, `_mbschr` returns `NULL` and sets `errno` to `EINVAL`. `strchr` and `wcschr` do not validate their parameters. These three functions behave identically otherwise.  
  
 The output value is affected by the setting of the `LC_CTYPE` category setting of the locale; for more information, see [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). The versions of these functions without the `_l` suffix use the current locale for this locale-dependent behavior; the versions with the `_l` suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
 In C, these functions take a `const` pointer for the first argument. In C++, two overloads are available. The overload taking a pointer to `const` returns a pointer to `const`; the version that takes a pointer to non-`const` returns a pointer to non-`const`. The macro _CONST_CORRECT_OVERLOADS is defined if both the `const` and non-`const` versions of these functions are available. If you require the non-`const` behavior for both C++ overloads, define the symbol _CONST_RETURN.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcschr`|`strchr`|`_mbschr`|`wcschr`|  
|**_n/a**|**n/a**|`_mbschr_l`|**n/a**|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`strchr`|\<string.h>|  
|`wcschr`|\<string.h> or \<wchar.h>|  
|`_mbschr`, `_mbschr_l`|\<mbstring.h>|  
  
 For more information about compatibility, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
  
```  
// crt_strchr.c  
//   
// This program illustrates searching for a character  
// with strchr (search forward) or strrchr (search backward).  
//  
  
#include <string.h>  
#include <stdio.h>  
  
int  ch = 'r';  
  
char string[] = "The quick brown dog jumps over the lazy fox";  
char fmt1[] =   "         1         2         3         4         5";  
char fmt2[] =   "12345678901234567890123456789012345678901234567890";  
  
int main( void )  
{  
   char *pdest;  
   int result;  
  
   printf_s( "String to be searched:\n      %s\n", string );  
   printf_s( "      %s\n      %s\n\n", fmt1, fmt2 );  
   printf_s( "Search char:   %c\n", ch );  
  
   // Search forward.   
   pdest = strchr( string, ch );  
   result = (int)(pdest - string + 1);  
   if ( pdest != NULL )  
      printf_s( "Result:   first %c found at position %d\n",   
              ch, result );  
   else  
      printf_s( "Result:   %c not found\n", ch );  
  
   // Search backward.   
   pdest = strrchr( string, ch );  
   result = (int)(pdest - string + 1);  
   if ( pdest != NULL )  
      printf_s( "Result:   last %c found at position %d\n", ch, result );  
   else  
      printf_s( "Result:\t%c not found\n", ch );  
}  
```  
  
```Output  
String to be searched:  
      The quick brown dog jumps over the lazy fox  
               1         2         3         4         5  
      12345678901234567890123456789012345678901234567890  
  
Search char:   r  
Result:   first r found at position 12  
Result:   last r found at position 30  
```  
  
## .NET Framework Equivalent  
 [System::String::IndexOf](https://msdn.microsoft.com/en-us/library/system.string.indexof.aspx)  
  
## See Also  
 [String Manipulation](../../c-runtime-library/string-manipulation-crt.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [strcspn, wcscspn, _mbscspn, _mbscspn_l](../../c-runtime-library/reference/strcspn-wcscspn-mbscspn-mbscspn-l.md)   
 [strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](../../c-runtime-library/reference/strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](../../c-runtime-library/reference/strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)   
 [strpbrk, wcspbrk, _mbspbrk, _mbspbrk_l](../../c-runtime-library/reference/strpbrk-wcspbrk-mbspbrk-mbspbrk-l.md)   
 [strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)   
 [strstr, wcsstr, _mbsstr, _mbsstr_l](../../c-runtime-library/reference/strstr-wcsstr-mbsstr-mbsstr-l.md)