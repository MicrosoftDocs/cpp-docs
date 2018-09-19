---
title: "ImplementsHelper::CanCastTo Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::ImplementsHelper::CanCastTo"]
dev_langs: ["C++"]
helpviewer_keywords: ["CanCastTo method"]
ms.assetid: 9ae6fa17-d0b1-4e31-9ae5-da6ae4026e32
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ImplementsHelper::CanCastTo Method

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
HRESULT CanCastTo(
   REFIID riid,
   _Deref_out_ void **ppv
);

HRESULT CanCastTo(
   _In_ const IID &iid,
   _Deref_out_ void **ppv
);
```

### Parameters

*riid*<br/>
Reference to an interface ID.

*ppv*<br/>
If this operation is successful, a pointer to the interface specified by *riid* or *iid*.

*iid*<br/>
Reference to an interface ID.

## Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

## Remarks

Gets a pointer to the specified interface ID.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## See Also

[ImplementsHelper Structure](../windows/implementshelper-structure.md)<br/>
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)