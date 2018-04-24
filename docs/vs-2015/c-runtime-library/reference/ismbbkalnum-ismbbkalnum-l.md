---
title: "_ismbbkalnum, _ismbbkalnum_l | Microsoft Docs"
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
  - "_ismbbkalnum"
  - "_ismbbkalnum_l"
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
  - "_ismbbkalnum"
  - "ismbbkalnum"
  - "ismbbkalnum_l"
  - "_ismbbkalnum_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ismbbkalnum_l function"
  - "ismbbkalnum_l function"
  - "_ismbbkalnum function"
  - "ismbbkalnum function"
ms.assetid: e1d70e7b-29d0-469c-9d93-442b99de22ac
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ismbbkalnum, _ismbbkalnum_l
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_ismbbkalnum, _ismbbkalnum_l](https://docs.microsoft.com/cpp/c-runtime-library/reference/ismbbkalnum-ismbbkalnum-l).  
  
Determines whether a particular multibyte character is a non-ASCII text symbol.  
  
## Syntax  
  
```  
int _ismbbkalnum(  
   unsigned int c   
);  
int _ismbbkalnum_l(  
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
 `_ismbbkalnum` returns a nonzero value if the integer `c` is a non-ASCII text symbol other than punctuation, or 0 if it is not. `_ismbbkalnum` uses the current locale for locale-dependent character information. `_ismbbkalnum_l` is identical to `_ismbbkalnum` except that it takes the locale as a parameter. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_ismbbkalnum`|\<mbctype.h>|  
|`_ismbbkalnum_l`|\<mbctype.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Byte Classification](../../c-runtime-library/byte-classification.md)   
 [_ismbb Routines](../../c-runtime-library/ismbb-routines.md)





