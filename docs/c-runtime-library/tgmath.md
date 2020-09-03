---
title: "Type-generic math"
description: "Describes macros in <tgmath.h> that make it easier to write C code that calls the right math function, based on argument type." 
ms.date: "9/3/2020"
helpviewer_keywords: ["CRT tgmath.h"]
---

# Type-generic math

For C11 and later, the `<tgmath.h>` header, in addition to including `<math.h>` and `<complex.h>`, provides macros that invoke a corresponding math function based on the types of the parameters.

C run-time library math functions come in real and complex variants. Each variant comes in three 'flavors', depending on the type of the argument: `float`, `double`, and `long double`.

For example, to get the absolute value of a real floating-point value, you'd call one of `fabsf`, `fabs`, or `fabsl` depending on whether you are passing a `float`, `double`, or `long double` argument, respectively. To get the complex (or norm, modulus, or magnitude) absolute value, you'd call one of `cabsf`, `cabs`, or `cabsl` depending on whether you are passing a `float`, `double`, and `long double`complex argument, respectively.

`<tgmath.h>` contains macros that simplify the selection of the right math function to call. The macros examine the type that you pass them, and then call the right function. For example, the `sqrt` macro turns `sqrt(9.9f)` into a call to `sqrtf()`, whereas it turns `sqrt(9.9)`into a call to `sqrt()`.

These macros are implemented using the C11 keyword _Generic, so they are portable.

The following table lists the macros that are available and what they expand to:

|Macro  |Real</br>`float`  | Real</br>`double` | Real</br>`long double` | Complex</br>`float` | Complex</br>`double` | Complex</br>`long double` |
|---------|---------|---------|---------|---------|---------|---------|
| `fabs` | `fabs` | 


## See also

[C Run-Time library reference](c-run-time-library-reference.md)
