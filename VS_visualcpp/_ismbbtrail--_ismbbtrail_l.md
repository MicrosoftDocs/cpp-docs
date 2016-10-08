---
title: "_ismbbtrail, _ismbbtrail_l"
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
  - _ismbbtrail
  - _ismbbtrail_l
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
ms.assetid: dfdd0292-960b-4c1d-bf11-146e0fc80247
caps.latest.revision: 22
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
# _ismbbtrail, _ismbbtrail_l
Determines whether a byte is a trailing byte of a multibyte character.  
  
## Syntax  
  
```  
int _ismbbtrail(  
   unsigned int c   
);  
int _ismbbtrail_l(  
   unsigned int c,  
   _locale_t locale   
);  
```  
  
#### Parameters  
 `c`  
 The integer to be tested.  
  
 `locale`  
 The locale to use.  
  
## Return Value  
 `_ismbbtrail` returns a nonzero value if the integer `c` is the second byte of a multibyte character. For example, in code page 932 only, valid ranges are 0x40 to 0x7E and 0x80 to 0xFC.  
  
## Remarks  
 `_ismbbtrail` uses the current locale for locale-dependent behavior. `_ismbbtrail_l` is identical except that it uses the locale that's passed in instead. For more information, see [Locale](../VS_visualcpp/Locale.md).  
  
## Requirements  
  
|Routine|Required header|Optional header|  
|-------------|---------------------|---------------------|  
|`_ismbbtrail`|<mbctype.h> or <mbstring.h>|<ctype.h>,* <limits.h>, <stdlib.h>|  
|`_ismbbtrail_l`|<mbctype.h> or <mbstring.h>|<ctype.h>,* <limits.h>, <stdlib.h>|  
  
 \* For manifest constants for the test conditions.  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Byte Classification](../VS_visualcpp/Byte-Classification.md)   
 [_ismbb Routines](../VS_visualcpp/_ismbb-Routines.md)