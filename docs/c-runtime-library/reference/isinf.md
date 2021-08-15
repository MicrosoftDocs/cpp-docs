---
description: "Learn more about: isinf"
title: "isinf"
ms.date: "01/31/2019"
f1_keywords: ["isinf", "math/isinf"]
helpviewer_keywords: ["isinf function"]
---
# isinf

Determines whether a floating-point value is an infinity.

## Syntax

```C
int isinf(
   /* floating-point */ x
); /* C-only macro */

template <class FloatingType>
inline bool isinf(
   FloatingType x
) throw(); /* C++-only template function */
```

### Parameters

*x*<br/>
The floating-point value to test.

## Return value

**isinf** returns a nonzero value  (**`true`** in C++ code) if the argument *x* is a positive or negative infinity. **isinf** returns 0 (**`false`** in C++ code) if the argument is finite or a NAN. Both normal and subnormal floating-point values are considered finite.

## Remarks

**isinf** is a macro when compiled as C, and an inline template function when compiled as C++.

## Requirements

|Function|Required header (C)|Required header (C++)|
|--------------|---------------------------|-------------------------------|
|**isinf**|\<math.h>|\<math.h> or \<cmath>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[fpclassify](fpclassify.md)<br/>
[_fpclass, _fpclassf](fpclass-fpclassf.md)<br/>
[isfinite, _finite, _finitef](finite-finitef.md)<br/>
[isnan, _isnan, _isnanf](isnan-isnan-isnanf.md)<br/>
[isnormal](isnormal.md)<br/>
