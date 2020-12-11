---
description: "Learn more about: is_trivially_copy_assignable Class"
title: "is_trivially_copy_assignable Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_trivially_copy_assignable"]
helpviewer_keywords: ["is_trivially_copy_assignable"]
ms.assetid: 7410133e-f367-493f-92a7-e34e3ec5e879
---
# is_trivially_copy_assignable Class

Tests whether the type has a trivial copy assignment operator.

## Syntax

```cpp
template <class Ty>
struct is_trivially_copy_assignable;
```

### Parameters

*T*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *T* is a class that has a trivial copy assignment operator, otherwise it holds false.

An assignment constructor for a class *T* is trivial if it is implicitly provided, the class *T* has no virtual functions, the class *T* has no virtual bases, the classes of all the non-static data members of class type have trivial assignment operators, and the classes of all the non-static data members of type array of class have trivial assignment operators.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)
