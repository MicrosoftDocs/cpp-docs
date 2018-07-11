---
title: "is_trivial Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp", "devlang-cpp"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_trivial"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_trivial"]
ms.assetid: 6beb11d4-2f38-4c7e-9959-ca5d26250df7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# is_trivial Class

Tests whether the type is a trivial type.

## Syntax

```cpp
template <class T>
struct is_trivial;
```

### Parameters

*T*
 The type to query.

## Remarks

An instance of the type predicate holds true if the type *T* is a trivial type, otherwise it holds false. Trivial types are scalar types, trivially copyable class types, arrays of these types and cv-qualified versions of these types.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
