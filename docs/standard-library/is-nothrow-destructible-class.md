---
title: "is_nothrow_destructible Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp", "devlang-cpp"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_nothrow_destructible"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_nothrow_destructible"]
ms.assetid: 0bbd8a28-e312-4d72-bd28-aac027f974d3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# is_nothrow_destructible Class

Tests whether the type is destructible and the destructor is known to the compiler not to throw.

## Syntax

```cpp
template <class T>
struct is_nothrow_destructible;
```

### Parameters

*T*<br/>
The type to query.

## Remarks

An instance of the type predicate holds true if the type *T* is a destructible type, and the destructor is known to the compiler not to throw. Otherwise, it holds false.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
