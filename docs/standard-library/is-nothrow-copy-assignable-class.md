---
description: "Learn more about: is_nothrow_copy_assignable Class"
title: "is_nothrow_copy_assignable Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_nothrow_copy_assignable"]
helpviewer_keywords: ["is_nothrow_copy_assignable"]
ms.assetid: baa8abd6-4f53-489f-abba-8d5d5c53bbbc
---
# is_nothrow_copy_assignable Class

Tests whether type has a copy assignment operator that is known to the compiler not to throw.

## Syntax

```cpp
template <class T>
struct is_nothrow_copy_assignable;
```

### Parameters

*T*\
The type to query.

## Remarks

An instance of the type predicate holds true for a referenceable type *T* where `is_nothrow_assignable<T&, const T&>` holds true; otherwise it holds false.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[is_nothrow_assignable Class](../standard-library/is-nothrow-assignable-class.md)
