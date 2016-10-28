---
title: "_get_current_locale"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "_get_current_locale"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-locale-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "get_current_locale"
  - "__get_current_locale"
  - "_get_current_locale"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "get_current_locale function"
  - "_get_current_locale function"
  - "locales, getting information on"
  - "__get_current_locale function"
ms.assetid: 572217f2-a37a-4105-a293-a250b4fabd99
caps.latest.revision: 13
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
# _get_current_locale
Gets a locale object representing the current locale.  
  
## Syntax  
  
```  
_locale_t _get_current_locale(void);  
```  
  
## Return Value  
 A locale object representing the current locale.  
  
## Remarks  
 The `_get_current_locale`function gets the currently set locale for the thread and returns a locale object representing that locale.  
  
 The previous name of this function, `__get_current_locale` (with two leading underscores) has been deprecated.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_get_current_locale`|\<locale.h>|  
  
 For more compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 No equivalent.  
  
## See Also  
 [setlocale, _wsetlocale](../crt/setlocale--_wsetlocale.md)   
 [_create_locale, _wcreate_locale](../crt/_create_locale--_wcreate_locale.md)   
 [_free_locale](../crt/_free_locale.md)