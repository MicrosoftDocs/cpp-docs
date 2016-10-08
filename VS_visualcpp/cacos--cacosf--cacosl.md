---
title: "cacos, cacosf, cacosl"
ms.custom: na
ms.date: 10/05/2016
ms.devlang: 
  - C
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - cpp
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - cacos
  - cacosf
  - cacosl
apilocation: 
  - msvcrt.dll
  - msvcr80.dll
  - msvcr90.dll
  - msvcr100.dll
  - msvcr100_clr0400.dll
  - msvcr110.dll
  - msvcr110_clr0400.dll
  - msvcr120.dll
  - msvcr120_clr0400.dll
  - ucrtbase.dll
  - api-ms-win-crt-math-l1-1-0.dll
apitype: DLLExport
ms.assetid: 78118c00-0a07-49c1-8a13-4bf19ce3aea8
caps.latest.revision: 13
manager: ghogen
translation.priority.mt: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# cacos, cacosf, cacosl
Retrieves the arccosine of a complex number, with branch cuts outside the interval [−1, +1] along the real axis.  
  
## Syntax  
  
```  
_Dcomplex cacos(   
  _Dcomplex z   
);  
_Fcomplex cacos(   
   _Fcomplex z   
);  // C++ only  
_Lcomplex cacos(   
   _Lcomplex z   
);  // C++ only  
_Fcomplex cacosf(   
   _Fcomplex z   
);  
_Lcomplex cacosl(   
   _Lcomplex z   
);  
```  
  
#### Parameters  
 `z`  
 A complex number that represents an angle, in radians.  
  
## Return Value  
 The arccosine of `z`, in radians. The result is unbounded along the imaginary axis, and  in the  in the interval [0, π] along the real axis. A domain error will occur if `z` is outside the interval [-1, +1].  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `cacos` that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, `cacos` always takes and returns a `_Dcomplex` value.  
  
## Requirements  
  
|Routine|C header|C++ header|  
|-------------|--------------|------------------|  
|`cacos`,               `cacosf`, `cacosl`|<complex.h>|<ccomplex\>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## See Also  
 [Alphabetical Function Reference](../VS_visualcpp/CRT-Alphabetical-Function-Reference.md)   
 [catanh, catanhf, catanhl](../VS_visualcpp/catanh--catanhf--catanhl.md)   
 [ctanh, ctanhf, ctanhl](../VS_visualcpp/ctanh--ctanhf--ctanhl.md)   
 [catan, catanf, catanl](../VS_visualcpp/catan--catanf--catanl.md)   
 [csinh, csinhf, csinhl](../VS_visualcpp/csinh--csinhf--csinhl.md)   
 [casinh, casinhf, casinhl](../VS_visualcpp/casinh--casinhf--casinhl.md)   
 [ccosh, ccoshf, ccoshl](../VS_visualcpp/ccosh--ccoshf--ccoshl.md)   
 [cacosh, cacoshf, cacoshl](../VS_visualcpp/cacosh--cacoshf--cacoshl.md)   
 [ctan, ctanf, ctanl](../VS_visualcpp/ctan--ctanf--ctanl.md)   
 [csin, csinf, csinl](../VS_visualcpp/csin--csinf--csinl.md)   
 [casin, casinf, casinl](../VS_visualcpp/casin--casinf--casinl.md)   
 [ccos, ccosf, ccosl](../VS_visualcpp/ccos--ccosf--ccosl.md)   
 [csqrt, csqrtf, csqrtl](../VS_visualcpp/csqrt--csqrtf--csqrtl.md)