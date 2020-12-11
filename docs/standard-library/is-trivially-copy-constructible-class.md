---
description: "Learn more about: is_trivially_copy_constructible Class"
title: "is_trivially_copy_constructible Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_trivially_copy_constructible"]
helpviewer_keywords: ["is_trivially_copy_constructible"]
ms.assetid: 4274cef5-afdd-4f2d-bc83-7562e7944ddf
---
# is_trivially_copy_constructible Class

Tests if the type has a trivial copy constructor.

## Syntax

```cpp
template <class T>
struct is_trivially_copy_constructible;
```

### Parameters

*T*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *T* is a class that has a trivial copy constructor, otherwise it holds false.

A copy constructor for a class *T* is trivial if it is implicitly declared, the class *T* has no virtual functions or virtual bases, all the direct bases of class *T* have trivial copy constructors, the classes of all the non-static data members of class type have trivial copy constructors, and the classes of all the non-static data members of type array of class have trivial copy constructors.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)
