---
title: "acosh, acoshf, acoshl"
ms.custom: na
ms.date: 10/05/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - acoshf
  - acosh
  - acoshl
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
ms.assetid: 6985c4d7-9e2a-44ce-9a9b-5a43015f15f7
caps.latest.revision: 6
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
# acosh, acoshf, acoshl
Calculates the inverse hyperbolic cosine.  
  
## Syntax  
  
```  
double acosh(  
   double x   
);  
float acosh(  
   float x   
);  // C++ only  
long double acosh(  
   long double x  
);  // C++ only  
float acoshf(  
   float x   
);  
long double acoshl(  
   long double x  
);  
```  
  
#### Parameters  
 `x`  
 Floating-point value.  
  
## Return Value  
 The `acosh` functions return the inverse hyberbolic cosine (arc hyperbolic cosine) of `x`. These functions are valid over the domain `x` ≥ 1. If `x` is less than 1, `errno` is set to `EDOM` and the result is a quiet NaN. If `x` is a quiet NaN, indefinite, or infinity, the same value is returned.  
  
|Input|SEH Exception|`_matherr` Exception|  
|-----------|-------------------|--------------------------|  
|± QNAN, IND, INF|none|none|  
|x < 1|none|none|  
  
## Remarks  
 When you use C++, you can call overloads of `acosh` that take and return `float` or `long double` values. In a C program, `acosh` always takes and returns `double`.  
  
## Requirements  
  
|Function|C header|C++ header|  
|--------------|--------------|------------------|  
|`acosh`, `acoshf`, `acoshl`|<math.h>|<cmath\>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Example  
  
```c  
// crt_acosh.c  
// Compile by using: cl /W4 crt_acosh.c  
// This program displays the hyperbolic cosine of pi / 4  
// and the arc hyperbolic cosine of the result.  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double pi = 3.1415926535;  
   double x, y;  
  
   x = cosh( pi / 4 );  
   y = acosh( x );  
   printf( "cosh( %f ) = %f\n", pi/4, x );  
   printf( "acosh( %f ) = %f\n", x, y );  
}  
```  
  
 **cosh( 0.785398 ) = 1.324609**  
**acosh( 1.324609 ) = 0.785398**   
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Floating-Point Support](../VS_visualcpp/Floating-Point-Support.md)   
 [Long Double](../Topic/Long%20Double.md)   
 [cos, cosf, cosl, cosh, coshf, coshl](../VS_visualcpp/cos--cosf--cosl--cosh--coshf--coshl.md)   
 [sin, sinf, sinl, sinh, sinhf, sinhl](../VS_visualcpp/sin--sinf--sinl--sinh--sinhf--sinhl.md)   
 [asinh, asinhf, asinhl](../VS_visualcpp/asinh--asinhf--asinhl.md)   
 [tan, tanf, tanl, tanh, tanhf, tanhl](../VS_visualcpp/tan--tanf--tanl--tanh--tanhf--tanhl.md)   
 [atanh, atanhf, atanhl](../VS_visualcpp/atanh--atanhf--atanhl.md)   
 [_CItan](../VS_visualcpp/_CItan.md)