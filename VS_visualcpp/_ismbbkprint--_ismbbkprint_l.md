---
title: "_ismbbkprint, _ismbbkprint_l"
ms.custom: na
ms.date: 10/06/2016
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
apiname: 
  - _ismbbkprint
  - _ismbbkprint_l
apilocation: 
  - msvcrt.dll
  - msvcr80.dll
  - msvcr90.dll
  - msvcr100.dll
  - msvcr100_clr0400.dll
  - msvcr110.dll
  - msvcr110_clr0400.dll
  - msvcr120.dll
  - msvcr120_clr0400.dll
  - ucrtbase.dll
  - api-ms-win-crt-multibyte-l1-1-0.dll
apitype: DLLExport
ms.assetid: 8d1d3258-1e34-4365-81ed-97c95de25475
caps.latest.revision: 20
manager: ghogen
translation.priority.mt: 
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
# _ismbbkprint, _ismbbkprint_l
Determines whether a particular multibyte character is a punctuation symbol.  
  
## Syntax  
  
```  
int _ismbbkprint(  
   unsigned int c   
);  
int _ismbbkprint_l(  
   unsigned int c,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `c`  
 Integer to be tested.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 `_ismbbkprint` returns a nonzero value if the integer `c` is a non-ASCII text or non-ASCII punctuation symbol or 0 if it is not. For example, in code page 932 only, `_ismbbkprint` tests for katakana alphanumeric or katakana punctuation (range: 0xA1 – 0xDF). `_ismbbkprint` uses the current locale for locale-dependent character settings. `_ismbbkprint_l` is identical except that it uses the locale passed in. For more information, see [Locale](../VS_visualcpp/Locale.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_ismbbkprint`|<mbctype.h>|  
|`_ismbbkprint_l`|<mbctype.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Byte Classification](../VS_visualcpp/Byte-Classification.md)   
 [_ismbb Routines](../VS_visualcpp/_ismbb-Routines.md)