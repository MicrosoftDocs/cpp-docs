---
title: "InterfaceTraits::CanCastTo Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::InterfaceTraits::CanCastTo"]
dev_langs: ["C++"]
helpviewer_keywords: ["CanCastTo method"]
ms.assetid: 275847cb-69ea-42bf-910f-05ba6ef8b48d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# InterfaceTraits::CanCastTo Method

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template<typename T>
static __forceinline bool CanCastTo(
   _In_ T* ptr,
   REFIID riid,
   _Deref_out_ void **ppv
);
```

### Parameters

*ptr*  
The name of a pointer to a type.

*riid*  
The interface ID of `Base`.

*ppv*  
If this operation is successful, *ppv* points to the interface specified by `Base`. Otherwise, *ppv* is set to **nullptr**.

## Return Value

**true** if this operation is successful and *ptr* is cast to a pointer to `Base`; otherwise, **false** .

## Remarks

Indicates whether the specified pointer can be cast to a pointer to `Base`.

For more information about `Base`, see the **Public Typedefs** section in [InterfaceTraits Structure](../windows/interfacetraits-structure.md).

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## See Also

[InterfaceTraits Structure](../windows/interfacetraits-structure.md)  
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)