---
title: "exp2, exp2f, exp2l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "exp2"
  - "exp2f"
  - "exp2l"
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
  - "exp2"
  - "math/exp2"
  - "exp2f"
  - "math/exp2f"
  - "exp2l"
  - "math/exp2l"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "exp2 function"
  - "exp2f function"
  - "exp2l function"
ms.assetid: 526e3e10-201a-4610-a886-533f44ece344
caps.latest.revision: 13
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
  
 Errors are reported as specified in [_matherr](../../c-runtime-library/reference/matherr.md).  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `exp2` that take and return float and long double types. In a C program, `exp2` always takes and returns a double.  
  
## Requirements  
  
|Routine|C header|C++ header|  
|-------------|--------------|------------------|  
|`exp`,                `expf`, `expl`|\<math.h>|\<cmath>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## See Also  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [exp, expf](../../c-runtime-library/reference/exp-expf.md)   
 [log2, log2f, log2l](../../c-runtime-library/reference/log2-log2f-log2l.md)