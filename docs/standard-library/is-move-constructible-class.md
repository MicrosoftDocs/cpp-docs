---
title: "is_move_constructible Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_move_constructible"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_move_constructible"]
ms.assetid: becdf076-7419-488d-a335-78adf2478b9b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# is_move_constructible Class

Tests whether the type has a move constructor.

## Syntax

```cpp
template <class T>
struct is_move_constructible;
```

### Parameters

*T*
 The type to be evaluated

## Remarks

A type predicate that evaluates to true if the type *T* can be constructed by using a move operation. This predicate is equivalent to `is_constructible<T, T&&>`.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
