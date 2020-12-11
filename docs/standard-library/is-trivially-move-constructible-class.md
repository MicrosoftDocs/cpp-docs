---
description: "Learn more about: is_trivially_move_constructible Class"
title: "is_trivially_move_constructible Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_trivially_move_constructible"]
helpviewer_keywords: ["is_trivially_move_constructible"]
ms.assetid: 740bdec7-65e5-47b3-b94f-a2479ceac3ec
---
# is_trivially_move_constructible Class

Tests if type has trivial move constructor.

## Syntax

```cpp
template <class Ty>
struct is_trivially_move_constructible;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is a class that has a trivial move constructor, otherwise it holds false.

A move constructor for a class *Ty* is trivial if:

it is implicitly declared

its parameter types are equivalent to those of an implicit declaration

the class *Ty* has no virtual functions

the class *Ty* has no virtual bases

the class has no volatile non-static data members

all the direct bases of the class *Ty* have trivial move constructors

the classes of all the non-static data members of class type have trivial move constructors

the classes of all the non-static data members of type array of class have trivial move constructors

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)
