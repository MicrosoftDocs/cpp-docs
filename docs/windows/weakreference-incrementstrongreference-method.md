---
title: "WeakReference::IncrementStrongReference Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::WeakReference::IncrementStrongReference"]
dev_langs: ["C++"]
helpviewer_keywords: ["IncrementStrongReference method"]
ms.assetid: d0232426-a8cb-48b4-99d4-165de2d66cb9
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# WeakReference::IncrementStrongReference Method

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
ULONG IncrementStrongReference();
```

## Return Value

The incremented strong reference count.

## Remarks

Increments the strong reference count of the current **WeakReference** object.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## See Also

[WeakReference Class](../windows/weakreference-class1.md)  
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)