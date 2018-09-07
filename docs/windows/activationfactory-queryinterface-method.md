---
title: "ActivationFactory::QueryInterface Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::ActivationFactory::QueryInterface"]
dev_langs: ["C++"]
helpviewer_keywords: ["QueryInterface method"]
ms.assetid: 2a9b71aa-61c0-43f7-aa35-00f0ee0af031
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ActivationFactory::QueryInterface Method

Retrieves a pointer to the specified interface.

## Syntax

```cpp
STDMETHOD(
   QueryInterface
)(REFIID riid, _Deref_out_ void **ppvObject);
```

### Parameters

*riid*  
An interface ID.

*ppvObject*  
When this operation is complete, a pointer to the interface specified by parameter *riid*.

## Return Value

S_OK if successful; otherwise, an HRESULT that describes the failure.

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## See Also

[ActivationFactory Class](../windows/activationfactory-class.md)