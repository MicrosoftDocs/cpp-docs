---
title: "fma, fmaf, fmal"
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
  - fma
  - fmaf
  - fmal
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
ms.assetid: 584a6037-da1e-4e86-9f0c-97aae86de0c0
caps.latest.revision: 10
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
# fma, fmaf, fmal
Multiplies two values together,  adds a third value, and then rounds the result, without losing any precision due to intermediary rounding.  
  
## Syntax  
  
```  
double fma(  
   double x,   
   double y,   
   double z  
);  
  
float fma(  
   float  x,   
   float  y,   
   float z  
); //C++ only  
  
long double fma(  
   long double  x,   
   long double  y,   
   long double z  
); //C++ only  
  
float fmaf(  
   float  x,   
   float  y,   
   float z  
);  
  
long double fmal(  
   long double  x,   
   long double  y,   
   long double z  
);  
  
```  
  
#### Parameters  
 [in] `x`  
 The first value to multiply.  
  
 [in] `y`  
 The second value to multiply.  
  
 [in] `z`  
 The value to add.  
  
## Return Value  
 Returns (`x` ×    `y`) + `z`. The return value is then rounded using the current rounding format.  
  
 Otherwise, may return one of the following values:  
  
|Issue|Return|  
|-----------|------------|  
|`x` = INFINITY, `y` = 0 or<br /><br /> `x` = 0, `y` = INFINITY|NaN|  
|`x` or `y` = exact ± INFINITY, `z` = INFINITY with the opposite sign|NaN|  
|`x` or `y` = NaN|NaN|  
|not (`x` = 0, `y`= indefinite) and `z` = NaN<br /><br /> not (`x`=indefinite, `y`=0) and `z` = NaN|NaN|  
|Overflow range error|±HUGE_VAL, ±HUGE_VALF, or ±HUGE_VALL|  
|Underflow range error|correct value, after rounding.|  
  
 Errors are reported as specified in [_matherr](../VS_visualcpp/_matherr.md).  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `fma` that take and return float and long double types. In a C program, `fma` always takes and returns a double.  
  
 This function computes the value as though it were taken to infinite precision, and then rounds the final result.  
  
## Requirements  
  
|Function|C header|C++ header|  
|--------------|--------------|------------------|  
|`fma`,                `fmaf`,  `fmal`|<math.h>|<cmath\>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## See Also  
 [Alphabetical Function Reference](../VS_visualcpp/CRT-Alphabetical-Function-Reference.md)   
 [remainder, remainderf, remainderl](../VS_visualcpp/remainder--remainderf--remainderl.md)   
 [remquo, remquof, remquol](../VS_visualcpp/remquo--remquof--remquol.md)