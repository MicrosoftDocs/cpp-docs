---
title: "_get_current_locale | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "_get_current_locale"
api_location: 
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
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
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
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _get_current_locale
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_get_current_locale](https://docs.microsoft.com/cpp/c-runtime-library/reference/get-current-locale).  
  
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
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 No equivalent.  
  
## See Also  
 [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [_create_locale, _wcreate_locale](../../c-runtime-library/reference/create-locale-wcreate-locale.md)   
 [_free_locale](../../c-runtime-library/reference/free-locale.md)





