---
title: "ActivationFactory::GetIids Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::ActivationFactory::GetIids"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetIids method"]
ms.assetid: 0983d709-d155-4d65-aae4-5b2c8bb0fede
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ActivationFactory::GetIids Method

Retrieves an array of implemented interface IDs.

## Syntax

```cpp
STDMETHOD(
   GetIids
)(_Out_ ULONG *iidCount, _Deref_out_ _Deref_post_cap_(*iidCount) IID **iids);
```

### Parameters

*iidCount*  
When this operation completes, the number of interace IDs in the *iids* array.

*iids*  
When this operation completes, an array of implemented interface IDs.

## Return Value

S_OK if successful; otherwise, an HRESULT that describes the failure. E_OUTOFMEMORY is a possible failure HRESULT.

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## See Also

[ActivationFactory Class](../windows/activationfactory-class.md)