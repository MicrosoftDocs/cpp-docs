---
description: "Learn more about: CComEnumOnSTL Class"
title: "CComEnumOnSTL Class"
ms.date: "11/04/2016"
f1_keywords: ["CComEnumOnSTL", "atlcom/ATL::CComEnumOnSTL"]
helpviewer_keywords: ["CComEnumOnSTL class"]
ms.assetid: befe1a44-7a00-4f28-9a2e-cc0fa526643c
---
# CComEnumOnSTL Class

This class defines a COM enumerator object based on a C++ Standard Library collection.

## Syntax

```
template <class Base,
    const IID* piid, class T, class Copy, class CollType, class ThreadModel = CComObjectThreadModel>
class ATL_NO_VTABLE CComEnumOnSTL : public IEnumOnSTLImpl<Base, piid,
T,
    Copy,
CollType>,
    public CComObjectRootEx<ThreadModel>
```

#### Parameters

*Base*<br/>
A COM enumerator. See [IEnumString](/windows/win32/api/objidl/nn-objidl-ienumstring) for an example.

*piid*<br/>
A pointer to the interface ID of the enumerator interface.

*T*<br/>
The type of item exposed by the enumerator interface.

*Copy*<br/>
A [copy policy](../../atl/atl-copy-policy-classes.md) class.

*CollType*<br/>
A C++ Standard Library container class.

## Remarks

`CComEnumOnSTL` defines a COM enumerator object based on a C++ Standard Library collection. This class can be used on its own or in conjunction with [ICollectionOnSTLImpl](../../atl/reference/icollectiononstlimpl-class.md). Typical steps for using this class are outlined below. For more information, see [ATL Collections and Enumerators](../../atl/atl-collections-and-enumerators.md).

## To use this class with ICollectionOnSTLImpl:

- **`typedef`** a specialization of this class.

- Use the **`typedef`** as the final template argument in a specialization of `ICollectionOnSTLImpl`.

See [ATL Collections and Enumerators](../../atl/atl-collections-and-enumerators.md) for an example.

## To use this class independently of ICollectionOnSTLImpl:

- **`typedef`** a specialization of this class.

- Use the **`typedef`** as the template argument in a specialization of `CComObject`.

- Create an instance of the `CComObject` specialization.

- Initialize the enumerator object by calling [IEnumOnSTLImpl::Init](../../atl/reference/ienumonstlimpl-class.md#init).

- Return the enumerator interface to the client.

## Inheritance Hierarchy

`CComObjectRootBase`

`Base`

[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

[IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)

`CComEnumOnSTL`

## Requirements

**Header:** atlcom.h

## Example

The code shown below provides a generic function to handle the creation and initialization of an enumerator object:

[!code-cpp[NVC_ATL_COM#34](../../atl/codesnippet/cpp/ccomenumonstl-class_1.h)]

This template function can be used to implement the `_NewEnum` property of a collection interface as shown below:

[!code-cpp[NVC_ATL_COM#35](../../atl/codesnippet/cpp/ccomenumonstl-class_2.h)]

This code creates a **`typedef`** for `CComEnumOnSTL` that exposes a vector of `CComVariant`s by means of the `IEnumVariant` interface. The `CVariantCollection` class simply specializes `CreateSTLEnumerator` to work with enumerator objects of this type.

## See also

[IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)<br/>
[ATLCollections Sample: Demonstrates ICollectionOnSTLImpl, CComEnumOnSTL, and Custom Copy Policy Classes](../../overview/visual-cpp-samples.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)<br/>
[CComObjectRootEx Class](../../atl/reference/ccomobjectrootex-class.md)<br/>
[CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel)<br/>
[IEnumOnSTLImpl Class](../../atl/reference/ienumonstlimpl-class.md)
