---
title: "isgreater, isgreaterequal, isless, islessequal, islessgreater, isunordered"
description: "Learn more about: isgreater, isgreaterequal, isless, islessequal, islessgreater, isunordered"
ms.date: "01/31/2019"
f1_keywords: ["isgreater", "math/isgreater", "isgreaterequal", "math/isgreaterequal", "isless", "math/isless", "islessequal", "math/islessequal", "islessgreater", "math/islessgreater", "isunordered", "math/isunordered"]
helpviewer_keywords: ["isgreater function", "isgreaterequal function", "isless function", "islessequal function", "islessgreater function", "isunordered function"]
---
# `isgreater`, `isgreaterequal`, `isless`, `islessequal`, `islessgreater`, `isunordered`

Determines the ordering relationship between two floating-point values.

## Syntax

```C
int isgreater(
   /* floating-point */ x,
   /* floating-point */ y
); /* C-only macro */

int isgreaterequal(
   /* floating-point */ x,
   /* floating-point */ y
); /* C-only macro */

int isless(
   /* floating-point */ x,
   /* floating-point */ y
); /* C-only macro */

int islessequal(
   /* floating-point */ x,
   /* floating-point */ y
); /* C-only macro */

int islessgreater(
   /* floating-point */ x,
   /* floating-point */ y
); /* C-only macro */

int isunordered(
   /* floating-point */ x,
   /* floating-point */ y
); /* C-only macro */
```

```cpp
template <class FloatingType1, class FloatingType2>
inline bool isgreater(
   FloatingType1 x,
   FloatingType2 y
) throw(); /* C++-only template function */

template <class FloatingType1, class FloatingType2>
inline bool isgreaterequal(
   FloatingType1 x,
   FloatingType2 y
) throw(); /* C++-only template function */

template <class FloatingType1, class FloatingType2>
inline bool isless(
   FloatingType1 x,
   FloatingType2 y
) throw(); /* C++-only template function */

template <class FloatingType1, class FloatingType2>
inline bool islessequal(
   FloatingType1 x,
   FloatingType2 y
) throw(); /* C++-only template function */

template <class FloatingType1, class FloatingType2>
inline bool islessgreater(
   FloatingType1 x,
   FloatingType2 y
) throw(); /* C++-only template function */

template <class FloatingType1, class FloatingType2>
inline bool isunordered(
   FloatingType1 x,
   FloatingType2 y
) throw(); /* C++-only template function */
```

### Parameters

*`x`*, *`y`*\
The floating-point values to compare.

## Return value

In all comparisons, infinities of the same sign compare as equal. Negative infinity is less than any finite value or positive infinity. Positive infinity is greater than any finite value or negative infinity. Zeroes are equal regardless of sign. NaNs aren't less than, equal to, or greater than any value, including another NaN.

When neither argument is a NaN, the ordering macros **`isgreater`**, **`isgreaterequal`**, **`isless`**, and **`islessequal`** return a non-zero value if the specified ordering relation between *`x`* and *`y`* holds true. These macros return 0 if either or both arguments are NaNs or if the ordering relationship is false. The function forms behave the same way, but return **`true`** or **`false`**.

The **`islessgreater`** macro returns a non-zero value if both *`x`* and *`y`* aren't NaNs, and *`x`* is either less than or greater than *`y`*. It returns 0 if either or both arguments are NaNs, or if the values are equal. The function form behaves the same way, but returns **`true`** or **`false`**.

The **`isunordered`** macro returns a non-zero value if either *`x`*, *`y`*, or both are NaNs. Otherwise, it returns 0. The function form behaves the same way, but returns **`true`** or **`false`**.

## Remarks

These comparison operations are implemented as macros when compiled as C, and as inline template functions when compiled as C++.

## Requirements

| Function | Required header (C) | Required header (C++) |
|---|---|---|
| **`isgreater`**, **`isgreaterequal`**, **`isless`**,<br/>**`islessequal`**, **`islessgreater`**, **`isunordered`** | \<math.h> | \<math.h> or \<cmath> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Math and floating-point support](../floating-point-support.md)\
[`isfinite`, `_finite`, `_finitef`](finite-finitef.md)\
[`isinf`](isinf.md)\
[`isnan`, `_isnan`, `_isnanf`](isnan-isnan-isnanf.md)\
[`_fpclass`, `_fpclassf`](fpclass-fpclassf.md)
