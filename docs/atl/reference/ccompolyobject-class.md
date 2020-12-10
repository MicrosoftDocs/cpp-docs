---
description: "Learn more about: CComPolyObject Class"
title: "CComPolyObject Class"
ms.date: "11/04/2016"
f1_keywords: ["CComPolyObject", "ATLCOM/ATL::CComPolyObject", "ATLCOM/ATL::CComPolyObject::CComPolyObject", "ATLCOM/ATL::CComPolyObject::AddRef", "ATLCOM/ATL::CComPolyObject::CreateInstance", "ATLCOM/ATL::CComPolyObject::FinalConstruct", "ATLCOM/ATL::CComPolyObject::FinalRelease", "ATLCOM/ATL::CComPolyObject::QueryInterface", "ATLCOM/ATL::CComPolyObject::Release", "ATLCOM/ATL::CComPolyObject::m_contained"]
helpviewer_keywords: ["aggregate objects [C++], in ATL", "aggregation [C++], ATL objects", "CComPolyObject class"]
ms.assetid: eaf67c18-e855-48ca-9b15-f1df3106121b
---
# CComPolyObject Class

This class implements `IUnknown` for an aggregated or nonaggregated object.

## Syntax

```
template<class contained>
class CComPolyObject : public IUnknown,
      public CComObjectRootEx<contained::_ThreadModel::ThreadModelNoCS>
```

#### Parameters

