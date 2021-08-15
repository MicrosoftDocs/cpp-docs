---
description: "Learn more about: is_destructible Class"
title: "is_destructible Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_destructible"]
helpviewer_keywords: ["is_destructible"]
ms.assetid: 3bb9b718-1ad5-49ae-93cc-92b93b546b4d
---
# is_destructible Class

Tests whether the type is destructible.

## Syntax

```cpp
template <class T>
struct is_destructible;
```

### Parameters

*T*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *T* is a destructible type, otherwise it holds false. Destructible types are reference types, object types, and types where for some type `U` equal to `remove_all_extents_t<T>` the unevaluated operand `std::declval<U&>.~U()` is well-formed. Other types, including incomplete types, **`void`**, and function types, are not destructible types.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)
