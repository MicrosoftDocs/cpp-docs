---
title: "is_trivially_assignable Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp", "devlang-cpp"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_trivially_assignable"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_trivially_assignable"]
ms.assetid: 1284a8f7-4093-426d-9c9a-dabb46f90d6d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# is_trivially_assignable Class

Tests whether a value of `From` type can be trivially assigned to `To` type

## Syntax

```cpp
template <class To, class From>
struct is_trivially_assignable;
```

### Parameters

To
 The type of the object that receives the assignment.

From
 The type of the object that provides the value.

## Remarks

The expression `declval<To>() = declval<From>()` must be well-formed, and must be known to the compiler to require no non-trivial operations. Both `From` and `To` must be complete types, **void**, or arrays of unknown bound.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
