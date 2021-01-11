---
description: "Learn more about: CreateActivationFactory Function"
title: "CreateActivationFactory Function"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Details::CreateActivationFactory"]
helpviewer_keywords: ["CreateActivationFactory function"]
ms.assetid: a1a53e04-6757-4faf-a4c8-ecf06e43b959
---
# CreateActivationFactory Function

Creates a factory that produces instances of the specified class that can be activated by the Windows Runtime.

## Syntax

```cpp
template<typename Factory>
   inline HRESULT STDMETHODCALLTYPE CreateActivationFactory(
      _In_ unsigned int *flags,        _In_ const CreatorMap* entry,
      REFIID riid,
   _Outptr_ IUnknown **ppFactory) throw();
```

### Parameters

*flags*<br/>
A combination of one or more [RuntimeClassType](runtimeclasstype-enumeration.md) enumeration values.

*entry*<br/>
Pointer to a [CreatorMap](creatormap-structure.md) that contains initialization and registration information about parameter *riid*.

*riid*<br/>
Reference to an interface ID.

*ppFactory*<br/>
If this operation completes successfully, a pointer to an activation factory.

## Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

## Remarks

An assert error is emitted if template parameter *Factory* doesn't derive from interface `IActivationFactory`.

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## See also

[Microsoft::WRL::Wrappers::Details Namespace](microsoft-wrl-wrappers-details-namespace.md)
