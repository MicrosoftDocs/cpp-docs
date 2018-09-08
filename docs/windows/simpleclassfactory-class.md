---
title: "SimpleClassFactory Class | Microsoft Docs"
ms.custom: ""
ms.date: "09/7/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::SimpleClassFactory", "module/Microsoft::WRL::SimpleClassFactory::CreateInstance"]
dev_langs: ["C++"]
helpviewer_keywords: ["SimpleClassFactory class", "CreateInstance method"]
ms.assetid: 6edda1b2-4e44-4e14-9364-72f519249962
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SimpleClassFactory Class

Provides a fundamental mechanism to create a base class.

## Syntax

```cpp
template<typename Base>
class SimpleClassFactory : public ClassFactory<>;
```

### Parameters

*Base*  
A base class.

## Remarks

The base class must provide a default constructor.

The following code example demonstrates how to use **SimpleClassFactory** with the [ActivatableClassWithFactoryEx](../windows/activatableclass-macros.md) macro.

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

## <a name="createinstance"></a>SimpleClassFactory::CreateInstance Method

Creates an instance of the specified interface.

### Syntax

```cpp
STDMETHOD( CreateInstance )(
   _Inout_opt_ IUnknown* pUnkOuter,
   REFIID riid,
   _Deref_out_ void** ppvObject
);
```

#### Parameters

*pUnkOuter*  
Must be **nullptr**; otherwise, the return value is CLASS_E_NOAGGREGATION.

SimpleClassFactory doesn't support aggregation. If aggregation were supported and the object being created was part of an aggregate, *pUnkOuter* would be a pointer to the controlling `IUnknown` interface of the aggregate.

*riid*  
Interface ID of the object to create.

*ppvObject*  
When this operation completes, pointer to an instance of the object specified by the *riid* parameter.

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

### Remarks

If `__WRL_STRICT__` is defined, an assert error is emitted if the base class specified in the class template parameter isn't derived from [RuntimeClass](../windows/runtimeclass-class.md), or isn't configured with the ClassicCom or WinRtClassicComMix [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) enumeration value.
