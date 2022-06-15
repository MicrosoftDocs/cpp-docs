---
description: "Learn more about: duration_values Structure"
title: "duration_values Structure"
ms.date: 01/05/2022
f1_keywords: ["chrono/std::chrono::duration_values", "chrono/std::chrono::duration_values::max", "chrono/std::chrono::duration_values::min", "chrono/std::chrono::duration_values::zero"]
dev_langs: ["C++"]
---
# `duration_values` structure

Provides specific values for the [`duration`](../standard-library/duration-class.md) template parameter `Rep`.

## Syntax

```cpp
template <class Rep>
struct duration_values;
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[`max`](#max)|Static. Specifies the upper limit for a value of type `Rep`.|
|[`min`](#min)|Static. Specifies the lower limit for a value of type `Rep`.|
|[`zero`](#zero)|Static. Returns `Rep(0)`.|

## Requirements

**Header:** `<chrono>`

**Namespace:** `std::chrono`

## <a name="max"></a> `duration_values::max`

Static method that returns the upper bound for values of type `Rep`.

```cpp
static constexpr Rep max();
```

### Return value

In effect, returns `numeric_limits<Rep>::max()`.

### Remarks

When `Rep` is a user-defined type, the return value must be greater than [duration_values::zero](#zero).

## <a name="min"></a> `duration_values::min`

Static method that returns the lower bound for values of type `Rep`.

```cpp
static constexpr Rep min();
```

### Return value

In effect, returns `numeric_limits<Rep>::lowest()`.

### Remarks

When `Rep` is a user-defined type, the return value must be less than or equal to [duration_values::zero](#zero).

## <a name="zero"></a> `duration_values::zero`

Returns `Rep(0)`.

```cpp
static constexpr Rep zero();
```

### Remarks

When `Rep` is a user-defined type, the return value must represent the additive infinity.

## See also

[`<chrono>`](../standard-library/chrono.md)\
[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
