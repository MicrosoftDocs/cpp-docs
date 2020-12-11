---
description: "Learn more about: isnormal"
title: "isnormal"
ms.date: "01/31/2019"
f1_keywords: ["isnormal", "math/isnormal"]
helpviewer_keywords: ["isnormal function"]
---
# isnormal

Determines whether a floating-point value is a normal value.

## Syntax

```C
int isnormal(
   /* floating-point */ x
); /* C-only macro */

template <class FloatingType>
inline bool isnormal(
   FloatingType x
) throw(); /* C++-only function template */
```

### Parameters

*x*<br/>
The floating-point value to test.

## Return value

**isnormal** returns a nonzero value (**`true`** in C++ code) if the argument *x* is neither zero, subnormal, infinite, nor a NaN. Otherwise, **isnormal** returns 0 (**`false`** in C++ code).

## Remarks

**isnormal** is a macro when compiled as C, and an inline function template when compiled as C++.

## Requirements

|Function|Required header (C)|Required header (C++)|
|--------------|---------------------------|-------------------------------|
|**isnormal**|\<math.h>|\<math.h> or \<cmath>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[isfinite, _finite, _finitef](finite-finitef.md)<br/>
[isinf](isinf.md)<br/>
[isnan, _isnan, _isnanf](isnan-isnan-isnanf.md)<br/>
[_fpclass, _fpclassf](fpclass-fpclassf.md)<br/>
