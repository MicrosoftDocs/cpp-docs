---
title: "ActivationFactory::GetRuntimeClassName Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::ActivationFactory::GetRuntimeClassName"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetRuntimeClassName method"]
ms.assetid: 74e34f0a-9c51-4b40-89f5-45c6c5886ece
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ActivationFactory::GetRuntimeClassName Method

Gets the runtime class name of the object that the current **ActivationFactory** instantiates.

## Syntax

```cpp
STDMETHOD(
   GetRuntimeClassName
)(_Out_ HSTRING* runtimeName);
```

### Parameters

*runtimeName*  
When this operation completes, a handle to a string that contains the runtime class name of the object that the current **ActivationFactory** instantiates.

## Return Value

S_OK if successful; otherwise, an HRESULT that describes the failure.

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## See Also

[ActivationFactory Class](../windows/activationfactory-class.md)