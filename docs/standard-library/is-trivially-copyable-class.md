---
description: "Learn more about: is_trivially_copyable Class"
title: "is_trivially_copyable Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_trivially_copyable"]
helpviewer_keywords: ["is_trivially_copyable"]
ms.assetid: 89a53bf8-036c-4108-91e1-fe34adbde8b3
---
# is_trivially_copyable Class

Tests whether the type is a trivially copyable type.

## Syntax

```cpp
template <class T>
struct is_trivially_copyable;
```

### Parameters

*T*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *T* is a trivially copyable type, otherwise it holds false. Trivially copyable types have no non-trivial copy operations, move operations, or destructors. Generally, a copy operation is considered trivial if it can be implemented as a bitwise copy. Both built-in types and arrays of trivially copyable types are trivially copyable.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)
