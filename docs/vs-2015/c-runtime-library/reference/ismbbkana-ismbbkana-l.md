---
title: "_ismbbkana, _ismbbkana_l | Microsoft Docs"
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
  - "_ismbbkana_l"
  - "_ismbbkana"
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
  - "_ismbbkana_l"
  - "ismbbkana_l"
  - "ismbbkana"
  - "_ismbbkana"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ismbbkana_l function"
  - "_ismbbkana function"
  - "ismbbkana function"
  - "ismbbkana_l function"
ms.assetid: 64d4eb4a-205a-40ef-be35-ff9d77fabbaf
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ismbbkana, _ismbbkana_l
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_ismbbkana, _ismbbkana_l](https://docs.microsoft.com/cpp/c-runtime-library/reference/ismbbkana-ismbbkana-l).  
  
Tests for a katakana symbol and is specific to code page 932.  
  
## Syntax  
  
```  
int _ismbbkana(  
   unsigned int c   
);  
int _ismbbkana_l(  
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
 `_ismbbkana` returns a nonzero value if the integer `c` is a katakana symbol or 0 if it is not. `_ismbbkana` uses the current locale for locale-dependent character information. `_ismbbkana_l` is identical except that it uses the locale object passed in. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_ismbbkana`|\<mbctype.h>|  
|`_ismbbkana_l`|\<mbctype.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Byte Classification](../../c-runtime-library/byte-classification.md)   
 [_ismbb Routines](../../c-runtime-library/ismbb-routines.md)





