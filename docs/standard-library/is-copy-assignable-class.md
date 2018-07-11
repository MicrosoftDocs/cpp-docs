---
title: "is_copy_assignable Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_copy_assignable"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_copy_assignable"]
ms.assetid: 3ae6bca1-85fb-4829-9ee9-0183b081ff50
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# is_copy_assignable Class

Tests whether type has can be copied on assignment.

## Syntax

```cpp
template <class Ty>
struct is_copy_assignable;
```

### Parameters

*Ty*
 The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is a class that has a copy assignment operator, otherwise it holds false. Equivalent to is_assignable\<Ty&, const Ty&>.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
