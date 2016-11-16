---
title: "_ismbbgraph, _ismbbgraph_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_ismbbgraph_l"
  - "_ismbbgraph"
apilocation: 
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
apitype: "DLLExport"
f1_keywords: 
  - "_ismbbgraph"
  - "_ismbbgraph_l"
  - "ismbbgraph"
  - "ismbbgraph_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ismbbgraph_l function"
  - "ismbbgraph_l function"
  - "_ismbbgraph function"
  - "ismbbgraph function"
ms.assetid: b60db718-134f-4796-acc1-592d0b9efbb7
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# _ismbbgraph, _ismbbgraph_l
Determines whether a particular multibyte character is a graphical character.  
  
## Syntax  
  
```  
int _ismbbgraph (  
   unsigned int c   
);  
int _ismbbgraph_l (  
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
 Returns a nonzero value if the expression:  
  
```  
( _PUNCT | _UPPER | _LOWER | _DIGIT ) || _ismbbkprint  
```  
  
 is nonzero for `c`, or 0 if it is not. `_ismbbgraph` uses the current locale for any locale-dependent behavior. `_ismbbgraph_l` is identical except that it uses the locale passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_ismbbgraph`|\<mbctype.h>|  
|`_ismbbgraph_l`|\<mbctype.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Byte Classification](../../c-runtime-library/byte-classification.md)   
 [_ismbb Routines](../../c-runtime-library/ismbb-routines.md)