---
title: "ChainInterfaces::IidCount Constant | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::ChainInterfaces::IidCount"]
dev_langs: ["C++"]
helpviewer_keywords: ["IidCount constant"]
ms.assetid: d4a90aa0-513c-4e99-b978-e12149734936
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ChainInterfaces::IidCount Constant

The total number of interface IDs contained in the interfaces specified by template parameters *I0* through *I9*.

## Syntax

```cpp
static const unsigned long IidCount = Details::InterfaceTraits<I0>::IidCount + Details::InterfaceTraits<I1>::IidCount + Details::InterfaceTraits<I2>::IidCount + Details::InterfaceTraits<I3>::IidCount + Details::InterfaceTraits<I4>::IidCount + Details::InterfaceTraits<I5>::IidCount + Details::InterfaceTraits<I6>::IidCount + Details::InterfaceTraits<I7>::IidCount + Details::InterfaceTraits<I8>::IidCount + Details::InterfaceTraits<I9>::IidCount;
```

## Return Value

The total number of interface IDs.

## Remarks

Template parameters *I0* and *I1* are required, and parameters *I2* through *I9* are optional.The IID count of each interface is typically 1.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL

## See Also

[ChainInterfaces Structure](../windows/chaininterfaces-structure.md)