---
title: "Interpretation of Multibyte-Character Sequences"
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
  - "c.character.multibyte"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "MBCS [C++], locale code page"
ms.assetid: da9150de-70ea-4d2f-90e6-ddb9202dd80b
caps.latest.revision: 7
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
# Interpretation of Multibyte-Character Sequences
Most multibyte-character routines in the Microsoft run-time library recognize multibyte-character sequences relating to a multibyte code page. The output value is affected by the setting of the `LC_CTYPE` category setting of the locale; see [setlocale](../crt/setlocale--_wsetlocale.md) for more information. The versions of these functions without the `_l` suffix use the current locale for this locale-dependent behavior; the versions with the `_l` suffix are identical except that they use the locale parameter passed in instead.  
  
### Locale-Dependent Multibyte Routines  
  
|Routine|Use|  
|-------------|---------|  
|[_mbclen, mblen, _mblen_l](../crt/_mbclen--mblen--_mblen_l.md)|Validate and return number of bytes in multibyte character|  
|[strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l](../crt/strlen--wcslen--_mbslen--_mbslen_l--_mbstrlen--_mbstrlen_l.md)|For multibyte character strings: validate each character in string; return string length. For wide character strings: return string length.|  
|[mbstowcs, _mbstowcs_l](../crt/mbstowcs--_mbstowcs_l.md), [mbstowcs_s, _mbstowcs_s_l](../crt/mbstowcs_s--_mbstowcs_s_l.md)|Convert sequence of multibyte characters to corresponding sequence of wide characters|  
|[mbtowc, _mbtowc_l](../crt/mbtowc--_mbtowc_l.md)|Convert multibyte character to corresponding wide character|  
|[wcstombs, _wcstombs_l](../crt/wcstombs--_wcstombs_l.md), [wcstombs_s, _wcstombs_s_l](../crt/wcstombs_s--_wcstombs_s_l.md)|Convert sequence of wide characters to corresponding sequence of multibyte characters|  
|[wctomb, _wctomb_l](../crt/wctomb--_wctomb_l.md), [wctomb_s, _wctomb_s_l](../crt/wctomb_s--_wctomb_s_l.md)|Convert wide character to corresponding multibyte character|  
  
## See Also  
 [Internationalization](../crt/internationalization.md)   
 [Run-Time Routines by Category](../crt/run-time-routines-by-category.md)