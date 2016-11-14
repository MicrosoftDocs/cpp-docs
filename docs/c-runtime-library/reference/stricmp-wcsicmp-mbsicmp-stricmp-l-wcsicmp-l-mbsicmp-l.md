---
title: "_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_stricmp_l"
  - "_mbsicmp"
  - "_wcsicmp"
  - "_mbsicmp_l"
  - "_stricmp"
  - "_wcsicmp_l"
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
  - "_ftcsicmp"
  - "_stricmp"
  - "wcsicmp_l"
  - "_wcsicmp"
  - "_tcsicmp"
  - "_strcmpi"
  - "stricmp_l"
  - "_mbsicmp"
  - "_fstricmp"
  - "mbsicmp_l"
  - "mbsicmp"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_wcsicmp function"
  - "_stricmp_l function"
  - "fstricmp function"
  - "_tcsicmp function"
  - "ftcsicmp function"
  - "string comparison [C++], lowercase"
  - "_wcsicmp_l function"
  - "_fstricmp function"
  - "strings [C++], comparing"
  - "mbsicmp function"
  - "_ftcsicmp function"
  - "_mbsicmp_l function"
  - "wcsicmp_l function"
  - "_stricmp function"
  - "_mbsicmp function"
  - "tcsicmp function"
  - "stricmp_l function"
  - "mbsicmp_l function"
  - "_strcmpi function"
ms.assetid: 0e1ee515-0d75-435a-a445-8875d4669b50
caps.latest.revision: 28
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
# _stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l
Performs a case-insensitive comparison of strings.  
  
> [!IMPORTANT]
>  `_mbsicmp` and `_mbsicmp_l` cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
int _stricmp(  
   const char *string1,  
   const char *string2   
);  
int _wcsicmp(  
   const wchar_t *string1,  
   const wchar_t *string2   
);  
int _mbsicmp(  
   const unsigned char *string1,  
   const unsigned char *string2   
);  
int _stricmp_l(  
   const char *string1,  
   const char *string2,  
   _locale_t locale  
);  
int _wcsicmp_l(  
   const wchar_t *string1,  
   const wchar_t *string2,  
   _locale_t locale  
);  
int _mbsicmp_l(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `string1, string2`  
 Null-terminated strings to compare.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 The return value indicates the relation of `string1` to `string2` as follows.  
  
|Return value|Description|  
|------------------|-----------------|  
|< 0|`string1` less than `string2`|  
|0|`string1` identical to `string2`|  
|> 0|`string1` greater than `string2`|  
  
 On an error, `_mbsicmp` returns `_NLSCMPERROR`, which is defined in \<string.h> and \<mbstring.h>.  
  
## Remarks  
 The `_stricmp` function ordinally compares `string1` and `string2` after converting each character to lowercase, and returns a value indicating their relationship. `_stricmp` differs from `_stricoll` in that the `_stricmp` comparison is only affected by `LC_CTYPE`, which determines which characters are upper and lowercase. The `_stricoll` function compares strings according to both the `LC_CTYPE` and `LC_COLLATE` categories of the locale, which includes both the case and the collation order. For more information about the `LC_COLLATE` category, see [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) and [Locale Categories](../../c-runtime-library/locale-categories.md). The versions of these functions without the `_l` suffix use the current locale for locale-dependent behavior. The versions with the suffix are identical except that they use the locale passed in instead. If the locale has not been set, the C locale is used. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
> [!NOTE]
>  `_stricmp` is equivalent to `_strcmpi`. They can be used interchangeably but `_stricmp` is the preferred standard.  
  
 The `_strcmpi` function is equivalent to `_stricmp` and is provided for backward compatibility only.  
  
 Because `_stricmp` does lowercase comparisons, it may result in unexpected behavior.  
  
 To illustrate when case conversion by `_stricmp` affects the outcome of a comparison, assume that you have the two strings JOHNSTON and JOHN_HENRY. The string JOHN_HENRY will be considered less than JOHNSTON because the "_" has a lower ASCII value than a lowercase S. In fact, any character that has an ASCII value between 91 and 96 will be considered less than any letter.  
  
 If the [strcmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md) function is used instead of `_stricmp`, JOHN_HENRY will be greater than JOHNSTON.  
  
 `_wcsicmp` and `_mbsicmp` are wide-character and multibyte-character versions of `_stricmp`. The arguments and return value of `_wcsicmp` are wide-character strings; those of `_mbsicmp` are multibyte-character strings. `_mbsicmp` recognizes multibyte-character sequences according to the current multibyte code page and returns `_NLSCMPERROR` on an error. For more information, see [Code Pages](../../c-runtime-library/code-pages.md). These three functions behave identically otherwise.  
  
 `_wcsicmp` and `wcscmp` behave identically except that `wcscmp` does not convert its arguments to lowercase before comparing them. `_mbsicmp` and `_mbscmp` behave identically except that `_mbscmp` does not convert its arguments to lowercase before comparing them.  
  
 You will need to call [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) for `_wcsicmp` to work with Latin 1 characters. The C locale is in effect by default, so, for example, ä will not compare equal to Ä. Call `setlocale` with any locale other than the C locale before the call to `_wcsicmp`. The following sample demonstrates how `_wcsicmp` is sensitive to the locale:  
  
```  
// crt_stricmp_locale.c  
#include <string.h>  
#include <stdio.h>  
#include <locale.h>  
  
int main() {  
   setlocale(LC_ALL,"C");   // in effect by default  
   printf("\n%d",_wcsicmp(L"ä", L"Ä"));   // compare fails  
   setlocale(LC_ALL,"");  
   printf("\n%d",_wcsicmp(L"ä", L"Ä"));   // compare succeeds  
}  
```  
  
 An alternative is to call [_create_locale, _wcreate_locale](../../c-runtime-library/reference/create-locale-wcreate-locale.md) and pass the returned locale object as a parameter to `_wcsicmp_l`.  
  
 All of these functions validate their parameters. If either `string1` or `string2` are null pointers, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md) . If execution is allowed to continue, these functions return `_NLSCMPERROR` and set `errno` to `EINVAL`.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcsicmp`|`_stricmp`|`_mbsicmp`|`_wcsicmp`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_stricmp`, `_stricmp_l`|\<string.h>|  
