---
title: "Implements::CastToUnknown Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Implements::CastToUnknown"]
dev_langs: ["C++"]
helpviewer_keywords: ["CastToUnknown method"]
ms.assetid: ca3324f7-4136-406b-8698-7389f4f3d3c7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Implements::CastToUnknown Method

Gets a pointer to the underlying `IUnknown` interface.

## Syntax

```cpp
__forceinline IUnknown* CastToUnknown();
```

## Return Value

This operation always succeeds and returns the `IUnknown` pointer.

## Remarks

Internal helper function.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL

## See Also

[Implements Structure](../windows/implements-structure.md)