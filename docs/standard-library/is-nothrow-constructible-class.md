---
title: "is_nothrow_constructible Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp", "devlang-cpp"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_nothrow_constructible"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_nothrow_constructible"]
ms.assetid: 8be3f927-283e-4d67-95a5-8bf5dc4e7a3d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# is_nothrow_constructible Class

Tests whether a type is constructible and is known not to throw when the specified argument types are used.

## Syntax

```cpp
template <class T, class... Args>
struct is_nothrow_constructible;
```

### Parameters

*T*<br/>
The type to query.

*Args*<br/>
The argument types to match in a constructor of *T*.

## Remarks

An instance of the type predicate holds true if the type *T* is constructible by using the argument types in *Args*, and the constructor is known by the compiler not to throw; otherwise it holds false. Type *T* is constructible if the variable definition `T t(std::declval<Args>()...);` is well-formed. Both *T* and all the types in *Args* must be complete types, **void**, or arrays of unknown bound.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
