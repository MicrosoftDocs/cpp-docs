---
title: "Using Generic-Text Mappings"
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
ms.assetid: 2848121c-e51f-4b9b-a2e6-833ece4b0cb3
caps.latest.revision: 8
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
# Using Generic-Text Mappings
**Microsoft Specific**  
  
 To simplify code development for various international markets, the Microsoft run-time library provides Microsoft-specific "generic-text" mappings for many data types, routines, and other objects. These mappings are defined in TCHAR.H. You can use these name mappings to write generic code that can be compiled for any of the three kinds of character sets: ASCII (SBCS), MBCS, or Unicode, depending on a manifest constant you define using a `#define` statement. Generic-text mappings are Microsoft extensions that are not ANSI compatible.  
  
### Preprocessor Directives for Generic-Text Mappings  
  
|#define|Compiled version|Example|  
|--------------|----------------------|-------------|  
|`_UNICODE`|Unicode (wide-character)|`_tcsrev` maps to `_wcsrev`|  
|`_MBCS`|Multibyte-character|`_tcsrev` maps to `_mbsrev`|  
|None (the default: neither `_UNICODE` nor `_MBCS` defined)|SBCS (ASCII)|`_tcsrev` maps to `strrev`|  
  
 For example, the generic-text function `_tcsrev`, defined in TCHAR.H, maps to `mbsrev` if `MBCS` has been defined in your program, or to `_wcsrev` if `_UNICODE` has been defined. Otherwise `_tcsrev` maps to `strrev`.  
  
 The generic-text data type `_TCHAR`, also defined in TCHAR.H, maps to type `char` if `_MBCS` is defined, to type `wchar_t` if `_UNICODE` is defined, and to type `char` if neither constant is defined. Other data type mappings are provided in TCHAR.H for programming convenience, but `_TCHAR` is the type that is most useful.  
  
### Generic-Text Data Type Mappings  
  
|Generic-text data type name|SBCS (_UNICODE, _MBCS not defined)|_MBCS defined|_UNICODE defined|  
|----------------------------------|--------------------------------------------|--------------------|-----------------------|  
|`_TCHAR`|`char`|`char`|`wchar_t`|  
|`_TINT`|`int`|`int`|`wint_t`|  
|`_TSCHAR`|`signed char`|`signed char`|`wchar_t`|  
|`_TUCHAR`|`unsigned char`|`unsigned char`|`wchar_t`|  
|`_TXCHAR`|`char`|`unsigned char`|`wchar_t`|  
|`_T` or `_TEXT`|No effect (removed by preprocessor)|No effect (removed by preprocessor)|`L` (converts following character or string to its Unicode counterpart)|  
  
 For a complete list of generic-text mappings of routines, variables, and other objects, see [Generic-Text Mappings](../VS_visualcpp/Generic-Text-Mappings.md).  
  
 The following code fragments illustrate the use of `_TCHAR` and `_tcsrev` for mapping to the MBCS, Unicode, and SBCS models.  
  
```  
_TCHAR *RetVal, *szString;  
RetVal = _tcsrev(szString);  
```  
  
 If `MBCS` has been defined, the preprocessor maps the preceding fragment to the following code:  
  
```  
char *RetVal, *szString;  
RetVal = _mbsrev(szString);  
```  
  
 If `_UNICODE` has been defined, the preprocessor maps the same fragment to the following code:  
  
```  
wchar_t *RetVal, *szString;  
RetVal = _wcsrev(szString);  
```  
  
 If neither `_MBCS` nor `_UNICODE` has been defined, the preprocessor maps the fragment to single-byte ASCII code, as follows:  
  
```  
char *RetVal, *szString;  
RetVal = strrev(szString);  
```  
  
 Thus you can write, maintain, and compile a single source code file to run with routines that are specific to any of the three kinds of character sets.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Generic-Text Mappings](../VS_visualcpp/Generic-Text-Mappings.md)   
 [Data Type Mappings](../VS_visualcpp/Data-Type-Mappings.md)   
 [Constant and Global Variable Mappings](../VS_visualcpp/Constant-and-Global-Variable-Mappings.md)   
 [Routine Mappings](../VS_visualcpp/Routine-Mappings.md)   
 [A Sample Generic-Text Program](../VS_visualcpp/A-Sample-Generic-Text-Program.md)