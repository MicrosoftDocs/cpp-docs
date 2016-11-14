---
title: "fegetround, fesetround2 | Microsoft Docs"
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
  - "fegetround"
  - "fesetround"
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
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "fegetround"
  - "fesetround"
  - "fenv/fegetround"
  - "fenv/fesetround"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "fegetround function"
  - "fesetround function"
ms.assetid: 596af00b-be2f-4f57-b2f5-460485f9ff0b
caps.latest.revision: 6
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
# fegetround, fesetround
Gets or sets the current floating-point rounding mode.  
  
## Syntax  
  
```  
int fegetround(void);  
  
int fesetround(  
   int round_mode  
);   
```  
  
#### Parameters  
 `round_mode`  
 The rounding mode to set, as one of the floating-point rounding macros. If the value is not equal to one of the floating-point rounding macros, the rounding mode is not changed.  
  
## Return Value  
 On success, `fegetround` returns the rounding mode as one of the floating point rounding macro values. It returns a negative value if the current rounding mode can't be determined.  
  
 On success, `fesetround` returns 0. Otherwise, a non-zero value is returned.  
  
## Remarks  
 Floating-point operations can use one of several rounding modes. These control which direction the results of floating-point operations are rounded toward when the results are stored. These are the names and behaviors of the floating-point rounding macros defined in \<fenv.h>:  
  
|Macro|Description|  
|-----------|-----------------|  
|FE_DOWNWARD|Round towards negative infinity.|  
|FE_TONEAREST|Round towards the nearest.|  
|FE_TOWARDZERO|Round towards zero.|  
|FE_UPWARD|Round towards positive infinity.|  
  
 The default behavior of FE_TONEAREST is to round results midway between representable values toward the nearest value with an even (0) least significant bit.  
  
 The current rounding mode affects these operations:  
  
-   String conversions.  
  
-   The results of floating-point arithmetic operators outside of constant expressions.  
  
-   The library rounding functions, such as `rint` and `nearbyint`.  
  
-   Return values from standard library mathematical functions.  
  
 The current rounding mode does not affect these operations:  
  
-   The `trunc`, `ceil`, `floor`, and `lround` library functions.  
  
-   Floating-point to integer implicit casts and conversions, which always round towards zero.  
  
-   The results of floating-point arithmetic operators in constant expressions, which always round to the nearest value.  
  
 To use these functions, you must turn off floating-point optimizations that could prevent access by using the `#pragma fenv_access(on)` directive prior to the call. For more information, see [fenv_access](../../preprocessor/fenv-access.md).  
  
## Requirements  
  
|Function|C header|C++ header|  
|--------------|--------------|------------------|  
|`fegetround`,                `fesetround`|\<fenv.h>|\<cfenv>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## See Also  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [nearbyint, nearbyintf, nearbyintl](../../c-runtime-library/reference/nearbyint-nearbyintf-nearbyintl1.md)   
 [rint, rintf, rintl](../../c-runtime-library/reference/rint-rintf-rintl.md)   
 [lrint, lrintf, lrintl, llrint, llrintf, llrintl](../../c-runtime-library/reference/lrint-lrintf-lrintl-llrint-llrintf-llrintl.md)