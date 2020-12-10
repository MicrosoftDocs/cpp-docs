---
description: "Learn more about: is_assignable Class"
title: "is_assignable Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_assignable"]
helpviewer_keywords: ["is_assignable"]
ms.assetid: 53444287-c8be-4ad2-9487-a85c066a4f84
---
# is_assignable Class

Tests whether a value of `From` type can be assigned to a `To` type.

## Syntax

```cpp
template <class To, class From>
struct is_assignable;
```

### Parameters

*To*\
The type of the object that receives the assignment.

*From*\
The type of the object that provides the value.

## Remarks

The unevaluated expression `declval<To>() = declval<From>()` must be well-formed. Both `From` and `To` must be complete types, **`void`**, or arrays of unknown bound.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)
