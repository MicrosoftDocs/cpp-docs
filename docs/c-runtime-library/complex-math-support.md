---
title: "C complex math support"
ms.date: "03/30/2018"
f1_keywords: ["c.complex"]
helpviewer_keywords: ["complex numbers, math routines", "math routines", "complex numbers"]
---
# C complex math support

The Microsoft C Runtime library (CRT) provides complex math library functions, including all of those required by ISO C99. The compiler does not directly support a **complex** or **_Complex** keyword, therefore the Microsoft implementation uses structure types to represent complex numbers.

These functions are implemented to balance performance with correctness. Because producing the correctly rounded result may be prohibitively expensive, these functions are designed to efficiently produce a close approximation to the correctly rounded result. In most cases, the result produced is within +/-1 ulp of the correctly rounded result, though there may be cases where there is greater inaccuracy.

The complex math routines rely on the floating point math library functions for their implementation. These functions have different implementations for different CPU architectures. For example, the 32-bit x86 CRT may have a different implementation than the 64-bit x64 CRT. In addition, some of the functions may have multiple implementations for a given CPU architecture. The most efficient implementation is selected dynamically at run-time depending on the instruction sets supported by the CPU. For example, in the 32-bit x86 CRT, some functions have both an x87 implementation and an SSE2 implementation. When running on a CPU that supports SSE2, the faster SSE2 implementation is used. When running on a CPU that does not support SSE2, the slower x87 implementation is used. Because different implementations of the math library functions may use different CPU instructions and different algorithms to produce their results, the functions may produce different results across CPUs. In most cases, the results are within +/-1 ulp of the correctly rounded result, but the actual results may vary across CPUs.

## Types used in complex math

The Microsoft implementation of the complex.h header defines these types as equivalents for the C99 standard native complex types:

|Standard type|Microsoft type|
|-|-|
|**float complex** or **float _Complex**|**_Fcomplex**|
|**double complex** or **double _Complex**|**_Dcomplex**|
|**long double complex** or **long double _Complex**|**_Lcomplex**|

The math.h header defines a separate type, **struct _complex**, used for the [_cabs](../c-runtime-library/reference/cabs.md) function. The **struct _complex** type is not used by the equivalent complex math functions [cabs, cabsf, cabsl](../c-runtime-library/reference/cabs-cabsf-cabsl.md).

## Complex constants and macros

**I** is defined as the **float** complex type **_Fcomplex** initialized by `{ 0.0f, 1.0f }`.

## Trigonometric functions

|Function|Description|
|-|-|
|[cacos, cacosf, cacosl](../c-runtime-library/reference/cacos-cacosf-cacosl.md)|Compute the complex arc cosine of a complex number|
|[casin, casinf, casinl](../c-runtime-library/reference/casin-casinf-casinl.md)|Compute the complex arc sine of a complex number|
|[catan, catanf, catanl](../c-runtime-library/reference/catan-catanf-catanl.md)|Compute the complex arc tangent of a complex number|
|[ccos, ccosf, ccosl](../c-runtime-library/reference/ccos-ccosf-ccosl.md)|Compute the complex cosine of a complex number|
|[csin, csinf, csinl](../c-runtime-library/reference/csin-csinf-csinl.md)|Compute the complex sine of a complex number|
|[ctan, ctanf, ctanl](../c-runtime-library/reference/ctan-ctanf-ctanl.md)|Compute the complex tangent of a complex number|

## Hyperbolic functions

|Function|Description|
|-|-|
|[cacosh, cacoshf, cacoshl](../c-runtime-library/reference/cacosh-cacoshf-cacoshl.md)|Compute the complex arc hyperbolic cosine of a complex number|
|[casinh, casinhf, casinhl](../c-runtime-library/reference/casinh-casinhf-casinhl.md)|Compute the complex arc hyperbolic sine of a complex number|
|[catanh, catanhf, catanhl](../c-runtime-library/reference/catanh-catanhf-catanhl.md)|Compute the complex arc hyperbolic tangent of a complex number|
|[ccosh, ccoshf, ccoshl](../c-runtime-library/reference/ccosh-ccoshf-ccoshl.md)|Compute the complex hyperbolic cosine of a complex number|
|[csinh, csinhf, csinhl](../c-runtime-library/reference/csinh-csinhf-csinhl.md)|Compute the complex hyperbolic sine of a complex number|
|[ctanh, ctanhf, ctanhl](../c-runtime-library/reference/ctanh-ctanhf-ctanhl.md)|Compute the complex hyperbolic tangent of a complex number|

## Exponential and logarithmic functions

|Function|Description|
|-|-|
|[cexp, cexpf, cexpl](../c-runtime-library/reference/cexp-cexpf-cexpl.md)|Compute the complex base-*e* exponential of a complex number|
|[clog, clogf, clogl](../c-runtime-library/reference/clog-clogf-clogl.md)|Compute the complex natural (base-*e*) logarithm of a complex number|
|[clog10, clog10f, clog10l](../c-runtime-library/reference/clog10-clog10f-clog10l.md)|Compute the complex base-10 logarithm of a complex number|

## Power and absolute-value functions

|Function|Description|
|-|-|
|[cabs, cabsf, cabsl](../c-runtime-library/reference/cabs-cabsf-cabsl.md)|Compute the complex absolute value (also called the norm, modulus, or magnitude) of a complex number|
|[cpow, cpowf, cpowl](../c-runtime-library/reference/cpow-cpowf-cpowl.md)|Compute the complex power function x<sup>y</sup>|
|[csqrt, csqrtf, csqrtl](../c-runtime-library/reference/csqrt-csqrtf-csqrtl.md)|Compute the complex square root of a complex number|

## Manipulation functions

|Function|Description|
|-|-|
|[_Cbuild, _FCbuild, _LCbuild](../c-runtime-library/reference/cbuild-fcbuild-lcbuild.md)|Construct a complex number from real and imaginary parts|
|[carg, cargf, cargl](../c-runtime-library/reference/carg-cargf-cargl.md)|Compute the argument (also called the phase angle) of a complex number|
|[cimag, cimagf, cimagl](../c-runtime-library/reference/cimag-cimagf-cimagl.md)|Compute the imaginary part of a complex number|
|[conj, conjf, conjl](../c-runtime-library/reference/conj-conjf-conjl.md)|Compute the complex conjugate of a complex number|
|[cproj, cprojf, cprojl](../c-runtime-library/reference/cproj-cprojf-cprojl.md)|Compute a projection of a complex number onto the Riemann sphere|
|[creal, crealf, creall](../c-runtime-library/reference/creal-crealf-creall.md)|Compute the real part of a complex number|
|[norm, normf, norml](../c-runtime-library/reference/norm-normf-norml1.md)|Compute the squared magnitude of a complex number|

## Operation functions

Because complex numbers are not a native type in the Microsoft compiler, the standard arithmetic operators are not defined on complex types. For convenience, these complex math library functions are provided to enable limited manipulation of complex numbers in user code:

|Function|Description|
|-|-|
|[_Cmulcc, _FCmulcc, _LCmulcc](../c-runtime-library/reference/cmulcc-fcmulcc-lcmulcc.md)|Multiply two complex numbers|
|[_Cmulcr, _FCmulcr, _LCmulcr](../c-runtime-library/reference/cmulcr-fcmulcr-lcmulcr.md)|Multiply a complex and a floating-point number|

## See also

[Universal C runtime routines by category](../c-runtime-library/run-time-routines-by-category.md)<br/>
