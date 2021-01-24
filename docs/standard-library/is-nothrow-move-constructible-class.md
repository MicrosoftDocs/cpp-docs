---
description: "Learn more about: is_nothrow_move_constructible Class"
title: "is_nothrow_move_constructible Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_nothrow_move_constructible"]
helpviewer_keywords: ["is_nothrow_move_constructible"]
ms.assetid: d186d97b-7b89-470a-8d30-993046a83379
---
# is_nothrow_move_constructible Class

Tests whether type has a **`nothrow`** move constructor.

## Syntax

```cpp
template <class Ty>
struct is_nothrow_move_constructible;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* has a nothrow move constructor, otherwise it holds false.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)
