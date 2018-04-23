---
title: "is_final Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp", "devlang-cpp"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_final"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_final"]
ms.assetid: 9dbad82f-6685-4909-94e8-98e4a93994b9
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# is_final Class

Tests whether the type is a class type marked `final`.

## Syntax

```cpp
template <class T>
struct is_final;
```

### Parameters

`T`
 The type to query.

## Remarks

An instance of the type predicate holds true if the type `T` is a class type marked `final`, otherwise it holds false. If `T` is a class type, it must be a complete type.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
[final Specifier](../cpp/final-specifier.md)<br/>
