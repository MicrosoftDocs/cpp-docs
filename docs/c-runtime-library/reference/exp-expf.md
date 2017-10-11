---
title: "exp, expf, expl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: ["expf", "expl", "exp"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_expl", "expf", "expl", "exp"]
dev_langs: ["C++"]
helpviewer_keywords: ["exponential calculations", "expf function", "expl function", "calculating exponentials", "exp function"]
ms.assetid: 7070016d-1143-407e-9e9a-6b059bb88867
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# exp, expf, expl
Calculates the exponential.  
  
## Syntax  
  
```  
double exp(   
   double x  
);  
float exp(  
   float x  
);  // C++ only  
long double exp(  
   long double x  
);  // C++ only  
float expf(   
   float x  
);  
long double expl(  
   long double x  
);  
```  
  
### Parameters  
 `x`  
 The floating-point value to exponentiate the natural logarithm base *e* by.  
  
## Return Value  
 The `exp` functions return the exponential value of the floating-point parameter, *x*, if successful. That is, the result is *e*<sup>*x*</sup>, where *e* is the base of the natural logarithm. On overflow, the function returns INF (infinity) and on underflow, `exp` returns 0.  
  
|Input|SEH Exception|Matherr Exception|  
|-----------|-------------------|-----------------------|  
|± Quiet NaN, indeterminate|None|_DOMAIN|  
|± Infinity|INVALID|_DOMAIN|  
|x ≥ 7.097827e+002|INEXACT+OVERFLOW|OVERFLOW|  
|X ≤ -7.083964e+002|INEXACT+UNDERFLOW|UNDERFLOW|  
  
 The `exp` function has an implementation that uses Streaming SIMD Extensions 2 (SSE2). See [_set_SSE2_enable](../../c-runtime-library/reference/set-sse2-enable.md) for information and restrictions on using the SSE2 implementation.  
  
## Remarks  
 C++ allows overloading, so you can call overloads of `exp` that take a **float** or **long double** argument. In a C program, `exp` always takes and returns a **double**.  
  
## Requirements  
  
|Function|Required C header|Required C++ header|  
|--------------|---------------------|---|  
|`exp`, `expf`|\<math.h>|\<cmath> or \<math.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_exp.c  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double x = 2.302585093, y;  
  
   y = exp( x );  
   printf( "exp( %f ) = %f\n", x, y );  
}  
```  
  
```Output  
exp( 2.302585 ) = 10.000000  
```  
  
## See Also  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [log, logf, log10, log10f](../../c-runtime-library/reference/log-logf-log10-log10f.md)   
 [_CIexp](../../c-runtime-library/ciexp.md)