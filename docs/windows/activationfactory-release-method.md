---
title: "ActivationFactory::Release Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::ActivationFactory::Release"]
dev_langs: ["C++"]
helpviewer_keywords: ["Release method"]
ms.assetid: 5bc25ff0-ee3c-4a2d-a9b6-2d8f158033ad
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ActivationFactory::Release Method

Decrements the reference count of the current **ActivationFactory** object.

## Syntax

```cpp
STDMETHOD_(
   ULONG,
   Release
)();
```

## Return Value

S_OK if successful; otherwise, an HRESULT that describes the failure.

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## See Also

[ActivationFactory Class](../windows/activationfactory-class.md)