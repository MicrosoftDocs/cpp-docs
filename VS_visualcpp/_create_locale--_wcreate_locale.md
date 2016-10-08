---
title: "_create_locale, _wcreate_locale"
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
  - _create_locale
  - __create_locale
  - _wcreate_locale
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
  - api-ms-win-crt-locale-l1-1-0.dll
apitype: DLLExport
ms.assetid: ca362464-9f4a-4ec6-ab03-316c55c5be81
caps.latest.revision: 23
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
# _create_locale, _wcreate_locale
Creates a locale object.  
  
## Syntax  
  
```  
_locale_t _create_locale(  
   int category,  
   const char *locale   
);  
_locale_t _wcreate_locale(  
   int category,  
   const wchar_t *locale   
);  
```  
  
#### Parameters  
 `category`  
 Category.  
  
 `locale`  
 Locale specifier.  
  
## Return Value  
 If a valid `locale` and `category` are given, returns the specified locale settings as a `_locale_t` object. The current locale settings of the program are not changed.  
  
## Remarks  
 The `_create_locale` function allows you to create an object that represents certain region-specific settings, for use in locale-specific versions of many CRT functions (functions with the `_l` suffix). The behavior is similar to `setlocale`, except that instead of applying the specified locale settings to the current environment, the settings are saved in a `_locale_t` structure that is returned. The `_locale_t` structure should be freed using [_free_locale](../VS_visualcpp/_free_locale.md) when it is no longer needed.  
  
 `_wcreate_locale` is a wide-character version of `_create_locale`; the `locale` argument to `_wcreate_locale` is a wide-character string. `_wcreate_locale` and `_create_locale` behave identically otherwise.  
  
 The `category` argument specifies the parts of the locale-specific behavior that are affected. The flags used for `category` and the parts of the program they affect are as shown in the following table.  
  
 `LC_ALL`  
 All categories, as listed below.  
  
 `LC_COLLATE`  
 The `strcoll`, `_stricoll`, `wcscoll`, `_wcsicoll`, `strxfrm`, `_strncoll`, `_strnicoll`, `_wcsncoll`, `_wcsnicoll`, and `wcsxfrm` functions.  
  
 `LC_CTYPE`  
 The character-handling functions (except `isdigit`, `isxdigit`, `mbstowcs`, and `mbtowc`, which are unaffected).  
  
 `LC_MONETARY`  
 Monetary-formatting information returned by the `localeconv` function.  
  
 `LC_NUMERIC`  
 Decimal-point character for the formatted output routines (such as `printf`), for the data-conversion routines, and for the non-monetary formatting information returned by `localeconv`. In addition to the decimal-point character, `LC_NUMERIC` sets the thousands separator and the grouping control string returned by [localeconv](../VS_visualcpp/localeconv.md).  
  
 `LC_TIME`  
 The `strftime` and `wcsftime` functions.  
  
 This function validates the `category` and `locale` parameters. If the category parameter is not one of the values given in the previous table or if `locale` is `NULL`, the function returns `NULL`.  
  
 The `locale` argument is a pointer to a string that specifies the locale. For information about the format of the `locale` argument, see [Locale Names, Languages, and Country/Region Strings](../VS_visualcpp/Locale-Names--Languages--and-Country-Region-Strings.md).  
  
 The `locale` argument can take a locale name, a language string, a language string and country/region code, a code page, or a language string, country/region code, and code page. The set of available locale names, languages, country/region codes, and code pages includes all that are supported by the Windows NLS API except the code pages that require more than two bytes per character—for example, UTF-7 and UTF-8. If you provide a code page like UTF-7 or UTF-8, `_create_locale` will fail and return NULL. The set of locale names supported by `_create_locale` are described in [Locale Names, Languages, and Country/Region Strings](../VS_visualcpp/Locale-Names--Languages--and-Country-Region-Strings.md). The set of language and country/region strings supported by `_create_locale` are listed in [Language Strings](../VS_visualcpp/Language-Strings.md) and [Country/Region Strings](../VS_visualcpp/Country-Region-Strings.md).  
  
 For more information about locale settings, see [setlocale, _wsetlocale](../VS_visualcpp/setlocale--_wsetlocale.md).  
  
 The previous name of this function, `__create_locale` (with two leading underscores), has been deprecated.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_create_locale`|<locale.h>|  
|`_wcreate_locale`|<locale.h> or <wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Example  
  
```  
  
      // crt_create_locale.c  
