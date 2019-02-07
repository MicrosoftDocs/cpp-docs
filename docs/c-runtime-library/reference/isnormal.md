---
title: "isnormal"
ms.date: "01/31/2019"
f1_keywords: ["isnormal", "math/isnormal"]
helpviewer_keywords: ["isnormal function"]
---
# isnormal

Determines whether a floating-point value is an infinity.

## Syntax

```C
int isnormal(
   /* floating-point */ x
); /* C-only macro */

template <class FloatingType>
inline bool isnormal(
   FloatingType x
) throw(); /* C++-only template function */
```

### Parameters

*x*<br/>
The floating-point value to test.

## Return value

**isnormal** returns a nonzero value  (**true** in C++ code) if the argument *x* is both finite and not subnormal. **isnormal** returns 0 (**false** in C++ code) if the argument is a subnormal, an infinity, or a NAN.

## Remarks

**isnormal** is a macro when compiled as C, and an inline template function when compiled as C++.

## Requirements

|Function|Required header (C)|Required header (C++)|
|--------------|---------------------------|-------------------------------|
|**isnormal**|\<math.h>|\<math.h> or \<cmath>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

- [Floating-Point Support](../../c-runtime-library/floating-point-support.md)
- [isfinite, _finite, _finitef](finite-finitef.md)
- [isinf](isinf.md)
- [isnan, _isnan, _isnanf](isnan-isnan-isnanf.md)
- [_fpclass, _fpclassf](fpclass-fpclassf.md)
