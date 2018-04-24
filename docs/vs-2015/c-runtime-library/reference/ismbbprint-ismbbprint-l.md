---
title: "_ismbbprint, _ismbbprint_l | Microsoft Docs"
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
  - "_ismbbprint_l"
  - "_ismbbprint"
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
  - "_ismbbprint_l"
  - "_ismbbprint"
  - "ismbbprint"
  - "ismbbprint_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "ismbbprint_l function"
  - "ismbbprint function"
  - "_ismbbprint function"
  - "_ismbbprint_l function"
ms.assetid: d08a061c-18a8-48f2-a75d-bff4870aec9d
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ismbbprint, _ismbbprint_l
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_ismbbprint, _ismbbprint_l](https://docs.microsoft.com/cpp/c-runtime-library/reference/ismbbprint-ismbbprint-l).  
  
Determines whether a specified multibyte character is a print character.  
  
## Syntax  
  
```  
int _ismbbprint(  
   unsigned int c   
);  
int _ismbbprint_l(  
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
 `_ismbbprint` returns a nonzero value if the expression:  
  
```  
isprint || _ismbbkprint  
```  
  
 is nonzero for `c`, or 0 if it is not. `_ismbbprint` uses the current locale for any locale-dependent behavior. `_ismbbprint_l` is identical except that it uses the locale passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_ismbbprint`|\<mbctype.h>|  
|`_ismbbprint_l`|\<mbctype.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Byte Classification](../../c-runtime-library/byte-classification.md)   
 [_ismbb Routines](../../c-runtime-library/ismbb-routines.md)





