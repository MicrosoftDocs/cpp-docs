---
description: "Learn more about: treat_as_floating_point structure"
title: "treat_as_floating_point Structure"
ms.date: 07/16/2021
f1_keywords: ["chrono/std::chrono::treat_as_floating_point"]
helpviewer_keywords: ["std::chrono [C++], treat_as_floating_point"]
dev_langs: ["C++"]

---
# `treat_as_floating_point` structure

Checks whether the specified type can be treated as a floating-point type.

## Syntax

```cpp
template <class T>
struct treat_as_floating_point : is_floating_point<T>;
```

**Helper variable template**

```cpp
template<class T>
inline constexpr bool treat_as_floating_point_v = treat_as_floating_point<T>::value;
```

### Parameters

*`T`*\
The type to test.

## Remarks

The purpose of this trait is to indicate whether a given class behaves like a floating-point type, and thus allows division of one value by another with acceptable loss of precision. If `treat_as_floating_point_v<T>` is false, `T` will be treated as if it behaves as an integral type for these conversions.

The [`duration`](duration-class.md) template uses the `treat_as_floating_point trait` to help determine if a `duration` object
can be converted to another `duration` with a different tick `period`.

If `treat_as_floating_point_v<T>` is true, implicit conversions are allowed between durations. Otherwise, the implicit convertibility depends on the tick periods of the durations.

## Requirements

**Header:** `<chrono>`

**Namespace:** `std::chrono`

## See also

[`<chrono>`](chrono.md)\
[Header Files Reference](cpp-standard-library-header-files.md)
