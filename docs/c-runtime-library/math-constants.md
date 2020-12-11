---
description: "Learn more about: Math Constants"
title: "Math Constants"
ms.date: "11/04/2016"
f1_keywords: ["c.constants.math"]
helpviewer_keywords: ["M_PI constant", "M_PI_2 constant", "math constants", "M_2_PI constant", "M_1_PI constant", "M_E constant", "USE_MATH_DEFINES constant", "M_LOG2E constant", "M_LOG10E constant", "M_LN10 constant", "M_SQRT1_2 constant", "_USE_MATH_DEFINES constant", "M_PI_4 constant", "constants, math", "M_2_SQRTPI constant", "M_SQRT2 constant", "M_LN2 constant"]
ms.assetid: db533c3f-6ae8-4520-9d35-c8fabbef3529
---
# Math Constants

## Syntax

```
#define _USE_MATH_DEFINES // for C++
#include <cmath>

#define _USE_MATH_DEFINES // for C
#include <math.h>
```

## Remarks

The following symbols are defined for the values of their indicated expressions:

|Symbol|Expression|Value|
|------------|----------------|-----------|
|M_E|e|2.71828182845904523536|
|M_LOG2E|log2(e)|1.44269504088896340736|
|M_LOG10E|log10(e)|0.434294481903251827651|
|M_LN2|ln(2)|0.693147180559945309417|
|M_LN10|ln(10)|2.30258509299404568402|
|M_PI|pi|3.14159265358979323846|
|M_PI_2|pi/2|1.57079632679489661923|
|M_PI_4|pi/4|0.785398163397448309616|
|M_1_PI|1/pi|0.318309886183790671538|
|M_2_PI|2/pi|0.636619772367581343076|
|M_2_SQRTPI|2/sqrt(pi)|1.12837916709551257390|
|M_SQRT2|sqrt(2)|1.41421356237309504880|
|M_SQRT1_2|1/sqrt(2)|0.707106781186547524401|

Math Constants are not defined in Standard C/C++. To use them, you must first define `_USE_MATH_DEFINES` and then include cmath or math.h.

The file ATLComTime.h includes math.h when your project is built in Release mode. If you use one or more of the math constants in a project that also includes ATLComTime.h, you must define `_USE_MATH_DEFINES` before you include ATLComTime.h.

## See also

[Global Constants](../c-runtime-library/global-constants.md)
