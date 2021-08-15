---
description: "Learn more about: is_null_pointer Class"
title: "is_null_pointer Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_null_pointer"]
helpviewer_keywords: ["is_null_pointer"]
ms.assetid: f3b3601b-f162-4803-a6e9-dabf5c3876cc
---
# is_null_pointer Class

Tests if type is std::nullptr_t.

## Syntax

```cpp
template <class T>
struct is_null_pointer;
```

### Parameters

*T*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *T* is `std::nullptr_t`, otherwise it holds false.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)
