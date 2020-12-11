---
description: "Learn more about: is_move_assignable Class"
title: "is_move_assignable Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_move_assignable"]
helpviewer_keywords: ["is_move_assignable"]
ms.assetid: f33137f2-0639-4912-8745-bc0f9fd18d28
---
# is_move_assignable Class

Tests if the type can be move assigned.

## Syntax

```cpp
template <class T>
struct is_move_assignable;
```

### Parameters

*T*\
The type to query.

## Remarks

A type is move assignable if an rvalue reference to the type can be assigned to a reference to the type. The type predicate is equivalent to `is_assignable<T&, T&&>`. Move assignable types include referenceable scalar types and class types that have either compiler-generated or user-defined move assignment operators.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)
