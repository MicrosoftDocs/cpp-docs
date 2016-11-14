---
title: "Country-Region Strings | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.strings"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "country/region strings"
ms.assetid: 5baf0ccf-0d9b-40dc-83bd-323705287930
caps.latest.revision: 14
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
# Country/Region Strings
Country and region strings can be combined with a language string to create a locale specification for the `setlocale`, `_wsetlocale`, `_create_locale`, and `_wcreate_locale` functions. For lists of country/region names that are supported by various Windows operating system versions, see the [National Language Support (NLS) API Reference](http://msdn.microsoft.com/goglobal/bb896001.aspx).In the lists, the country/region string can be any of the country values in the **Locale – Language Country/Region** column, or any of the abbreviations in the **Country or Region name abbreviation** column.  
  
 The C run-time library implementation also supports the following additional country/region strings and abbreviations:  
  
|Country/region string|Abbreviation|Equivalent locale name|  
|----------------------------|------------------|----------------------------|  
|america|USA|en-US|  
|britain|GBR|en-GB|  
|china|CHN|zh-CN|  
|czech|CZE|cs-CZ|  
|england|GBR|en-GB|  
|great britain|GBR|en-GB|  
|holland|NLD|nl-NL|  
|hong-kong|HKG|zh-HK|  
|new-zealand|NZL|en-NZ|  
|nz|NZL|en-NZ|  
|pr china|CHN|zh-CN|  
|pr-china|CHN|zh-CN|  
|puerto-rico|PRI|es-PR|  
|slovak|SVK|sk-SK|  
|south africa|ZAF|af-ZA|  
|south korea|KOR|ko-KR|  
|south-africa|ZAF|af-ZA|  
|south-korea|KOR|ko-KR|  
|trinidad & tobago|TTO|en-TT|  
|uk|GBR|en-GB|  
|united-kingdom|GBR|en-GB|  
|united-states|USA|en-US|  
|us|USA|en-US|  
  
## See Also  
 [Locale Names, Languages, and Country/Region Strings](../c-runtime-library/locale-names-languages-and-country-region-strings.md)   
 [Language Strings](../c-runtime-library/language-strings.md)   
 [setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [_create_locale, _wcreate_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)