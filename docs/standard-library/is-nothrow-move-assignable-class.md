---
title: "is_nothrow_move_assignable Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_nothrow_move_assignable"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_nothrow_move_assignable"]
ms.assetid: 000baa02-cbba-49de-9870-af730033348e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# is_nothrow_move_assignable Class

Tests whether type has a **nothrow** move assignment operator.

## Syntax

```cpp
template <class Ty>
struct is_nothrow_move_assignable;
```

### Parameters

*Ty*<br/>
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* has a nothrow move assignment operator, otherwise it holds false.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
