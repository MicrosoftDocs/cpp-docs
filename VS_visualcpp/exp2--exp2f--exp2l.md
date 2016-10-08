---
title: "exp2, exp2f, exp2l"
ms.custom: na
ms.date: 10/05/2016
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
  - exp2
  - exp2f
  - exp2l
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
ms.assetid: 526e3e10-201a-4610-a886-533f44ece344
caps.latest.revision: 13
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
# exp2, exp2f, exp2l
Computes 2 raised to the specified value (ie, 2ˣ ).  
  
## Syntax  
  
```  
double exp2(  
   double x  
);  
  
float exp2(  
   float x  
);  // C++ only  
  
long double exp2(  
   long double x  
); // C++ only  
  
float exp2f(  
   float x  
);  
  
long double exp2l(  
   long double x  
);  
  
```  
  
#### Parameters  
 [in] `x`  
 The value of the exponent.  
  
## Return Value  
 If successful, returns the base-2 exponent of `x` (2ˣ) . Otherwise, may return one of the following values:  
  
|Issue|Return|  
|-----------|------------|  
|`x` = ±0|1|  
|`x` = -INFINITY|+0|  
|`x` = +INFINITY|+INFINITY|  
|`x` = NaN|NaN|  
|Overflow range error|+HUGE_VAL, +HUGE_VALF, or +HUGE_VALL|  
|Underflow range error|correct result, after rounding|  
  
 Errors are reported as specified in [_matherr](../VS_visualcpp/_matherr.md).  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `exp2` that take and return float and long double types. In a C program, `exp2` always takes and returns a double.  
  
## Requirements  
  
|Routine|C header|C++ header|  
|-------------|--------------|------------------|  
|`exp`,                `expf`, `expl`|<math.h>|<cmath\>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## See Also  
 [Alphabetical Function Reference](../VS_visualcpp/CRT-Alphabetical-Function-Reference.md)   
 [exp, expf](../VS_visualcpp/exp--expf.md)   
 [log2, log2f, log2l](../VS_visualcpp/log2--log2f--log2l.md)