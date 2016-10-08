---
title: "Data Type Mappings"
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
ms.assetid: 4e573c05-8800-468b-ae5f-76ff7409835e
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
# Data Type Mappings
These data-type mappings are defined in TCHAR.H and depend on whether the constant `_UNICODE` or `_MBCS` has been defined in your program.  
  
 For related information, see [Using TCHAR.H Data Types with _MBCS Code](../VS_visualcpp/Using-TCHAR.H-Data-Types-with-_MBCS-Code.md).  
  
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
 [Generic-Text Mappings](../VS_visualcpp/Generic-Text-Mappings.md)   
 [Constant and Global Variable Mappings](../VS_visualcpp/Constant-and-Global-Variable-Mappings.md)   
 [Routine Mappings](../VS_visualcpp/Routine-Mappings.md)   
 [A Sample Generic-Text Program](../VS_visualcpp/A-Sample-Generic-Text-Program.md)   
 [Using Generic-Text Mappings](../VS_visualcpp/Using-Generic-Text-Mappings.md)