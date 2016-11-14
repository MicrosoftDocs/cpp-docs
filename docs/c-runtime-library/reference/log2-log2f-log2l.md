---
title: "log2, log2f, log2l | Microsoft Docs"
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
  - "log2"
  - "log2l"
  - "log2f"
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
dev_langs: 
  - "C"
  - "C++"
ms.assetid: 94d11b38-70b7-4d3a-94ac-523153c92b2e
caps.latest.revision: 14
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
# log2, log2f, log2l
Determines the binary (base-2) logarithm of the specified value.  
  
## Syntax  
  
```  
double log2(  
   double x  
);  
  
float log2(  
   float x  
); //C++ only  
  
long double log2(  
   long double x  
); //C++ only  
  
float log2f(  
   float x  
);  
  
long double log2l(  
   long double x  
);  
  
```  
  
#### Parameters  
 [in] `x`  
 The value to determine the base-2 logarithm of.  
  
## Return Value  
 On success, returns return log2 `x`.  
  
 Otherwise, may return one of the following values:  
  
|Issue|Return|  
|-----------|------------|  
|`x` < 0|NaN|  
|`x` = ±0|-INFINITY|  
|`x` = 1|+0|  
|+INFINITY|+INFINITY|  
|NaN|NaN|  
|domain error|NaN|  
|pole error|-HUGE_VAL, -HUGE_VALF, or -HUGE_VALL|  
  
 Errors are reported as specified in [_matherr](../../c-runtime-library/reference/matherr.md).  
  
## Remarks  
 If x is an integer, this function essentially returns the zero-based index of the most significant 1 bit of `x`.  
  
## Requirements  
  
|Function|C header|C++ header|  
|--------------|--------------|------------------|  
|`log2`,                `log2f`,  `log2l`|\<math.h>|\<cmath>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## See Also  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [exp2, exp2f, exp2l](../../c-runtime-library/reference/exp2-exp2f-exp2l.md)   
 [log, logf, log10, log10f](../../c-runtime-library/reference/log-logf-log10-log10f.md)