---
title: "Locale Categories"
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
ms.assetid: 868f1493-fe5d-4722-acab-bfcd374a063a
caps.latest.revision: 7
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
# Locale Categories
## Syntax  
  
```  
  
#include <locale.h>  
  
```  
  
## Remarks  
 Locale categories are manifest constants used by the localization routines to specify which portion of a program's locale information will be used. The locale refers to the locality (or Country/Region) for which certain aspects of your program can be customized. Locale-dependent areas include, for example, the formatting of dates or the display format for monetary values.  
  
|Locale category|Parts of program affected|  
|---------------------|-------------------------------|  
|`LC_ALL`|All locale-specific behavior (all categories)|  
|`LC_COLLATE`|Behavior of `strcoll` and `strxfrm` functions|  
|`LC_CTYPE`|Behavior of character-handling functions (except **isdigit**, `isxdigit`, `mbstowcs`, and `mbtowc`, which are unaffected)|  
|`LC_MAX`|Same as `LC_TIME`|  
|`LC_MIN`|Same as `LC_ALL`|  
|`LC_MONETARY`|Monetary formatting information returned by the `localeconv` function|  
|`LC_NUMERIC`|Decimal-point character for formatted output routines (for example, `printf`), data conversion routines, and nonmonetary formatting information returned by `localeconv` function|  
|`LC_TIME`|Behavior of `strftime` function|  
  
 See [setlocale, _wsetlocale](../VS_visualcpp/setlocale--_wsetlocale.md) for an example.  
  
## See Also  
 [localeconv](../VS_visualcpp/localeconv.md)   
 [setlocale, _wsetlocale](../VS_visualcpp/setlocale--_wsetlocale.md)   
 [strcoll Functions](../VS_visualcpp/strcoll-Functions.md)   
 [strftime, wcsftime, _strftime_l, _wcsftime_l](../VS_visualcpp/strftime--wcsftime--_strftime_l--_wcsftime_l.md)   
 [strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](../VS_visualcpp/strxfrm--wcsxfrm--_strxfrm_l--_wcsxfrm_l.md)   
 [Global Constants](../VS_visualcpp/Global-Constants.md)