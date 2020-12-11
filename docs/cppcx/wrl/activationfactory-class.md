---
description: "Learn more about: ActivationFactory Class"
title: "ActivationFactory Class"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::ActivationFactory", "module/Microsoft::WRL::ActivationFactory::ActivationFactory", "module/Microsoft::WRL::ActivationFactory::AddRef", "module/Microsoft::WRL::ActivationFactory::GetIids", "module/Microsoft::WRL::ActivationFactory::GetRuntimeClassName", "module/Microsoft::WRL::ActivationFactory::GetTrustLevel", "module/Microsoft::WRL::ActivationFactory::QueryInterface", "module/Microsoft::WRL::ActivationFactory::Release"]
helpviewer_keywords: ["Microsoft::WRL::ActivationFactory class", "Microsoft::WRL::ActivationFactory::ActivationFactory, constructor", "Microsoft::WRL::ActivationFactory::AddRef method", "Microsoft::WRL::ActivationFactory::GetIids method", "Microsoft::WRL::ActivationFactory::GetRuntimeClassName method", "Microsoft::WRL::ActivationFactory::GetTrustLevel method", "Microsoft::WRL::ActivationFactory::QueryInterface method", "Microsoft::WRL::ActivationFactory::Release method"]
ms.assetid: 5faddf1f-43b6-4f8a-97de-8c9d3ae1e1ff
---
# ActivationFactory Class

Enables one or more classes to be activated by the Windows Runtime.

## Syntax

```cpp
template <
    typename I0 = Details::Nil,
    typename I1 = Details::Nil,
    typename I2 = Details::Nil
>
class ActivationFactory :
    public Details::RuntimeClass<
        typename Details::InterfaceListHelper<
            IActivationFactory,
            I0,
            I1,
            I2,
            Details::Nil
        >::TypeT,
        RuntimeClassFlags<WinRt | InhibitWeakReference>,
        false
    >;
```

### Parameters

*I0*<br/>
The zeroth interface.

*I1*<br/>
The first interface.

*I2*<br/>
The second interface.

## Remarks

`ActivationFactory` provides registration methods and basic functionality for the `IActivationFactory` interface. `ActivationFactory` also enables you to provide a custom factory implementation.

The following code fragment symbolically illustrates how to use ActivationFactory.

[!code-cpp[wrl-microsoft__wrl__activationfactory#1](../codesnippet/CPP/activationfactory-class_1.cpp)]

The following code fragment shows how to use the [Implements](implements-structure.md) structure to specify more than three interface IDs.

`struct MyFactory : ActivationFactory<Implements<I1, I2, I3>, I4, I5>;`

## Members

### Public Constructors

Name                                                       | Description
---------------------------------------------------------- | ------------------------------------------
[ActivationFactory::ActivationFactory](#activationfactory) | Initializes the `ActivationFactory` class.

### Public Methods

Name                                                           | Description
-------------------------------------------------------------- | --------------------------------------------------------------------------------------------
[ActivationFactory::AddRef](#addref)                           | Increments the reference count of the current `ActivationFactory` object.
[ActivationFactory::GetIids](#getiids)                         | Retrieves an array of implemented interface IDs.
[ActivationFactory::GetRuntimeClassName](#getruntimeclassname) | Gets the runtime class name of the object that the current `ActivationFactory` instantiates.
[ActivationFactory::GetTrustLevel](#gettrustlevel)             | Gets the trust level of the object that the current `ActivationFactory` instantiates.
[ActivationFactory::QueryInterface](#queryinterface)           | Retrieves a pointer to the specified interface.
[ActivationFactory::Release](#release)                         | Decrements the reference count of the current `ActivationFactory` object.

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

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## <a name="activationfactory"></a> ActivationFactory::ActivationFactory

Initializes the `ActivationFactory` class.

```cpp
ActivationFactory();
```

## <a name="addref"></a> ActivationFactory::AddRef

Increments the reference count of the current `ActivationFactory` object.

```cpp
STDMETHOD_(
   ULONG,
   AddRef
)();
```

### Return Value

S_OK if successful; otherwise, an HRESULT that describes the failure.

## <a name="getiids"></a> ActivationFactory::GetIids

Retrieves an array of implemented interface IDs.

```cpp
STDMETHOD(
   GetIids
)(_Out_ ULONG *iidCount, _Deref_out_ _Deref_post_cap_(*iidCount) IID **iids);
```

### Parameters

*iidCount*<br/>
When this operation completes, the number of interace IDs in the *iids* array.

*iids*<br/>
When this operation completes, an array of implemented interface IDs.

### Return Value

S_OK if successful; otherwise, an HRESULT that describes the failure. E_OUTOFMEMORY is a possible failure HRESULT.

## <a name="getruntimeclassname"></a> ActivationFactory::GetRuntimeClassName

Gets the runtime class name of the object that the current `ActivationFactory` instantiates.

```cpp
STDMETHOD(
   GetRuntimeClassName
)(_Out_ HSTRING* runtimeName);
```

### Parameters

*runtimeName*<br/>
When this operation completes, a handle to a string that contains the runtime class name of the object that the current `ActivationFactory` instantiates.

### Return Value

S_OK if successful; otherwise, an HRESULT that describes the failure.

## <a name="gettrustlevel"></a> ActivationFactory::GetTrustLevel

Gets the trust level of the object that the current `ActivationFactory` instantiates.

```cpp
STDMETHOD(
   GetTrustLevel
)(_Out_ TrustLevel* trustLvl);
```

### Parameters

*trustLvl*<br/>
When this operation completes, the trust level of the runtime class that the `ActivationFactory` instantiates.

### Return Value

S_OK if successful; otherwise, an assertion error is emitted and *trustLvl* is set to `FullTrust`.

## <a name="queryinterface"></a> ActivationFactory::QueryInterface

Retrieves a pointer to the specified interface.

```cpp
STDMETHOD(
   QueryInterface
)(REFIID riid, _Deref_out_ void **ppvObject);
```

### Parameters

*riid*<br/>
An interface ID.

*ppvObject*<br/>
When this operation is complete, a pointer to the interface specified by parameter *riid*.

### Return Value

S_OK if successful; otherwise, an HRESULT that describes the failure.

## <a name="release"></a> ActivationFactory::Release

Decrements the reference count of the current `ActivationFactory` object.

```cpp
STDMETHOD_(
   ULONG,
   Release
)();
```

### Return Value

S_OK if successful; otherwise, an HRESULT that describes the failure.
