---
description: "Learn more about: ClassFactory Class"
title: "ClassFactory Class"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::ClassFactory", "module/Microsoft::WRL::ClassFactory::AddRef", "module/Microsoft::WRL::ClassFactory::ClassFactory", "module/Microsoft::WRL::ClassFactory::LockServer", "module/Microsoft::WRL::ClassFactory::QueryInterface", "module/Microsoft::WRL::ClassFactory::Release"]
helpviewer_keywords: ["Microsoft::WRL::ClassFactory class", "Microsoft::WRL::ClassFactory::AddRef method", "Microsoft::WRL::ClassFactory::ClassFactory, constructor", "Microsoft::WRL::ClassFactory::LockServer method", "Microsoft::WRL::ClassFactory::QueryInterface method", "Microsoft::WRL::ClassFactory::Release method"]
ms.assetid: f13e6bce-722b-4f18-b7cf-3ffa6345c1db
---
# ClassFactory Class

Implements the basic functionality of the `IClassFactory` interface.

## Syntax

```cpp
template <
    typename I0 = Details::Nil,
    typename I1 = Details::Nil,
    typename I2 = Details::Nil
>
class ClassFactory :
    public Details::RuntimeClass<
        typename Details::InterfaceListHelper<
            IClassFactory,
            I0,
            I1,
            I2,
            Details::Nil
        >::TypeT,
        RuntimeClassFlags<ClassicCom | InhibitWeakReference>,
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

Utilize `ClassFactory` to provide a user-defined factory implementation.

The following programming pattern demonstrates how to use the [Implements](implements-structure.md) structure to specify more than three interfaces on a class factory.

`struct MyFactory : ClassFactory<Implements<I1, I2, I3>, I4, I5>`

## Members

### Public Constructors

Name                                        | Description
------------------------------------------- | -----------
[ClassFactory::ClassFactory](#classfactory) |

### Public Methods

Name                                            | Description
----------------------------------------------- | ----------------------------------------------------------------------------------------------------------------
[ClassFactory::AddRef](#addref)                 | Increments the reference count for the current `ClassFactory` object.
[ClassFactory::LockServer](#lockserver)         | Increments or decrements the number of underlying objects that are tracked by the current `ClassFactory` object.
[ClassFactory::QueryInterface](#queryinterface) | Retrieves a pointer to the interface specified by parameter.
[ClassFactory::Release](#release)               | Decrements the reference count for the current `ClassFactory` object.

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

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## <a name="addref"></a> ClassFactory::AddRef

Increments the reference count for the current `ClassFactory` object.

```cpp
STDMETHOD_(
   ULONG,
   AddRef
)();
```

### Return Value

S_OK if successful; otherwise, an HRESULT that describes the failure.

## <a name="classfactory"></a> ClassFactory::ClassFactory

```cpp
WRL_NOTHROW ClassFactory();
```

## <a name="lockserver"></a> ClassFactory::LockServer

Increments or decrements the number of underlying objects that are tracked by the current `ClassFactory` object.

```cpp
STDMETHOD(
   LockServer
)(BOOL fLock);
```

### Parameters

*fLock*<br/>
**`true`** to increment the number of tracked objects. **`false`** to decrement the number of tracked objects.

### Return Value

S_OK if successful; otherwise, E_FAIL.

### Remarks

`ClassFactory` keeps track of objects in an underlying instance of the [Module](module-class.md) class.

## <a name="queryinterface"></a> ClassFactory::QueryInterface

Retrieves a pointer to the interface specified by parameter.

```cpp
STDMETHOD(
   QueryInterface
)(REFIID riid, _Deref_out_ void **ppvObject);
```

### Parameters

*riid*<br/>
An interface ID.

*ppvObject*<br/>
When this operation completes, a pointer to the interface specified by parameter *riid*.

### Return Value

S_OK if successful; otherwise, an HRESULT that describes the failure.

## <a name="release"></a> ClassFactory::Release

Decrements the reference count for the current `ClassFactory` object.

```cpp
STDMETHOD_(
   ULONG,
   Release
)();
```

### Return Value

S_OK if successful; otherwise, an HRESULT that describes the failure.
