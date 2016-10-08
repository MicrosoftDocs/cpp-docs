---
title: "_strupr_s, _strupr_s_l, _mbsupr_s, _mbsupr_s_l, _wcsupr_s, _wcsupr_s_l"
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
  - _strupr_s
  - _strupr_s_l
  - _mbsupr_s
  - _wcsupr_s_l
  - _mbsupr_s_l
  - _wcsupr_s
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
ms.assetid: 82d3a273-9f6f-4a26-9560-919d891e4581
caps.latest.revision: 30
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
# _strupr_s, _strupr_s_l, _mbsupr_s, _mbsupr_s_l, _wcsupr_s, _wcsupr_s_l
Converts a string to uppercase, by using the current locale or a specified locale that's passed in. These versions of [_strupr, _strupr_l, _mbsupr, _mbsupr_l, _wcsupr_l, _wcsupr](../VS_visualcpp/_strupr--_strupr_l--_mbsupr--_mbsupr_l--_wcsupr_l--_wcsupr.md) have security enhancements, as described in [Security Features in the CRT](../VS_visualcpp/Security-Features-in-the-CRT.md).  
  
> [!IMPORTANT]
>  `_mbsupr_s` and `_mbsupr_s_l` cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
errno_t _strupr_s(  
   char *str,  
   size_t numberOfElements  
);  
errno_t _wcsupr_s(  
   wchar_t * str,  
   size_t numberOfElements  
);  
errno_t _strupr_s_l(  
   char * str,  
   size_t numberOfElements,  
   _locale_t locale  
);  
errno_t _wcsupr_s_l(  
   wchar_t * str,  
   size_t numberOfElements,  
   _locale_t locale  
);  
errno_t _mbsupr_s(  
   unsigned char *str,  
   size_t numberOfElements  
);  
errno_t _mbsupr_s_l(  
   unsigned char *str,  
   size_t numberOfElements,  
   _locale_t locale  
);  
template <size_t size>  
errno_t _strupr_s(  
   char (&str)[size]  
); // C++ only  
template <size_t size>  
errno_t _wcsupr_s(  
   wchar_t (&str)[size]  
); // C++ only  
template <size_t size>  
errno_t _strupr_s_l(  
   char (&str)[size],  
   _locale_t locale  
); // C++ only  
template <size_t size>  
errno_t _wcsupr_s_l(  
   wchar_t (&str)[size],  
   _locale_t locale  
); // C++ only  
template <size_t size>  
errno_t _mbsupr_s(  
   unsigned char (&str)[size]  
); // C++ only  
template <size_t size>  
errno_t _mbsupr_s_l(  
   unsigned char (&str)[size],  
   _locale_t locale  
); // C++ only  
```  
  
#### Parameters  
 `str`  
 String to capitalize.  
  
 `numberOfElements`  
 Size of the buffer.  
  
 `locale`  
 The locale to use.  
  
## Return Value  
 Zero if successful; a non-zero error code on failure.  
  
 These functions validate their parameters. If `str` is a `NULL` pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md) . If execution is allowed to continue, the functions return `EINVAL` and set `errno` to `EINVAL`. If `numberOfElements` is less than the length of the string, the functions return `ERANGE` and set `errno` to `ERANGE`.  
  
## Remarks  
 The `_strupr_s` function converts, in place, each lowercase letter in `str` to uppercase. `_wcsupr_s` is the wide-character version of `_strupr_s`. `_mbsupr_s` is the multi-byte character version of `_strupr_s`.  
  
 The conversion is determined by the `LC_CTYPE` category setting of the locale. Other characters are not affected. For more information on `LC_CTYPE`, see [setlocale](../VS_visualcpp/setlocale--_wsetlocale.md). The versions of these functions without the `_l` suffix use the current locale; the visions with the `_l` suffix are identical except that they use the locale passed in instead. For more information, see [Locale](../VS_visualcpp/Locale.md).  
  
 In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure Template Overloads](../VS_visualcpp/Secure-Template-Overloads.md).  
  
 The debug versions of these functions first fill the buffer with 0xFD. To disable this behavior, use [_CrtSetDebugFillThreshold](../VS_visualcpp/_CrtSetDebugFillThreshold.md).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcsupr_s`|`_strupr_s`|`_mbsupr_s`|`_wcsupr_s`|  
|`_tcsupr_s_l`|`_strupr_s_l`|`_mbsupr_s_l`|`_wcsupr_s_l`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_strupr_s`, `_strupr_s_l`|<string.h>|  
|`_wcsupr_s`, `_wcsupr_s_l`, `_mbsupr_s`, `_mbsupr_s_l`|<string.h> or <wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Example  
 See the example for [_strlwr_s, _strlwr_s_l, _mbslwr_s, _mbslwr_s_l, _wcslwr_s, _wcslwr_s_l](../VS_visualcpp/_strlwr_s--_strlwr_s_l--_mbslwr_s--_mbslwr_s_l--_wcslwr_s--_wcslwr_s_l.md) .  
  
## .NET Framework Equivalent  
 [System::String::ToUpper](https://msdn.microsoft.com/en-us/library/system.string.toupper.aspx)  
  
## See Also  
 [Locale](../VS_visualcpp/Locale.md)   
 [Interpretation of Multibyte-Character Sequences](../VS_visualcpp/Interpretation-of-Multibyte-Character-Sequences.md)   
 [String Manipulation](../VS_visualcpp/String-Manipulation--CRT-.md)   
 [_strlwr_s, _strlwr_s_l, _mbslwr_s, _mbslwr_s_l, _wcslwr_s, _wcslwr_s_l](../VS_visualcpp/_strlwr_s--_strlwr_s_l--_mbslwr_s--_mbslwr_s_l--_wcslwr_s--_wcslwr_s_l.md)