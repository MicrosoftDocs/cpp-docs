---
title: "is_trivially_destructible Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp", "devlang-cpp"]
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: ["type_traits/std::is_trivially_destructible"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_trivially_destructible"]
ms.assetid: 3f7a787d-2448-40c5-ac51-a228318e02ce
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# is_trivially_destructible Class

Tests whether the type is trivially destructible.

## Syntax

```cpp
template <class T>
struct is_trivially_destructible;
```

### Parameters

`T`
 The type to query.

## Remarks

An instance of the type predicate holds true if the type `T` is a destructible type, and the destructor is known to the compiler to use no non-trivial operations. Otherwise, it holds false.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
