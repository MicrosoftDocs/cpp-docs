---
title: "nearbyint, nearbyintf, nearbyintl1"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "nearbyint"
  - "nearbyintf"
  - "nerabyintl"
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
  - "nearbyint"
  - "nearbyintf"
  - "nearbyintl"
  - "math/nearbyint"
  - "math/narbyintf"
  - "math/narbyintl"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "nearbyint function"
  - "nearbyintf function"
  - "nearbyintl function"
ms.assetid: dd39cb68-96b0-434b-820f-6ff2ea65584f
caps.latest.revision: 12
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
# nearbyint, nearbyintf, nearbyintl
Rounds the specified floating-point value to an integer, and returns that value in a floating-point format.  
  
## Syntax  
  
```  
double nearbyint(  
   double x  
);  
  
float nearbyint(  
   float x  
); //C++ only  
  
long double nearbyint(  
   long double x  
); //C++ only  
  
float nearbyintf(  
   float x  
);  
  
long double nearbyintl(  
   long double x  
);  
  
```  
  
#### Parameters  
 [in] `x`  
 The value to round.  
  
## Return Value  
 If successful, returns `x`, rounded to the nearest integer, using the current rounding format as defined by fegetround. Otherwise, the function may return one of the following values:  
  
|Issue|Return|  
|-----------|------------|  
|`x` = ±INFINITY|±INFINITY, unmodified|  
|`x` = ±0|±0, unmodified|  
|`x` = NaN|NaN|  
  
 Errors are not reported through [_matherr](../crt/_matherr.md); specifically, this function does not report any FE_INEXACT exceptions.  
  
## Remarks  
 The primary difference between this function and `rint` is that this function does not raise the inexact floating point exception.  
  
 Because the maximum floating-point values are exact integers, this function will never overflow by itself; rather, the output may overflow the return value, depending on which version of the function you use.  
  
## Requirements  
  
|Function|C header|C++ header|  
|--------------|--------------|------------------|  
|`nearbyint`,                `nearbyintf`,  `nearbyintl`|\<math.h>|\<cmath>|  
  
 For additional compatibility information, see [Compatibility](../crt/compatibility.md).  
  
## See Also  
 [Alphabetical Function Reference](../crt/crt-alphabetical-function-reference.md)