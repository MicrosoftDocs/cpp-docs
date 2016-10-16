---
title: "Long Double"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "c.types"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "8-byte long double"
  - "16-bit Windows"
  - "80-bit precision"
  - "32-bit Windows"
  - "long double"
  - "10 byte long double"
  - "8 byte long double"
  - "80 bit precision"
ms.assetid: bb581e20-b5c2-4079-8ee8-ac6739a37852
caps.latest.revision: 8
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
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
# Long Double
Previous 16-bit versions of Microsoft C/C++ and Microsoft Visual C++ supported the `long double`, 80-bit precision data type. In Win32 programming, however, the `long double` data type maps to the `double`, 64-bit precision data type. The Microsoft run-time library provides `long double` versions of the math functions only for backward compatibility. The `long double` function prototypes are identical to the prototypes for their `double` counterparts, except that the `long``double` data type replaces the `double` data type. The `long double` versions of these functions should not be used in new code.  
  
### Double Functions and Their Long Double Counterparts  
  
|Function|Long double<br /><br /> counterpart|Function|Long double<br /><br /> counterpart|  
|--------------|---------------------------------|--------------|---------------------------------|  
|[acos](../crt/acos--acosf--acosl.md)|`acosl`|[frexp](../crt/frexp.md)|`frexpl`|  
|[asin](../crt/asin--asinf--asinl.md)|`asinl`|[_hypot](../crt/hypot--hypotf--hypotl--_hypot--_hypotf--_hypotl.md)|`_hypotl`|  
|[atan](../crt/atan--atanf--atanl--atan2--atan2f--atan2l.md)|`atanl`|[ldexp](../crt/ldexp.md)|`ldexpl`|  
|[atan2](../crt/atan--atanf--atanl--atan2--atan2f--atan2l.md)|`atan2l`|[log](../crt/log--logf--log10--log10f.md)|`logl`|  
|[atof](../crt/atof--_atof_l--_wtof--_wtof_l.md)|`_atold`|[log10](../crt/log--logf--log10--log10f.md)|`log10l`|  
|[Bessel functions j0, j1, jn](../notintoc/bessel-functions--_j0--_j1--_jn.md)|`j0l, j1l, jnl`|[_matherr](../crt/_matherr.md)|`_matherrl`|  
|[Bessel functions y0, y1, yn](../Topic/Bessel%20Functions:%20_y0,%20_y1,%20_yn.md)|`y0l, y1l, ynl`|[modf](../crt/modf--modff--modfl.md)|`modfl`|  
|[_cabs](../crt/_cabs.md)|`_cabsl`|[pow](../crt/pow--powf--powl.md)|`powl`|  
|[ceil](../crt/ceil--ceilf--ceill.md)|`ceill`|[sin](../crt/sin--sinf--sinl--sinh--sinhf--sinhl.md)|`sinl`|  
|[cos](../crt/cos--cosf--cosl--cosh--coshf--coshl.md)|`cosl`|[sinh](../crt/sin--sinf--sinl--sinh--sinhf--sinhl.md)|`sinhl`|  
|[cosh](../crt/cos--cosf--cosl--cosh--coshf--coshl.md)|`coshl`|[sqrt](../crt/sqrt--sqrtf--sqrtl.md)|`sqrtl`|  
|[exp](../crt/exp--expf.md)|`expl`|[strtod](../crt/strtod--_strtod_l--wcstod--_wcstod_l.md)|`_strtold`|  
|[fabs](../crt/fabs--fabsf--fabsl.md)|`fabsl`|[tan](../crt/tan--tanf--tanl--tanh--tanhf--tanhl.md)|`tanl`|  
|[floor](../crt/floor--floorf--floorl.md)|`floorl`|[tanh](../crt/tan--tanf--tanl--tanh--tanhf--tanhl.md)|`tanhl`|  
|[fmod](../crt/fmod--fmodf.md)|`fmodl`|||  
  
## See Also  
 [Run-Time Routines by Category](../crt/run-time-routines-by-category.md)