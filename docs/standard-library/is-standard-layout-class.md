---
title: "is_standard_layout Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_standard_layout"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_standard_layout class", "is_standard_layout"]
ms.assetid: 15ccf111-f537-45ef-b552-59152a7ba312
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# is_standard_layout Class

Tests if type is a standard layout.

## Syntax

```cpp
template <class Ty>
struct is_standard_layout;
```

### Parameters

|Parameter|Description|
|---------------|-----------------|
|`Ty`|The type to query|

## Remarks

An instance of this type predicate holds true if the type `Ty` is a class that has a standard layout of member objects in memory, otherwise it holds false.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
