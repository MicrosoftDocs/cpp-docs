---
title: "RuntimeClassBaseT::AsIID Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::RuntimeClassBaseT::AsIID"]
dev_langs: ["C++"]
helpviewer_keywords: ["AsIID method"]
ms.assetid: 90d7df8a-cf9e-4eef-8837-bc1a25f3fa1a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# RuntimeClassBaseT::AsIID Method

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template<typename T>
__forceinline static HRESULT AsIID(
   _In_ T* implements,
   REFIID riid,
   _Deref_out_ void **ppvObject
);
```

### Parameters

*T*  
A type that implements the interface ID specified by parameter *riid*.

*implements*  
A variable of the type specified by template parameter *T*.

*riid*  
The interface ID to retrieve.

*ppvObject*  
If this operation is successful, a pointer-to-a-pointer to the interface specified by parameter *riid*.

## Return Value

S_OK if successful; otherwise, an HRESULT that describes the error.

## Remarks

Retrieves a pointer to the specified interface ID.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## See Also

[RuntimeClassBaseT Structure](../windows/runtimeclassbaset-structure.md)  
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)