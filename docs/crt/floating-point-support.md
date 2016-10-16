---
title: "Floating-Point Support"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "c.math"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "floating-point numbers, math routines"
  - "math routines"
  - "floating-point numbers"
ms.assetid: e4fcaf69-5c8e-4854-a9bb-1f412042131e
caps.latest.revision: 17
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Floating-Point Support
The Microsoft C Runtime library (CRT) provides many floating point math library functions, including all of those required by ISO C99. These functions are implemented to balance performance with correctness. Because producing the correctly rounded result may be prohibitively expensive, these functions are designed to efficiently produce a close approximation to the correctly rounded result. In most cases, the result produced is within +/-1 ulp of the correctly rounded result, though there may be cases where there is greater inaccuracy.  
  
 Many of the floating point math library functions have different implementations for different CPU architectures. For example, the 32-bit x86 CRT may have a different implementation than the 64-bit x64 CRT. In addition, some of the functions may have multiple implementations for a given CPU architecture. The most efficient implementation is selected dynamically at run-time depending on the instruction sets supported by the CPU. For example, in the 32-bit x86 CRT, some functions have both an x87 implementation and an SSE2 implementation. When running on a CPU that supports SSE2, the faster SSE2 implementation is used. When running on a CPU that does not support SSE2, the slower x87 implementation is used. Because different implementations of the math library functions may use different CPU instructions and different algorithms to produce their results, the functions may produce different results across CPUs. In most cases, the results are within +/-1 ulp of the correctly rounded result, but the actual results may vary across CPUs.  
  
 Previous 16-bit versions of Microsoft C/C++ and Microsoft Visual C++ supported the `long double` type as an 80-bit precision floating-point data type. In later versions of Visual C++, the `long double` data type is a 64-bit precision floating-point data type identical to the `double` type. The compiler treats `long double` and `double` as distinct types, but the `long double` functions are identical to their `double` counterparts. The CRT provides `long double` versions of the math functions for ISO C99 source code compatibility, but note that the binary representation may differ from other compilers.  
  
 The CRT supports these floating point functions:  
  
 [abs, _abs64](../crt/abs--labs--llabs--_abs64.md)  
  
 [acos, acosf, acosl](../crt/acos--acosf--acosl.md)  
  
 [acosh, acoshf, acoshl](../crt/acosh--acoshf--acoshl.md)  
  
 [asin, asinf, asinl](../crt/asin--asinf--asinl.md)  
  
 [asinh, asinhf, asinhl](../crt/asinh--asinhf--asinhl.md)  
  
 [atan, atanf, atanl, atan2, atan2f, atan2l](../crt/atan--atanf--atanl--atan2--atan2f--atan2l.md)  
  
 [atanh, atanhf, atanhl](../crt/atanh--atanhf--atanhl.md)  
  
 [_atodbl, _atodbl_l](../crt/_atodbl--_atodbl_l--_atoldbl--_atoldbl_l--_atoflt--_atoflt_l.md)  
  
 [atof, _atof_l](../crt/atof--_atof_l--_wtof--_wtof_l.md)  
  
 [_atoflt, _atoflt_l, _atoldbl, _atoldbl_l](../crt/_atodbl--_atodbl_l--_atoldbl--_atoldbl_l--_atoflt--_atoflt_l.md)  
  
 [cbrt, cbrtf, cbrtl](../crt/cbrt--cbrtf--cbrtl.md)  
  
 [ceil, ceilf, ceill](../crt/ceil--ceilf--ceill.md)  
  
 [_chgsign, _chgsignf, _chgsignl](../crt/_chgsign--_chgsignf--_chgsignl.md)  
  
 [_clear87, _clearfp](../crt/_clear87--_clearfp.md)  
  
 [compl](../crt/compl.md)  
  
 [conj, conjf, conjl](../crt/conj--conjf--conjl.md)  
  
 [_control87, \__control87_2, _controlfp](../crt/_control87--_controlfp--__control87_2.md)  
  
 [_controlfp_s](../crt/_controlfp_s.md)  
  
 [copysign, copysignf, copysignl, _copysign, _copysignf, _copysignl](../crt/copysign--copysignf--copysignl--_copysign--_copysignf--_copysignl.md)  
  
 [cos, cosf, cosl](../crt/cos--cosf--cosl--cosh--coshf--coshl.md)  
  
 [cosh, coshf, coshl](../crt/cos--cosf--cosl--cosh--coshf--coshl.md)  
  
 [div](../crt/div.md)  
  
 [_ecvt](../crt/_ecvt.md)  
  
 [ecvt](../crt/ecvt.md)  
  
 [_ecvt_s](../crt/_ecvt_s.md)  
  
 [erf, erff, erfl, erfc, erfcf, erfcl](../crt/erf--erff--erfl--erfc--erfcf--erfcl.md)  
  
 [exp, expf](../crt/exp--expf.md)  
  
 [exp2, exp2f, exp2l](../crt/exp2--exp2f--exp2l.md)  
  
 [expm1, expm1f, expm1l](../crt/expm1--expm1f--expm1l.md)  
  
 [fabs, fabsf](../crt/fabs--fabsf--fabsl.md)  
  
 [_fcvt](../crt/_fcvt.md)  
  
 [fcvt](../crt/fcvt.md)  
  
 [_fcvt_s](../crt/_fcvt_s.md)  
  
 [fdim, fdimf, fdiml](../crt/fdim--fdimf--fdiml.md)  
  
 [feclearexcept](../crt/feclearexcept1.md)  
  
 [fegetenv](../crt/fegetenv1.md)  
  
 [fegetexceptflag](../crt/fegetexceptflag2.md)  
  
 [fegetround](../crt/fegetround--fesetround2.md)  
  
 [feholdexcept](../crt/feholdexcept2.md)  
  
 [feraiseexcept](../crt/feraiseexcept.md)  
  
 [ferror](../crt/ferror.md)  
  
 [fesetenv](../crt/fesetenv1.md)  
  
 [fesetexceptflag](../crt/fesetexceptflag2.md)  
  
 [fesetround](../crt/fegetround--fesetround2.md)  
  
 [fetestexcept](../crt/fetestexcept1.md)  
  
 [feupdateenv](../crt/feupdateenv.md)  
  
 [_finite, _finitef](../crt/_finite--_finitef.md)  
  
 [floor, floorf, floorl](../crt/floor--floorf--floorl.md)  
  
 [fma, fmaf, fmal](../crt/fma--fmaf--fmal.md)  
  
 [fmax, fmaxf, fmaxl](../crt/fmax--fmaxf--fmaxl.md)  
  
 [fmin, fminf, fminl](../crt/fmin--fminf--fminl2.md)  
  
 [fmod, fmodf](../crt/fmod--fmodf.md)  
  
 [_fpclass, _fpclassf](../crt/_fpclass--_fpclassf.md)  
  
 [fpclassify](../crt/fpclassify.md)  
  
 [_fpieee_flt](../crt/_fpieee_flt.md)  
  
 [_fpreset](../crt/_fpreset.md)  
  
 [frexp](../crt/frexp.md)  
  
 [gcvt](../crt/gcvt.md)  
  
 [_gcvt](../crt/_gcvt.md)  
  
 [_gcvt_s](../crt/_gcvt_s.md)  
  
 [hypot, hypotf, hypotl, _hypot, _hypotf, _hypotl](../crt/hypot--hypotf--hypotl--_hypot--_hypotf--_hypotl.md)  
  
 [ilogb, ilogbf, ilogbl](../crt/ilogb--ilogbf--ilogbl2.md)  
  
 [imaxabs](../crt/imaxabs.md)  
  
 [imaxdiv](../crt/imaxdiv.md)  
  
 [isnan, _isnan, _isnanf](../crt/isnan--_isnan--_isnanf.md)  
  
 [_j0, _j1, _jn](../crt/bessel-functions--_j0--_j1--_jn--_y0--_y1--_yn.md)  
  
 [labs, llabs](../crt/abs--labs--llabs--_abs64.md)  
  
 [ldexp](../crt/ldexp.md)  
  
 [ldiv, lldiv](../crt/ldiv--lldiv.md)  
  
 [lgamma, lgammaf, lgammal](../crt/lgamma--lgammaf--lgammal.md)  
  
 [llrint, llrintf, llrintl](../crt/lrint--lrintf--lrintl--llrint--llrintf--llrintl.md)  
  
 [llround, llroundf, llroundl](../crt/lround--lroundf--lroundl--llround--llroundf--llroundl.md)  
  
 [log, logf, log10, log10f](../crt/log--logf--log10--log10f.md)  
  
 [log1p, log1pf, log1pl](../crt/log1p--log1pf--log1pl2.md)  
  
 [log2, log2f, log2l](../crt/log2--log2f--log2l.md)  
  
 [logb, logbf, logbl, _logb, _logbf](../crt/logb--logbf--logbl--_logb--_logbf.md)  
  
 [lrint, lrintf, lrintl](../crt/lrint--lrintf--lrintl--llrint--llrintf--llrintl.md)  
  
 [_lrotl, _lrotr](../crt/_lrotl--_lrotr.md)  
  
 [lround, lroundf, lroundl](../crt/lround--lroundf--lroundl--llround--llroundf--llroundl.md)  
  
 [_matherr](../crt/_matherr.md)  
  
 [__max](../crt/__max.md)  
  
 [__min](../crt/__min.md)  
  
 [modf, modff](../crt/modf--modff--modfl.md)  
  
 [nan, nanf, nanl](../crt/nan--nanf--nanl.md)  
  
 [nanf](../crt/nan--nanf--nanl.md)  
  
 [nanl](../crt/nan--nanf--nanl.md)  
  
 [nearbyint, nearbyintf, nearbyintl](../crt/nearbyint--nearbyintf--nearbyintl1.md)  
  
 [nextafter, nextafterf, nextafterl, _nextafter, _nextafterf, nexttoward, nexttowardf, nexttowardl](../crt/nextafter--nextafterf--nextafterl--_nextafter--_nextafterf--nexttoward--nexttowardf--nexttowardl.md)  
  
 [norm, normf, norml](../crt/norm--normf--norml1.md)  
  
 [pow, powf, powl](../crt/pow--powf--powl.md)  
  
 [remainder, remainderf, remainderl](../crt/remainder--remainderf--remainderl.md)  
  
 [remquo, remquof, remquol](../crt/remquo--remquof--remquol.md)  
  
 [rint, rintf, rintl](../crt/rint--rintf--rintl.md)  
  
 [_rotl, _rotl64, _rotr, _rotr64](../crt/_rotl--_rotl64--_rotr--_rotr64.md)  
  
 [round, roundf, roundl](../crt/round--roundf--roundl.md)  
  
 [_scalb](../crt/_scalb.md)  
  
 [scalbn, scalbnf, scalbnl, scalbln, scalblnf, scalblnl](../crt/scalbn--scalbnf--scalbnl--scalbln--scalblnf--scalblnl.md)  
  
 [_set_controlfp](../crt/_set_controlfp.md)  
  
 [_set_SSE2_enable](../crt/_set_sse2_enable.md)  
  
 [sin, sinf, sinl](../crt/sin--sinf--sinl--sinh--sinhf--sinhl.md)  
  
 [sinh, sinhf, sinhl](../crt/sin--sinf--sinl--sinh--sinhf--sinhl.md)  
  
 [sqrt, sqrtf, sqrtl](../crt/sqrt--sqrtf--sqrtl.md)  
  
 [_status87, _statusfp, _statusfp2](../crt/_status87--_statusfp--_statusfp2.md)  
  
 [strtof, _strtof_l](../crt/strtof--_strtof_l--wcstof--_wcstof_l.md)  
  
 [strtold, _strtold_l](../crt/strtold--_strtold_l--wcstold--_wcstold_l.md)  
  
 [tan, tanf, tanl](../crt/tan--tanf--tanl--tanh--tanhf--tanhl.md)  
  
 [tanh, tanhf, tanhl](../crt/tan--tanf--tanl--tanh--tanhf--tanhl.md)  
  
 [tgamma, tgammaf, tgammal](../crt/tgamma--tgammaf--tgammal.md)  
  
 [trunc, truncf, truncl](../crt/trunc--truncf--truncl.md)  
  
 [_wtof, _wtof_l](../crt/atof--_atof_l--_wtof--_wtof_l.md)  
  
 [_y0, _y1, _yn](../crt/bessel-functions--_j0--_j1--_jn--_y0--_y1--_yn.md)  
  
## See Also  
 [Run-Time Routines by Category](../crt/run-time-routines-by-category.md)