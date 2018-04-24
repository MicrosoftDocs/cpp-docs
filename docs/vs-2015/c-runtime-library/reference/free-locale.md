---
title: "_free_locale | Microsoft Docs"
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
  - "_free_locale"
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
  - "__free_locale"
  - "free_locale"
  - "_free_locale"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "__free_locale function"
  - "free_locale function"
  - "locales, freeing"
  - "_free_locale function"
ms.assetid: 1f08d348-ab32-4028-a145-6cbd51b49af9
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _free_locale
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_free_locale](https://docs.microsoft.com/cpp/c-runtime-library/reference/free-locale).  
  
Frees a locale object.  
  
## Syntax  
  
```  
void _free_locale(  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `locale`  
 Locale object to free.  
  
## Remarks  
 The `_free_locale` function is used to free the locale object obtained from a call to `_get_current_locale` or `_create_locale`.  
  
 The previous name of this function, `__free_locale` (with two leading underscores) has been deprecated.  
  
## Requirements  
  
|`Routine`|Required header|  
|---------------|---------------------|  
|`_free_locale`|\<locale.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 No equivalent.  
  
## See Also  
 [_get_current_locale](../../c-runtime-library/reference/get-current-locale.md)   
 [_create_locale, _wcreate_locale](../../c-runtime-library/reference/create-locale-wcreate-locale.md)





