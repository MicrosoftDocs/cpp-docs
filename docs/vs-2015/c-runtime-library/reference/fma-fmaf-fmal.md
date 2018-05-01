---
title: "fma, fmaf, fmal | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "fma"
  - "fmaf"
  - "fmal"
api_location: 
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
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "fma"
  - "fmaf"
  - "fmal"
  - "math/fma"
  - "math/fmaf"
  - "math/fmal"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "fma function"
  - "fmaf function"
  - "fmal function"
ms.assetid: 584a6037-da1e-4e86-9f0c-97aae86de0c0
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# fma, fmaf, fmal
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [fma, fmaf, fmal](https://docs.microsoft.com/cpp/c-runtime-library/reference/fma-fmaf-fmal).  
  
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
  
 Errors are reported as specified in [_matherr](../../c-runtime-library/reference/matherr.md).  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `fma` that take and return float and long double types. In a C program, `fma` always takes and returns a double.  
  
 This function computes the value as though it were taken to infinite precision, and then rounds the final result.  
  
## Requirements  
  
|Function|C header|C++ header|  
|--------------|--------------|------------------|  
|`fma`,                `fmaf`,  `fmal`|\<math.h>|\<cmath>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## See Also  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [remainder, remainderf, remainderl](../../c-runtime-library/reference/remainder-remainderf-remainderl.md)   
 [remquo, remquof, remquol](../../c-runtime-library/reference/remquo-remquof-remquol.md)





