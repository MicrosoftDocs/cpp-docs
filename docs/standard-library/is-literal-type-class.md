---
description: "Learn more about: is_literal_type Class"
title: "is_literal_type Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_literal_type"]
helpviewer_keywords: ["is_literal_type"]
ms.assetid: a03a4ebb-ee66-48d6-91bb-41cf72b2401f
---
# is_literal_type Class

Tests whether a type can be used as a **`constexpr`** variable or be constructed, used by, or returned from **`constexpr`** functions.

## Syntax

```cpp
template <class T>
struct is_literal_type;
```

### Parameters

*T*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *T* is a *literal type*, otherwise it holds false. A literal type is either **`void`**, a scalar type, a reference type, an array of literal type, or a literal class type. A literal class type is a class type that has a trivial destructor, is either an aggregate type or has at least one non-move, non-copy **`constexpr`** constructor, and all of its base classes and non-static data members are non-volatile literal types. While the type of a literal is always a literal type, the concept of a literal type includes anything that the compiler can evaluate as a **`constexpr`** at compile time.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)
