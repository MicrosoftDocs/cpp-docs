---
title: "csinh, csinhf, csinhl"
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
  - "csinh"
  - "csinhf"
  - "csinhl"
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
  - "csinh"
  - "csinhf"
  - "csinhl"
  - "complex/csinh"
  - "complex/csinhf"
  - "complex/csinhl"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "csinh function"
  - "csinhf function"
  - "csinhl function"
ms.assetid: cc616e55-d14d-4cd3-91f0-fbee03ce5edf
caps.latest.revision: 11
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
# csinh, csinhf, csinhl
Retrieves the hyperbolic sine of a complex number.  
  
## Syntax  
  
```  
_Dcomplex csinh(   
   _Dcomplex z   
);  
_Fcomplex csinh(   
   _Fcomplex z   
);  // C++ only  
_Lcomplex csinh(   
   _Lcomplex z   
);  // C++ only  
_Fcomplex csinhf(   
   _Fcomplex z   
);  
_Lcomplex csinhl(   
   _Lcomplex z   
);  
```  
  
#### Parameters  
 `z`  
 A complex number that represents an angle, in radians.  
  
## Return Value  
 The hyperbolic sine of `z`, in radians.  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `csinh` that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, `csinh` always takes and returns a `_Dcomplex` value.  
  
## Requirements  
  
|Routine|C header|C++ header|  
|-------------|--------------|------------------|  
|`csinh`,               `csinhf`, `csinhl`|\<complex.h>|\<ccomplex>|  
  
 For more compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## See Also  
 [Alphabetical Function Reference](../crt/crt-alphabetical-function-reference.md)   
 [catanh, catanhf, catanhl](../crt/catanh--catanhf--catanhl.md)   
 [ctanh, ctanhf, ctanhl](../crt/ctanh--ctanhf--ctanhl.md)   
 [catan, catanf, catanl](../crt/catan--catanf--catanl.md)   
 [casinh, casinhf, casinhl](../crt/casinh--casinhf--casinhl.md)   
 [ccosh, ccoshf, ccoshl](../crt/ccosh--ccoshf--ccoshl.md)   
 [cacosh, cacoshf, cacoshl](../crt/cacosh--cacoshf--cacoshl.md)   
 [cacos, cacosf, cacosl](../crt/cacos--cacosf--cacosl.md)   
 [ctan, ctanf, ctanl](../crt/ctan--ctanf--ctanl.md)   
 [csin, csinf, csinl](../crt/csin--csinf--csinl.md)   
 [casin, casinf, casinl](../crt/casin--casinf--casinl.md)   
 [ccos, ccosf, ccosl](../crt/ccos--ccosf--ccosl.md)   
 [csqrt, csqrtf, csqrtl](../crt/csqrt--csqrtf--csqrtl.md)