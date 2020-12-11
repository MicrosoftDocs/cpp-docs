---
description: "Learn more about: CreateClassFactory Function"
title: "CreateClassFactory Function"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Details::CreateClassFactory"]
helpviewer_keywords: ["CreateClassFactory function"]
ms.assetid: 772d5d1b-8872-4745-81ca-521a39564713
---
# CreateClassFactory Function

Creates a factory that produces instances of the specified class.

## Syntax

```cpp
template<typename Factory>
inline HRESULT STDMETHODCALLTYPE CreateClassFactory(
   _In_ unsigned int *flags,
   _In_ const CreatorMap* entry,
   REFIID riid,
   _Outptr_ IUnknown **ppFactory
) throw();
```

### Parameters

*flags*<br/>
A combination of one or more [RuntimeClassType](runtimeclasstype-enumeration.md) enumeration values.

*entry*<br/>
Pointer to a [CreatorMap](creatormap-structure.md) that contains initialization and registration information about parameter *riid*.

*riid*<br/>
Reference to an interface ID.

*ppFactory*<br/>
If this operation completes successfully, a pointer to a class factory.

## Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

## Remarks

An assert error is emitted if template parameter *Factory* doesn't derive from interface `IClassFactory`.

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## See also

[Microsoft::WRL::Wrappers::Details Namespace](microsoft-wrl-wrappers-details-namespace.md)
