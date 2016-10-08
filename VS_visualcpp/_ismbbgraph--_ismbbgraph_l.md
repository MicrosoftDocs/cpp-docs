---
title: "_ismbbgraph, _ismbbgraph_l"
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
  - _ismbbgraph_l
  - _ismbbgraph
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
ms.assetid: b60db718-134f-4796-acc1-592d0b9efbb7
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
  
 is nonzero for `c`, or 0 if it is not. `_ismbbgraph` uses the current locale for any locale-dependent behavior. `_ismbbgraph_l` is identical except that it uses the locale passed in instead. For more information, see [Locale](../VS_visualcpp/Locale.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_ismbbgraph`|<mbctype.h>|  
|`_ismbbgraph_l`|<mbctype.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../VS_visualcpp/CRT-Library-Features.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Byte Classification](../VS_visualcpp/Byte-Classification.md)   
 [_ismbb Routines](../VS_visualcpp/_ismbb-Routines.md)