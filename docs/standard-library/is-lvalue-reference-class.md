---
title: "is_lvalue_reference Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_lvalue_reference"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_lvalue_reference class", "is_lvalue_reference"]
ms.assetid: 7f11896b-935c-4de1-9c87-9d0127f904e2
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# is_lvalue_reference Class

Tests if type is an lvalue reference.

## Syntax

```cpp
template <class Ty>
struct is_lvalue_reference;
```

### Parameters

*Ty*<br/>
The type to query.

## Remarks

An instance of this type predicate holds true if the type *Ty* is a reference to an object or to a function, otherwise it holds false. Note that *Ty* may not be an rvalue reference. For more information about rvalues, see [Rvalue Reference Declarator: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
[Lvalues and Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md)<br/>
