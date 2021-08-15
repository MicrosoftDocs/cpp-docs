---
description: "Learn more about: &lt;limits&gt; enums"
title: "&lt;limits&gt; enums"
ms.date: "11/04/2016"
f1_keywords: ["limits/std::float_denorm_style", "limits/std::float_round_style"]
ms.assetid: c86680a2-ba97-4ed9-8c20-a448857d7dc5
---
# &lt;limits&gt; enums

## <a name="float_denorm_style"></a> float_denorm_style

The enumeration describes the various methods that an implementation can choose for representing a denormalized floating-point value — one too small to represent as a normalized value:

```cpp
enum float_denorm_style {
    denorm_indeterminate = -1,
    denorm_absent = 0,
    denorm_present = 1    };
```

### Return Value

The enumeration returns:

- `denorm_indeterminate` if the presence or absence of denormalized forms cannot be determined at translation time.

- `denorm_absent` if denormalized forms are absent.

- `denorm_present` if denormalized forms are present.

### Example

See [numeric_limits::has_denorm](../standard-library/numeric-limits-class.md#has_denorm) for an example in which the values of this enumeration may be accessed.

## <a name="float_round_style"></a> float_round_style

The enumeration describes the various methods that an implementation can choose for rounding a floating-point value to an integer value.

```cpp
enum float_round_style {
    round_indeterminate = -1,
    round_toward_zero = 0,
    round_to_nearest = 1,
    round_toward_infinity = 2,
    round_toward_neg_infinity = 3    };
```

### Return Value

The enumeration returns:

- `round_indeterminate` if the rounding method cannot be determined.

- `round_toward_zero` if the round toward zero.

- `round_to_nearest` if the round to nearest integer.

- `round_toward_infinity` if the round away from zero.

- `round_toward_neg_infinity` if the round to more negative integer.

### Example

See [numeric_limits::round_style](../standard-library/numeric-limits-class.md#round_style) for an example in which the values of this enumeration may be accessed.
