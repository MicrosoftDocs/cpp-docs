---
title: "C complex math support"
description: "Describes C-language complex math support in the Microsoft C runtime library (CRT)"
ms.date: "05/14/2019"
f1_keywords: ["c.complex"]
helpviewer_keywords: ["complex numbers, math routines", "math routines", "complex numbers"]
---
# C complex math support

The Microsoft C Runtime library (CRT) provides complex math library functions, including all of the ones required by ISO C99. The compiler doesn't directly support a **`complex`** or **`_Complex`** keyword, therefore the Microsoft implementation uses structure types to represent complex numbers.

These functions are implemented to balance performance with correctness. Because producing the correctly rounded result may be prohibitively expensive, these functions are designed to efficiently produce a close approximation to the correctly rounded result. In most cases, the result produced is within +/-1 unit of least precision (ULP) of the correctly rounded result, though there may be cases where there's greater inaccuracy.

The complex math routines rely on the floating point math library functions for their implementation. These functions have different implementations for different CPU architectures. For example, the 32-bit x86 CRT may have a different implementation than the 64-bit x64 CRT. In addition, some of the functions may have multiple implementations for a given CPU architecture. The most efficient implementation is selected dynamically at run-time depending on the instruction sets supported by the CPU. For example, in the 32-bit x86 CRT, some functions have both an x87 implementation and an SSE2 implementation. When running on a CPU that supports SSE2, the faster SSE2 implementation is used. When running on a CPU that doesn't support SSE2, the slower x87 implementation is used. Because different implementations of the math library functions may use different CPU instructions and different algorithms to produce their results, the functions may produce different results across CPUs. In most cases, the results are within +/-1 ULP of the correctly rounded result, but the actual results may vary across CPUs.

## Types used in complex math

The Microsoft implementation of the `complex.h` header defines these types as equivalents for the C99 standard native complex types:

| Standard type | Microsoft type |
|---|---|
| **`float complex`** or **`float _Complex`** | **`_Fcomplex`** |
| **`double complex`** or **`double _Complex`** | **`_Dcomplex`** |
| **`long double complex`** or **`long double _Complex`** | **`_Lcomplex`** |

The `math.h` header defines a separate type, **`struct _complex`**, used for the [`_cabs`](./reference/cabs.md) function. The **`struct _complex`** type isn't used by the equivalent complex math functions [`cabs`, `cabsf`, `cabsl`](./reference/cabs-cabsf-cabsl.md).

## Complex constants and macros

**`I`** is defined as the complex type **`_Fcomplex`** initialized by `{ 0.0f, 1.0f }`.

## Trigonometric functions

| Function | Description |
|---|---|
| [`cacos`, `cacosf`, `cacosl`](./reference/cacos-cacosf-cacosl.md) | Compute the complex arc cosine of a complex number |
| [`casin`, `casinf`, `casinl`](./reference/casin-casinf-casinl.md) | Compute the complex arc sine of a complex number |
| [`catan`, `catanf`, `catanl`](./reference/catan-catanf-catanl.md) | Compute the complex arc tangent of a complex number |
| [`ccos`, `ccosf`, `ccosl`](./reference/ccos-ccosf-ccosl.md) | Compute the complex cosine of a complex number |
| [`csin`, `csinf`, `csinl`](./reference/csin-csinf-csinl.md) | Compute the complex sine of a complex number |
| [`ctan`, `ctanf`, `ctanl`](./reference/ctan-ctanf-ctanl.md) | Compute the complex tangent of a complex number |

## Hyperbolic functions

| Function | Description |
|---|---|
| [`cacosh`, `cacoshf`, `cacoshl`](./reference/cacosh-cacoshf-cacoshl.md) | Compute the complex arc hyperbolic cosine of a complex number |
| [`casinh`, `casinhf`, `casinhl`](./reference/casinh-casinhf-casinhl.md) | Compute the complex arc hyperbolic sine of a complex number |
| [`catanh`, `catanhf`, `catanhl`](./reference/catanh-catanhf-catanhl.md) | Compute the complex arc hyperbolic tangent of a complex number |
| [`ccosh`, `ccoshf`, `ccoshl`](./reference/ccosh-ccoshf-ccoshl.md) | Compute the complex hyperbolic cosine of a complex number |
| [`csinh`, `csinhf`, `csinhl`](./reference/csinh-csinhf-csinhl.md) | Compute the complex hyperbolic sine of a complex number |
| [`ctanh`, `ctanhf`, `ctanhl`](./reference/ctanh-ctanhf-ctanhl.md) | Compute the complex hyperbolic tangent of a complex number |

## Exponential and logarithmic functions

| Function | Description |
|---|---|
| [`cexp`, `cexpf`, `cexpl`](./reference/cexp-cexpf-cexpl.md) | Compute the complex base-*e* exponential of a complex number |
| [`clog`, `clogf`, `clogl`](./reference/clog-clogf-clogl.md) | Compute the complex natural (base-*e*) logarithm of a complex number |
| [`clog10`, `clog10f`, `clog10l`](./reference/clog10-clog10f-clog10l.md) | Compute the complex base-10 logarithm of a complex number |

## Power and absolute-value functions

| Function | Description |
|---|---|
| [`cabs`, `cabsf`, `cabsl`](./reference/cabs-cabsf-cabsl.md) | Compute the complex absolute value (also called the norm, modulus, or magnitude) of a complex number |
| [`cpow`, `cpowf`, `cpowl`](./reference/cpow-cpowf-cpowl.md) | Compute the complex power function |
| [`csqrt`, `csqrtf`, `csqrtl`](./reference/csqrt-csqrtf-csqrtl.md) | Compute the complex square root of a complex number |

## Manipulation functions

| Function | Description |
|---|---|
| [`_Cbuild`, `_FCbuild`, `_LCbuild`](./reference/cbuild-fcbuild-lcbuild.md) | Construct a complex number from real and imaginary parts |
| [`carg`, `cargf`, `cargl`](./reference/carg-cargf-cargl.md) | Compute the argument (also called the phase angle) of a complex number |
| [`cimag`, `cimagf`, `cimagl`](./reference/cimag-cimagf-cimagl.md) | Compute the imaginary part of a complex number |
| [`conj`, `conjf`, `conjl`](./reference/conj-conjf-conjl.md) | Compute the complex conjugate of a complex number |
| [`cproj`, `cprojf`, `cprojl`](./reference/cproj-cprojf-cprojl.md) | Compute a projection of a complex number onto the Riemann sphere |
| [`creal`, `crealf`, `creall`](./reference/creal-crealf-creall.md) | Compute the real part of a complex number |
| [`norm`, `normf`, `norml`](./reference/norm-normf-norml1.md) | Compute the squared magnitude of a complex number |

## Operation functions

Because complex numbers aren't a native type in the Microsoft compiler, the standard arithmetic operators aren't defined on complex types. For convenience, these complex math library functions are provided to enable limited manipulation of complex numbers in user code:

| Function | Description |
|---|---|
| [`_Cmulcc`, `_FCmulcc`, `_LCmulcc`](./reference/cmulcc-fcmulcc-lcmulcc.md) | Multiply two complex numbers |
| [`_Cmulcr`, `_FCmulcr`, `_LCmulcr`](./reference/cmulcr-fcmulcr-lcmulcr.md) | Multiply a complex and a floating-point number |

## See also

[Type-generic math](tgmath.md)\
[Universal C runtime routines by category](./run-time-routines-by-category.md)
