---
title: "asinh, asinhf, asinhl"
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
  - "asinh"
  - "asinhf"
  - "asinhl"
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
  - "asinhf"
  - "asinhl"
  - "asinh"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "asinh function"
  - "asinhl function"
  - "asinhf function"
ms.assetid: 4488babe-1a7e-44ca-8b7b-c2db0a70084f
caps.latest.revision: 5
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
# asinh, asinhf, asinhl
Calculates the inverse hyperbolic sine.  
  
## Syntax  
  
```  
double asinh(  
   double x   
);  
float asinh(  
   float x   
);  // C++ only  
long double asinh(  
   long double x  
);  // C++ only  
float asinhf(  
   float x   
);  
long double asinhl(  
   long double x  
);  
```  
  
#### Parameters  
 `x`  
 Floating-point value.  
  
## Return Value  
 The `asinh` functions return the inverse hyberbolic sine (arc hyperbolic sine) of `x`. This function is valid over the floating-point domain. If `x` is a quiet NaN, indefinite, or infinity, the same value is returned.  
  
|Input|SEH Exception|`_matherr` Exception|  
|-----------|-------------------|--------------------------|  
|± QNAN, IND, INF|none|none|  
  
## Remarks  
 When you use C++, you can call overloads of `asinh` that take and return `float` or `long double` values. In a C program, `asinh` always takes and returns `double`.  
  
## Requirements  
  
|Function|C header|C++ header|  
|--------------|--------------|------------------|  
|`asinh`, `asinhf`, `asinhl`|\<math.h>|\<cmath>|  
  
 For additional compatibility information, see [Compatibility](../crt/compatibility.md).  
  
## Example  
  
```c  
// crt_asinh.c  
// Compile by using: cl /W4 crt_asinh.c  
// This program displays the hyperbolic sine of pi / 4  
// and the arc hyperbolic sine of the result.  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double pi = 3.1415926535;  
   double x, y;  
  
   x = sinh( pi / 4 );  
   y = asinh( x );  
   printf( "sinh( %f ) = %f\n", pi/4, x );  
   printf( "asinh( %f ) = %f\n", x, y );  
}  
```  
  
 **sinh( 0.785398 ) = 0.868671**  
**asinh( 0.868671 ) = 0.785398**   
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Floating-Point Support](../crt/floating-point-support.md)   
 [Long Double](../notintoc/long-double.md)   
 [cos, cosf, cosl, cosh, coshf, coshl](../crt/cos--cosf--cosl--cosh--coshf--coshl.md)   
 [acosh, acoshf, acoshl](../crt/acosh--acoshf--acoshl.md)   
 [sin, sinf, sinl, sinh, sinhf, sinhl](../crt/sin--sinf--sinl--sinh--sinhf--sinhl.md)   
 [tan, tanf, tanl, tanh, tanhf, tanhl](../crt/tan--tanf--tanl--tanh--tanhf--tanhl.md)   
 [atanh, atanhf, atanhl](../crt/atanh--atanhf--atanhl.md)   
 [_CItan](../crt/_citan.md)