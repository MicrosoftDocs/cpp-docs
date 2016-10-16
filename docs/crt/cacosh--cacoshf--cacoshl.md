---
title: "cacosh, cacoshf, cacoshl"
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
  - "cacosh"
  - "cacoshf"
  - "cacoshl"
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
  - "cacosh"
  - "cacoshf"
  - "cacoshl"
  - "complex/cacosh"
  - "complex/cacoshf"
  - "complex/cacoshl"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "cacosh function"
  - "cacoshf function"
  - "cacoshl function"
ms.assetid: 83fd05eb-3587-4741-9be6-589a830a1703
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
# cacosh, cacoshf, cacoshl
Retrieves the inverse hyperbolic cosine of a complex number with a branch cut at values less than 1 along the real axis. .  
  
## Syntax  
  
```  
_Dcomplex cacosh(   
   _Dcomplex z   
);  
_Fcomplex cacosh(   
   _Fcomplex z   
);  // C++ only  
_Lcomplex cacosh(   
   _Lcomplex z   
);  // C++ only  
_Fcomplex cacoshf(   
   _Fcomplex z   
);  
_Lcomplex cacoshl(   
   _Lcomplex z   
);  
```  
  
#### Parameters  
 `z`  
 A complex number that represents an angle, in radians.  
  
## Return Value  
 The inverse hyperbolic cosine of `z`, in radians. The result is unbounded and non-negative along the real axis, and  in the interval [−iπ, +iπ] along the imaginary axis.  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `cacosh` that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, `cacosh` always takes and returns a `_Dcomplex` value.  
  
## Requirements  
  
|Routine|C header|C++ header|  
|-------------|--------------|------------------|  
|`cacosh`,               `cacoshf`, `cacoshl`|\<complex.h>|\<ccomplex>|  
  
 For more compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## See Also  
 [Alphabetical Function Reference](../crt/crt-alphabetical-function-reference.md)   
 [catanh, catanhf, catanhl](../crt/catanh--catanhf--catanhl.md)   
 [ctanh, ctanhf, ctanhl](../crt/ctanh--ctanhf--ctanhl.md)   
 [catan, catanf, catanl](../crt/catan--catanf--catanl.md)   
 [csinh, csinhf, csinhl](../crt/csinh--csinhf--csinhl.md)   
 [casinh, casinhf, casinhl](../crt/casinh--casinhf--casinhl.md)   
 [ccosh, ccoshf, ccoshl](../crt/ccosh--ccoshf--ccoshl.md)   
 [cacos, cacosf, cacosl](../crt/cacos--cacosf--cacosl.md)   
 [ctan, ctanf, ctanl](../crt/ctan--ctanf--ctanl.md)   
 [csin, csinf, csinl](../crt/csin--csinf--csinl.md)   
 [casin, casinf, casinl](../crt/casin--casinf--casinl.md)   
 [ccos, ccosf, ccosl](../crt/ccos--ccosf--ccosl.md)   
 [csqrt, csqrtf, csqrtl](../crt/csqrt--csqrtf--csqrtl.md)