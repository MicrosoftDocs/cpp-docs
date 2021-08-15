---
description: "Learn more about: SimpleClassFactory Class"
title: "SimpleClassFactory Class"
ms.date: "09/7/2018"
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::SimpleClassFactory", "module/Microsoft::WRL::SimpleClassFactory::CreateInstance"]
helpviewer_keywords: ["Microsoft::WRL::SimpleClassFactory class", "Microsoft::WRL::SimpleClassFactory::CreateInstance method"]
ms.assetid: 6edda1b2-4e44-4e14-9364-72f519249962
---
# SimpleClassFactory Class

Provides a fundamental mechanism to create a base class.

## Syntax

```cpp
template<typename Base>
class SimpleClassFactory : public ClassFactory<>;
```

### Parameters

*Base*<br/>
A base class.

## Remarks

The base class must provide a default constructor.

The following code example demonstrates how to use `SimpleClassFactory` with the [ActivatableClassWithFactoryEx](activatableclass-macros.md) macro.

`ActivatableClassWithFactoryEx(MyClass, SimpleClassFactory, MyServerName);`

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[SimpleClassFactory::CreateInstance Method](#createinstance)|Creates an instance of the specified interface.|

## Inheritance Hierarchy

`I0`

`ChainInterfaces`

`I0`

`RuntimeClassBase`

`ImplementsHelper`

`DontUseNewUseMake`

`RuntimeClassFlags`

`RuntimeClassBaseT`

`RuntimeClass`

`ClassFactory`

`SimpleClassFactory`

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## <a name="createinstance"></a> SimpleClassFactory::CreateInstance Method

Creates an instance of the specified interface.

```cpp
STDMETHOD( CreateInstance )(
   _Inout_opt_ IUnknown* pUnkOuter,
   REFIID riid,
   _Deref_out_ void** ppvObject
);
```

#### Parameters

*pUnkOuter*<br/>
Must be **`nullptr`**; otherwise, the return value is CLASS_E_NOAGGREGATION.

SimpleClassFactory doesn't support aggregation. If aggregation were supported and the object being created was part of an aggregate, *pUnkOuter* would be a pointer to the controlling `IUnknown` interface of the aggregate.

*riid*<br/>
Interface ID of the object to create.

*ppvObject*<br/>
When this operation completes, pointer to an instance of the object specified by the *riid* parameter.

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

### Remarks

If `__WRL_STRICT__` is defined, an assert error is emitted if the base class specified in the class template parameter isn't derived from [RuntimeClass](runtimeclass-class.md), or isn't configured with the ClassicCom or WinRtClassicComMix [RuntimeClassType](runtimeclasstype-enumeration.md) enumeration value.
