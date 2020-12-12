---
description: "Learn more about: CComAggObject Class"
title: "CComAggObject Class"
ms.date: "11/04/2016"
f1_keywords: ["CComAggObject", "ATLCOM/ATL::CComAggObject", "ATLCOM/ATL::CComAggObject::CComAggObject", "ATLCOM/ATL::CComAggObject::AddRef", "ATLCOM/ATL::CComAggObject::CreateInstance", "ATLCOM/ATL::CComAggObject::FinalConstruct", "ATLCOM/ATL::CComAggObject::FinalRelease", "ATLCOM/ATL::CComAggObject::QueryInterface", "ATLCOM/ATL::CComAggObject::Release", "ATLCOM/ATL::CComAggObject::m_contained"]
helpviewer_keywords: ["aggregate objects [C++], in ATL", "aggregation [C++], ATL objects", "CComAggObject class"]
ms.assetid: 7aa90d69-d399-477b-880d-e2cdf0ef7881
---
# CComAggObject Class

This class implements the [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) interface for an aggregated object. By definition, an aggregated object is contained within an outer object. The `CComAggObject` class is similar to the [CComObject Class](../../atl/reference/ccomobject-class.md), except that it exposes an interface that is directly accessible to external clients.

## Syntax

```
template<class contained>
class CComAggObject : public IUnknown,
   public CComObjectRootEx<contained::_ThreadModel::ThreadModelNoCS>
```

#### Parameters

*contained*<br/>
Your class, derived from [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) or [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), as well as from any other interfaces you want to support on the object.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CComAggObject::CComAggObject](#ccomaggobject)|The constructor.|
|[CComAggObject::~CComAggObject](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComAggObject::AddRef](#addref)|Increments the reference count on the aggregated object.|
|[CComAggObject::CreateInstance](#createinstance)|This static function allows you to create a new **CComAggObject<** `contained` **>** object without the overhead of [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance).|
|[CComAggObject::FinalConstruct](#finalconstruct)|Performs final initialization of `m_contained`.|
|[CComAggObject::FinalRelease](#finalrelease)|Performs final destruction of `m_contained`.|
|[CComAggObject::QueryInterface](#queryinterface)|Retrieves a pointer to the requested interface.|
|[CComAggObject::Release](#release)|Decrements the reference count on the aggregated object.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CComAggObject::m_contained](#m_contained)|Delegates `IUnknown` calls to the outer unknown.|

## Remarks

`CComAggObject` implements [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) for an aggregated object. `CComAggObject` has its own `IUnknown` interface, separate from the outer object's `IUnknown` interface, and maintains its own reference count.

For more information about aggregation, see the article [Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md).

## Inheritance Hierarchy

`CComObjectRootBase`

[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

`IUnknown`

`CComAggObject`

## Requirements

**Header:** atlcom.h

## <a name="addref"></a> CComAggObject::AddRef

Increments the reference count on the aggregated object.

```
STDMETHOD_(ULONG, AddRef)();
```

### Return Value

A value that may be useful for diagnostics or testing.

## <a name="ccomaggobject"></a> CComAggObject::CComAggObject

The constructor.

```
CComAggObject(void* pv);
```

### Parameters

*pv*<br/>
[in] The outer unknown.

### Remarks

Initializes the `CComContainedObject` member, [m_contained](#m_contained), and increments the module lock count.

The destructor decrements the module lock count.

## <a name="dtor"></a> CComAggObject::~CComAggObject

The destructor.

```
~CComAggObject();
```

### Remarks

Frees all allocated resources, calls [FinalRelease](#finalrelease), and decrements the module lock count.

## <a name="createinstance"></a> CComAggObject::CreateInstance

This static function allows you to create a new **CComAggObject<**`contained` **>** object without the overhead of [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance).

```
static HRESULT WINAPI CreateInstance(
    LPUNKNOWN pUnkOuter,
    CComAggObject<contained>** pp);
```

### Parameters

*pp*<br/>
[out] A pointer to a **CComAggObject\<**<em>contained</em>**>** pointer. If `CreateInstance` is unsuccessful, *pp* is set to NULL.

### Return Value

A standard HRESULT value.

### Remarks

The object returned has a reference count of zero, so call `AddRef` immediately, then use `Release` to free the reference on the object pointer when you're done.

If you do not need direct access to the object, but still want to create a new object without the overhead of `CoCreateInstance`, use [CComCoClass::CreateInstance](../../atl/reference/ccomcoclass-class.md#createinstance) instead.

## <a name="finalconstruct"></a> CComAggObject::FinalConstruct

Called during the final stages of object construction, this method performs any final initialization on the [m_contained](#m_contained) member.

```
HRESULT FinalConstruct();
```

### Return Value

A standard HRESULT value.

## <a name="finalrelease"></a> CComAggObject::FinalRelease

Called during object destruction, this method frees the [m_contained](#m_contained) member.

```cpp
void FinalRelease();
```

## <a name="m_contained"></a> CComAggObject::m_contained

A [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) object derived from your class.

```
CComContainedObject<contained> m_contained;
```

### Parameters

*contained*<br/>
[in] Your class, derived from [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) or [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), as well as from any other interfaces you want to support on the object.

### Remarks

All `IUnknown` calls through `m_contained` are delegated to the outer unknown.

## <a name="queryinterface"></a> CComAggObject::QueryInterface

Retrieves a pointer to the requested interface.

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

### Remarks

If the requested interface is `IUnknown`, `QueryInterface` returns a pointer to the aggregated object's own `IUnknown` and increments the reference count. Otherwise, this method queries for the interface through the `CComContainedObject` member, [m_contained](#m_contained).

## <a name="release"></a> CComAggObject::Release

Decrements the reference count on the aggregated object.

```
STDMETHOD_(ULONG, Release)();
```

### Return Value

In debug builds, `Release` returns a value that may be useful for diagnostics or testing. In non-debug builds, `Release` always returns 0.

## See also

[CComObject Class](../../atl/reference/ccomobject-class.md)<br/>
[CComPolyObject Class](../../atl/reference/ccompolyobject-class.md)<br/>
[DECLARE_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_aggregatable)<br/>
[DECLARE_ONLY_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_only_aggregatable)<br/>
[DECLARE_NOT_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_not_aggregatable)<br/>
[Class Overview](../../atl/atl-class-overview.md)
