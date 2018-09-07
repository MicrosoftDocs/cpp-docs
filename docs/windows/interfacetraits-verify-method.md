---
title: "InterfaceTraits::Verify Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::InterfaceTraits::Verify"]
dev_langs: ["C++"]
helpviewer_keywords: ["Verify method"]
ms.assetid: 46edd67f-7952-4552-a157-55e823f616c8
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# InterfaceTraits::Verify Method

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
__forceinline static void Verify();
```

## Remarks

Verifies that `Base` is properly derived.

For more information about `Base`, see the **Public Typedefs** section in [InterfaceTraits Structure](../windows/interfacetraits-structure.md).

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## See Also

[InterfaceTraits Structure](../windows/interfacetraits-structure.md)  
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)