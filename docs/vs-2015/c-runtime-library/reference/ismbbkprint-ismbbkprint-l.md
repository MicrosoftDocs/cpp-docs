---
title: "_ismbbkprint, _ismbbkprint_l | Microsoft Docs"
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
  - "_ismbbkprint"
  - "_ismbbkprint_l"
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
  - "api-ms-win-crt-multibyte-l1-1-0.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "_ismbbkprint_l"
  - "ismbbkprint"
  - "_ismbbkprint"
  - "ismbbkprint_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ismbbkprint function"
  - "ismbbkprint_l function"
  - "ismbbkprint function"
  - "_ismbbkprint_l function"
ms.assetid: 8d1d3258-1e34-4365-81ed-97c95de25475
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ismbbkprint, _ismbbkprint_l
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_ismbbkprint, _ismbbkprint_l](https://docs.microsoft.com/cpp/c-runtime-library/reference/ismbbkprint-ismbbkprint-l).  
  
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
 `_ismbbkprint` returns a nonzero value if the integer `c` is a non-ASCII text or non-ASCII punctuation symbol or 0 if it is not. For example, in code page 932 only, `_ismbbkprint` tests for katakana alphanumeric or katakana punctuation (range: 0xA1 – 0xDF). `_ismbbkprint` uses the current locale for locale-dependent character settings. `_ismbbkprint_l` is identical except that it uses the locale passed in. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_ismbbkprint`|\<mbctype.h>|  
|`_ismbbkprint_l`|\<mbctype.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Byte Classification](../../c-runtime-library/byte-classification.md)   
 [_ismbb Routines](../../c-runtime-library/ismbb-routines.md)





