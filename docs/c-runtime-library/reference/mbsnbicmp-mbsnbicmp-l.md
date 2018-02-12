---
title: "_mbsnbicmp, _mbsnbicmp_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: ["_mbsnbicmp_l", "_mbsnbicmp"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_strnicmp", "_wcsnicmp_l", "_mbsnbicmp", "mbsnbicmp", "mbsnbicmp_l", "_tcsnicmp", "_strnicmp_l", "_tcsnicmp_l", "_wcsnicmp", "_mbsnbicmp_l"]
dev_langs: ["C++"]
helpviewer_keywords: ["_tcsnicmp_l function", "_strnicmp function", "mbsnbicmp_l function", "_wcsnicmp_l function", "_mbsnbicmp function", "_mbsnbicmp_l function", "_tcsnicmp function", "_strnicmp_l function", "mbsnbicmp function", "_wcsnicmp function"]
ms.assetid: ddb44974-8b0c-42f0-90d0-56c9350bae0c
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# _mbsnbicmp, _mbsnbicmp_l
Compares `n` bytes of two multibyte-character strings, and ignores case.  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).  
  
## Syntax  
  
```  
int _mbsnbicmp(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count   
);  
```  
  
#### Parameters  
 `string1, string2`  
 Null-terminated strings to compare.  
  
 `count`  
 Number of bytes to compare.  
  
## Return Value  
 The return value indicates the relationship between the substrings.  
  
|Return value|Description|  
|------------------|-----------------|  
|< 0|`string1` substring less than `string2` substring.|  
|0|`string1` substring identical to `string2` substring.|  
|> 0|`string1` substring greater than `string2` substring.|  
  
 On an error, `_mbsnbcmp` returns `_NLSCMPERROR`, which is defined in String.h and Mbstring.h.  
  
## Remarks  
 The `_mbsnbicmp` function performs an ordinal comparison of at most the first `count` bytes of `string1` and `string2`. The comparison is performed by converting each character to lowercase; `_mbsnbcmp` is a case-sensitive version of `_mbsnbicmp`. The comparison ends if a terminating null character is reached in either string before `count` characters are compared. If the strings are equal when a terminating null character is reached in either string before `count` characters are compared, the shorter string is lesser.  
  
 `_mbsnbicmp`  is similar to `_mbsnicmp`, except that it compares strings up to `count` bytes instead of by characters.  
  
 Two strings containing characters located between 'Z' and 'a' in the ASCII table ('[', '\\', ']', '^', '_', and '\`') compare differently, depending on their case. For example, the two strings "`ABCDE`" and "`ABCD^`" compare one way if the comparison is lowercase ("`abcde`" > "`abcd^`") and the other way ("`ABCDE`" < "`ABCD^`") if it is uppercase.  
  
 `_mbsnbicmp` recognizes multibyte-character sequences according to the [multibyte code page](../../c-runtime-library/code-pages.md) currently in use. It is not affected by the current locale setting.  
  
 If either `string1` or `string2` is a null pointer, `_mbsnbicmp` invokes the invalid parameter handler as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the function returns `_NLSCMPERROR` and sets `errno` to `EINVAL`.  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tcsnicmp`|`_strnicmp`|`_mbsnbicmp`|`_wcsnicmp`|  
|`_tcsnicmp_l`|`_strnicmp_l`|`_mbsnbicmp_l`|`_wcsnicmp_l`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_mbsnbicmp`|<mbstring.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
 See the example for [_mbsnbcmp, _mbsnbcmp_l](../../c-runtime-library/reference/mbsnbcmp-mbsnbcmp-l.md).  
  
## See Also  
 [String Manipulation](../../c-runtime-library/string-manipulation-crt.md)   
 [_mbsnbcat, _mbsnbcat_l](../../c-runtime-library/reference/mbsnbcat-mbsnbcat-l.md)   
 [_mbsnbcmp, _mbsnbcmp_l](../../c-runtime-library/reference/mbsnbcmp-mbsnbcmp-l.md)   
 [_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l](../../c-runtime-library/reference/stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md)