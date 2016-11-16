---
title: "modf, modff, modfl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "modff"
  - "modf"
  - "modfl"
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
  - "modff"
  - "_modfl"
  - "modf"
  - "modfl"
  - "math/modf"
  - "math/modff"
  - "math/modfl"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "modf function"
  - "modff function"
  - "modfl function"
ms.assetid: b1c7abf5-d476-43ca-a03c-02072a86e32d
caps.latest.revision: 11
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
# modf, modff, modfl
Splits a floating-point value into fractional and integer parts.  
  
## Syntax  
  
```  
double modf(  
   double x,  
   double * intptr   
);  
float modf(  
   float x,  
   float * intptr  
);  // C++ only  
long double modf(  
   long double x,  
   long double * intptr  
);  // C++ only  
float modff(  
   float x,  
   float * intptr   
);  
long double modfl(  
   long double x,  
   long double * intptr  
);  
```  
  
#### Parameters  
 *x*  
 Floating-point value.  
  
 `intptr`  
 Pointer to stored integer portion.  
  
## Return Value  
 This function returns the signed fractional portion of *x*. There is no error return.  
  
## Remarks  
 The `modf` functions break down the floating-point value `x` into fractional and integer parts, each of which has the same sign as `x`. The signed fractional portion of `x` is returned. The integer portion is stored as a floating-point value at `intptr.`  
  
 `modf` has an implementation that uses Streaming SIMD Extensions 2 (SSE2). See [_set_SSE2_enable](../../c-runtime-library/reference/set-sse2-enable.md) for information and restrictions on using the SSE2 implementation.  
  
 C++ allows overloading, so you can call overloads of `modf` that take and return `float` or `long double` parameters. In a C program, `modf` always takes two double values and returns a double value.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`modf`, `modff`, `modfl`|C: \<math.h><br /><br /> C++: , \<cmath> or \<math.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## Example  
  
```  
// crt_modf.c  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double x, y, n;  
  
   x = -14.87654321;      /* Divide x into its fractional */  
   y = modf( x, &n );     /* and integer parts            */  
  
   printf( "For %f, the fraction is %f and the integer is %.f\n",   
           x, y, n );  
}  
```  
  
## Output  
  
```  
For -14.876543, the fraction is -0.876543 and the integer is -14  
```  
  
## See Also  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [frexp](../../c-runtime-library/reference/frexp.md)   
 [ldexp](../../c-runtime-library/reference/ldexp.md)