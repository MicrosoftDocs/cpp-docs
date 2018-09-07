---
title: "is_null_pointer Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp", "devlang-cpp"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_null_pointer"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_null_pointer"]
ms.assetid: f3b3601b-f162-4803-a6e9-dabf5c3876cc
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# is_null_pointer Class

Tests if type is std::nullptr_t.

## Syntax

```cpp
template <class T>
struct is_null_pointer;
```

### Parameters

*T*<br/>
The type to query.

## Remarks

An instance of the type predicate holds true if the type *T* is `std::nullptr_t`, otherwise it holds false.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
