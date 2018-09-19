---
title: "WeakReference::DecrementStrongReference Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::WeakReference::DecrementStrongReference"]
dev_langs: ["C++"]
helpviewer_keywords: ["DecrementStrongReference method"]
ms.assetid: 97d70d9f-41b8-4f8d-a6fa-4137cc4f9029
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# WeakReference::DecrementStrongReference Method

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
ULONG DecrementStrongReference();
```

## Remarks

Decrements the strong reference count of the current **WeakReference** object.

When the strong reference count becomes zero, the strong reference is set to **nullptr**.

## Return Value

The decremented strong reference count.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## See Also

[WeakReference Class](../windows/weakreference-class1.md)<br/>
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)