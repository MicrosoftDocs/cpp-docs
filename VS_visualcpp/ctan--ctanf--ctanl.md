---
title: "ctan, ctanf, ctanl"
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
  - ctan
  - ctanf
  - ctanl
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
ms.assetid: d3cbd25c-1e93-4a6d-8154-da42921f7223
caps.latest.revision: 11
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
# ctan, ctanf, ctanl
Retrieves the tangent of a complex number.  
  
## Syntax  
  
```  
_Dcomplex ctan(   
   _Dcomplex z   
);  
_Fcomplex ctan(   
   _Fcomplex z   
);  // C++ only  
_Lcomplex ctan(   
   _Lcomplex z   
);  // C++ only  
_Fcomplex ctanf(   
   _Fcomplex z   
);  
_Lcomplex ctanl(   
   _Lcomplex z   
);  
```  
  
#### Parameters  
 `z`  
 A complex number that represents the angle, in radians.  
  
## Return Value  
 The tangent of `z`.  
  
|Input|SEH Exception|`_matherr` Exception|  
|-----------|-------------------|--------------------------|  
|± ∞, QNAN, IND|none|_DOMAIN|  
|± ∞ (`tan`, `tanf`)|INVALID|_DOMAIN|  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `ctan` that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, `ctan` always takes and returns a `_Dcomplex` value.  
  
## Requirements  
  
|Routine|C header|C++ header|  
|-------------|--------------|------------------|  
|`ctan`,               `ctanf`, `ctanl`|<complex.h>|<ccomplex\>|  
  
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
 [csin, csinf, csinl](../VS_visualcpp/csin--csinf--csinl.md)   
 [casin, casinf, casinl](../VS_visualcpp/casin--casinf--casinl.md)   
 [ccos, ccosf, ccosl](../VS_visualcpp/ccos--ccosf--ccosl.md)   
 [csqrt, csqrtf, csqrtl](../VS_visualcpp/csqrt--csqrtf--csqrtl.md)