|`_wcsicmp`, `_wcsicmp_l`|\<string.h> or \<wchar.h>|  
|`_mbsicmp`, `_mbsicmp_l`|\<mbstring.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
  
```  
// crt_stricmp.c  
  
#include <string.h>  
#include <stdio.h>  
#include <stdlib.h>  
  
char string1[] = "The quick brown dog jumps over the lazy fox";  
char string2[] = "The QUICK brown dog jumps over the lazy fox";  
  
int main( void )  
{  
   char tmp[20];  
   int result;  
  
   // Case sensitive  
   printf( "Compare strings:\n   %s\n   %s\n\n", string1, string2 );  
   result = strcmp( string1, string2 );  
   if( result > 0 )  
      strcpy_s( tmp, _countof(tmp), "greater than" );  
   else if( result < 0 )  
      strcpy_s( tmp, _countof(tmp), "less than" );  
   else  
      strcpy_s( tmp, _countof(tmp), "equal to" );  
   printf( "   strcmp:   String 1 is %s string 2\n", tmp );  
  
   // Case insensitive (could use equivalent _stricmp)  
   result = _stricmp( string1, string2 );  
   if( result > 0 )  
      strcpy_s( tmp, _countof(tmp), "greater than" );  
   else if( result < 0 )  
      strcpy_s( tmp, _countof(tmp), "less than" );  
   else  
      strcpy_s( tmp, _countof(tmp), "equal to" );  
   printf( "   _stricmp:  String 1 is %s string 2\n", tmp );  
}  
```  
  
```Output  
Compare strings:  
   The quick brown dog jumps over the lazy fox  
   The QUICK brown dog jumps over the lazy fox  
  
   strcmp:   String 1 is greater than string 2  
   _stricmp:  String 1 is equal to string 2  
```  
  
## .NET Framework Equivalent  
 [System::String::Compare](https://msdn.microsoft.com/en-us/library/system.string.compare.aspx)  
  
## See Also  
 [String Manipulation](../../c-runtime-library/string-manipulation-crt.md)   
 [memcmp, wmemcmp](../../c-runtime-library/reference/memcmp-wmemcmp.md)   
 [_memicmp, _memicmp_l](../../c-runtime-library/reference/memicmp-memicmp-l.md)   
 [strcmp, wcscmp, _mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [strcoll Functions](../../c-runtime-library/strcoll-functions.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)   
 [strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)   
 [_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](../../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)   
 [strspn, wcsspn, _mbsspn, _mbsspn_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)