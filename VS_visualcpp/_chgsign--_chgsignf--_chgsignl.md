---
title: "_chgsign, _chgsignf, _chgsignl"
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
apiname: 
  - _chgsignl
  - _chgsign
  - _chgsignf
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
  - api-ms-win-crt-math-l1-1-0.dll
apitype: DLLExport
ms.assetid: a6646f8e-213d-4564-8617-f43bc66f989f
caps.latest.revision: 17
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
# _chgsign, _chgsignf, _chgsignl
Reverses the sign of a floating-point argument.  
  
## Syntax  
  
```  
double _chgsign(   
   double x   
);  
float _chgsignf(  
   float x   
);  
long double _chgsignl(   
   long double x   
);  
```  
  
#### Parameters  
 `x`  
 The floating-point value to be changed.  
  
## Return Value  
 The `_chgsign` functions return a value that's equal to the floating-point argument `x`, but with its sign reversed. There is no error return.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_chgsign`|<float.h>|  
|`_chgsignf`, `_chgsignl`|<math.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Floating-Point Support](../VS_visualcpp/Floating-Point-Support.md)   
 [fabs, fabsf, fabsl](../VS_visualcpp/fabs--fabsf--fabsl.md)   
 [copysign, copysignf, copysignl, _copysign, _copysignf, _copysignl](../VS_visualcpp/copysign--copysignf--copysignl--_copysign--_copysignf--_copysignl.md)