---
title: "___lc_codepage_func | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "___lc_codepage_func"
apilocation: 
  - "msvcr120.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr80.dll"
  - "msvcr100.dll"
  - "msvcr90.dll"
  - "msvcr110.dll"
  - "msvcrt.dll"
apitype: "DLLExport"
f1_keywords: 
  - "lc_codepage_func"
  - "___lc_codepage_func"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "___lc_codepage_func"
ms.assetid: 6a663bd0-5a63-4a2f-9507-872ec1582aae
caps.latest.revision: 9
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
# ___lc_codepage_func
Internal CRT function. Retrieves the current code page of the thread.  
  
## Syntax  
  
```cpp  
UINT ___lc_codepage_func(void);  
```  
  
## Return Value  
 The current code page of the thread.  
  
## Remarks  
 `___lc_codepage_func` is an internal CRT function that is used by other CRT functions to get the current code page from the thread local storage for CRT data. This information is also available by using the [_get_current_locale](../c-runtime-library/reference/get-current-locale.md) function.  
  
 A *code page* is a mapping of single-byte or double-byte codes to individual characters. Different code pages include different special characters, typically customized for a language or a group of languages. For more information about code pages, see [Code Pages](../c-runtime-library/code-pages.md).  
  
 Internal CRT functions are implementation-specific and subject to change with each release. We don't recommend their use in your code.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`___lc_codepage_func`|crt\src\setlocal.h|  
  
## See Also  
 [_get_current_locale](../c-runtime-library/reference/get-current-locale.md)   
 [setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [_create_locale, _wcreate_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)   
 [_free_locale](../c-runtime-library/reference/free-locale.md)