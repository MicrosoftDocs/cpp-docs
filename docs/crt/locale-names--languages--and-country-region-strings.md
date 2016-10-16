---
title: "Locale Names, Languages, and Country-Region Strings"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "c.strings"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "country/region strings"
  - "localization, locale"
  - "locales"
  - "setlocale function"
  - "language strings"
ms.assetid: a0e5a0c5-5602-4da0-b65f-de3d6c8530a2
caps.latest.revision: 13
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
# Locale Names, Languages, and Country/Region Strings
The `locale` argument to the `setlocale` and `_create_locale` functions can be set by using the locale names, languages, country/region codes, and code pages that are supported by the Windows NLS API. The `locale` argument takes the following form:  
  
```  
  
locale :: "locale_name"  
        | "language[_country_region[.code_page]]"  
        | ".code_page"  
        | "C"  
        | ""  
        | NULL  
```  
  
 The locale name form—for example, `en-US` for English (United States) or `bs-Cyrl-BA` for Bosnian (Cyrillic, Bosnia and Herzegovina)—is preferred. The set of locale names is described in [Locale Names](http://msdn.microsoft.com/library/windows/desktop/dd373814.aspx). For a list of supported locale names by Windows operating system version, see the **Culture Name** column of the [National Language Support (NLS) API Reference](http://msdn.microsoft.com/goglobal/bb896001.aspx). This resource lists the supported language, script, and region parts of the locale names. For information about the supported locale names that have non-default sort orders, see the **Locale name** column in [Sort Order Identifiers](http://msdn.microsoft.com/library/windows/desktop/dd374060.aspx).  
  
 The *language*[_*country_region*[.*code_page*]] form is stored in the locale setting for a category when a language string, or language string and country/region string, is used to create the locale. The set of supported language strings is described in [Language Strings](../crt/language-strings.md), and the list of supported country/region strings is listed in [Country/Region Strings](../crt/country-region-strings.md). If the specified language is not associated with the specified country/region, the default language for the specified country/region is stored in the locale setting. We do not recommend this form for locale strings embedded in code or serialized to storage, because these strings are more likely to be changed by an operating system update than the locale name form.  
  
 The code page is the ANSI/OEM code page that's associated with the locale. The code page is determined for you when you specify a locale by language or by language and country/region alone. The special value `.ACP` specifies the ANSI code page for the country/region. The special value `.OCP` specifies the OEM code page for the country/region. For example, if you specify `"Greek_Greece.ACP"` as the locale, the locale is stored as `Greek_Greece.1253` (the ANSI code page for Greek), and if you specify `"Greek_Greece.OCP"` as the locale, it is stored as `Greek_Greece.737` (the OEM code page for Greek). For more information about code pages, see [Code Pages](../crt/code-pages.md). For a list of supported code pages on Windows, see [Code Page Identifiers](http://msdn.microsoft.com/library/windows/desktop/dd317756.aspx).  
  
 If you use only the code page to specify the locale, the system default language and country/region are used. For example, if you specify `".1254"` (ANSI Turkish) as the locale on a system that's configured for English (United States), the locale that's stored is `English_United States.1254`. We do not recommend this form, because it could lead to inconsistent behavior.  
  
 A `locale` value of `C` specifies the minimal ANSI conforming environment for C translation. The `C` locale assumes that every `char` data type is 1 byte and its value is always less than 256. If `locale` points to an empty string, the locale is the implementation-defined native environment.  
  
 You can specify all of the locale categories at the same time for the `setlocale` and `_wsetlocale` functions by using the `LC_ALL` category. The categories can all be set to the same locale, or you can set each category individually by using a locale argument that has this form:  
  
```  
LC_ALL_specifier :: locale  
        | [LC_COLLATE=locale][;LC_CTYPE=locale][;LC_MONETARY=locale][;LC_NUMERIC=locale][;LC_TIME=locale]  
  
```  
  
 You can specify multiple category types, separated by semicolons. Category types that are not specified use the current locale setting. For example, this code sets the current locale for all categories to `de-DE`, and then sets the categories `LC_MONETARY` to `en-GB` and `LC_TIME` to `es-ES`:  
  
 `_wsetlocale(LC_ALL, L"de-DE");`  
  
 `_wsetlocale(LC_ALL, L"LC_MONETARY=en-GB;LC_TIME=es-ES");`  
  
## See Also  
 [C Run-Time Library Reference](../crt/c-run-time-library-reference.md)   
 [_get_current_locale](../crt/_get_current_locale.md)   
 [setlocale, _wsetlocale](../crt/setlocale--_wsetlocale.md)   
 [_create_locale, _wcreate_locale](../crt/_create_locale--_wcreate_locale.md)   
 [Language Strings](../crt/language-strings.md)   
 [Country/Region Strings](../crt/country-region-strings.md)