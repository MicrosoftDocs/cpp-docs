---
title: "fdim, fdimf, fdiml"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - cpp
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - fdim
  - fdimf
  - fdiml
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
ms.assetid: 2d4ac639-51e9-462d-84ab-fb03b06971a0
caps.latest.revision: 11
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
# fdim, fdimf, fdiml
Determines the positive difference between the first and second values.  
  
## Syntax  
  
```  
double fdim(  
   double x,   
   double y  
);  
  
float fdim(  
   float x,   
   float y  
); //C++ only  
  
long double fdim(  
   long double x,   
   long double y  
); //C++ only  
  
float fdimf(  
   float x,   
   float y  
);  
  
long double fdiml(  
   long double x,   
   long double y  
);  
  
```  
  
#### Parameters  
 [in] `x`  
 The first value.  
  
 [in] `y`  
 The second value.  
  
## Return Value  
 Returns the positive difference between `x` and `y`:  
  
|Return value|Scenario|  
|------------------|--------------|  
|x-y|if x > y|  
|0|if x <= y|  
  
 Otherwise, may return one of the following errors:  
  
|Issue|Return|  
|-----------|------------|  
|Overflow range error|+HUGE_VAL, +HUGE_VALF, or +HUGE_VALL|  
|Underflow range error|correct value (after rounding)|  
|`x` or `y` is NaN|NaN|  
  
 Errors are reported as specified in [_matherr](../VS_visualcpp/_matherr.md).  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `fdim` that take and return float and long double types. In a C program, `fdim` always takes and returns a double.  
  
 Except for the NaN handling, this function is equivalent to [fmax, fmaxf, fmaxl](../VS_visualcpp/fmax--fmaxf--fmaxl.md)(`x`-`y,` 0).  
  
## Requirements  
  
|Function|C header|C++ header|  
|--------------|--------------|------------------|  
|`fdim`,                `fdimf`,  `fdiml`|<math.h>|<cmath\>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## See Also  
 [Alphabetical Function Reference](../VS_visualcpp/CRT-Alphabetical-Function-Reference.md)   
 [fmax, fmaxf, fmaxl](../VS_visualcpp/fmax--fmaxf--fmaxl.md)   
 [abs, labs, llabs, _abs64](../VS_visualcpp/abs--labs--llabs--_abs64.md)