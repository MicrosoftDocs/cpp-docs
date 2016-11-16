---
title: "Generic-Text Mappings in Tchar.h | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "tchar.h"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "mapping generic-text"
  - "generic-text mappings [C++]"
  - "character sets [C++], generic-text mappings"
  - "Unicode [C++], generic-text mappings"
  - "MBCS [C++], generic-text mappings"
  - "TCHAR.H data types, mapping"
  - "mappings [C++], TCHAR.H"
ms.assetid: 01e1bb74-5a01-4093-8720-68b6c1fdda80
caps.latest.revision: 12
author: "ghogen"
ms.author: "ghogen"
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
# Generic-Text Mappings in Tchar.h
To simplify the transporting of code for international use, the [!INCLUDE[TLA#tla_ms](../text/includes/tlasharptla_ms_md.md)] run-time library provides [!INCLUDE[TLA#tla_ms](../text/includes/tlasharptla_ms_md.md)]-specific generic-text mappings for many data types, routines, and other objects. You can use these mappings, which are defined in Tchar.h, to write generic code that can be compiled for single-byte, multibyte, or [!INCLUDE[TLA#tla_unicode](../atl-mfc-shared/reference/includes/tlasharptla_unicode_md.md)] character sets, depending on a manifest constant that you define by using a `#define` statement. Generic-text mappings are [!INCLUDE[TLA#tla_ms](../text/includes/tlasharptla_ms_md.md)] extensions that are not [!INCLUDE[vcpransi](../atl-mfc-shared/reference/includes/vcpransi_md.md)] compatible.  
  
 By using the Tchar.h, you can build single-byte, Multibyte Character Set (MBCS), and [!INCLUDE[TLA#tla_unicode](../atl-mfc-shared/reference/includes/tlasharptla_unicode_md.md)] applications from the same sources. Tchar.h defines macros (which have the prefix `_tcs`) that, with the correct preprocessor definitions, map to `str`, `_mbs`, or `wcs` functions, as appropriate. To build MBCS, define the symbol `_MBCS`. To build [!INCLUDE[TLA#tla_unicode](../atl-mfc-shared/reference/includes/tlasharptla_unicode_md.md)], define the symbol `_UNICODE`. To build a single-byte application, define neither (the default). By default, `_MBCS` is defined for MFC applications.  
  
 The `_TCHAR` data type is defined conditionally in Tchar.h. If the symbol `_UNICODE` is defined for your build, `_TCHAR` is defined as `wchar_t`; otherwise, for single-byte and MBCS builds, it is defined as `char`. (`wchar_t`, the basic Unicode wide-character data type, is the 16-bit counterpart to an 8-bit signed `char`.) For international applications, use the `_tcs` family of functions, which operate in `_TCHAR` units, not bytes. For example, `_tcsncpy` copies `n` `_TCHARs`, not `n` bytes.  
  
 Because some Single Byte Character Set (SBCS) string-handling functions take (signed) `char*` parameters, a type mismatch compiler warning results when `_MBCS` is defined. There are three ways to avoid this warning:  
  
1.  Use the type-safe inline function thunks in Tchar.h. This is the default behavior.  
  
2.  Use the direct macros in Tchar.h by defining `_MB_MAP_DIRECT` on the command line. If you do this, you must manually match types. This is the fastest method, but is not type-safe.  
  
3.  Use the type-safe statically linked library function thunks in Tchar.h. To do so, define the constant `_NO_INLINING` on the command line. This is the slowest method, but the most type-safe.  
  
### Preprocessor Directives for Generic-Text Mappings  
  
|# define|Compiled version|Example|  
|---------------|----------------------|-------------|  
|`_UNICODE`|[!INCLUDE[TLA#tla_unicode](../atl-mfc-shared/reference/includes/tlasharptla_unicode_md.md)] (wide-character)|`_tcsrev` maps to `_wcsrev`|  
|`_MBCS`|Multibyte-character|`_tcsrev` maps to `_mbsrev`|  
|None (the default has neither `_UNICODE` nor `_MBCS` defined)|SBCS ([!INCLUDE[TLA#tla_ascii](../text/includes/tlasharptla_ascii_md.md)])|`_tcsrev` maps to `strrev`|  
  
 For example, the generic-text function `_tcsrev`, which is defined in Tchar.h, maps to `_mbsrev` if you defined `_MBCS` in your program, or to `_wcsrev` if you defined `_UNICODE`. Otherwise, `_tcsrev` maps to `strrev`. Other data type mappings are provided in Tchar.h for programming convenience, but `_TCHAR` is the most useful.  
  
### Generic-Text Data Type Mappings  
  
|Generic-Text<br /><br /> Data Type Name|_UNICODE &<br /><br /> _MBCS Not Defined|_MBCS<br /><br /> Defined|_UNICODE<br /><br /> Defined|  
|--------------------------------------|----------------------------------------|------------------------|---------------------------|  
|`_TCHAR`|`char`|`char`|`wchar_t`|  
|`_TINT`|`int`|`unsigned int`|`wint_t`|  
|`_TSCHAR`|`signed char`|`signed char`|`wchar_t`|  
|`_TUCHAR`|`unsigned char`|`unsigned char`|`wchar_t`|  
|`_TXCHAR`|`char`|`unsigned char`|`wchar_t`|  
|`_T` or `_TEXT`|No effect (removed by preprocessor)|No effect (removed by preprocessor)|`L` (converts the following character or string to its [!INCLUDE[TLA#tla_unicode](../atl-mfc-shared/reference/includes/tlasharptla_unicode_md.md)] counterpart)|  
  
 For a list of generic-text mappings of routines, variables, and other objects, see [Generic-Text Mappings](../c-runtime-library/generic-text-mappings.md) in the Run-Time Library Reference.  
  
> [!NOTE]
>  Do not use the `str` family of functions with Unicode strings, which are likely to contain embedded null bytes. Similarly, do not use the `wcs` family of functions with MBCS (or SBCS) strings.  
  
 The following code fragments illustrate the use of `_TCHAR` and `_tcsrev` for mapping to the MBCS, [!INCLUDE[TLA#tla_unicode](../atl-mfc-shared/reference/includes/tlasharptla_unicode_md.md)], and SBCS models.  
  
```  
_TCHAR *RetVal, *szString;  
RetVal = _tcsrev(szString);  
```  
  
 If `_MBCS` has been defined, the preprocessor maps this fragment to this code:  
  
```  
char *RetVal, *szString;  
RetVal = _mbsrev(szString);  
```  
  
 If `_UNICODE` has been defined, the preprocessor maps this fragment to this code:  
  
```  
wchar_t *RetVal, *szString;  
RetVal = _wcsrev(szString);  
```  
  
 If neither `_MBCS` nor `_UNICODE` have been defined, the preprocessor maps the fragment to single-byte [!INCLUDE[TLA#tla_ascii](../text/includes/tlasharptla_ascii_md.md)] code, as follows:  
  
```  
char *RetVal, *szString;  
RetVal = strrev(szString);  
```  
  
 Therefore, you can write, maintain, and compile a single-source code file to run with routines that are specific to any of the three kinds of character sets.  
  
## See Also  
 [Text and Strings](../text/text-and-strings-in-visual-cpp.md)   
 [Using TCHAR.H Data Types with _MBCS Code](../text/using-tchar-h-data-types-with-mbcs-code.md)