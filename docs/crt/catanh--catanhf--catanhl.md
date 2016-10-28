---
title: "catanh, catanhf, catanhl"
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
  - "catanh"
  - "catanhf"
  - "catanhl"
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
  - "catanh"
  - "catanhf"
  - "catanhl"
  - "complex/catanh"
  - "complex/catanhf"
  - "complex/catanhl"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "catanh function"
  - "catanhf function"
  - "catanhl function"
ms.assetid: 1b6021cb-647a-41b4-9d7f-919cc8b57b86
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
# catanh, catanhf, catanhl
Retrieves the inverse hyperbolic tangent of a complex number, with branch cuts outside the interval [−1; +1] along the real axis.  
  
## Syntax  
  
```  
_Dcomplex catanh(   
   _Dcomplex z   
);  
_Fcomplex catanh(   
   _Fcomplex z   
);  // C++ only  
_Lcomplex catanh(   
   _Lcomplex z   
);  //  C++ only  
_Fcomplex catanhf(   
   _Fcomplex z   
);  
_Lcomplex catanhl(   
   _Lcomplex z   
);  
```  
  
#### Parameters  
 `z`  
 A complex number that represents an angle, in radians.  
  
## Return Value  
 The inverse hyperbolic tangent of `z`, in radians. The result is unbounded along the real axis, and  in the interval [−iπ/2; +iπ/2] along the imaginary axis. A domain error will occur if `z` is outside the interval [-1, +1]. A pole error will occur if `z` is -1 or +1.  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `catanh` that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, `catanh` always takes and returns a `_Dcomplex` value.  
  
## Requirements  
  
|Routine|C header|C++ header|  
|-------------|--------------|------------------|  
|`catanh`,               `catanhf`, `catanhl`|\<complex.h>|\<ccomplex>|  
  
 For more compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## See Also  
 [Alphabetical Function Reference](../crt/crt-alphabetical-function-reference.md)   
 [ctanh, ctanhf, ctanhl](../crt/ctanh--ctanhf--ctanhl.md)   
 [catan, catanf, catanl](../crt/catan--catanf--catanl.md)   
 [csinh, csinhf, csinhl](../crt/csinh--csinhf--csinhl.md)   
 [casinh, casinhf, casinhl](../crt/casinh--casinhf--casinhl.md)   
 [ccosh, ccoshf, ccoshl](../crt/ccosh--ccoshf--ccoshl.md)   
 [cacosh, cacoshf, cacoshl](../crt/cacosh--cacoshf--cacoshl.md)   
 [cacos, cacosf, cacosl](../crt/cacos--cacosf--cacosl.md)   
 [ctan, ctanf, ctanl](../crt/ctan--ctanf--ctanl.md)   
 [csin, csinf, csinl](../crt/csin--csinf--csinl.md)   
 [casin, casinf, casinl](../crt/casin--casinf--casinl.md)   
 [ccos, ccosf, ccosl](../crt/ccos--ccosf--ccosl.md)   
 [csqrt, csqrtf, csqrtl](../crt/csqrt--csqrtf--csqrtl.md)