---
title: "ceil, ceilf, ceill | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "ceilf"
  - "ceil"
  - "ceill"
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
  - "ceil"
  - "ceilf"
  - "ceill"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "calculating value ceilings"
  - "ceill function"
  - "ceil function"
  - "ceilf function"
ms.assetid: f4e5acab-5c8f-4b10-9ae2-9561e6453718
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
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
# ceil, ceilf, ceill
Calculates the ceiling of a value.  
  
## Syntax  
  
```  
double ceil(   
   double x   
);  
float ceil(  
   float x  
);  // C++ only  
long double ceil(  
   long double x  
);  // C++ only  
float ceilf(  
   float x  
);  
long double ceill(  
   long double x  
);  
```  
  
#### Parameters  
 `x`  
 Floating-point value.  
  
## Return Value  
 The `ceil` functions return a floating-point value that represents the smallest integer that is greater than or equal to `x`. There is no error return.  
  
|Input|SEH Exception|Matherr Exception|  
|-----------|-------------------|-----------------------|  
|± `QNAN`,`IND`|none|`_DOMAIN`|  
  
 `ceil` has an implementation that uses Streaming SIMD Extensions 2 (SSE2). For information and restrictions about using the SSE2 implementation, see [_set_SSE2_enable](../../c-runtime-library/reference/set-sse2-enable.md).  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `ceil`. In a C program, `ceil` always takes and returns a double.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`ceil`, `ceilf`, `ceill`|\<math.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
 See the example for [floor](../../c-runtime-library/reference/floor-floorf-floorl.md).  
  
## .NET Framework Equivalent  
 [System::Math::Ceiling](https://msdn.microsoft.com/en-us/library/system.math.ceiling.aspx)  
  
## See Also  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [floor, floorf, floorl](../../c-runtime-library/reference/floor-floorf-floorl.md)   
 [fmod, fmodf](../../c-runtime-library/reference/fmod-fmodf.md)   
 [round, roundf, roundl](../../c-runtime-library/reference/round-roundf-roundl.md)