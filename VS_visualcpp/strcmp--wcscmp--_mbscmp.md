---
title: "strcmp, wcscmp, _mbscmp"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - wcscmp
  - _mbscmp
  - strcmp
apilocation: 
  - msvcrt.dll
  - msvcr80.dll
  - msvcr90.dll
  - msvcr100.dll
  - msvcr100_clr0400.dll
  - msvcr110.dll
  - msvcr110_clr0400.dll
  - msvcr120.dll
  - msvcr120_clr0400.dll
  - ucrtbase.dll
  - api-ms-win-crt-multibyte-l1-1-0.dll
  - api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
ms.assetid: 5d216b57-7a5c-4cb3-abf0-0f4facf4396d
caps.latest.revision: 22
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# strcmp, wcscmp, _mbscmp
Compare strings.  
  
> [!IMPORTANT]
>  `_mbscmp` cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
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
  
 On a parameter validation error, `_mbscmp` returns `_NLSCMPERROR`, which is defined in <string.h> and <mbstring.h>.  
  
## Remarks  
 The `strcmp` function performs an ordinal comparison of `string1` and `string2` and returns a value that indicates their relationship. `wcscmp` and `_mbscmp` are, respectively, wide-character and multibyte-character versions of `strcmp`. `_mbscmp` recognizes multibyte-character sequences according to the current multibyte code page and returns `_NLSCMPERROR` on an error. For more information, see [Code Pages](../VS_visualcpp/Code-Pages.md). Also, if `string1` or `string2` is a null pointer, `_mbscmp` invokes the invalid parameter handler, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, `_mbscmp` returns `_NLSCMPERROR` and sets `errno` to `EINVAL`. `strcmp` and `wcscmp` do not validate their parameters. These three functions behave identically otherwise.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcscmp`|`strcmp`|`_mbscmp`|`wcscmp`|  
  
 The `strcmp` functions differ from the `strcoll` functions in that `strcmp` comparisons are ordinal, and are not affected by locale. `strcoll` compares strings lexicographically by using the `LC_COLLATE` category of the current locale. For more information about the `LC_COLLATE` category, see [setlocale, _wsetlocale](../VS_visualcpp/setlocale--_wsetlocale.md).  
  
 In the "C" locale, the order of characters in the character set (ASCII character set) is the same as the lexicographic character order. However, in other locales, the order of characters in the character set may differ from the lexicographic order. For example, in certain European locales, the character 'a' (value 0x61) comes before the character 'ä' (value 0xE4) in the character set, but the character 'ä' comes in front of the character 'a' lexicographically.  
  
 In locales for which the character set and the lexicographic character order differ, you can use `strcoll` instead of `strcmp` for lexicographic comparison of strings. Alternatively, you can use `strxfrm` on the original strings, and then use `strcmp` on the resulting strings.  
  
 The `strcmp` functions are case-sensitive. `_stricmp`, `_wcsicmp`, and `_mbsicmp` compare strings by first converting them to their lowercase forms. Two strings that contain characters that are located between 'Z' and 'a' in the ASCII table ('[', '`\`', ']', '`^`', '`_`', and '```') compare differently, depending on their case. For example, the two strings `"ABCDE"` and `"ABCD^"` compare one way if the comparison is lowercase (`"abcde"` > `"abcd^"`) and the other way (`"ABCDE"` < `"ABCD^"`) if the comparison is uppercase.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`strcmp`|<string.h>|  
|`wcscmp`|<string.h> or <wchar.h>|  
|`_mbscmp`|<mbstring.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../VS_visualcpp/CRT-Library-Features.md).  
  
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
  
 **Compare strings:**  
 **The quick brown dog jumps over the lazy fox**  
 **The QUICK brown dog jumps over the lazy fox**  
 **strcmp:   String 1 is greater than string 2**  
 **_stricmp:  String 1 is equal to string 2**   
## .NET Framework Equivalent  
 [System::String::CompareOrdinal](https://msdn.microsoft.com/en-us/library/system.string.compareordinal.aspx)  
  
## See Also  
 [String Manipulation](../VS_visualcpp/String-Manipulation--CRT-.md)   
 [memcmp, wmemcmp](../VS_visualcpp/memcmp--wmemcmp.md)   
 [_memicmp, _memicmp_l](../VS_visualcpp/_memicmp--_memicmp_l.md)   
 [strcoll Functions](../VS_visualcpp/strcoll-Functions.md)   
 [_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l](../VS_visualcpp/_stricmp--_wcsicmp--_mbsicmp--_stricmp_l--_wcsicmp_l--_mbsicmp_l.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../VS_visualcpp/strncmp--wcsncmp--_mbsncmp--_mbsncmp_l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../VS_visualcpp/_strnicmp--_wcsnicmp--_mbsnicmp--_strnicmp_l--_wcsnicmp_l--_mbsnicmp_l.md)   
 [strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](../VS_visualcpp/strrchr--wcsrchr--_mbsrchr--_mbsrchr_l.md)   
 [strspn, wcsspn, _mbsspn, _mbsspn_l](../VS_visualcpp/strspn--wcsspn--_mbsspn--_mbsspn_l.md)   
 [strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](../VS_visualcpp/strxfrm--wcsxfrm--_strxfrm_l--_wcsxfrm_l.md)