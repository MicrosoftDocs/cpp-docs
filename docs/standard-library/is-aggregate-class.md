---
description: "Learn more about: is_aggregate Class"
title: "is_aggregate Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_aggregate"]
helpviewer_keywords: ["is_aggregate"]
---
# is_aggregate Class

Tests whether the type is a class type marked `aggregate`.

## Syntax

```cpp
template <class T>
struct is_aggregate;
```

### Parameters

*T*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *T* is a class type marked `aggregate`, otherwise it holds false. If *T* is a class type, it must be a complete type.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)
