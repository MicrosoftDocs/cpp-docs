---
title: "ccos, ccosf, ccosl"
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
  - "ccos"
  - "ccosf"
  - "ccosl"
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
  - "ccos"
  - "ccosf"
  - "ccosl"
  - "complex/ccos"
  - "complex/ccosf"
  - "complex/ccosl"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "ccos function"
  - "ccosf function"
  - "ccosl function"
ms.assetid: 4ab936ac-ff85-49ac-9418-2b69cf5d4696
caps.latest.revision: 8
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
# ccos, ccosf, ccosl
Retrieves the cosine of a complex number.  
  
## Syntax  
  
```  
_Dcomplex ccos(   
   _Dcomplex z   
);  
_Fcomplex ccos(   
   _Fcomplex z   
);  // C++ only  
_Lcomplex ccos(   
   _Lcomplex z   
);  // C++ only  
_Fcomplex ccosf(   
   _Fcomplex z   
);  
_Lcomplex ccosl(   
   _Lcomplex z   
);  
```  
  
#### Parameters  
 `z`  
 A complex number that represents the angle, in radians.  
  
## Return Value  
 The cosine of `z`, in radians.  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `ccos` that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, `ccos` always takes and returns a `_Dcomplex` value.  
  
## Requirements  
  
|Routine|C header|C++ header|  
|-------------|--------------|------------------|  
|`ccos`,               `ccosf`, `ccosl`|\<complex.h>|\<ccomplex>|  
  
 For more compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## See Also  
 [Alphabetical Function Reference](../crt/crt-alphabetical-function-reference.md)   
 [catanh, catanhf, catanhl](../crt/catanh--catanhf--catanhl.md)   
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
 [csqrt, csqrtf, csqrtl](../crt/csqrt--csqrtf--csqrtl.md)