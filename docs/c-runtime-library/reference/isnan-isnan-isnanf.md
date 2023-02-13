---
description: "Learn more about: isnan, _isnan, _isnanf"
title: "isnan, _isnan, _isnanf"
ms.date: "01/31/2019"
api_name: ["_isnan", "_isnanf", "isnan"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_isnan", "isnan", "math/isnan", "math/_isnan", "math/_isnanf", "_isnanf"]
helpviewer_keywords: ["NaN (not a number)", "_isnan function", "IEEE floating-point representation", "Not a Number (NaNs)", "isnan function"]
ms.assetid: 391fbc5b-89a4-4fba-997e-68f1131caf82
---
# `isnan`, `_isnan`, `_isnanf`

Tests if a floating-point value is a NaN ("Not a Number").

## Syntax

```C
int isnan(
   /* floating-point */ x
); /* C-only macro */

int _isnan(
   double x
);

int _isnanf(
   float x
); /* x64 only */

template <class T>
bool isnan(
   T x
) throw(); /* C++ only */
```

### Parameters

*`x`*\
The floating-point value to test.

## Return value

In C, the **`isnan`** macro and the **`_isnan`** and **`_isnanf`** functions return a non-zero value if the argument *`x`* is a NaN; otherwise they return 0.

In C++, the **`isnan`** template function returns **`true`** if the argument *`x`* is a NaN; otherwise it returns **`false`**.

## Remarks

Because a NaN value doesn't compare as equal to itself or to any other NaN value, to detect one, you must use one of these functions or macros. A NaN is generated when the result of a floating-point operation can't be represented in IEEE-754 floating-point format for the specified type. For information about how a NaN is represented for output, see [`printf`](printf-printf-l-wprintf-wprintf-l.md).

When compiled as C++, the **`isnan`** macro isn't defined, and an **`isnan`** template function is defined instead. It behaves the same way as the macro, but returns a value of type **`bool`** instead of an integer.

The **`_isnan`** and **`_isnanf`** functions are Microsoft-specific. The **`_isnanf`** function is only available when compiled for x64.

## Requirements

| Routine | Required header (C) | Required header (C++) |
|---|---|---|
| **`isnan`**, **`_isnanf`** | \<math.h> | \<math.h> or \<cmath> |
| **`_isnan`** | \<float.h> | \<float.h> or \<cfloat> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Math and floating-point support](../floating-point-support.md)\
[`fpclassify`](fpclassify.md)\
[`_fpclass`, `_fpclassf`](fpclass-fpclassf.md)\
[`isfinite`, `_finite`, `_finitef`](finite-finitef.md)\
[`isinf`](isinf.md)\
[`isnormal`](isnormal.md)
