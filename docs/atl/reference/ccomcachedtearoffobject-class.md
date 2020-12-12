---
description: "Learn more about: CComCachedTearOffObject Class"
title: "CComCachedTearOffObject Class"
ms.date: "11/04/2016"
f1_keywords: ["CComCachedTearOffObject", "ATLCOM/ATL::CComCachedTearOffObject", "ATLCOM/ATL::CComCachedTearOffObject::CComCachedTearOffObject", "ATLCOM/ATL::CComCachedTearOffObject::AddRef", "ATLCOM/ATL::CComCachedTearOffObject::FinalConstruct", "ATLCOM/ATL::CComCachedTearOffObject::FinalRelease", "ATLCOM/ATL::CComCachedTearOffObject::QueryInterface", "ATLCOM/ATL::CComCachedTearOffObject::Release", "ATLCOM/ATL::CComCachedTearOffObject::m_contained"]
helpviewer_keywords: ["cache, ATL cached tear-off objects", "CComCachedTearOffObject class"]
ms.assetid: ae19507d-a1de-4dbc-a988-da9f75a50c95
---
# CComCachedTearOffObject Class

This class implements [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) for a tear-off interface.

## Syntax

```
template
<class contained>
class CComCachedTearOffObject : public
    IUnknown,
public CComObjectRootEx<contained
::_ThreadModel::ThreadModelNoCS>
```

#### Parameters

*contained*<br/>
Your tear-off class, derived from `CComTearOffObjectBase` and the interfaces you want your tear-off object to support.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CComCachedTearOffObject::CComCachedTearOffObject](#ccomcachedtearoffobject)|The constructor.|
|[CComCachedTearOffObject::~CComCachedTearOffObject](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComCachedTearOffObject::AddRef](#addref)|Increments the reference count for a `CComCachedTearOffObject` object.|
|[CComCachedTearOffObject::FinalConstruct](#finalconstruct)|Calls the `m_contained::FinalConstruct` (the tear-off class' method).|
|[CComCachedTearOffObject::FinalRelease](#finalrelease)|Calls the `m_contained::FinalRelease` (the tear-off class' method).|
|[CComCachedTearOffObject::QueryInterface](#queryinterface)|Returns a pointer to the `IUnknown` of the `CComCachedTearOffObject` object, or to the requested interface on your tear-off class (the class `contained`).|
|[CComCachedTearOffObject::Release](#release)|Decrements the reference count for a `CComCachedTearOffObject` object and destroys it if the reference count is 0.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CComCachedTearOffObject::m_contained](#m_contained)|A `CComContainedObject` object derived from your tear-off class (the class `contained`).|

## Remarks

`CComCachedTearOffObject` implements [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) for a tear-off interface. This class differs from `CComTearOffObject` in that `CComCachedTearOffObject` has its own `IUnknown`, separate from the owner object's `IUnknown` (the owner is the object for which the tear-off is being created). `CComCachedTearOffObject` maintains its own reference count on its `IUnknown` and deletes itself once its reference count is zero. However, if you query for any of its tear-off interfaces, the reference count of the owner object's `IUnknown` will be incremented.

If the `CComCachedTearOffObject` object implementing the tear-off is already instantiated, and the tear-off interface is queried for again, the same `CComCachedTearOffObject` object is reused. In contrast, if a tear-off interface implemented by a `CComTearOffObject` is again queried for through the owner object, another `CComTearOffObject` will be instantiated.

The owner class must implement `FinalRelease` and call `Release` on the cached `IUnknown` for the `CComCachedTearOffObject`, which will decrement its reference count. This will cause `CComCachedTearOffObject`'s `FinalRelease` to be called and delete the tear-off.

## Inheritance Hierarchy

`CComObjectRootBase`

[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

`IUnknown`

`CComCachedTearOffObject`

## Requirements

**Header:** atlcom.h

## <a name="addref"></a> CComCachedTearOffObject::AddRef

Increments the reference count of the `CComCachedTearOffObject` object by 1.

```
STDMETHOD_(ULONG, AddRef)();
```

### Return Value

A value that may be useful for diagnostics and testing.

## <a name="ccomcachedtearoffobject"></a> CComCachedTearOffObject::CComCachedTearOffObject

The constructor.

```
CComCachedTearOffObject(void* pv);
```

### Parameters

*pv*<br/>
[in] Pointer to the `IUnknown` of the `CComCachedTearOffObject`.

### Remarks

Initializes the `CComContainedObject` member, [m_contained](#m_contained).

## <a name="dtor"></a> CComCachedTearOffObject::~CComCachedTearOffObject

The destructor.

```
~CComCachedTearOffObject();
```

### Remarks

Frees all allocated resources and calls [FinalRelease](#finalrelease).

## <a name="finalconstruct"></a> CComCachedTearOffObject::FinalConstruct

Calls `m_contained::FinalConstruct` to create `m_contained`, the `CComContainedObject`< `contained`> object used to access the interface implemented by your tear-off class.

```
HRESULT FinalConstruct();
```

### Return Value

A standard HRESULT value.

## <a name="finalrelease"></a> CComCachedTearOffObject::FinalRelease

Calls `m_contained::FinalRelease` to free `m_contained`, the `CComContainedObject`< `contained`> object.

```cpp
void FinalRelease();
```

## <a name="m_contained"></a> CComCachedTearOffObject::m_contained

A [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) object derived from your tear-off class.

```
CcomContainedObject <contained> m_contained;
```

### Parameters

*contained*<br/>
[in] Your tear-off class, derived from `CComTearOffObjectBase` and the interfaces you want your tear-off object to support.

### Remarks

The methods `m_contained` inherits are used to access the tear-off interface in your tear-off class through the cached tear-off object's `QueryInterface`, `FinalConstruct`, and `FinalRelease`.

## <a name="queryinterface"></a> CComCachedTearOffObject::QueryInterface

Retrieves a pointer to the requested interface.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```

### Parameters

*iid*<br/>
[in] The GUID of the interface being requested.

*ppvObject*<br/>
[out] A pointer to the interface pointer identified by *iid*, or NULL if the interface is not found.

### Return Value

A standard HRESULT value.

### Remarks

If the requested interface is `IUnknown`, returns a pointer to the `CComCachedTearOffObject`'s own `IUnknown` and increments the reference count. Otherwise, queries for the interface on your tear-off class using the [InternalQueryInterface](ccomobjectrootex-class.md#internalqueryinterface) method inherited from `CComObjectRootEx`.

## <a name="release"></a> CComCachedTearOffObject::Release

Decrements the reference count by 1 and, if the reference count is 0, deletes the `CComCachedTearOffObject` object.

```
STDMETHOD_(ULONG, Release)();
```

### Return Value

In non-debug builds, always returns 0. In debug builds, returns a value that may be useful for diagnostics or testing.

## See also

[CComTearOffObject Class](../../atl/reference/ccomtearoffobject-class.md)<br/>
[CComObjectRootEx Class](../../atl/reference/ccomobjectrootex-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
