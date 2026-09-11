---
description: "Learn more about: isfinite, _finite, _finitef"
title: "isfinite, _finite, _finitef"
ms.date: "01/31/2019"
api_name: ["_finite", "_finitef"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["isfinite", "finite", "_finite", "_finitef", "math/isfinite", "math/_finite", "math/_finitef", "float/_finite"]
helpviewer_keywords: ["finite function", "_finite function", "_finitef function"]
ms.assetid: 5a7d7ca7-befb-4e1f-831d-28713c6eb805
---
# `isfinite`, `_finite`, `_finitef`

Determines whether a floating-point value is finite.

## Syntax

```C
int isfinite(
   /* floating-point */ x
); /* C-only macro */

template <class FloatingType>
inline bool isfinite(
   FloatingType x
) throw(); /* C++-only template function */

int _finite(
   double x
);

int _finitef(
   float x
); /* x64 and ARM/ARM64 only */
```

### Parameters

*`x`*\
The floating-point value to test.

## Return value

The `isfinite` macro and the `_finite` and `_finitef` functions return a non-zero value if *`x`* is a normal, subnormal, or signed zero (`±0`) finite value. They return 0 if the argument is infinite or Not a Number (NaN). The C++ inline template function `isfinite` behaves the same way but returns **`true`** or **`false`**.

## Remarks

`_finite` and `_finitef` are Microsoft-specific.

`isfinite` is a macro when compiled as C, and an inline template function when compiled as C++.

`_finitef` is only available when compiling for the x64, ARM, ARM64, or ARM64EC platforms.

## Requirements

| Function | Required header (C) | Required header (C++) |
|---|---|---|
| `isfinite` | `<math.h>` | `<math.h>` or `<cmath>` |
| `_finite` | `<float.h>` | `<float.h>` or `<cfloat>` |
| `_finitef` | `<math.h>` | `<math.h>` or `<cmath>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Math and floating-point support](../floating-point-support.md)\
[`fpclassify`](fpclassify.md)\
[`_fpclass`, `_fpclassf`](fpclass-fpclassf.md)\
[`isinf`](isinf.md)\
[`isnan`, `_isnan`, `_isnanf`](isnan-isnan-isnanf.md)\
[`isnormal`](isnormal.md)
