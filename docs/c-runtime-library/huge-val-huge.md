---
description: "Learn more about: HUGE_VAL, _HUGE"
title: "HUGE_VAL, _HUGE"
ms.date: "11/04/2016"
api_name: ["_HUGE"]
api_location: ["msvcrt.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CORECRT_MATH/HUGE_VAL", "CORECRT_MATH/HUGE_VALF", "CORECRT_MATH/HUGE_VALL", "CORECRT_MATH/HUGE", "CORECRT_MATH/_HUGE", "HUGE_VAL", "HUGE_VALF", "HUGE_VALL", "HUGE", "_HUGE"]
helpviewer_keywords: ["_HUGE constant", "HUGE_VAL constant", "double value"]
ms.assetid: 3f044b45-02cd-46b2-b1de-87fd0441dd6a
---
# `HUGE_VAL`, `_HUGE`

## Syntax

```C
#include <math.h>
```

## Remarks

`HUGE_VAL` is the largest representable double value. This value is returned by many run-time math functions when an error occurs. For some functions, `-HUGE_VAL` is returned. `HUGE_VAL` is defined as the result of a floating-point product that is guaranteed to overflow. `HUGE_VALF` and `HUGE_VALL` are the largest representable `float` and `long double` typed values, respectively. The internal value `_HUGE` and the synonymous `HUGE` are defined similarly, but run-time math functions return `HUGE_VAL`. You should also use `HUGE_VAL` in your code for consistency.

## See also

[Global constants](./global-constants.md)
