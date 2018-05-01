---
title: "nearbyint, nearbyintf, nearbyintl1 | Microsoft Docs"
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
  - "nearbyint"
  - "nearbyintf"
  - "nerabyintl"
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
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# nearbyint, nearbyintf, nearbyintl
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [nearbyint, nearbyintf, nearbyintl1](https://docs.microsoft.com/cpp/c-runtime-library/reference/nearbyint-nearbyintf-nearbyintl1).  
  
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
  
 Errors are not reported through [_matherr](../../c-runtime-library/reference/matherr.md); specifically, this function does not report any FE_INEXACT exceptions.  
  
## Remarks  
 The primary difference between this function and `rint` is that this function does not raise the inexact floating point exception.  
  
 Because the maximum floating-point values are exact integers, this function will never overflow by itself; rather, the output may overflow the return value, depending on which version of the function you use.  
  
## Requirements  
  
|Function|C header|C++ header|  
|--------------|--------------|------------------|  
|`nearbyint`,                `nearbyintf`,  `nearbyintl`|\<math.h>|\<cmath>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## See Also  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)





