---
title: "strcoll Functions"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apilocation: 
  - "msvcr120.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr90.dll"
  - "msvcr80.dll"
  - "msvcr100.dll"
  - "msvcr110.dll"
apitype: "DLLExport"
f1_keywords: 
  - "strcoll"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "code pages, using for string comparisons"
  - "string comparison [C++], culture-specific"
  - "strcoll functions"
  - "strings [C++], comparing by code page"
ms.assetid: c09eeff3-8aba-4cfb-a524-752436d85573
caps.latest.revision: 8
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
# strcoll Functions
Each of the `strcoll` and `wcscoll` functions compares two strings according to the `LC_COLLATE` category setting of the locale code page currently in use. Each of the `_mbscoll` functions compares two strings according to the multibyte code page currently in use. Use the `coll` functions for string comparisons when there is a difference between the character set order and the lexicographic character order in the current code page and this difference is of interest for the comparison. Use the corresponding `cmp` functions to test only for string equality.  
  
### strcoll Functions  
  
|SBCS|Unicode|MBCS|Description|  
|----------|-------------|----------|-----------------|  
|[strcoll](../crt/strcoll--wcscoll--_mbscoll--_strcoll_l--_wcscoll_l--_mbscoll_l.md)|[wcscoll](../crt/strcoll--wcscoll--_mbscoll--_strcoll_l--_wcscoll_l--_mbscoll_l.md)|[_mbscoll](../crt/strcoll--wcscoll--_mbscoll--_strcoll_l--_wcscoll_l--_mbscoll_l.md)|Collate two strings|  
|[_stricoll](../crt/_stricoll--_wcsicoll--_mbsicoll--_stricoll_l--_wcsicoll_l--_mbsicoll_l.md)|[_wcsicoll](../crt/_stricoll--_wcsicoll--_mbsicoll--_stricoll_l--_wcsicoll_l--_mbsicoll_l.md)|[_mbsicoll](../crt/_stricoll--_wcsicoll--_mbsicoll--_stricoll_l--_wcsicoll_l--_mbsicoll_l.md)|Collate two strings (case insensitive)|  
|[_strncoll](../crt/_strncoll--_wcsncoll--_mbsncoll--_strncoll_l--_wcsncoll_l--_mbsncoll_l.md)|[_wcsncoll](../crt/_strncoll--_wcsncoll--_mbsncoll--_strncoll_l--_wcsncoll_l--_mbsncoll_l.md)|[_mbsncoll](../crt/_strncoll--_wcsncoll--_mbsncoll--_strncoll_l--_wcsncoll_l--_mbsncoll_l.md)|Collate first `count` characters of two strings|  
|[_strnicoll](../crt/_strnicoll--_wcsnicoll--_mbsnicoll--_strnicoll_l--_wcsnicoll_l--_mbsnicoll_l.md)|[_wcsnicoll](../crt/_strnicoll--_wcsnicoll--_mbsnicoll--_strnicoll_l--_wcsnicoll_l--_mbsnicoll_l.md)|[_mbsnicoll](../crt/_strnicoll--_wcsnicoll--_mbsnicoll--_strnicoll_l--_wcsnicoll_l--_mbsnicoll_l.md)|Collate first `count` characters of two strings (case-insensitive)|  
  
## Remarks  
 The single-byte character (SBCS) versions of these functions (`strcoll`, `stricoll`, `_strncoll`, and `_strnicoll`) compare `string1` and `string2` according to the `LC_COLLATE` category setting of the current locale. These functions differ from the corresponding `strcmp` functions in that the `strcoll` functions use locale code page information that provides collating sequences. For string comparisons in locales in which the character set order and the lexicographic character order differ, the `strcoll` functions should be used rather than the corresponding `strcmp` functions. For more information on `LC_COLLATE`, see [setlocale](../crt/setlocale--_wsetlocale.md).  
  
 For some code pages and corresponding character sets, the order of characters in the character set may differ from the lexicographic character order. In the "C" locale, this is not the case: the order of characters in the ASCII character set is the same as the lexicographic order of the characters. However, in certain European code pages, for example, the character 'a' (value 0x61) precedes the character 'ä' (value 0xE4) in the character set, but the character 'ä' precedes the character 'a' lexicographically. To perform a lexicographic comparison in such an instance, use `strcoll` rather than `strcmp`. Alternatively, you can use `strxfrm` on the original strings, then use `strcmp` on the resulting strings.  
  
 `strcoll`, `stricoll`, `_strncoll`, and `_strnicoll` automatically handle multibyte-character strings according to the locale code page currently in use, as do their wide-character (Unicode) counterparts. The multibyte-character (MBCS) versions of these functions, however, collate strings on a character basis according to the multibyte code page currently in use.  
  
 Because the `coll` functions collate strings lexicographically for comparison, whereas the `cmp` functions simply test for string equality, the `coll` functions are much slower than the corresponding `cmp` versions. Therefore, the `coll` functions should be used only when there is a difference between the character set order and the lexicographic character order in the current code page and this difference is of interest for the string comparison.  
  
## See Also  
 [Locale](../crt/locale.md)   
 [String Manipulation](../crt/string-manipulation--crt-.md)   
 [localeconv](../crt/localeconv.md)   
 [_mbsnbcoll, _mbsnbcoll_l, _mbsnbicoll, _mbsnbicoll_l](../crt/_mbsnbcoll--_mbsnbcoll_l--_mbsnbicoll--_mbsnbicoll_l.md)   
 [setlocale, _wsetlocale](../crt/setlocale--_wsetlocale.md)   
 [strcmp, wcscmp, _mbscmp](../crt/strcmp--wcscmp--_mbscmp.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../crt/strncmp--wcsncmp--_mbsncmp--_mbsncmp_l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../crt/_strnicmp--_wcsnicmp--_mbsnicmp--_strnicmp_l--_wcsnicmp_l--_mbsnicmp_l.md)   
 [strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](../crt/strxfrm--wcsxfrm--_strxfrm_l--_wcsxfrm_l.md)