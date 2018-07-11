---
title: "is_nothrow_copy_constructible Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_nothrow_copy_constructible"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_nothrow_copy_constructible"]
ms.assetid: f13a0bea-63b1-492a-9a45-d445df35c282
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# is_nothrow_copy_constructible Class

Tests whether type has a **nothrow** copy constructor.

## Syntax

```cpp
template <class Ty>
struct is_nothrow_copy_constructible;
```

### Parameters

*Ty*
 The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* has a nothrow copy constructor, otherwise it holds false.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
