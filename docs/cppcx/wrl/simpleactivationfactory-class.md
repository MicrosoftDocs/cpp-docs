---
description: "Learn more about: SimpleActivationFactory Class"
title: "SimpleActivationFactory Class"
ms.date: "09/07/2018"
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::SimpleActivationFactory", "module/Microsoft::WRL::SimpleActivationFactory::ActivateInstance", "module/Microsoft::WRL::SimpleActivationFactory::GetRuntimeClassName", "module/Microsoft::WRL::SimpleActivationFactory::GetTrustLevel"]
helpviewer_keywords: ["Microsoft::WRL::SimpleActivationFactory class", "Microsoft::WRL::SimpleActivationFactory::ActivateInstance method", "Microsoft::WRL::SimpleActivationFactory::GetRuntimeClassName method", "Microsoft::WRL::SimpleActivationFactory::GetTrustLevel method"]
ms.assetid: aff768e0-0038-4fd7-95d2-ad7d308da41c
---
# SimpleActivationFactory Class

Provides a fundamental mechanism to create a Windows Runtime or classic COM base class.

## Syntax

```cpp
template<typename Base>
class SimpleActivationFactory : public ActivationFactory<>;
```

### Parameters

*Base*<br/>
A base class.

## Remarks

The base class must provide a default constructor.

The following code example demonstrates how to use SimpleActivationFactory with the [ActivatableClassWithFactoryEx](activatableclass-macros.md) macro.

`ActivatableClassWithFactoryEx(MyClass, SimpleActivationFactory, MyServerName);`

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[SimpleActivationFactory::ActivateInstance Method](#activateinstance)|Creates an instance of the specified interface.|
|[SimpleActivationFactory::GetRuntimeClassName Method](#getruntimeclassname)|Gets the runtime class name of an instance of the class specified by the *Base* class template parameter.|
|[SimpleActivationFactory::GetTrustLevel Method](#gettrustlevel)|Gets the trust level of an instance of the class specified by the *Base* class template parameter.|

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

`ActivationFactory`

`SimpleActivationFactory`

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## <a name="activateinstance"></a> SimpleActivationFactory::ActivateInstance Method

Creates an instance of the specified interface.

```cpp
STDMETHOD( ActivateInstance )(
    _Deref_out_ IInspectable **ppvObject
);
```

#### Parameters

*ppvObject*<br/>
When this operation completes, pointer to an instance of the object specified by the `Base` class template parameter.

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

### Remarks

If `__WRL_STRICT__` is defined, an assert error is emitted if the base class specified in the class template parameter isn't derived from [RuntimeClass](runtimeclass-class.md), or isn't configured with the WinRt or WinRtClassicComMix [RuntimeClassType](runtimeclasstype-enumeration.md) enumeration value.

## <a name="getruntimeclassname"></a> SimpleActivationFactory::GetRuntimeClassName Method

Gets the runtime class name of an instance of the class specified by the `Base` class template parameter.

```cpp
STDMETHOD( GetRuntimeClassName )(
    _Out_ HSTRING* runtimeName
);
```

#### Parameters

*runtimeName*<br/>
When this operation completes, the runtime class name.

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

### Remarks

If `__WRL_STRICT__` is defined, an assert error is emitted if the class specified by the `Base` class template parameter isn't derived from [RuntimeClass](runtimeclass-class.md), or isn't configured with the WinRt or WinRtClassicComMix [RuntimeClassType](runtimeclasstype-enumeration.md) enumeration value.

## <a name="gettrustlevel"></a> SimpleActivationFactory::GetTrustLevel Method

Gets the trust level of an instance of the class specified by the `Base` class template parameter.

```cpp
STDMETHOD(
   GetTrustLevel
)(_Out_ TrustLevel* trustLvl);
```

#### Parameters

*trustLvl*<br/>
When this operation completes, the trust level of the current class object.

### Return Value

Always S_OK.
