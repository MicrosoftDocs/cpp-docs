---
description: "Learn more about: is_trivially_default_constructible Class"
title: "is_trivially_default_constructible Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_trivially_default_constructible"]
helpviewer_keywords: ["is_trivially_default_constructible"]
ms.assetid: 653ecd73-909f-4dd8-b95a-d1164d1c2da4
---
# is_trivially_default_constructible Class

Tests if type has trivial default constructor.

## Syntax

```cpp
template <class Ty>
struct is_trivially_default_constructible;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is a class that has a trivial constructor, otherwise it holds false.

A default constructor for a class *Ty* is trivial if:

- it is an implicitly declared default constructor

- the class *Ty* has no virtual functions

- the class *Ty* has no virtual bases

- all the direct bases of the class *Ty* have trivial constructors

- the classes of all the non-static data members of class type have trivial constructors

- the classes of all the non-static data members of type array of class have trivial constructors

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)
