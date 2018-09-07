---
title: "WeakReference::SetUnknown Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::WeakReference::SetUnknown"]
dev_langs: ["C++"]
helpviewer_keywords: ["SetUnknown method"]
ms.assetid: 5dddb9e3-a7c1-4195-8166-97c5ab6e972f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# WeakReference::SetUnknown Method

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
void SetUnknown(
   _In_ IUnknown* unk
);
```

### Parameters

*unk*  
A pointer to the `IUnknown` interface of an object.

## Remarks

Sets the strong reference of the current **WeakReference** object to the specified interface pointer.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## See Also

[WeakReference Class](../windows/weakreference-class1.md)  
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)