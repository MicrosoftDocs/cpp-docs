---
title: "is_constructible Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp", "devlang-cpp"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_constructible"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_constructible"]
ms.assetid: 7cdec5ff-73cf-4f78-a9db-ced2e9c0fd7f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# is_constructible Class

Tests whether a type is constructible when the specified argument types are used.

## Syntax

```cpp
template <class T, class... Args>
struct is_constructible;
```

### Parameters

*T*<br/>
The type to query.

*Args*<br/>
The argument types to match in a constructor of *T*.

## Remarks

An instance of the type predicate holds true if the type *T* is constructible by using the argument types in *Args*, otherwise it holds false. Type *T* is constructible if the variable definition `T t(std::declval<Args>()...);` is well-formed. Both *T* and all the types in *Args* must be complete types, **void**, or arrays of unknown bound.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
