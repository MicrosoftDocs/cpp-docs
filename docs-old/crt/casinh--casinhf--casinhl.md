---
title: "casinh, casinhf, casinhl"
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
  - "casinh"
  - "casinhl"
  - "casinhf"
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
  - "casinh"
  - "casinhf"
  - "casinhl"
  - "complex/casinh"
  - "complex/casinhf"
  - "complex/casinhl"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "casinh function"
  - "casinhf function"
  - "casinhl function"
ms.assetid: bd18340b-21dd-4c86-a14e-e8e15dd97e3b
caps.latest.revision: 10
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
# casinh, casinhf, casinhl
Retrieves the inverse hyperbolic sine of a complex number, with branch cuts outside the interval [−i, +i] along the imaginary axis.  
  
## Syntax  
  
```  
_Dcomplex casinh(   
   _Dcomplex z   
);  
_Fcomplex casinh(   
   _Fcomplex z   
);  // C++ only  
_Lcomplex casinh(   
   _Lcomplex z   
);  // C++ only  
_Fcomplex casinhf(   
   _Fcomplex z   
);  
_Lcomplex casinhl(   
   _Lcomplex z   
);  
```  
  
#### Parameters  
 `z`  
 A complex number that represents an angle, in radians.  
  
## Return Value  
 The inverse hyperbolic sine of `z`, in radians. The result is unbound along the real axis, and in the interval [−iπ/2, +iπ/2] along the imaginary axis.  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `casinh` that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, `casinh` always takes and returns a `_Dcomplex` value.  
  
## Requirements  
  
|Routine|C header|C++ header|  
|-------------|--------------|------------------|  
|`casinh`,               `casinhf`, `casinhl`|\<complex.h>|\<ccomplex>|  
  
 For more compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## See Also  
 [Alphabetical Function Reference](../crt/crt-alphabetical-function-reference.md)   
 [catanh, catanhf, catanhl](../crt/catanh--catanhf--catanhl.md)   
 [ctanh, ctanhf, ctanhl](../crt/ctanh--ctanhf--ctanhl.md)   
 [catan, catanf, catanl](../crt/catan--catanf--catanl.md)   
 [csinh, csinhf, csinhl](../crt/csinh--csinhf--csinhl.md)   
 [ccosh, ccoshf, ccoshl](../crt/ccosh--ccoshf--ccoshl.md)   
 [cacosh, cacoshf, cacoshl](../crt/cacosh--cacoshf--cacoshl.md)   
 [cacos, cacosf, cacosl](../crt/cacos--cacosf--cacosl.md)   
 [ctan, ctanf, ctanl](../crt/ctan--ctanf--ctanl.md)   
 [csin, csinf, csinl](../crt/csin--csinf--csinl.md)   
 [casin, casinf, casinl](../crt/casin--casinf--casinl.md)   
 [ccos, ccosf, ccosl](../crt/ccos--ccosf--ccosl.md)   
 [csqrt, csqrtf, csqrtl](../crt/csqrt--csqrtf--csqrtl.md)