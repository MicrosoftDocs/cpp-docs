---
description: "Learn more about: CComEnum Class"
title: "CComEnum Class"
ms.date: "11/04/2016"
f1_keywords: ["CComEnum", "atlcom/ATL::CComEnum"]
helpviewer_keywords: ["CComEnum class"]
ms.assetid: bff7dd7b-eb6e-4d6e-96ed-2706e66c8b3b
---
# CComEnum Class

This class defines a COM enumerator object based on an array.

## Syntax

```
template <class Base,
    const IID* piid, class T, class Copy, class ThreadModel = CcomObjectThreadModel>
class ATL_NO_VTABLE CComEnum : public CComEnumImpl<Base, piid,
T,
    Copy>,
public CComObjectRootEx<ThreadModel>
```

#### Parameters

*Base*<br/>
A COM enumerator interface. See [IEnumString](/windows/win32/api/objidl/nn-objidl-ienumstring) for an example.

*piid*<br/>
A pointer to the interface ID of the enumerator interface.

*T*<br/>
The type of item exposed by the enumerator interface.

*Copy*<br/>
A homogeneous [copy policy class](../../atl/atl-copy-policy-classes.md).

*ThreadModel*<br/>
The threading model of the class. This parameter defaults to the global object thread model used in your project.

## Remarks

`CComEnum` defines a COM enumerator object based on an array. This class is analogous to [CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md) which implements an enumerator based on a C++ Standard Library container. Typical steps for using this class are outlined below. For more information, see [ATL Collections and Enumerators](../../atl/atl-collections-and-enumerators.md).

## To use this class:

- **`typedef`** a specialization of this class.

- Use the **`typedef`** as the template argument in a specialization of `CComObject`.

- Create an instance of the `CComObject` specialization.

- Initialize the enumerator object by calling [CComEnumImpl::Init](../../atl/reference/ccomenumimpl-class.md#init).

- Return the enumerator interface to the client.

## Inheritance Hierarchy

`CComObjectRootBase`

`Base`

[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

[CComEnumImpl](../../atl/reference/ccomenumimpl-class.md)

`CComEnum`

## Requirements

**Header:** atlcom.h

## Example

The code shown below provides a reusable function for creating and initializing an enumerator object.

[!code-cpp[NVC_ATL_COM#32](../../atl/codesnippet/cpp/ccomenum-class_1.h)]

This template function can be used to implement the `_NewEnum` property of a collection interface as shown below:

[!code-cpp[NVC_ATL_COM#33](../../atl/codesnippet/cpp/ccomenum-class_2.h)]

This code creates a **`typedef`** for `CComEnum` that exposes a vector of VARIANTs through the `IEnumVariant` interface. The `CVariantArrayCollection` class simply specializes `CreateEnumerator` to work with enumerator objects of this type and passes the necessary arguments.

## See also

[Class Overview](../../atl/atl-class-overview.md)<br/>
[CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel)<br/>
[CComEnumImpl Class](../../atl/reference/ccomenumimpl-class.md)<br/>
[CComObjectRootEx Class](../../atl/reference/ccomobjectrootex-class.md)
