---
description: "Learn more about: GetActivationFactory Function"
title: "GetActivationFactory Function"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Details::GetActivationFactory", "client/ABI::Windows::Foundation::GetActivationFactory", "client/Windows::Foundation::GetActivationFactory"]
helpviewer_keywords: ["GetActivationFactory function"]
ms.assetid: 5736d285-6beb-42aa-8788-e261c0010afe
---
# GetActivationFactory Function

Retrieves an activation factory for the type specified by the template parameter.

## Syntax

```cpp
template<typename T>
inline HRESULT GetActivationFactory(
   _In_ HSTRING activatableClassId,
   _Out_ Microsoft::WRL::Details::ComPtrRef<T> factory
);
```

### Parameters

*T*<br/>
A template parameter that specifies the type of the activation factory.

*activatableClassId*<br/>
The name of the class that the activation factory can produce.

*factory*<br/>
When this operation completes, a reference to the activation factory for type *T*.

## Return Value

S_OK if successful; otherwise, an error HRESULT that indicates why this operation failed.

## Requirements

**Header:** client.h

**Namespace:** Windows::Foundation

## See also

[Windows::Foundation Namespace](windows-foundation-namespace.md)
