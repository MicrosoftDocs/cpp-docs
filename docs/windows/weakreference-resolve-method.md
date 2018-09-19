---
title: "WeakReference::Resolve Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::WeakReference::Resolve"]
dev_langs: ["C++"]
helpviewer_keywords: ["Resolve method"]
ms.assetid: fc65a4b7-48a0-4d64-a793-37f566fdd8e7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# WeakReference::Resolve Method

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
STDMETHOD(Resolve)  
   (REFIID riid,
   _Deref_out_opt_ IInspectable **ppvObject
);
```

### Parameters

*riid*<br/>
An interface ID.

*ppvObject*<br/>
When this operation completes, a copy of the current strong reference if the strong reference count is nonzero.

## Return Value

- S_OK if this operation is successful and the strong reference count is zero. The *ppvObject* parameter is set to **nullptr**.

- S_OK if this operation is successful and the strong reference count is nonzero. The *ppvObject* parameter is set to the strong reference.

- Otherwise, an HRESULT that indicates the reason this operation failed.

## Remarks

Sets the specified pointer to the current strong reference value if the strong reference count is nonzero.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## See Also

[WeakReference Class1](../windows/weakreference-class1.md)<br/>
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)