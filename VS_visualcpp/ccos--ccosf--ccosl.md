---
title: "ccos, ccosf, ccosl"
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
  - ccos
  - ccosf
  - ccosl
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
ms.assetid: 4ab936ac-ff85-49ac-9418-2b69cf5d4696
caps.latest.revision: 8
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
|`ccos`,               `ccosf`, `ccosl`|<complex.h>|<ccomplex\>|  
  
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
 [cacos, cacosf, cacosl](../VS_visualcpp/cacos--cacosf--cacosl.md)   
 [ctan, ctanf, ctanl](../VS_visualcpp/ctan--ctanf--ctanl.md)   
 [csin, csinf, csinl](../VS_visualcpp/csin--csinf--csinl.md)   
 [casin, casinf, casinl](../VS_visualcpp/casin--casinf--casinl.md)   
 [csqrt, csqrtf, csqrtl](../VS_visualcpp/csqrt--csqrtf--csqrtl.md)