*contained*<br/>
Your class, derived from [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) or [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), as well as from any other interfaces you want to support on the object.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CComPolyObject::CComPolyObject](#ccompolyobject)|The constructor.|
|[CComPolyObject::~CComPolyObject](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComPolyObject::AddRef](#addref)|Increments the object's reference count.|
|[CComPolyObject::CreateInstance](#createinstance)|(Static) Allows you to create a new **CComPolyObject<** `contained` **>** object without the overhead of [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance).|
|[CComPolyObject::FinalConstruct](#finalconstruct)|Performs final initialization of `m_contained`.|
|[CComPolyObject::FinalRelease](#finalrelease)|Performs final destruction of `m_contained`.|
|[CComPolyObject::QueryInterface](#queryinterface)|Retrieves a pointer to the requested interface.|
|[CComPolyObject::Release](#release)|Decrements the object's reference count.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CComPolyObject::m_contained](#m_contained)|Delegates `IUnknown` calls to the outer unknown if the object is aggregated or to the `IUnknown` of the object if the object is not aggregated.|

## Remarks

`CComPolyObject` implements [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) for an aggregated or nonaggregated object.

When an instance of `CComPolyObject` is created, the value of the outer unknown is checked. If it is NULL, `IUnknown` is implemented for a nonaggregated object. If the outer unknown is not NULL, `IUnknown` is implemented for an aggregated object.

The advantage of using `CComPolyObject` is that you avoid having both [CComAggObject](../../atl/reference/ccomaggobject-class.md) and [CComObject](../../atl/reference/ccomobject-class.md) in your module to handle the aggregated and nonaggregated cases. A single `CComPolyObject` object handles both cases. This means only one copy of the vtable and one copy of the functions exist in your module. If your vtable is large, this can substantially decrease your module size. However, if your vtable is small, using `CComPolyObject` can result in a slightly larger module size because it is not optimized for an aggregated or nonaggregated object, as are `CComAggObject` and `CComObject`.

If the DECLARE_POLY_AGGREGATABLE macro is specified in your object's class definition, `CComPolyObject` will be used to create your object. DECLARE_POLY_AGGREGATABLE will automatically be declared if you use the ATL Project Wizard to create a full control or Internet Explorer control.

If aggregated, the `CComPolyObject` object has its own `IUnknown`, separate from the outer object's `IUnknown`, and maintains its own reference count. `CComPolyObject` uses [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) to delegate to the outer unknown.

For more information about aggregation, see the article [Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md).

## Inheritance Hierarchy

`CComObjectRootBase`

[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

`IUnknown`

`CComPolyObject`

## Requirements

**Header:** atlcom.h

## <a name="addref"></a> CComPolyObject::AddRef

Increments the reference count on the object.

```
STDMETHOD_(ULONG, AddRef)();
```

### Return Value

A value that may be useful for diagnostics or testing.

## <a name="ccompolyobject"></a> CComPolyObject::CComPolyObject

The constructor.

```
CComPolyObject(void* pv);
```

### Parameters

*pv*<br/>
[in] A pointer to the outer unknown if the object is to be aggregated, or NULL if the object if the object is not aggregated.

### Remarks

Initializes the `CComContainedObject` data member, [m_contained](#m_contained), and increments the module lock count.

The destructor decrements the module lock count.

## <a name="dtor"></a> CComPolyObject::~CComPolyObject

The destructor.

```
~CComPolyObject();
```

### Remarks

Frees all allocated resources, calls [FinalRelease](#finalrelease), and decrements the module lock count.

## <a name="createinstance"></a> CComPolyObject::CreateInstance

Allows you to create a new **CComPolyObject<**`contained` **>** object without the overhead of [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance).

```
static HRESULT WINAPI CreateInstance(
    LPUNKNOWN pUnkOuter,
    CComPolyObject<contained>** pp);
```

### Parameters

*pp*<br/>
[out] A pointer to a **CComPolyObject<** `contained`**>** pointer. If `CreateInstance` is unsuccessful, *pp* is set to NULL.

### Return Value

A standard HRESULT value.

### Remarks

The object returned has a reference count of zero, so call `AddRef` immediately, then use `Release` to free the reference on the object pointer when you're done.

If you don't need direct access to the object, but still want to create a new object without the overhead of `CoCreateInstance`, use [CComCoClass::CreateInstance](../../atl/reference/ccomcoclass-class.md#createinstance) instead.

## <a name="finalconstruct"></a> CComPolyObject::FinalConstruct

Called during the final stages of object construction, this method performs any final initialization on the [m_contained](#m_contained) data member.

```
HRESULT FinalConstruct();
```

### Return Value

A standard HRESULT value.

## <a name="finalrelease"></a> CComPolyObject::FinalRelease

Called during object destruction, this method frees the [m_contained](#m_contained) data member.

```cpp
void FinalRelease();
```

## <a name="m_contained"></a> CComPolyObject::m_contained

A [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) object derived from your class.

```
CComContainedObject<contained> m_contained;
```

### Parameters

*contained*<br/>
[in] Your class, derived from [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) or [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), as well as from any other interfaces you want to support on the object.

### Remarks

`IUnknown` calls through `m_contained` are delegated to the outer unknown if the object is aggregated, or to the `IUnknown` of this object if the object is not aggregated.

## <a name="queryinterface"></a> CComPolyObject::QueryInterface

Retrieves a pointer to the requested interface.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
template <class Q>
HRESULT QueryInterface(Q** pp);
```

### Parameters

*Q*<br/>
The COM interface.

*iid*<br/>
[in] The identifier of the interface being requested.

*ppvObject*<br/>
[out] A pointer to the interface pointer identified by *iid*. If the object does not support this interface, *ppvObject* is set to NULL.

*pp*<br/>
[out] A pointer to the interface identified by `__uuidof(Q)`.

### Return Value

A standard HRESULT value.

### Remarks

For an aggregated object, if the requested interface is `IUnknown`, `QueryInterface` returns a pointer to the aggregated object's own `IUnknown` and increments the reference count. Otherwise, this method queries for the interface through the `CComContainedObject` data member, [m_contained](#m_contained).

## <a name="release"></a> CComPolyObject::Release

Decrements the reference count on the object.

```
STDMETHOD_(ULONG, Release)();
```

### Return Value

In debug builds, `Release` returns a value that may be useful for diagnostics or testing. In nondebug builds, `Release` always returns 0.

## See also

[CComObjectRootEx Class](../../atl/reference/ccomobjectrootex-class.md)<br/>
[DECLARE_POLY_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_poly_aggregatable)<br/>
[Class Overview](../../atl/atl-class-overview.md)
