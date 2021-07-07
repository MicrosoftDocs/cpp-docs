---
description: "Learn more about: treat_as_floating_point Structure"
title: "treat_as_floating_point Structure"
ms.date: "11/04/2016"
f1_keywords: ["chrono/std::chrono::treat_as_floating_point"]
---
# `treat_as_floating_point` structure

See if  `Rep` can be treated as a floating-point type.

## Syntax

```cpp
template <class T>
struct treat_as_floating_point : is_floating_point<T>;
```

### Parameters

*`T`*\
The type to test.

## Remarks

`T` can be treated as a floating-point type only when the specialization `treat_as_floating_point<T>` is derived from [true_type](type-traits-typedefs.md#true_type). The class template can be specialized for a user-defined type.

## Requirements

**Header:** `<chrono>`

**Namespace:** `std::chrono`

## See also

[`<chrono>`](chrono.md)\
[Header Files Reference](cpp-standard-library-header-files.md)
