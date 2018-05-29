---
title: "is_nothrow_default_constructible Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_nothrow_default_constructible"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_nothrow_default_constructible"]
ms.assetid: c576fcc9-5be1-43aa-b93a-64d3f1848887
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# is_nothrow_default_constructible Class

Tests whether type has a non-throwing default constructor.

## Syntax

```cpp
template <class Ty>
struct is_nothrow_default_constructible;
```

### Parameters

`Ty`
 The type to query.

## Remarks

An instance of the type predicate holds true if the type `Ty` has a nothrow default constructor, otherwise it holds false. An instance of the type predicate is equivalent to `is_nothrow_constructible<Ty>`.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
