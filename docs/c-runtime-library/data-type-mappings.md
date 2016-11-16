---
title: "Data Type Mappings | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_TXCHAR"
  - "_TUCHAR"
  - "_TINT"
  - "_TSCHAR"
  - "_TCHAR"
  - "TCHAR::H"
  - "TCHAR"
  - "_T"
  - "_TEXT"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_TXCHAR type"
  - "TINT type"
  - "_TCHAR type"
  - "TSCHAR type"
  - "TEXT type"
  - "TCHAR type"
  - "TCHAR.H data types, mappings defined in"
  - "generic-text data types"
  - "_TINT type"
  - "TUCHAR type"
  - "TXCHAR type"
  - "_TSCHAR type"
  - "T type"
  - "_TUCHAR type"
  - "_TEXT type"
  - "_T type"
ms.assetid: 4e573c05-8800-468b-ae5f-76ff7409835e
caps.latest.revision: 7
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
# Data Type Mappings
These data-type mappings are defined in TCHAR.H and depend on whether the constant `_UNICODE` or `_MBCS` has been defined in your program.  
  
 For related information, see [Using TCHAR.H Data Types with _MBCS Code](../text/using-tchar-h-data-types-with-mbcs-code.md).  
  
### Generic-Text Data Type Mappings  
  
|Generic-text<br /><br /> data type name|SBCS (_UNICODE,<br /><br /> _MBCS not<br /><br /> defined)|_MBCS<br /><br /> defined|_UNICODE<br /><br /> defined|  
|--------------------------------------|----------------------------------------------------|------------------------|---------------------------|  
|`_TCHAR`|`char`|`char`|`wchar_t`|  
|`_tfinddata_t`|`_finddata_t`|`_finddata_t`|`_wfinddata_t`|  
|`_tfinddata64_t`|`__finddata64_t`|`__finddata64_t`|`__wfinddata64_t`|  
|`_tfinddatai64_t`|`_finddatai64_t`|`_finddatai64_t`|`_wfinddatai64_t`|  
|`_TINT`|`int`|`int`|`wint_t`|  
|`_TSCHAR`|`signed char`|`signed char`|`wchar_t`|  
|`_TUCHAR`|`unsigned char`|`unsigned char`|`wchar_t`|  
|`_TXCHAR`|`char`|`unsigned char`|`wchar_t`|  
|`_T` or `_TEXT`|No effect (removed by preprocessor)|No effect (removed by preprocessor)|`L` (converts following character or string to its Unicode counterpart)|  
  
## See Also  
 [Generic-Text Mappings](../c-runtime-library/generic-text-mappings.md)   
 [Constant and Global Variable Mappings](../c-runtime-library/constant-and-global-variable-mappings.md)   
 [Routine Mappings](../c-runtime-library/routine-mappings.md)   
 [A Sample Generic-Text Program](../c-runtime-library/a-sample-generic-text-program.md)   
 [Using Generic-Text Mappings](../c-runtime-library/using-generic-text-mappings.md)