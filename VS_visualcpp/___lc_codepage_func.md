---
title: "___lc_codepage_func"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - ___lc_codepage_func
apilocation: 
  - msvcr120.dll
  - msvcr110_clr0400.dll
  - msvcr80.dll
  - msvcr100.dll
  - msvcr90.dll
  - msvcr110.dll
  - msvcrt.dll
apitype: DLLExport
ms.assetid: 6a663bd0-5a63-4a2f-9507-872ec1582aae
caps.latest.revision: 9
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
# ___lc_codepage_func
Internal CRT function. Retrieves the current code page of the thread.  
  
## Syntax  
  
```cpp  
UINT ___lc_codepage_func(void);  
```  
  
## Return Value  
 The current code page of the thread.  
  
## Remarks  
 `___lc_codepage_func` is an internal CRT function that is used by other CRT functions to get the current code page from the thread local storage for CRT data. This information is also available by using the [_get_current_locale](../VS_visualcpp/_get_current_locale.md) function.  
  
 A *code page* is a mapping of single-byte or double-byte codes to individual characters. Different code pages include different special characters, typically customized for a language or a group of languages. For more information about code pages, see [Code Pages](../VS_visualcpp/Code-Pages.md).  
  
 Internal CRT functions are implementation-specific and subject to change with each release. We don't recommend their use in your code.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`___lc_codepage_func`|crt\src\setlocal.h|  
  
## See Also  
 [_get_current_locale](../VS_visualcpp/_get_current_locale.md)   
 [setlocale, _wsetlocale](../VS_visualcpp/setlocale--_wsetlocale.md)   
 [_create_locale, _wcreate_locale](../VS_visualcpp/_create_locale--_wcreate_locale.md)   
 [_free_locale](../VS_visualcpp/_free_locale.md)