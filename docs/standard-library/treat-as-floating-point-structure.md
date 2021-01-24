---
description: "Learn more about: treat_as_floating_point Structure"
title: "treat_as_floating_point Structure"
ms.date: "11/04/2016"
f1_keywords: ["chrono/std::chrono::treat_as_floating_point"]
ms.assetid: d0a2161c-bbb2-4924-8961-7568d5ad5434
---
# treat_as_floating_point Structure

Specifies whether `Rep` can be treated as a floating-point type.

## Syntax

```cpp
template <class Rep>
struct treat_as_floating_point : is_floating_point<Rep>;
```

## Remarks

`Rep` can be treated as a floating-point type only when the specialization `treat_as_floating_point<Rep>` is derived from [true_type](../standard-library/type-traits-typedefs.md#true_type). The class template can be specialized for a user-defined type.

## Requirements

**Header:** \<chrono>

**Namespace:** std::chrono

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[\<chrono>](../standard-library/chrono.md)
