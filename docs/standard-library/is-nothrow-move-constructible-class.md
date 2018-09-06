---
title: "is_nothrow_move_constructible Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_nothrow_move_constructible"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_nothrow_move_constructible"]
ms.assetid: d186d97b-7b89-470a-8d30-993046a83379
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# is_nothrow_move_constructible Class

Tests whether type has a **nothrow** move constructor.

## Syntax

```cpp
template <class Ty>
struct is_nothrow_move_constructible;
```

### Parameters

*Ty*<br/>
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* has a nothrow move constructor, otherwise it holds false.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
