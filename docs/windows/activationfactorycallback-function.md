---
title: "ActivationFactoryCallback Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Details::ActivationFactoryCallback"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""ActivationFactoryCallback function""]"]
ms.assetid: dd40c79b-1273-4f2a-8c24-ae9926fb4fd9
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ActivationFactoryCallback Function

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
inline HRESULT STDAPICALLTYPE ActivationFactoryCallback(
   HSTRING activationId,
   IActivationFactory **ppFactory
);
```

### Parameters

*activationId*  
Handle to a string that specifies a runtime class name.

*ppFactory*  
When this operation completes, an activation factory that corresponds to  parameter *activationId*.

## Return Value

S_OK if successful; otherwise, an HRESULT that describes the failure. Likely failure HRESULTs are CLASS_E_CLASSNOTAVAILABLE and E_INVALIDARG.

## Remarks

Gets the activation factory for the specified activation ID.

The Windows Runtime calls this callback function to request an object specified by its runtime class name.

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL::Details

## See Also

[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)