---
title: "_chgsign, _chgsignf, _chgsignl | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "_chgsignl"
  - "_chgsign"
  - "_chgsignf"
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
  - "_chgsignf"
  - "chgsign"
  - "_chgsignl"
  - "_chgsign"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_chgsignl function"
  - "_chgsignf function"
  - "chgsign function"
  - "_chgsign function"
ms.assetid: a6646f8e-213d-4564-8617-f43bc66f989f
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _chgsign, _chgsignf, _chgsignl
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_chgsign, _chgsignf, _chgsignl](https://docs.microsoft.com/cpp/c-runtime-library/reference/chgsign-chgsignf-chgsignl).  
  
Reverses the sign of a floating-point argument.  
  
## Syntax  
  
```  
double _chgsign(   
   double x   
);  
float _chgsignf(  
   float x   
);  
long double _chgsignl(   
   long double x   
);  
```  
  
#### Parameters  
 `x`  
 The floating-point value to be changed.  
  
## Return Value  
 The `_chgsign` functions return a value that's equal to the floating-point argument `x`, but with its sign reversed. There is no error return.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_chgsign`|\<float.h>|  
|`_chgsignf`, `_chgsignl`|\<math.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [fabs, fabsf, fabsl](../../c-runtime-library/reference/fabs-fabsf-fabsl.md)   
 [copysign, copysignf, copysignl, _copysign, _copysignf, _copysignl](../../c-runtime-library/reference/copysign-copysignf-copysignl-copysign-copysignf-copysignl.md)





