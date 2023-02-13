---
description: "Learn more about: signbit"
title: "signbit"
ms.date: "01/31/2019"
f1_keywords: ["signbit", "math/signbit"]
helpviewer_keywords: ["signbit function"]
---
# `signbit`

Determines whether a floating-point value is negative.

## Syntax

```C
int signbit(
   /* floating-point */ x
); /* C-only macro */

inline bool signbit(
   float x
) throw(); /* C++-only overloaded function */

inline bool signbit(
   double x
) throw(); /* C++-only overloaded function */

inline bool signbit(
   long double x
) throw(); /* C++-only overloaded function */
```

### Parameters

*`x`*\
The floating-point value to test.

## Return value

**`signbit`** returns a non-zero value (**`true`** in C++) if the argument *`x`* is negative or negative infinity. It returns 0 (**`false`** in C++) if the argument is non-negative, positive infinity, or a NAN.

## Remarks

**`signbit`** is a macro when compiled as C, and an overloaded inline function when compiled as C++.

## Requirements

| Function | Required header (C) | Required header (C++) |
|---|---|---|
| **`signbit`** | \<math.h> | \<math.h> or \<cmath> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Math and floating-point support](../floating-point-support.md)\
[`isfinite`, `_finite`, `_finitef`](finite-finitef.md)\
[`isinf`](isinf.md)\
[`isnan`, `_isnan`, `_isnanf`](isnan-isnan-isnanf.md)\
[`isnormal`](isnormal.md)\
[`_fpclass`, `_fpclassf`](fpclass-fpclassf.md)
