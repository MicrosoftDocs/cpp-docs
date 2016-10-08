---
title: "_mbsnbcoll, _mbsnbcoll_l, _mbsnbicoll, _mbsnbicoll_l"
ms.custom: na
ms.date: 10/03/2016
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
  - _mbsnbicoll_l
  - _mbsnbcoll_l
  - _mbsnbcoll
  - _mbsnbicoll
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
apitype: DLLExport
ms.assetid: d139ed63-ccba-4458-baa2-61cbcef03e94
caps.latest.revision: 21
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# _mbsnbcoll, _mbsnbcoll_l, _mbsnbicoll, _mbsnbicoll_l
Compares `n` bytes of two multibyte-character strings by using multibyte code-page information.  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
int _mbsnbcoll(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count   
);  
int _mbsnbcoll_l(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count,  
   _locale_t locale  
);  
int _mbsnbicoll(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count   
);  
int _mbsnbicoll_l(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `string1, string2`  
 Strings to compare.  
  
 `count`  
 Number of bytes to compare.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 The return value indicates the relation of the substrings of `string1` and `string2`.  
  
|Return value|Description|  
|------------------|-----------------|  
|< 0|`string1` substring less than `string2` substring.|  
|0|`string1` substring identical to `string2` substring.|  
|> 0|`string1` substring greater than `string2` substring.|  
  
 If `string1` or `string2` is `NULL` or `count` is greater than `INT_MAX`, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, these functions return `_NLSCMPERROR` and set `errno` to `EINVAL`. To use `_NLSCMPERROR`, include either String.h or Mbstring.h.  
  
## Remarks  
 Each of these functions collates, at most, the first `count` bytes in `string1` and `string2` and returns a value indicating the relationship between the resulting substrings of `string1` and `string2`. If the final byte in the substring of `string1` or `string2` is a lead byte, it is not included in the comparison; these functions compare only complete characters in the substrings. `_mbsnbicoll` is a case-insensitive version of `_mbsnbcoll`. Like `_mbsnbcmp` and `_mbsnbicmp`, `_mbsnbcoll` and `_mbsnbicoll` collate the two multibyte-character strings according to the lexicographic order specified by the multibyte [code page](../VS_visualcpp/Code-Pages.md) currently in use.  
  
 For some code pages and corresponding character sets, the order of characters in the character set might differ from the lexicographic character order. In the "C" locale, this is not the case: the order of characters in the ASCII character set is the same as the lexicographic order of the characters. However, in certain European code pages, for example, the character 'a' (value 0x61) precedes the character 'ä' (value 0xE4) in the character set, but the character 'ä' precedes the character 'a' lexicographically. To perform a lexicographic comparison of strings by bytes in such an instance, use `_mbsnbcoll` rather than `_mbsnbcmp`; to check only for string equality, use `_mbsnbcmp`.  
  
 Because the `coll` functions collate strings lexicographically for comparison, whereas the `cmp` functions simply test for string equality, the `coll` functions are much slower than the corresponding `cmp` versions. Therefore, the `coll` functions should be used only when there is a difference between the character set order and the lexicographic character order in the current code page and this difference is of interest for the comparison.  
  
 The output value is affected by the setting of the `LC_CTYPE` category setting of the locale; see [setlocale](../VS_visualcpp/setlocale--_wsetlocale.md) for more information. The versions of these functions without the `_l` suffix use the current locale for this locale-dependent behavior; the versions with the `_l` suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../VS_visualcpp/Locale.md).  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tcsncoll`|[_strncoll](../VS_visualcpp/_strncoll--_wcsncoll--_mbsncoll--_strncoll_l--_wcsncoll_l--_mbsncoll_l.md)|`_mbsnbcoll`|[_wcsncoll](../VS_visualcpp/_strncoll--_wcsncoll--_mbsncoll--_strncoll_l--_wcsncoll_l--_mbsncoll_l.md)|  
|`_tcsncoll_l`|[_strncoll, _wcsncoll, _mbsncoll, _strncoll_l, _wcsncoll_l, _mbsncoll_l](../VS_visualcpp/_strncoll--_wcsncoll--_mbsncoll--_strncoll_l--_wcsncoll_l--_mbsncoll_l.md)|`_mbsnbcoll_l`|[_wcsncoll_l](../VS_visualcpp/_strncoll--_wcsncoll--_mbsncoll--_strncoll_l--_wcsncoll_l--_mbsncoll_l.md)|  
|`_tcsnicoll`|[_strnicoll](../VS_visualcpp/_strnicoll--_wcsnicoll--_mbsnicoll--_strnicoll_l--_wcsnicoll_l--_mbsnicoll_l.md)|`_mbsnbicoll`|[_wcsnicoll](../VS_visualcpp/_strnicoll--_wcsnicoll--_mbsnicoll--_strnicoll_l--_wcsnicoll_l--_mbsnicoll_l.md)|  
|`_tcsnicoll_l`|[_strnicoll_l](../VS_visualcpp/_strnicoll--_wcsnicoll--_mbsnicoll--_strnicoll_l--_wcsnicoll_l--_mbsnicoll_l.md)|`_mbsnbicoll_l`|[_wcsnicoll_l](../VS_visualcpp/_strnicoll--_wcsnicoll--_mbsnicoll--_strnicoll_l--_wcsnicoll_l--_mbsnicoll_l.md)|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_mbsnbcoll`|<mbstring.h>|  
|`_mbsnbcoll_l`|<mbstring.h>|  
|`_mbsnbicoll`|<mbstring.h>|  
|`_mbsnbicoll_l`|<mbstring.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## See Also  
 [String Manipulation](../VS_visualcpp/String-Manipulation--CRT-.md)   
 [_mbsnbcat, _mbsnbcat_l](../VS_visualcpp/_mbsnbcat--_mbsnbcat_l.md)   
 [_mbsnbcmp, _mbsnbcmp_l](../VS_visualcpp/_mbsnbcmp--_mbsnbcmp_l.md)   
 [_mbsnbicmp, _mbsnbicmp_l](../VS_visualcpp/_mbsnbicmp--_mbsnbicmp_l.md)   
 [strcoll Functions](../VS_visualcpp/strcoll-Functions.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../VS_visualcpp/strncmp--wcsncmp--_mbsncmp--_mbsncmp_l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../VS_visualcpp/_strnicmp--_wcsnicmp--_mbsnicmp--_strnicmp_l--_wcsnicmp_l--_mbsnicmp_l.md)