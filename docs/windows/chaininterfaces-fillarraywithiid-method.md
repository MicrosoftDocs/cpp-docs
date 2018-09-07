---
title: "ChainInterfaces::FillArrayWithIid Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::ChainInterfaces::FillArrayWithIid"]
dev_langs: ["C++"]
helpviewer_keywords: ["FillArrayWithIid method"]
ms.assetid: f1ce699c-dfb6-40a9-9ea0-e6703d3cf971
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ChainInterfaces::FillArrayWithIid Method

Stores the interface ID defined by the *I0* template parameter into a specified location in a specified array of interface IDs.

## Syntax

```cpp
__forceinline static void FillArrayWithIid(
   _Inout_ unsigned long &index,
   _In_ IID* iids
);
```

### Parameters

*index*  
Pointer to an index value into the *iids* array.

*iids*  
An array of interface IDs.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL

## See Also

[ChainInterfaces Structure](../windows/chaininterfaces-structure.md)