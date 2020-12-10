---
description: "Learn more about: ActivationFactoryCallback Function"
title: "ActivationFactoryCallback Function"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Details::ActivationFactoryCallback"]
helpviewer_keywords: ["ActivationFactoryCallback function"]
ms.assetid: dd40c79b-1273-4f2a-8c24-ae9926fb4fd9
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

*activationId*<br/>
Handle to a string that specifies a runtime class name.

*ppFactory*<br/>
When this operation completes, an activation factory that corresponds to  parameter *activationId*.

## Return Value

S_OK if successful; otherwise, an HRESULT that describes the failure. Likely failure HRESULTs are CLASS_E_CLASSNOTAVAILABLE and E_INVALIDARG.

## Remarks

Gets the activation factory for the specified activation ID.

The Windows Runtime calls this callback function to request an object specified by its runtime class name.

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL::Details

## See also

[Microsoft::WRL::Details Namespace](microsoft-wrl-details-namespace.md)
