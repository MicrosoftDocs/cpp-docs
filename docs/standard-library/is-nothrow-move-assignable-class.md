---
description: "Learn more about: is_nothrow_move_assignable Class"
title: "is_nothrow_move_assignable Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_nothrow_move_assignable"]
helpviewer_keywords: ["is_nothrow_move_assignable"]
ms.assetid: 000baa02-cbba-49de-9870-af730033348e
---
# is_nothrow_move_assignable Class

Tests whether type has a **`nothrow`** move assignment operator.

## Syntax

```cpp
template <class Ty>
struct is_nothrow_move_assignable;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* has a nothrow move assignment operator, otherwise it holds false.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)
