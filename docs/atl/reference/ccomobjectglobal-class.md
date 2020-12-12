---
description: "Learn more about: CComObjectGlobal Class"
title: "CComObjectGlobal Class"
ms.date: "11/04/2016"
f1_keywords: ["CComObjectGlobal", "ATLCOM/ATL::CComObjectGlobal", "ATLCOM/ATL::CComObjectGlobal::CComObjectGlobal", "ATLCOM/ATL::CComObjectGlobal::AddRef", "ATLCOM/ATL::CComObjectGlobal::QueryInterface", "ATLCOM/ATL::CComObjectGlobal::Release", "ATLCOM/ATL::CComObjectGlobal::m_hResFinalConstruct"]
helpviewer_keywords: ["CComObjectGlobal class"]
ms.assetid: 79bdee55-66e4-4536-b5b3-bdf09f78b9a6
---
# CComObjectGlobal Class

This class manages a reference count on the module containing your `Base` object.

## Syntax

```
template<class Base>
class CComObjectGlobal : public Base
```

#### Parameters

*Base*<br/>
Your class, derived from [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) or [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), as well as from any other interface you want to support on the object.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CComObjectGlobal::CComObjectGlobal](#ccomobjectglobal)|The constructor.|
|[CComObjectGlobal::~CComObjectGlobal](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComObjectGlobal::AddRef](#addref)|Implements a global `AddRef`.|
|[CComObjectGlobal::QueryInterface](#queryinterface)|Implements a global `QueryInterface`.|
|[CComObjectGlobal::Release](#release)|Implements a global `Release`.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CComObjectGlobal::m_hResFinalConstruct](#m_hresfinalconstruct)|Contains the HRESULT returned during construction of the `CComObjectGlobal` object.|

## Remarks

`CComObjectGlobal` manages a reference count on the module containing your `Base` object. `CComObjectGlobal` ensures your object will not be deleted as long as the module is not released. Your object will only be removed when the reference count on the entire module goes to zero.

For example, using `CComObjectGlobal`, a class factory can hold a common global object that is shared by all its clients.

## Inheritance Hierarchy

`Base`

`CComObjectGlobal`

## Requirements

**Header:** atlcom.h

## <a name="addref"></a> CComObjectGlobal::AddRef

Increments the reference count of the object by 1.

```
STDMETHOD_(ULONG, AddRef)();
```

### Return Value

A value that may be useful for diagnostics and testing.

### Remarks

By default, `AddRef` calls `_Module::Lock`, where `_Module` is the global instance of [CComModule](../../atl/reference/ccommodule-class.md) or a class derived from it.

## <a name="ccomobjectglobal"></a> CComObjectGlobal::CComObjectGlobal

The constructor. Calls `FinalConstruct` and then sets [m_hResFinalConstruct](#m_hresfinalconstruct) to the `HRESULT` returned by `FinalConstruct`.

```
CComObjectGlobal(void* = NULL));
```

### Remarks

If you have not derived your base class from [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md), you must supply your own `FinalConstruct` method. The destructor calls `FinalRelease`.

## <a name="dtor"></a> CComObjectGlobal::~CComObjectGlobal

The destructor.

```
CComObjectGlobal();
```

### Remarks

Frees all allocated resources and calls [FinalRelease](ccomobjectrootex-class.md#finalrelease).

## <a name="m_hresfinalconstruct"></a> CComObjectGlobal::m_hResFinalConstruct

Contains the HRESULT from calling `FinalConstruct` during construction of the `CComObjectGlobal` object.

```
HRESULT m_hResFinalConstruct;
```

## <a name="queryinterface"></a> CComObjectGlobal::QueryInterface

Retrieves a pointer to the requested interface pointer.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```

### Parameters

*iid*<br/>
[in] The GUID of the interface being requested.

*ppvObject*<br/>
[out] A pointer to the interface pointer identified by iid, or NULL if the interface is not found.

### Return Value

A standard HRESULT value.

### Remarks

`QueryInterface` only handles interfaces in the COM map table.

## <a name="release"></a> CComObjectGlobal::Release

Decrements the reference count of the object by 1.

```
STDMETHOD_(ULONG, Release)();
```

### Return Value

In debug builds, `Release` returns a value that may be useful for diagnostics and testing. In non-debug builds, `Release` always returns 0.

### Remarks

By default, `Release` calls `_Module::Unlock`, where `_Module` is the global instance of [CComModule](../../atl/reference/ccommodule-class.md) or a class derived from it.

## See also

[CComObjectStack Class](../../atl/reference/ccomobjectstack-class.md)<br/>
[CComAggObject Class](../../atl/reference/ccomaggobject-class.md)<br/>
[CComObject Class](../../atl/reference/ccomobject-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
