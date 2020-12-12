---
description: "Learn more about: CComObjectStack Class"
title: "CComObjectStack Class"
ms.date: "11/04/2016"
f1_keywords: ["CComObjectStack", "ATLCOM/ATL::CComObjectStack", "ATLCOM/ATL::CComObjectStack::CComObjectStack", "ATLCOM/ATL::CComObjectStack::AddRef", "ATLCOM/ATL::CComObjectStack::QueryInterface", "ATLCOM/ATL::CComObjectStack::Release", "ATLCOM/ATL::CComObjectStack::m_hResFinalConstruct"]
helpviewer_keywords: ["CComObjectStack class"]
ms.assetid: 3da72c40-c834-45f6-bb76-6ac204028d80
---
# CComObjectStack Class

This class creates a temporary COM object and provides it with a skeletal implementation of `IUnknown`.

## Syntax

```
template <class  Base>
class CComObjectStack : public Base
```

#### Parameters

*Base*<br/>
Your class, derived from [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) or [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), as well as from any other interface you want to support on the object.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CComObjectStack::CComObjectStack](#ccomobjectstack)|The constructor.|
|[CComObjectStack::~CComObjectStack](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComObjectStack::AddRef](#addref)|Returns zero. In debug mode, calls `_ASSERTE`.|
|[CComObjectStack::QueryInterface](#queryinterface)|Returns E_NOINTERFACE. In debug mode, calls `_ASSERTE`.|
|[CComObjectStack::Release](#release)|Returns zero. In debug mode, calls `_ASSERTE`. ~|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CComObjectStack::m_hResFinalConstruct](#m_hresfinalconstruct)|Contains the HRESULT returned during construction of the `CComObjectStack` object.|

## Remarks

`CComObjectStack` is used to create a temporary COM object and provide the object a skeletal implementation of `IUnknown`. Typically, the object is used as a local variable within one function (that is, pushed onto the stack). Since the object is destroyed when the function finishes, reference counting is not performed to increase efficiency.

The following example shows how to create a COM object used inside a function:

[!code-cpp[NVC_ATL_COM#42](../../atl/codesnippet/cpp/ccomobjectstack-class_1.cpp)]

The temporary object `Tempobj` is pushed onto the stack and automatically disappears when the function finishes.

## Inheritance Hierarchy

`Base`

`CComObjectStack`

## Requirements

**Header:** atlcom.h

## <a name="addref"></a> CComObjectStack::AddRef

Returns zero.

```
STDMETHOD_(ULONG, AddRef)();
```

### Return Value

Returns zero.

### Remarks

In debug mode, calls `_ASSERTE`.

## <a name="ccomobjectstack"></a> CComObjectStack::CComObjectStack

The constructor.

```
CComObjectStack(void* = NULL);
```

### Remarks

Calls `FinalConstruct` and then sets [m_hResFinalConstruct](#m_hresfinalconstruct) to the HRESULT returned by `FinalConstruct`. If you have not derived your base class from [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md), you must supply your own `FinalConstruct` method. The destructor calls `FinalRelease`.

## <a name="dtor"></a> CComObjectStack::~CComObjectStack

The destructor.

```
CComObjectStack();
```

### Remarks

Frees all allocated resources and calls [FinalRelease](ccomobjectrootex-class.md#finalrelease).

## <a name="m_hresfinalconstruct"></a> CComObjectStack::m_hResFinalConstruct

Contains the HRESULT returned from calling `FinalConstruct` during construction of the `CComObjectStack` object.

```
HRESULT    m_hResFinalConstruct;
```

## <a name="queryinterface"></a> CComObjectStack::QueryInterface

Returns E_NOINTERFACE.

```
HRESULT    QueryInterface(REFIID, void**);
```

### Return Value

Returns E_NOINTERFACE.

### Remarks

In debug mode, calls `_ASSERTE`.

## <a name="release"></a> CComObjectStack::Release

Returns zero.

```
STDMETHOD_(ULONG, Release)();
```

### Return Value

Returns zero.

### Remarks

In debug mode, calls `_ASSERTE`.

## See also

[CComAggObject Class](../../atl/reference/ccomaggobject-class.md)<br/>
[CComObject Class](../../atl/reference/ccomobject-class.md)<br/>
[CComObjectGlobal Class](../../atl/reference/ccomobjectglobal-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
