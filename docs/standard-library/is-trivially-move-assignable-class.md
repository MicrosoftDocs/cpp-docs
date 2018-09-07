---
title: "is_trivially_move_assignable Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_trivially_move_assignable"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_trivially_move_assignable"]
ms.assetid: 374f7322-0706-4bc1-a1a5-4191d0315e28
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# is_trivially_move_assignable Class

Tests whether the type has a trivial move assignment operator.

## Syntax

```cpp
template <class Ty>
struct is_trivially_move_assignable;
```

### Parameters

*Ty*<br/>
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is a class that has a trivial move assignment operator, otherwise it holds false.

A move assignment operator for a class *Ty* is trivial if:

it is implicitly provided

the class *Ty* has no virtual functions

the class *Ty* has no virtual bases

the classes of all the non-static data members of class type have trivial move assignment operators

the classes of all the non-static data members of type array of class have trivial move assignment operators

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