// Sets the current locale to "de-CH" using the  
// setlocale function and demonstrates its effect on the strftime  
// function.  
  
#include <stdio.h>  
#include <locale.h>  
#include <time.h>  
  
int main(void)  
{  
       time_t ltime;  
       struct tm thetime;  
       unsigned char str[100];  
       _locale_t locale;  
  
       // Create a locale object representing the German (Switzerland) locale  
       locale = _create_locale(LC_ALL, "de-CH");  
       time (&ltime);  
       _gmtime64_s(&thetime, &ltime);  
  
       // %#x is the long date representation, appropriate to  
       // the current locale  
       //  
       if (!_strftime_l((char *)str, 100, "%#x",   
                     (const struct tm *)&thetime, locale))  
               printf("_strftime_l failed!\n");  
       else  
               printf("In de-CH locale, _strftime_l returns '%s'\n",   
                      str);  
  
       _free_locale(locale);  
  
       // Create a locale object representing the default C locale  
       locale = _create_locale(LC_ALL, "C");  
       time (&ltime);  
       _gmtime64_s(&thetime, &ltime);  
  
       if (!_strftime_l((char *)str, 100, "%#x",   
                     (const struct tm *)&thetime, locale))  
               printf("_strftime_l failed!\n");  
       else  
               printf("In 'C' locale, _strftime_l returns '%s'\n",   
                      str);  
  
       _free_locale(locale);  
}  
```  
  
## Sample Output  
  
```  
In de-CH locale, _strftime_l returns 'Samstag, 9. Februar 2002'  
In 'C' locale, _strftime_l returns 'Saturday, February 09, 2002'  
```  
  
## .NET Framework Equivalent  
 [System::Globalization::CultureInfo Class](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx)  
  
## See Also  
 [Locale Names, Languages, and Country/Region Strings](../VS_visualcpp/Locale-Names--Languages--and-Country-Region-Strings.md)   
 [Language Strings](../VS_visualcpp/Language-Strings.md)   
 [Country/Region Strings](../VS_visualcpp/Country-Region-Strings.md)   
 [_free_locale](../VS_visualcpp/_free_locale.md)   
 [_configthreadlocale](../VS_visualcpp/_configthreadlocale.md)   
 [setlocale](../VS_visualcpp/setlocale.md)   
 [Locale](../VS_visualcpp/Locale.md)   
 [localeconv](../VS_visualcpp/localeconv.md)   
 [_mbclen, mblen, _mblen_l](../VS_visualcpp/_mbclen--mblen--_mblen_l.md)   
 [strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l](../VS_visualcpp/strlen--wcslen--_mbslen--_mbslen_l--_mbstrlen--_mbstrlen_l.md)   
 [mbstowcs, _mbstowcs_l](../VS_visualcpp/mbstowcs--_mbstowcs_l.md)   
 [mbtowc, _mbtowc_l](../VS_visualcpp/mbtowc--_mbtowc_l.md)   
 [_setmbcp](../VS_visualcpp/_setmbcp.md)   
 [setlocale, _wsetlocale](../VS_visualcpp/setlocale--_wsetlocale.md)   
 [strcoll Functions](../VS_visualcpp/strcoll-Functions.md)   
 [strftime, wcsftime, _strftime_l, _wcsftime_l](../VS_visualcpp/strftime--wcsftime--_strftime_l--_wcsftime_l.md)   
 [strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](../VS_visualcpp/strxfrm--wcsxfrm--_strxfrm_l--_wcsxfrm_l.md)   
 [wcstombs, _wcstombs_l](../VS_visualcpp/wcstombs--_wcstombs_l.md)   
 [wctomb, _wctomb_l](../VS_visualcpp/wctomb--_wctomb_l.md)