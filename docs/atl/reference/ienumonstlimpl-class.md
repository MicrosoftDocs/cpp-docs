---
description: "Learn more about: IEnumOnSTLImpl Class"
title: "IEnumOnSTLImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IEnumOnSTLImpl", "ATLCOM/ATL::IEnumOnSTLImpl", "ATLCOM/ATL::IEnumOnSTLImpl::Clone", "ATLCOM/ATL::IEnumOnSTLImpl::Init", "ATLCOM/ATL::IEnumOnSTLImpl::Next", "ATLCOM/ATL::IEnumOnSTLImpl::Reset", "ATLCOM/ATL::IEnumOnSTLImpl::Skip", "ATLCOM/ATL::IEnumOnSTLImpl::m_iter", "ATLCOM/ATL::IEnumOnSTLImpl::m_pcollection", "ATLCOM/ATL::IEnumOnSTLImpl::m_spUnk"]
helpviewer_keywords: ["IEnumOnSTLImpl class"]
ms.assetid: 1789e77b-88b8-447d-a490-806b918912ce
---
# IEnumOnSTLImpl Class

This class defines an enumerator interface based on a C++ Standard Library collection.

## Syntax

```
template <class Base,
    const IID* piid, class T, class Copy, class CollType>
class ATL_NO_VTABLE IEnumOnSTLImpl : public Base
```

#### Parameters

*Base*<br/>
A COM enumerator. See [IEnumString](/windows/win32/api/objidl/nn-objidl-ienumstring) for an example.

*piid*<br/>
A pointer to the interface ID of the enumerator interface.

*T*<br/>
The type of item exposed by the enumerator interface.

*Copy*<br/>
A [copy policy class](../../atl/atl-copy-policy-classes.md).

*CollType*<br/>
A C++ Standard Library container class.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IEnumOnSTLImpl::Clone](#clone)|The implementation of **Clone**.|
|[IEnumOnSTLImpl::Init](#init)|Initializes the enumerator.|
|[IEnumOnSTLImpl::Next](#next)|The implementation of **Next**.|
|[IEnumOnSTLImpl::Reset](#reset)|The implementation of **Reset**.|
|[IEnumOnSTLImpl::Skip](#skip)|The implementation of **Skip**.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[IEnumOnSTLImpl::m_iter](#m_iter)|The iterator that represents the enumerator's current position within the collection.|
|[IEnumOnSTLImpl::m_pcollection](#m_pcollection)|A pointer to the C++ Standard Library container holding the items to be enumerated.|
|[IEnumOnSTLImpl::m_spUnk](#m_spunk)|The `IUnknown` pointer of the object supplying the collection.|

## Remarks

`IEnumOnSTLImpl` provides the implementation for a COM enumerator interface where the items being enumerated are stored in a C++ Standard Library-compatible container. This class is analogous to the [CComEnumImpl](../../atl/reference/ccomenumimpl-class.md) class, which provides an implementation for an enumerator interface based on an array.

> [!NOTE]
> See [CComEnumImpl::Init](../../atl/reference/ccomenumimpl-class.md#init) for details on further differences between `CComEnumImpl` and `IEnumOnSTLImpl`.

Typically, you will *not* need to create your own enumerator class by deriving from this interface implementation. If you want to use an ATL-supplied enumerator based on a C++ Standard Library container, it is more common to create an instance of [CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md), or to create a collection class that returns an enumerator by deriving from [ICollectionOnSTLImpl](../../atl/reference/icollectiononstlimpl-class.md).

However, if you do need to provide a custom enumerator (for example, one that exposes interfaces in addition to the enumerator interface), you can derive from this class. In this situation it is likely that you'll need to override the [Clone](#clone) method to provide your own implementation.

## Inheritance Hierarchy

`Base`

`IEnumOnSTLImpl`

## Requirements

**Header:** atlcom.h

## <a name="init"></a> IEnumOnSTLImpl::Init

Initializes the enumerator.

```
HRESULT Init(
    IUnknown* pUnkForRelease,
    CollType& collection);
```

### Parameters

*pUnkForRelease*<br/>
[in] The `IUnknown` pointer of an object that must be kept alive during the lifetime of the enumerator. Pass NULL if no such object exists.

*collection*<br/>
A reference to the C++ Standard Library container that holds the items to be enumerated.

### Return Value

A standard HRESULT value.

### Remarks

If you pass `Init` a reference to a collection held in another object, you can use the *pUnkForRelease* parameter to ensure that the object, and the collection it holds, is available for as long as the enumerator needs it.

You must call this method before passing a pointer to the enumerator interface back to any clients.

## <a name="clone"></a> IEnumOnSTLImpl::Clone

This method provides the implementation of the **Clone** method by creating an object of type `CComEnumOnSTL`, initializing it with the same collection and iterator used by the current object, and returning the interface on the newly created object.

```
STDMETHOD(Clone)(Base** ppEnum);
```

### Parameters

*ppEnum*<br/>
[out] The enumerator interface on a newly created object cloned from the current enumerator.

### Return Value

A standard HRESULT value.

## <a name="m_spunk"></a> IEnumOnSTLImpl::m_spUnk

The `IUnknown` pointer of the object supplying the collection.

```
CComPtr<IUnknown> m_spUnk;
```

### Remarks

This smart pointer maintains a reference on the object passed to [IEnumOnSTLImpl::Init](#init), ensuring that it remains alive during the lifetime of the enumerator.

## <a name="m_pcollection"></a> IEnumOnSTLImpl::m_pcollection

This member points to the collection that provides the data driving the implementation of the enumerator interface.

```
CollType* m_pcollection;
```

### Remarks

This member is initialized by a call to [IEnumOnSTLImpl::Init](#init).

## <a name="m_iter"></a> IEnumOnSTLImpl::m_iter

This member holds the iterator used to mark the current position within the collection and navigate to subsequent elements.

```
CollType::iterator m_iter;
```

## <a name="next"></a> IEnumOnSTLImpl::Next

This method provides the implementation of the **Next** method.

```
STDMETHOD(Next)(
    ULONG celt,
    T* rgelt,
    ULONG* pceltFetched);
```

### Parameters

*celt*<br/>
[in] The number of elements requested.

*rgelt*<br/>
[out] The array to be filled in with the elements.

*pceltFetched*<br/>
[out] The number of elements actually returned in *rgelt*. This can be less than *celt* if fewer than *celt* elements remain in the list.

### Return Value

A standard HRESULT value.

## <a name="reset"></a> IEnumOnSTLImpl::Reset

This method provides the implementation of the **Reset** method.

```
STDMETHOD(Reset)(void);
```

### Return Value

A standard HRESULT value.

## <a name="skip"></a> IEnumOnSTLImpl::Skip

This method provides the implementation of the **Skip** method.

```
STDMETHOD(Skip)(ULONG celt);
```

### Parameters

*celt*<br/>
[in] The number of elements to skip.

### Return Value

A standard HRESULT value.

## See also

[Class Overview](../../atl/atl-class-overview.md)
