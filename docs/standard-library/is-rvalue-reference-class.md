---
description: "Learn more about: is_rvalue_reference Class"
title: "is_rvalue_reference Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_rvalue_reference"]
helpviewer_keywords: ["is_rvalue_reference class", "is_rvalue_reference"]
ms.assetid: 40a97072-7b5c-4274-9154-298d3dcf064a
---
# is_rvalue_reference Class

Tests if type is an rvalue reference.

## Syntax

```cpp
template <class Ty>
struct is_rvalue_reference;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of this type predicate holds true if the type *Ty* is an [rvalue reference](../cpp/rvalue-reference-declarator-amp-amp.md).

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[Lvalues and Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md)
