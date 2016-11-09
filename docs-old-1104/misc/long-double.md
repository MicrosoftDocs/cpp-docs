---
title: "Long Double | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
author: "corob-msft"
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
|[acos](../c-runtime-library/reference/acos-acosf-acosl.md)|`acosl`|[frexp](../c-runtime-library/reference/frexp.md)|`frexpl`|  
|[asin](../c-runtime-library/reference/asin-asinf-asinl.md)|`asinl`|[_hypot](../c-runtime-library/reference/hypot-hypotf-hypotl-hypot-hypotf-hypotl.md)|`_hypotl`|  
|[atan](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)|`atanl`|[ldexp](../c-runtime-library/reference/ldexp.md)|`ldexpl`|  
|[atan2](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)|`atan2l`|[log](../c-runtime-library/reference/log-logf-log10-log10f.md)|`logl`|  
|[atof](../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)|`_atold`|[log10](../c-runtime-library/reference/log-logf-log10-log10f.md)|`log10l`|  
|[Bessel functions j0, j1, jn](../misc/bessel-functions-j0-j1-jn.md)|`j0l, j1l, jnl`|[_matherr](../c-runtime-library/reference/matherr.md)|`_matherrl`|  
|[Bessel functions y0, y1, yn](../Topic/Bessel%20Functions:%20_y0,%20_y1,%20_yn.md)|`y0l, y1l, ynl`|[modf](../c-runtime-library/reference/modf-modff-modfl.md)|`modfl`|  
|[_cabs](../c-runtime-library/reference/cabs.md)|`_cabsl`|[pow](../c-runtime-library/reference/pow-powf-powl.md)|`powl`|  
|[ceil](../c-runtime-library/reference/ceil-ceilf-ceill.md)|`ceill`|[sin](../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)|`sinl`|  
|[cos](../c-runtime-library/reference/cos-cosf-cosl-cosh-coshf-coshl.md)|`cosl`|[sinh](../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)|`sinhl`|  
|[cosh](../c-runtime-library/reference/cos-cosf-cosl-cosh-coshf-coshl.md)|`coshl`|[sqrt](../c-runtime-library/reference/sqrt-sqrtf-sqrtl.md)|`sqrtl`|  
|[exp](../c-runtime-library/reference/exp-expf.md)|`expl`|[strtod](../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md)|`_strtold`|  
|[fabs](../c-runtime-library/reference/fabs-fabsf-fabsl.md)|`fabsl`|[tan](../c-runtime-library/reference/tan-tanf-tanl-tanh-tanhf-tanhl.md)|`tanl`|  
|[floor](../c-runtime-library/reference/floor-floorf-floorl.md)|`floorl`|[tanh](../c-runtime-library/reference/tan-tanf-tanl-tanh-tanhf-tanhl.md)|`tanhl`|  
|[fmod](../c-runtime-library/reference/fmod-fmodf.md)|`fmodl`|||  
  
## See Also  
 [Run-Time Routines by Category](../c-runtime-library/run-time-routines-by-category.md)