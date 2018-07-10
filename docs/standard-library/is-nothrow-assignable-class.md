---
title: "is_nothrow_assignable Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp", "devlang-cpp"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_nothrow_assignable"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_nothrow_assignable"]
ms.assetid: aa3aca92-308b-4b1d-b3f3-c54216c48fe7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# is_nothrow_assignable Class

Tests whether a value of *From* type can be assigned to *To* type and the assignment is known not to throw.

## Syntax

```cpp
template <class To, class From>
struct is_nothrow_assignable;
```

### Parameters

*To*
 The type of the object that receives the assignment.

*From*
 The type of the object that provides the value.

## Remarks

The expression `declval<To>() = declval<From>()` must be well-formed and must be known to the compiler not to throw. Both *From* and *To* must be complete types, **void**, or arrays of unknown bound.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
