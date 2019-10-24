---
title: "is_move_constructible Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_move_constructible"]
helpviewer_keywords: ["is_move_constructible"]
ms.assetid: becdf076-7419-488d-a335-78adf2478b9b
---
# is_move_constructible Class

Tests whether the type can be constructed by using a move operation.

## Syntax

```cpp
template <class T>
struct is_move_constructible;
```

### Parameters

*T*\
The type to be evaluated

## Remarks

A type predicate that evaluates to true if the type *T* can be constructed by using a move operation. This predicate is equivalent to `is_constructible<T, T&&>`.\
Note: A type *T* without a move constructor, but with a copy constructor that accepts a `const T&` argument, satisfies `std::is_move_constructible`.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)
