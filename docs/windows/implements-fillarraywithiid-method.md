---
title: "Implements::FillArrayWithIid Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Implements::FillArrayWithIid"]
dev_langs: ["C++"]
helpviewer_keywords: ["FillArrayWithIid method"]
ms.assetid: b2e62e3f-0ab9-4c70-aad7-856268544f44
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Implements::FillArrayWithIid Method

Inserts the interface ID specified by the current zeroth template parameter into the specified array element.

## Syntax

```cpp
__forceinline static void FillArrayWithIid(
   unsigned long &index,
   _In_ IID* iids
);
```

### Parameters

*index*  
A zero-based index that indicates the starting array element for this operation. When this operation completes, *index* is incremented by 1.

*iids*  
An array of type IID.

## Remarks

Internal helper function.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL

## See Also

[Implements Structure](../windows/implements-structure.md)