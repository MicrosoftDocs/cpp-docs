---
title: "atanh, atanhf, atanhl"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "atanhl"
  - "atanhf"
  - "atanh"
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
  - "api-ms-win-crt-math-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "atanhl"
  - "atanhf"
  - "atanh"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "atanhf function"
  - "atanhl function"
  - "atanh funciton"
ms.assetid: 83a43b5b-2580-4461-854f-dc84236d9f32
caps.latest.revision: 6
ms.author: "corob"
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
# atanh, atanhf, atanhl
Calculates the inverse hyperbolic tangent.  
  
## Syntax  
  
```  
double atanh(  
   double x   
);  
float atanh(  
   float x   
);  // C++ only  
long double atanh(  
   long double x  
);  // C++ only  
float atanhf(  
   float x   
);  
long double atanhl(  
   long double x  
);  
```  
  
#### Parameters  
 `x`  
 Floating-point value.  
  
## Return Value  
 The `atanh` functions return the inverse hyberbolic tangent (arc hyperbolic tangent) of `x`. If `x` is greater than 1, or less than –1, `errno` is set to `EDOM` and the result is a quiet NaN. If `x` is equal to 1 or -1, a positive or negative infinity is returned, respectively, and `errno` is set to `ERANGE`.  
  
|Input|SEH Exception|`Matherr` Exception|  
|-----------|-------------------|-------------------------|  
|± QNAN,IND|none|none|  
|`X` ≥ 1; `x` ≤ -1|none|none|  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `atanh` that take and return `float` or `long double` values. In a C program, `atanh` always takes and returns `double`.  
  
## Requirements  
  
|Function|C header|C++ header|  
|--------------|--------------|------------------|  
|`atanh`, `atanhf`, `atanhl`|\<math.h>|\<cmath>|  
  
 For additional compatibility information, see [Compatibility](../crt/compatibility.md).  
  
## Example  
  
```  
// crt_atanh.c  
// This program displays the hyperbolic tangent of pi / 4  
// and the arc hyperbolic tangent of the result.  
//  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double pi = 3.1415926535;  
   double x, y;  
  
   x = tanh( pi / 4 );  
   y = atanh( x );  
   printf( "tanh( %f ) = %f\n", pi/4, x );  
   printf( "atanh( %f ) = %f\n", x, y );  
}  
```  
  
 **tanh( 0.785398 ) = 0.655794**  
**atanh( 0.655794 ) = 0.785398**   
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Floating-Point Support](../crt/floating-point-support.md)   
 [Long Double](../notintoc/long-double.md)   
 [acos, acosf, acosl](../crt/acos--acosf--acosl.md)   
 [asin, asinf, asinl](../crt/asin--asinf--asinl.md)   
 [atan, atanf, atanl, atan2, atan2f, atan2l](../crt/atan--atanf--atanl--atan2--atan2f--atan2l.md)   
 [cos, cosf, cosl, cosh, coshf, coshl](../crt/cos--cosf--cosl--cosh--coshf--coshl.md)   
 [sin, sinf, sinl, sinh, sinhf, sinhl](../crt/sin--sinf--sinl--sinh--sinhf--sinhl.md)   
 [tan, tanf, tanl, tanh, tanhf, tanhl](../crt/tan--tanf--tanl--tanh--tanhf--tanhl.md)   
 [_CItan](../crt/_citan.md)