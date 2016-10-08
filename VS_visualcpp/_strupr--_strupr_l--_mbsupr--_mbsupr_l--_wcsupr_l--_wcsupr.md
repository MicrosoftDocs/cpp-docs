---
title: "_strupr, _strupr_l, _mbsupr, _mbsupr_l, _wcsupr_l, _wcsupr"
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
  - _mbsupr_l
  - _mbsupr
  - _strupr_l
  - _wcsupr
  - _wcsupr_l
  - _strupr
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
ms.assetid: caac8f16-c233-41b6-91ce-575ec7061b77
caps.latest.revision: 26
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
# _strupr, _strupr_l, _mbsupr, _mbsupr_l, _wcsupr_l, _wcsupr
Converts a string to uppercase. More secure versions of these functions are available; see [_strupr_s, _strupr_s_l, _mbsupr_s, _mbsupr_s_l, _wcsupr_s, _wcsupr_s_l](../VS_visualcpp/_strupr_s--_strupr_s_l--_mbsupr_s--_mbsupr_s_l--_wcsupr_s--_wcsupr_s_l.md).  
  
> [!IMPORTANT]
>  `_mbsupr` and `_mbsupr_l` cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
char *_strupr(  
   char *str   
);  
wchar_t *_wcsupr(  
   wchar_t *str   
);  
unsigned char *_mbsupr(  
   unsigned char *str   
);  
char *_strupr_l(  
   char *str,  
   _locale_t locale  
);  
wchar_t *_wcsupr_l(  
   wchar_t *str,  
   _locale_t locale  
);  
unsigned char *_mbsupr_l(  
   unsigned char *str,  
   _locale_t locale  
);  
template <size_t size>  
char *_strupr(  
   char (&str)[size]  
); // C++ only  
template <size_t size>  
wchar_t *_wcsupr(  
   wchar_t (&str)[size]  
); // C++ only  
template <size_t size>  
unsigned char *_mbsupr(  
   unsigned char (&str)[size]  
); // C++ only  
template <size_t size>  
char *_strupr_l(  
   char (&str)[size],  
   _locale_t locale  
); // C++ only  
template <size_t size>  
wchar_t *_wcsupr_l(  
   wchar_t (&str)[size],  
   _locale_t locale  
); // C++ only  
template <size_t size>  
unsigned char *_mbsupr_l(  
   unsigned char (&str)[size],  
   _locale_t locale  
); // C++ only  
```  
  
#### Parameters  
 `str`  
 String to capitalize.  
  
 `locale`  
 The locale to use.  
  
## Return Value  
 Returns a pointer to the altered string. Because the modification is done in place, the pointer returned is the same as the pointer passed as the input argument. No return value is reserved to indicate an error.  
  
## Remarks  
 The `_strupr` function converts, in place, each lowercase letter in `str` to uppercase. The conversion is determined by the `LC_CTYPE` category setting of the locale. Other characters are not affected. For more information on `LC_CTYPE`, see [setlocale](../VS_visualcpp/setlocale--_wsetlocale.md). The versions of these functions without the `_l` suffix use the current locale; the versions with the `_l` suffix are identical except that they use the locale passed in instead. For more information, see [Locale](../VS_visualcpp/Locale.md).  
  
 `_wcsupr` and `_mbsupr` are wide-character and multibyte-character versions of `_strupr`. The argument and return value of `_wcsupr` are wide-character strings; those of `_mbsupr` are multibyte-character strings. These three functions behave identically otherwise.  
  
 If `str` is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md) . If execution is allowed to continue, these functions return the original string and set `errno` to `EINVAL`.  
  
 In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure Template Overloads](../VS_visualcpp/Secure-Template-Overloads.md).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcsupr`|`_strupr`|`_mbsupr`|`_wcsupr`|  
|`_tcsupr_l`|`_strupr_l`|`_mbsupr_l`|`_wcsupr_l`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_strupr`, `_strupr_l`|<string.h>|  
|`_wcsupr`, `_wcsupr_l`|<string.h> or <wchar.h>|  
|`_mbsupr`, `_mbsupr_l`|<mbstring.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Example  
 See the example for [_strlwr](../VS_visualcpp/_strlwr--_wcslwr--_mbslwr--_strlwr_l--_wcslwr_l--_mbslwr_l.md).  
  
## .NET Framework Equivalent  
 [System::String::ToUpper](https://msdn.microsoft.com/en-us/library/system.string.toupper.aspx)  
  
## See Also  
 [Locale](../VS_visualcpp/Locale.md)   
 [String Manipulation](../VS_visualcpp/String-Manipulation--CRT-.md)   
 [_strlwr, _wcslwr, _mbslwr, _strlwr_l, _wcslwr_l, _mbslwr_l](../VS_visualcpp/_strlwr--_wcslwr--_mbslwr--_strlwr_l--_wcslwr_l--_mbslwr_l.md)