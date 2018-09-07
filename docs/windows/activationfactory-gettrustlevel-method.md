---
title: "ActivationFactory::GetTrustLevel Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::ActivationFactory::GetTrustLevel"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetTrustLevel method"]
ms.assetid: 31547ae6-d2ab-4039-923c-154d53fb1a8b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ActivationFactory::GetTrustLevel Method

Gets the trust level of the object that the current **ActivationFactory** instantiates.

## Syntax

```cpp
STDMETHOD(
   GetTrustLevel
)(_Out_ TrustLevel* trustLvl);
```

### Parameters

*trustLvl*  
When this operation completes, the trust level of the runtime class that the **ActivationFactory** instantiates.

## Return Value

S_OK if successful; otherwise, an assertion error is emitted and *trustLvl* is set to `FullTrust`.

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## See Also

[ActivationFactory Class](../windows/activationfactory-class.md)