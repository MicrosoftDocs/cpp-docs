---
description: "Learn more about: Math Error Constants"
title: "Math Error Constants"
ms.date: "11/04/2016"
f1_keywords: ["_PLOSS", "_UNDERFLOW", "_TLOSS", "_SING", "_DOMAIN", "_OVERFLOW"]
helpviewer_keywords: ["_TLOSS constant", "_SING constant", "PLOSS constant", "UNDERFLOW constant", "_UNDERFLOW constant", "_OVERFLOW constant", "DOMAIN constant", "OVERFLOW constant", "TLOSS constant", "SING constant", "_DOMAIN constant", "_PLOSS constant", "math error constants"]
ms.assetid: 4be933a6-674e-45a5-8ac9-090023542f5b
---
# Math Error Constants

## Syntax

```
#include <math.h>
```

## Remarks

The math routines of the run-time library can generate math error constants.

These errors, described as follows, correspond to the exception types defined in MATH.H and are returned by the `_matherr` function when a math error occurs.

|Constant|Meaning|
|--------------|-------------|
|`_DOMAIN`|Argument to function is outside domain of function.|
|`_OVERFLOW`|Result is too large to be represented in function's return type.|
|`_PLOSS`|Partial loss of significance occurred.|
|`_SING`|Argument singularity: argument to function has illegal value. (For example, value 0 is passed to function that requires nonzero value.)|
|`_TLOSS`|Total loss of significance occurred.|
|`_UNDERFLOW`|Result is too small to be represented.|

## See also

[_matherr](../c-runtime-library/reference/matherr.md)<br/>
[Global Constants](../c-runtime-library/global-constants.md)
