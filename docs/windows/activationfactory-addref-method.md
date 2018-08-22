---
title: "ActivationFactory::AddRef Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::ActivationFactory::AddRef"]
dev_langs: ["C++"]
helpviewer_keywords: ["AddRef method"]
ms.assetid: dfe96189-ddbe-410a-9f8d-5d8ecc8cc7e6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ActivationFactory::AddRef Method

Increments the reference count of the current **ActivationFactory** object.

## Syntax

```cpp  
STDMETHOD_(  
   ULONG,  
   AddRef  
)();  
```

## Return Value

S_OK if successful; otherwise, an HRESULT that describes the failure.

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## See Also

[ActivationFactory Class](../windows/activationfactory-class.md)