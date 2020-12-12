---
description: "Learn more about: CComContainedObject Class"
title: "CComContainedObject Class"
ms.date: "11/04/2016"
f1_keywords: ["CComContainedObject", "ATLCOM/ATL::CComContainedObject", "ATLCOM/ATL::CComContainedObject::CComContainedObject", "ATLCOM/ATL::CComContainedObject::AddRef", "ATLCOM/ATL::CComContainedObject::GetControllingUnknown", "ATLCOM/ATL::CComContainedObject::QueryInterface", "ATLCOM/ATL::CComContainedObject::Release"]
helpviewer_keywords: ["aggregate objects [C++], in ATL", "aggregation [C++], ATL objects", "CComContainedObject class"]
ms.assetid: e8616b41-c200-47b8-bf2c-fb9f713ebdad
---
# CComContainedObject Class

This class implements [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) by delegating to the owner object's `IUnknown`.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template<class Base>
class CComContainedObject : public Base
```

#### Parameters

*Base*<br/>
Your class, derived from [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) or [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md).

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CComContainedObject::CComContainedObject](#ccomcontainedobject)|The constructor. Initializes the member pointer to the owner object's `IUnknown`.|
|[CComContainedObject::~CComContainedObject](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComContainedObject::AddRef](#addref)|Increments the reference count on the owner object.|
|[CComContainedObject::GetControllingUnknown](#getcontrollingunknown)|Retrieves the owner object's `IUnknown`.|
|[CComContainedObject::QueryInterface](#queryinterface)|Retrieves a pointer to the interface requested on the owner object.|
|[CComContainedObject::Release](#release)|Decrements the reference count on the owner object.|

## Remarks

ATL uses `CComContainedObject` in classes [CComAggObject](../../atl/reference/ccomaggobject-class.md), [CComPolyObject](../../atl/reference/ccompolyobject-class.md), and [CComCachedTearOffObject](../../atl/reference/ccomcachedtearoffobject-class.md). `CComContainedObject` implements [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) by delegating to the owner object's `IUnknown`. (The owner is either the outer object of an aggregation, or the object for which a tear-off interface is being created.) `CComContainedObject` calls `CComObjectRootEx`'s `OuterQueryInterface`, `OuterAddRef`, and `OuterRelease`, all inherited through `Base`.

## Inheritance Hierarchy

`Base`

`CComContainedObject`

## Requirements

**Header:** atlcom.h

## <a name="addref"></a> CComContainedObject::AddRef

Increments the reference count on the owner object.

```
STDMETHOD_(ULONG, AddRef)();
```

### Return Value

A value that may be useful for diagnostics or testing.

## <a name="ccomcontainedobject"></a> CComContainedObject::CComContainedObject

The constructor.

```
CComContainedObject(void* pv);
```

### Parameters

*pv*<br/>
[in] The owner object's `IUnknown`.

### Remarks

Sets the `m_pOuterUnknown` member pointer (inherited through the `Base` class) to *pv*.

## <a name="dtor"></a> CComContainedObject::~CComContainedObject

The destructor.

```
~CComContainedObject();
```

### Remarks

Frees all allocated resources.

## <a name="getcontrollingunknown"></a> CComContainedObject::GetControllingUnknown

Returns the `m_pOuterUnknown` member pointer (inherited through the *Base* class) that holds the owner object's `IUnknown`.

```
IUnknown* GetControllingUnknown();
```

### Return Value

The owner object's `IUnknown`.

### Remarks

This method may be virtual if `Base` has declared the [DECLARE_GET_CONTROLLING_UNKNOWN](aggregation-and-class-factory-macros.md#declare_get_controlling_unknown) macro.

## <a name="queryinterface"></a> CComContainedObject::QueryInterface

Retrieves a pointer to the interface requested on the owner object.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
template <class Q>
HRESULT STDMETHODCALLTYPE QueryInterface(Q** pp);
```

### Parameters

*iid*<br/>
[in] The identifier of the interface being requested.

*ppvObject*<br/>
[out] A pointer to the interface pointer identified by *iid*. If the object does not support this interface, *ppvObject* is set to NULL.

*pp*<br/>
[out] A pointer to the interface pointer identified by type `Q`. If the object does not support this interface, *pp* is set to NULL.

### Return Value

A standard HRESULT value.

## <a name="release"></a> CComContainedObject::Release

Decrements the reference count on the owner object.

```
STDMETHOD_(ULONG, Release)();
```

### Return Value

In debug builds, `Release` returns a value that may be useful for diagnostics or testing. In non-debug builds, `Release` always returns 0.

## See also

[Class Overview](../../atl/atl-class-overview.md)
