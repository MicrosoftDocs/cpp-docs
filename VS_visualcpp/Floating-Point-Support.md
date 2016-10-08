---
title: "Floating-Point Support"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: e4fcaf69-5c8e-4854-a9bb-1f412042131e
caps.latest.revision: 17
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Floating-Point Support
The Microsoft C Runtime library (CRT) provides many floating point math library functions, including all of those required by ISO C99. These functions are implemented to balance performance with correctness. Because producing the correctly rounded result may be prohibitively expensive, these functions are designed to efficiently produce a close approximation to the correctly rounded result. In most cases, the result produced is within +/-1 ulp of the correctly rounded result, though there may be cases where there is greater inaccuracy.  
  
 Many of the floating point math library functions have different implementations for different CPU architectures. For example, the 32-bit x86 CRT may have a different implementation than the 64-bit x64 CRT. In addition, some of the functions may have multiple implementations for a given CPU architecture. The most efficient implementation is selected dynamically at run-time depending on the instruction sets supported by the CPU. For example, in the 32-bit x86 CRT, some functions have both an x87 implementation and an SSE2 implementation. When running on a CPU that supports SSE2, the faster SSE2 implementation is used. When running on a CPU that does not support SSE2, the slower x87 implementation is used. Because different implementations of the math library functions may use different CPU instructions and different algorithms to produce their results, the functions may produce different results across CPUs. In most cases, the results are within +/-1 ulp of the correctly rounded result, but the actual results may vary across CPUs.  
  
 Previous 16-bit versions of Microsoft C/C++ and Microsoft Visual C++ supported the `long double` type as an 80-bit precision floating-point data type. In later versions of Visual C++, the `long double` data type is a 64-bit precision floating-point data type identical to the `double` type. The compiler treats `long double` and `double` as distinct types, but the `long double` functions are identical to their `double` counterparts. The CRT provides `long double` versions of the math functions for ISO C99 source code compatibility, but note that the binary representation may differ from other compilers.  
  
 The CRT supports these floating point functions:  
  
 [abs, _abs64](../VS_visualcpp/abs--labs--llabs--_abs64.md)  
  
 [acos, acosf, acosl](../VS_visualcpp/acos--acosf--acosl.md)  
  
 [acosh, acoshf, acoshl](../VS_visualcpp/acosh--acoshf--acoshl.md)  
  
 [asin, asinf, asinl](../VS_visualcpp/asin--asinf--asinl.md)  
  
 [asinh, asinhf, asinhl](../VS_visualcpp/asinh--asinhf--asinhl.md)  
  
 [atan, atanf, atanl, atan2, atan2f, atan2l](../VS_visualcpp/atan--atanf--atanl--atan2--atan2f--atan2l.md)  
  
 [atanh, atanhf, atanhl](../VS_visualcpp/atanh--atanhf--atanhl.md)  
  
 [_atodbl, _atodbl_l](../VS_visualcpp/_atodbl--_atodbl_l--_atoldbl--_atoldbl_l--_atoflt--_atoflt_l.md)  
  
 [atof, _atof_l](../VS_visualcpp/atof--_atof_l--_wtof--_wtof_l.md)  
  
 [_atoflt, _atoflt_l, _atoldbl, _atoldbl_l](../VS_visualcpp/_atodbl--_atodbl_l--_atoldbl--_atoldbl_l--_atoflt--_atoflt_l.md)  
  
 [cbrt, cbrtf, cbrtl](../VS_visualcpp/cbrt--cbrtf--cbrtl.md)  
  
 [ceil, ceilf, ceill](../VS_visualcpp/ceil--ceilf--ceill.md)  
  
 [_chgsign, _chgsignf, _chgsignl](../VS_visualcpp/_chgsign--_chgsignf--_chgsignl.md)  
  
 [_clear87, _clearfp](../VS_visualcpp/_clear87--_clearfp.md)  
  
 [compl](../VS_visualcpp/compl.md)  
  
 [conj, conjf, conjl](../VS_visualcpp/conj--conjf--conjl.md)  
  
 [_control87, \__control87_2, _controlfp](../VS_visualcpp/_control87--_controlfp--__control87_2.md)  
  
 [_controlfp_s](../VS_visualcpp/_controlfp_s.md)  
  
 [copysign, copysignf, copysignl, _copysign, _copysignf, _copysignl](../VS_visualcpp/copysign--copysignf--copysignl--_copysign--_copysignf--_copysignl.md)  
  
 [cos, cosf, cosl](../VS_visualcpp/cos--cosf--cosl--cosh--coshf--coshl.md)  
  
 [cosh, coshf, coshl](../VS_visualcpp/cos--cosf--cosl--cosh--coshf--coshl.md)  
  
 [div](../VS_visualcpp/div.md)  
  
 [_ecvt](../VS_visualcpp/_ecvt.md)  
  
 [ecvt](../VS_visualcpp/ecvt.md)  
  
 [_ecvt_s](../VS_visualcpp/_ecvt_s.md)  
  
 [erf, erff, erfl, erfc, erfcf, erfcl](../VS_visualcpp/erf--erff--erfl--erfc--erfcf--erfcl.md)  
  
 [exp, expf](../VS_visualcpp/exp--expf.md)  
  
 [exp2, exp2f, exp2l](../VS_visualcpp/exp2--exp2f--exp2l.md)  
  
 [expm1, expm1f, expm1l](../VS_visualcpp/expm1--expm1f--expm1l.md)  
  
 [fabs, fabsf](../VS_visualcpp/fabs--fabsf--fabsl.md)  
  
 [_fcvt](../VS_visualcpp/_fcvt.md)  
  
 [fcvt](../VS_visualcpp/fcvt.md)  
  
 [_fcvt_s](../VS_visualcpp/_fcvt_s.md)  
  
 [fdim, fdimf, fdiml](../VS_visualcpp/fdim--fdimf--fdiml.md)  
  
 [feclearexcept](../VS_visualcpp/feclearexcept1.md)  
  
 [fegetenv](../VS_visualcpp/fegetenv1.md)  
  
 [fegetexceptflag](../VS_visualcpp/fegetexceptflag2.md)  
  
 [fegetround](../VS_visualcpp/fegetround--fesetround2.md)  
  
 [feholdexcept](../VS_visualcpp/feholdexcept2.md)  
  
 [feraiseexcept](../VS_visualcpp/feraiseexcept.md)  
  
 [ferror](../VS_visualcpp/ferror.md)  
  
 [fesetenv](../VS_visualcpp/fesetenv1.md)  
  
 [fesetexceptflag](../VS_visualcpp/fesetexceptflag2.md)  
  
 [fesetround](../VS_visualcpp/fegetround--fesetround2.md)  
  
 [fetestexcept](../VS_visualcpp/fetestexcept1.md)  
  
 [feupdateenv](../VS_visualcpp/feupdateenv.md)  
  
 [_finite, _finitef](../VS_visualcpp/_finite--_finitef.md)  
  
 [floor, floorf, floorl](../VS_visualcpp/floor--floorf--floorl.md)  
  
 [fma, fmaf, fmal](../VS_visualcpp/fma--fmaf--fmal.md)  
  
 [fmax, fmaxf, fmaxl](../VS_visualcpp/fmax--fmaxf--fmaxl.md)  
  
 [fmin, fminf, fminl](../VS_visualcpp/fmin--fminf--fminl2.md)  
  
 [fmod, fmodf](../VS_visualcpp/fmod--fmodf.md)  
  
 [_fpclass, _fpclassf](../VS_visualcpp/_fpclass--_fpclassf.md)  
  
 [fpclassify](../VS_visualcpp/fpclassify.md)  
  
 [_fpieee_flt](../VS_visualcpp/_fpieee_flt.md)  
  
 [_fpreset](../VS_visualcpp/_fpreset.md)  
  
 [frexp](../VS_visualcpp/frexp.md)  
  
 [gcvt](../VS_visualcpp/gcvt.md)  
  
 [_gcvt](../VS_visualcpp/_gcvt.md)  
  
 [_gcvt_s](../VS_visualcpp/_gcvt_s.md)  
  
 [hypot, hypotf, hypotl, _hypot, _hypotf, _hypotl](../VS_visualcpp/hypot--hypotf--hypotl--_hypot--_hypotf--_hypotl.md)  
  
 [ilogb, ilogbf, ilogbl](../VS_visualcpp/ilogb--ilogbf--ilogbl2.md)  
  
 [imaxabs](../VS_visualcpp/imaxabs.md)  
  
 [imaxdiv](../VS_visualcpp/imaxdiv.md)  
  
 [isnan, _isnan, _isnanf](../VS_visualcpp/isnan--_isnan--_isnanf.md)  
  
 [_j0, _j1, _jn](../VS_visualcpp/Bessel-Functions--_j0--_j1--_jn--_y0--_y1--_yn.md)  
  
 [labs, llabs](../VS_visualcpp/abs--labs--llabs--_abs64.md)  
  
 [ldexp](../VS_visualcpp/ldexp.md)  
  
 [ldiv, lldiv](../VS_visualcpp/ldiv--lldiv.md)  
  
 [lgamma, lgammaf, lgammal](../VS_visualcpp/lgamma--lgammaf--lgammal.md)  
  
 [llrint, llrintf, llrintl](../VS_visualcpp/lrint--lrintf--lrintl--llrint--llrintf--llrintl.md)  
  
 [llround, llroundf, llroundl](../VS_visualcpp/lround--lroundf--lroundl--llround--llroundf--llroundl.md)  
  
 [log, logf, log10, log10f](../VS_visualcpp/log--logf--log10--log10f.md)  
  
 [log1p, log1pf, log1pl](../VS_visualcpp/log1p--log1pf--log1pl2.md)  
  
 [log2, log2f, log2l](../VS_visualcpp/log2--log2f--log2l.md)  
  
 [logb, logbf, logbl, _logb, _logbf](../VS_visualcpp/logb--logbf--logbl--_logb--_logbf.md)  
  
 [lrint, lrintf, lrintl](../VS_visualcpp/lrint--lrintf--lrintl--llrint--llrintf--llrintl.md)  
  
 [_lrotl, _lrotr](../VS_visualcpp/_lrotl--_lrotr.md)  
  
 [lround, lroundf, lroundl](../VS_visualcpp/lround--lroundf--lroundl--llround--llroundf--llroundl.md)  
  
 [_matherr](../VS_visualcpp/_matherr.md)  
  
 [__max](../VS_visualcpp/__max.md)  
  
 [__min](../VS_visualcpp/__min.md)  
  
 [modf, modff](../VS_visualcpp/modf--modff--modfl.md)  
  
 [nan, nanf, nanl](../VS_visualcpp/nan--nanf--nanl.md)  
  
 [nanf](../VS_visualcpp/nan--nanf--nanl.md)  
  
 [nanl](../VS_visualcpp/nan--nanf--nanl.md)  
  
 [nearbyint, nearbyintf, nearbyintl](../VS_visualcpp/nearbyint--nearbyintf--nearbyintl1.md)  
  
 [nextafter, nextafterf, nextafterl, _nextafter, _nextafterf, nexttoward, nexttowardf, nexttowardl](../VS_visualcpp/nextafter--nextafterf--nextafterl--_nextafter--_nextafterf--nexttoward--nexttowardf--nexttowardl.md)  
  
 [norm, normf, norml](../VS_visualcpp/norm--normf--norml1.md)  
  
 [pow, powf, powl](../VS_visualcpp/pow--powf--powl.md)  
  
 [remainder, remainderf, remainderl](../VS_visualcpp/remainder--remainderf--remainderl.md)  
  
 [remquo, remquof, remquol](../VS_visualcpp/remquo--remquof--remquol.md)  
  
 [rint, rintf, rintl](../VS_visualcpp/rint--rintf--rintl.md)  
  
 [_rotl, _rotl64, _rotr, _rotr64](../VS_visualcpp/_rotl--_rotl64--_rotr--_rotr64.md)  
  
 [round, roundf, roundl](../VS_visualcpp/round--roundf--roundl.md)  
  
 [_scalb](../VS_visualcpp/_scalb.md)  
  
 [scalbn, scalbnf, scalbnl, scalbln, scalblnf, scalblnl](../VS_visualcpp/scalbn--scalbnf--scalbnl--scalbln--scalblnf--scalblnl.md)  
  
 [_set_controlfp](../VS_visualcpp/_set_controlfp.md)  
  
 [_set_SSE2_enable](../VS_visualcpp/_set_SSE2_enable.md)  
  
 [sin, sinf, sinl](../VS_visualcpp/sin--sinf--sinl--sinh--sinhf--sinhl.md)  
  
 [sinh, sinhf, sinhl](../VS_visualcpp/sin--sinf--sinl--sinh--sinhf--sinhl.md)  
  
 [sqrt, sqrtf, sqrtl](../VS_visualcpp/sqrt--sqrtf--sqrtl.md)  
  
 [_status87, _statusfp, _statusfp2](../VS_visualcpp/_status87--_statusfp--_statusfp2.md)  
  
 [strtof, _strtof_l](../VS_visualcpp/strtof--_strtof_l--wcstof--_wcstof_l.md)  
  
 [strtold, _strtold_l](../VS_visualcpp/strtold--_strtold_l--wcstold--_wcstold_l.md)  
  
 [tan, tanf, tanl](../VS_visualcpp/tan--tanf--tanl--tanh--tanhf--tanhl.md)  
  
 [tanh, tanhf, tanhl](../VS_visualcpp/tan--tanf--tanl--tanh--tanhf--tanhl.md)  
  
 [tgamma, tgammaf, tgammal](../VS_visualcpp/tgamma--tgammaf--tgammal.md)  
  
 [trunc, truncf, truncl](../VS_visualcpp/trunc--truncf--truncl.md)  
  
 [_wtof, _wtof_l](../VS_visualcpp/atof--_atof_l--_wtof--_wtof_l.md)  
  
 [_y0, _y1, _yn](../VS_visualcpp/Bessel-Functions--_j0--_j1--_jn--_y0--_y1--_yn.md)  
  
## See Also  
 [Run-Time Routines by Category](../VS_visualcpp/Run-Time-Routines-by-Category.md)