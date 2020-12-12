---
description: "Learn more about: Floating-point primitives"
title: "Floating-point primitives"
ms.date: "4/2/2020"
api_name: ["_dclass", "_ldclass", "_fdclass", "_dsign", "_ldsign", "_fdsign", "_dpcomp", "_ldpcomp", "_fdpcomp", "_dtest", "_ldtest", "_fdtest", "_d_int", "_ld_int", "_fd_int", "_dscale", "_ldscale", "_fdscale", "_dunscale", "_ldunscale", "_fdunscale", "_dexp", "_ldexp", "_fdexp", "_dnorm", "_fdnorm", "_dpoly", "_ldpoly", "_fdpoly", "_dlog", "_ldlog", "_fdlog", "_dsin", "_ldsin", "_fdsin", "_o__d_int", "_o__dclass", "_o__dlog", "_o__dnorm", "_o__dpcomp", "_o__dpoly", "_o__dscale", "_o__dsign", "_o__dsin", "_o__dtest", "_o__dunscale", "_o__fd_int", "_o__fdclass", "_o__fdexp", "_o__fdlog", "_o__fdpcomp", "_o__fdpoly", "_o__fdscale", "_o__fdsign", "_o__fdsin", "_o__ld_int", "_o__ldclass", "_o__ldexp", "_o__ldlog", "_o__ldpcomp", "_o__ldpoly", "_o__ldscale", "_o__ldsign", "_o__ldsin", "_o__ldtest", "_o__ldunscale"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_dclass", "_ldclass", "_fdclass", "_dsign", "_ldsign", "_fdsign", "_dpcomp", "_ldpcomp", "_fdpcomp", "_dtest", "_ldtest", "_fdtest", "_d_int", "_ld_int", "_fd_int", "_dscale", "_ldscale", "_fdscale", "_dunscale", "_ldunscale", "_fdunscale", "_dexp", "_ldexp", "_fdexp", "_dnorm", "_fdnorm", "_dpoly", "_ldpoly", "_fdpoly", "_dlog", "_ldlog", "_fdlog", "_dsin", "_ldsin", "_fdsin"]
helpviewer_keywords: ["_dclass", "_ldclass", "_fdclass", "_dsign", "_ldsign", "_fdsign", "_dpcomp", "_ldpcomp", "_fdpcomp", "_dtest", "_ldtest", "_fdtest", "_d_int", "_ld_int", "_fd_int", "_dscale", "_ldscale", "_fdscale", "_dunscale", "_ldunscale", "_fdunscale", "_dexp", "_ldexp", "_fdexp", "_dnorm", "_fdnorm", "_dpoly", "_ldpoly", "_fdpoly", "_dlog", "_ldlog", "_fdlog", "_dsin", "_ldsin", "_fdsin"]
---
# Floating-point primitives

Microsoft-specific primitive functions that are used to implement some standard C runtime library (CRT) floating-point functions. They're documented here for completeness, but aren't recommended for use. Some of these functions are noted as unused, because they're known to have issues in precision, exception handling, and conformance to IEEE-754 behavior. They exist in the library only for backward compatibility. For correct behavior, portability, and adherence to standards, prefer the standard floating-point functions over these functions.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## _dclass, _ldclass, _fdclass

### Syntax

```C
short __cdecl _dclass(double x);
short __cdecl _ldclass(long double x);
short __cdecl _fdclass(float x);
```

### Parameters

*x*<br/>
Floating-point function argument.

### Remarks

These floating-point primitives implement the C versions of the CRT macro [fpclassify](fpclassify.md) for floating-point types. The classification of the argument *x* is returned as one of these constants, defined in math.h:

|Value|Description|
|-----------|-----------------|
| **FP_NAN** | A quiet, signaling, or indeterminate NaN |
| **FP_INFINITE** | A positive or negative infinity |
| **FP_NORMAL** | A positive or negative normalized non-zero value |
| **FP_SUBNORMAL** | A positive or negative subnormal (denormalized) value |
| **FP_ZERO** | A positive or negative zero value |

For additional detail, you can use the Microsoft-specific [_fpclass, _fpclassf](fpclass-fpclassf.md) functions. Use the [fpclassify](fpclassify.md) macro or function for portability.

## _dsign, _ldsign, _fdsign

### Syntax

```C
int __cdecl _dsign(double x);
int __cdecl _ldsign(long double x);
int __cdecl _fdsign(float x);
```

### Parameters

*x*<br/>
Floating-point function argument.

### Remarks

These floating-point primitives implement the [signbit](signbit.md) macro or function in the CRT. They return a non-zero value if the sign bit is set in the significand (mantissa) of the argument *x*, and 0 if the sign bit is not set.

## _dpcomp, _ldpcomp, _fdpcomp

### Syntax

```C
int __cdecl _dpcomp(double x, double y);
int __cdecl _ldpcomp(long double x, long double y);
int __cdecl _fdpcomp(float x, float y);
```

### Parameters

*x*, *y*<br/>
Floating-point function arguments.

### Remarks

These floating-point primitives take two arguments, *x* and *y*, and return a value that shows their ordering relationship, expressed as the bitwise or of these constants, defined in math.h:

| Value | Description |
|------------|-----------------|
| **_FP_LT** | *x* can be considered less than *y* |
| **_FP_EQ** | *x* can be considered equal to *y* |
| **_FP_GT** | *x* can be considered greater than *y* |

These primitives implement the [isgreater, isgreaterequal, isless, islessequal, islessgreater, and isunordered](floating-point-ordering.md) macros and functions in the CRT.

## _dtest, _ldtest, _fdtest

### Syntax

```C
short __cdecl _dtest(double* px);
short __cdecl _ldtest(long double* px);
short __cdecl _fdtest(float* px);
```

### Parameters

*px*<br/>
Pointer to a floating-point argument.

### Remarks

These floating-point primitives implement the C++ versions of the CRT function [fpclassify](fpclassify.md) for floating-point types. The argument *x* is evaluated and the classification is returned as one of these constants, defined in math.h:

|Value|Description|
|-----------|-----------------|
| **FP_NAN** | A quiet, signaling, or indeterminate NaN |
| **FP_INFINITE** | A positive or negative infinity |
| **FP_NORMAL** | A positive or negative normalized non-zero value |
| **FP_SUBNORMAL** | A positive or negative subnormal (denormalized) value |
| **FP_ZERO** | A positive or negative zero value |

For additional detail, you can use the Microsoft-specific [_fpclass, _fpclassf](fpclass-fpclassf.md) functions. Use the [fpclassify](fpclassify.md) function for portability.

## _d_int, _ld_int, _fd_int

### Syntax

```C
short __cdecl _d_int(double* px, short exp);
short __cdecl _ld_int(long double* px, short exp);
short __cdecl _fd_int(float* px, short exp);
```

### Parameters

*px*<br/>
Pointer to a floating-point argument.

*exp*<br/>
An exponent as an integral type.

### Remarks

These floating-point primitives take a pointer to a floating-point value *px* and an exponent value *exp*, and remove the fractional part of the floating-point value below the given exponent, if possible. The value returned is the result of **fpclassify** on the input value in *px* if it's a NaN or infinity, and on the output value in *px* otherwise.

## _dscale, _ldscale, _fdscale

### Syntax

```C
short __cdecl _dscale(double* px, long exp);
short __cdecl _ldscale(long double* px, long exp);
short __cdecl _fdscale(float* px, long exp);
```

### Parameters

*px*<br/>
Pointer to a floating-point argument.

*exp*<br/>
An exponent as an integral type.

### Remarks

These floating-point primitives take a pointer to a floating-point value *px* and an exponent value *exp*, and scale the value in *px* by 2<sup>*exp*</sup>, if possible. The value returned is the result of **fpclassify** on the input value in *px* if it's a NaN or infinity, and on the output value in *px* otherwise. For portability, prefer the [ldexp, ldexpf, and ldexpl](ldexp.md) functions.

## _dunscale, _ldunscale, _fdunscale

### Syntax

```C
short __cdecl _dunscale(short* pexp, double* px);
short __cdecl _ldunscale(short* pexp, long double* px);
short __cdecl _fdunscale(short* pexp, float* px);
```

### Parameters

*pexp*<br/>
A pointer to an exponent as an integral type.

*px*<br/>
Pointer to a floating-point argument.

### Remarks

These floating-point primitives break down the floating-point value pointed at by *px* into a significand (mantissa) and an exponent, if possible. The significand is scaled such that the absolute value is greater than or equal to 0.5 and less than 1.0. The exponent is the value *n*, where the original floating-point value is equal to the scaled significand times 2<sup>*n*</sup>. This integer exponent *n* is stored at the location pointed to by *pexp*. The value returned is the result of **fpclassify** on the input value in *px* if it's a NaN or infinity, and on the output value otherwise. For portability, prefer the [frexp, frexpf, frexpl](frexp.md) functions.

## _dexp, _ldexp, _fdexp

### Syntax

```C
short __cdecl _dexp(double* px, double y, long exp);
short __cdecl _ldexp(long double* px, long double y, long exp);
short __cdecl _fdexp(float* px, float y, long exp);
```

### Parameters

*y*<br/>
Floating-point function argument.

*px*<br/>
Pointer to a floating-point argument.

*exp*<br/>
An exponent as an integral type.

### Remarks

These floating-point primitives construct a floating-point value in the location pointed at by *px* equal to *y* * 2<sup>*exp*</sup>. The value returned is the result of **fpclassify** on the input value in *y* if it's a NaN or infinity, and on the output value in *px* otherwise. For portability, prefer the [ldexp, ldexpf, and ldexpl](ldexp.md) functions.

## _dnorm, _fdnorm

### Syntax

```C
short __cdecl _dnorm(unsigned short* ps);
short __cdecl _fdnorm(unsigned short* ps);
```

### Parameters

*ps*<br/>
Pointer to the bitwise representation of a floating-point value expressed as an array of **`unsigned short`**.

### Remarks

These floating-point primitives normalize the fractional part of an underflowed floating-point value and adjust the *characteristic*, or biased exponent, to match. The value is passed as the bitwise representation of the floating-point type converted to an array of **`unsigned short`** through the `_double_val`, `_ldouble_val`, or `_float_val` type punning union declared in math.h. The return value is the result of **fpclassify** on the input floating-point value if it's a NaN or infinity, and on the output value otherwise.

## _dpoly, _ldpoly, _fdpoly

### Syntax

```C
double __cdecl _dpoly(double x, double const* table, int n);
long double __cdecl _ldpoly(long double x, long double const* table, int n);
float __cdecl _fdpoly(float x, _float const* table, int n);
```

### Parameters

*x*<br/>
Floating-point function argument.

*table*<br/>
Pointer to a table of constant coefficients for a polynomial.

*n*<br/>
Order of the polynomial to evaluate.

### Remarks

These floating-point primitives return the evaluation of *x* in the polynomial of order *n* whose coefficients are represented by the corresponding constant values in *table*. For example, if *table*\[0] = 3.0, *table*\[1] = 4.0, *table*\[2] = 5.0, and *n* = 2, it represents the polynomial 5.0x<sup>2</sup> + 4.0x + 3.0. If this polynomial is evaluated for *x* of 2.0, the result is 31.0. These functions aren't used internally.

## _dlog, _dlog, _dlog

### Syntax

```C
double __cdecl _dlog(double x, int base_flag);
long double __cdecl _ldlog(long double x, int base_flag);
float __cdecl _fdlog(float x, int base_flag);
```

### Parameters

*x*<br/>
Floating-point function argument.

*base_flag*<br/>
Flag that controls the base to use, 0 for base *e* and non-zero for base 10.

### Remarks

These floating-point primitives return the natural log of *x*, ln(*x*) or log<sub>*e*</sub>(*x*), when *base_flag* is 0. They return the log base 10 of *x*, or log<sub>10</sub>(*x*), when *base_flag* is non-zero. These functions aren't used internally. For portability, prefer the functions [log, logf, logl, log10, log10f, and log10l](log-logf-log10-log10f.md).

## _dsin, _ldsin, _fdsin

### Syntax

```C
double __cdecl _dsin(double x, unsigned int quadrant);
long double __cdecl _ldsin(long double x, unsigned int quadrant);
float __cdecl _fdsin(float x, unsigned int quadrant);
```

### Parameters

*x*<br/>
Floating-point function argument.

*quadrant*<br/>
Quadrant offset of 0, 1, 2, or 3 to use to produce `sin`, `cos`, `-sin`, and `-cos` results.

### Remarks

These floating-point primitives return the sine of *x* offset by the *quadrant* modulo 4. Effectively, they return the sine, cosine, -sine, and -cosine of *x* when *quadrant* modulo 4 is 0, 1, 2, or 3, respectively. These functions aren't used internally. For portability, prefer the [sin, sinf, sinl](sin-sinf-sinl.md), [cos, cosf, and cosl](cos-cosf-cosl.md) functions.

## Requirements

Header: \<math.h>

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Floating-point support](../floating-point-support.md)<br/>
[fpclassify](fpclassify.md)<br/>
[_fpclass, _fpclassf](fpclass-fpclassf.md)<br/>
[isfinite, _finite, _finitef](finite-finitef.md)<br/>
[isinf](isinf.md)<br/>
[isnan, _isnan, _isnanf](isnan-isnan-isnanf.md)<br/>
[isnormal](isnormal.md)<br/>
[cos, cosf, cosl](cos-cosf-cosl.md)<br/>
[frexp, frexpf, frexpl](frexp.md)<br/>
[ldexp, ldexpf, and ldexpl](ldexp.md)<br/>
[log, logf, logl, log10, log10f, log10l](log-logf-log10-log10f.md)<br/>
[sin, sinf, sinl](sin-sinf-sinl.md)<br/>
