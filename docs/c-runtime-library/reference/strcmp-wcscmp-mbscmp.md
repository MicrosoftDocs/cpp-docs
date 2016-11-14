---
title: "strcmp, wcscmp, _mbscmp | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "wcscmp"
  - "_mbscmp"
  - "strcmp"
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
  - "_mbscmp"
  - "wcscmp"
  - "strcmp"
  - "_tcscmp"
  - "_ftcscmp"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "tcscmp function"
  - "strcmp function"
  - "strings [C++], comparing"
  - "mbscmp function"
  - "string comparison [C++]"
  - "_mbscmp function"
  - "wcscmp function"
  - "_tcscmp function"
  - "_ftcscmp function"
  - "ftcscmp function"
ms.assetid: 5d216b57-7a5c-4cb3-abf0-0f4facf4396d
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# strcmp, wcscmp, _mbscmp
Compare strings.  
  
> [!IMPORTANT]
>  `_mbscmp` cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)]. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
int strcmp(  
   const char *string1,  
   const char *string2   
);  
int wcscmp(  
   const wchar_t *string1,  
   const wchar_t *string2   
);  
int _mbscmp(  
   const unsigned char *string1,  
   const unsigned char *string2   
);  
```  
  
#### Parameters  
 `string1`, `string2`  
 Null-terminated strings to compare.  
  
## Return Value  
 The return value for each of these functions indicates the ordinal relation of `string1` to `string2`.  
  
|Value|Relationship of string1 to string2|  
|-----------|----------------------------------------|  
|< 0|`string1` is less than `string2`|  
|0|`string1` is identical to `string2`|  
|> 0|`string1` is greater than `string2`|  
  
 On a parameter validation error, `_mbscmp` returns `_NLSCMPERROR`, which is defined in \<string.h> and \<mbstring.h>.  
  
## Remarks  
 The `strcmp` function performs an ordinal comparison of `string1` and `string2` and returns a value that indicates their relationship. `wcscmp` and `_mbscmp` are, respectively, wide-character and multibyte-character versions of `strcmp`. `_mbscmp` recognizes multibyte-character sequences according to the current multibyte code page and returns `_NLSCMPERROR` on an error. For more information, see [Code Pages](../../c-runtime-library/code-pages.md). Also, if `string1` or `string2` is a null pointer, `_mbscmp` invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, `_mbscmp` returns `_NLSCMPERROR` and sets `errno` to `EINVAL`. `strcmp` and `wcscmp` do not validate their parameters. These three functions behave identically otherwise.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcscmp`|`strcmp`|`_mbscmp`|`wcscmp`|  
  
 The `strcmp` functions differ from the `strcoll` functions in that `strcmp` comparisons are ordinal, and are not affected by locale. `strcoll` compares strings lexicographically by using the `LC_COLLATE` category of the current locale. For more information about the `LC_COLLATE` category, see [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  
  
 In the "C" locale, the order of characters in the character set (ASCII character set) is the same as the lexicographic character order. However, in other locales, the order of characters in the character set may differ from the lexicographic order. For example, in certain European locales, the character 'a' (value 0x61) comes before the character 'ä' (value 0xE4) in the character set, but the character 'ä' comes in front of the character 'a' lexicographically.  
  
 In locales for which the character set and the lexicographic character order differ, you can use `strcoll` instead of `strcmp` for lexicographic comparison of strings. Alternatively, you can use `strxfrm` on the original strings, and then use `strcmp` on the resulting strings.  
  
 The `strcmp` functions are case-sensitive. `_stricmp`, `_wcsicmp`, and `_mbsicmp` compare strings by first converting them to their lowercase forms. Two strings that contain characters that are located between 'Z' and 'a' in the ASCII table ('[', '`\`', ']', '`^`', '`_`', and '```') compare differently, depending on their case. For example, the two strings `"ABCDE"` and `"ABCD^"` compare one way if the comparison is lowercase (`"abcde"` > `"abcd^"`) and the other way (`"ABCDE"` < `"ABCD^"`) if the comparison is uppercase.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`strcmp`|<string.h>|  
|`wcscmp`|<string.h> or <wchar.h>|  
|`_mbscmp`|\<mbstring.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## Example  
  
```  
// crt_strcmp.c  
  
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
      strcpy_s( tmp, _countof (tmp), "less than" );  
   else  
      strcpy_s( tmp, _countof (tmp), "equal to" );  
   printf( "   strcmp:   String 1 is %s string 2\n", tmp );  
  
   // Case insensitive (could use equivalent _stricmp)  
   result = _stricmp( string1, string2 );  
   if( result > 0 )  
      strcpy_s( tmp, _countof (tmp), "greater than" );  
   else if( result < 0 )  
      strcpy_s( tmp, _countof (tmp), "less than" );  
   else  
      strcpy_s( tmp, _countof (tmp), "equal to" );  
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
 [System::String::CompareOrdinal](https://msdn.microsoft.com/en-us/library/system.string.compareordinal.aspx)  
  
## See Also  
 [String Manipulation](../../c-runtime-library/string-manipulation-crt.md)   
 [memcmp, wmemcmp](../../c-runtime-library/reference/memcmp-wmemcmp.md)   
 [_memicmp, _memicmp_l](../../c-runtime-library/reference/memicmp-memicmp-l.md)   
 [strcoll Functions](../../c-runtime-library/strcoll-functions.md)   
 [_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l](../../c-runtime-library/reference/stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)   
 [strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)   
 [strspn, wcsspn, _mbsspn, _mbsspn_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)   
 [strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](../../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)