---
title: "InterfaceTraits::CastToBase Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::InterfaceTraits::CastToBase"]
dev_langs: ["C++"]
helpviewer_keywords: ["CastToBase method"]
ms.assetid: 0591a017-0adf-4358-b946-eb0a307ce7f2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# InterfaceTraits::CastToBase Method

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template<typename T>
static __forceinline Base* CastToBase(
   _In_ T* ptr
);
```

### Parameters

*T*  
The type of parameter *ptr*.

*ptr*  
Pointer to a type *T*.

## Return Value

A pointer to `Base`.

## Remarks

Casts the specified pointer to a pointer to `Base`.

For more information about `Base`, see the Public Typedefs section in [InterfaceTraits Structure](../windows/interfacetraits-structure.md).

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## See Also

[InterfaceTraits Structure](../windows/interfacetraits-structure.md)  
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)