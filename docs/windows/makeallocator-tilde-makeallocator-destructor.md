---
title: "MakeAllocator::~MakeAllocator Destructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::MakeAllocator::~MakeAllocator"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""~MakeAllocator, destructor""]"]
ms.assetid: f1299c5f-cc6b-4d4e-85d4-aee1be0e2b0a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# MakeAllocator::~MakeAllocator Destructor

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
~MakeAllocator();
```

## Remarks

Deinitializes the current instance of the **MakeAllocator** class.

This destructor also deletes the underlying allocated memory if necessary.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## See Also

[MakeAllocator Class](../windows/makeallocator-class.md)  
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)