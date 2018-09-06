---
title: "WeakReference::WeakReference Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::WeakReference::WeakReference"]
dev_langs: ["C++"]
helpviewer_keywords: ["WeakReference, constructor"]
ms.assetid: 4959a9d7-78ea-423d-a46b-50d010d29fff
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# WeakReference::WeakReference Constructor

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
WeakReference();
```

## Remarks

Initializes a new instance of the [WeakReference class](../windows/weakreference-class1.md).

The strong reference pointer for the **WeakReference** object is initialized to **nullptr**, and the strong reference count is initialized to 1.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## See Also

[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)