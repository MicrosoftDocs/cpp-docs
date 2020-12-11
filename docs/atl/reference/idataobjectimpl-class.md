---
description: "Learn more about: IDataObjectImpl Class"
title: "IDataObjectImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IDataObjectImpl", "ATLCTL/ATL::IDataObjectImpl", "ATLCTL/ATL::IDataObjectImpl::DAdvise", "ATLCTL/ATL::IDataObjectImpl::DUnadvise", "ATLCTL/ATL::IDataObjectImpl::EnumDAdvise", "ATLCTL/ATL::IDataObjectImpl::EnumFormatEtc", "ATLCTL/ATL::IDataObjectImpl::FireDataChange", "ATLCTL/ATL::IDataObjectImpl::GetCanonicalFormatEtc", "ATLCTL/ATL::IDataObjectImpl::GetData", "ATLCTL/ATL::IDataObjectImpl::GetDataHere", "ATLCTL/ATL::IDataObjectImpl::QueryGetData", "ATLCTL/ATL::IDataObjectImpl::SetData"]
helpviewer_keywords: ["data transfer [C++]", "data transfer [C++], Uniform Data Transfer", "IDataObjectImpl class", "IDataObject, ATL implementation"]
ms.assetid: b680f0f7-7795-40a1-a0f6-f48768201c89
---
# IDataObjectImpl Class

This class provides methods for supporting Uniform Data Transfer and managing connections.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template<class T>
class IDataObjectImpl
```

#### Parameters

*T*<br/>
Your class, derived from `IDataObjectImpl`.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IDataObjectImpl::DAdvise](#dadvise)|Establishes a connection between the data object and an advise sink. This enables the advise sink to receive notifications of changes in the object.|
|[IDataObjectImpl::DUnadvise](#dunadvise)|Terminates a connection previously established through `DAdvise`.|
|[IDataObjectImpl::EnumDAdvise](#enumdadvise)|Creates an enumerator to iterate through the current advisory connections.|
|[IDataObjectImpl::EnumFormatEtc](#enumformatetc)|Creates an enumerator to iterate through the `FORMATETC` structures supported by the data object. The ATL implementation returns E_NOTIMPL.|
|[IDataObjectImpl::FireDataChange](#firedatachange)|Sends a change notification back to each advise sink.|
|[IDataObjectImpl::GetCanonicalFormatEtc](#getcanonicalformatetc)|Retrieves a logically equivalent `FORMATETC` structure to one that is more complex. The ATL implementation returns E_NOTIMPL.|
|[IDataObjectImpl::GetData](#getdata)|Transfers data from the data object to the client. The data is described in a `FORMATETC` structure and is transferred through a `STGMEDIUM` structure.|
|[IDataObjectImpl::GetDataHere](#getdatahere)|Similar to `GetData`, except the client must allocate the `STGMEDIUM` structure. The ATL implementation returns E_NOTIMPL.|
|[IDataObjectImpl::QueryGetData](#querygetdata)|Determines whether the data object supports a particular `FORMATETC` structure for transferring data. The ATL implementation returns E_NOTIMPL.|
|[IDataObjectImpl::SetData](#setdata)|Transfers data from the client to the data object. The ATL implementation returns E_NOTIMPL.|

## Remarks

The [IDataObject](/windows/win32/api/objidl/nn-objidl-idataobject) interface provides methods to support Uniform Data Transfer. `IDataObject` uses the standard format structures [FORMATETC](/windows/win32/api/objidl/ns-objidl-formatetc) and [STGMEDIUM](/windows/win32/api/objidl/ns-objidl-ustgmedium-r1) to retrieve and store data.

`IDataObject` also manages connections to advise sinks to handle data change notifications. In order for the client to receive data change notifications from the data object, the client must implement the [IAdviseSink](/windows/win32/api/objidl/nn-objidl-iadvisesink) interface on an object called an advise sink. When the client then calls `IDataObject::DAdvise`, a connection is established between the data object and the advise sink.

Class `IDataObjectImpl` provides a default implementation of `IDataObject` and implements `IUnknown` by sending information to the dump device in debug builds.

**Related Articles** [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md), [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)

## Inheritance Hierarchy

`IDataObject`

`IDataObjectImpl`

## Requirements

**Header:** atlctl.h

## <a name="dadvise"></a> IDataObjectImpl::DAdvise

Establishes a connection between the data object and an advise sink.

```
HRESULT DAdvise(
    FORMATETC* pformatetc,
    DWORD advf,
    IAdviseSink* pAdvSink,
    DWORD* pdwConnection);
```

### Remarks

This enables the advise sink to receive notifications of changes in the object.

To terminate the connection, call [DUnadvise](#dunadvise).

See [IDataObject::DAdvise](/windows/win32/api/objidl/nf-objidl-idataobject-dadvise) in the Windows SDK.

## <a name="dunadvise"></a> IDataObjectImpl::DUnadvise

Terminates a connection previously established through [DAdvise](#dadvise).

```
HRESULT DUnadvise(DWORD dwConnection);
```

### Remarks

See [IDataObject::DUnadvise](/windows/win32/api/objidl/nf-objidl-idataobject-dunadvise) in the Windows SDK.

## <a name="enumdadvise"></a> IDataObjectImpl::EnumDAdvise

Creates an enumerator to iterate through the current advisory connections.

```
HRESULT DAdvise(
    FORMATETC* pformatetc,
    DWORD advf,
    IAdviseSink* pAdvSink,
    DWORD* pdwConnection);
```

### Remarks

See [IDataObject::EnumDAdvise](/windows/win32/api/objidl/nf-objidl-idataobject-enumdadvise) in the Windows SDK.

## <a name="enumformatetc"></a> IDataObjectImpl::EnumFormatEtc

Creates an enumerator to iterate through the `FORMATETC` structures supported by the data object.

```
HRESULT EnumFormatEtc(
    DWORD dwDirection,
    IEnumFORMATETC** ppenumFormatEtc);
```

### Remarks

See [IDataObject::EnumFormatEtc](/windows/win32/api/objidl/nf-objidl-idataobject-enumformatetc) in the Windows SDK.

### Return Value

Returns E_NOTIMPL.

## <a name="firedatachange"></a> IDataObjectImpl::FireDataChange

Sends a change notification back to each advise sink that is currently being managed.

```
HRESULT FireDataChange();
```

### Return Value

A standard HRESULT value.

## <a name="getcanonicalformatetc"></a> IDataObjectImpl::GetCanonicalFormatEtc

Retrieves a logically equivalent `FORMATETC` structure to one that is more complex.

```
HRESULT GetCanonicalFormatEtc(FORMATETC* pformatetcIn, FORMATETC* pformatetcOut);
```

### Return Value

Returns E_NOTIMPL.

### Remarks

See [IDataObject::GetCanonicalFormatEtc](/windows/win32/api/objidl/nf-objidl-idataobject-getcanonicalformatetc) in the Windows SDK.

## <a name="getdata"></a> IDataObjectImpl::GetData

Transfers data from the data object to the client.

```
HRESULT GetData(
    FORMATETC* pformatetcIn,
    STGMEDIUM* pmedium);
```

### Remarks

The *pformatetcIn* parameter must specify a storage medium type of TYMED_MFPICT.

See [IDataObject::GetData](/windows/win32/api/objidl/nf-objidl-idataobject-getdata) in the Windows SDK.

## <a name="getdatahere"></a> IDataObjectImpl::GetDataHere

Similar to `GetData`, except the client must allocate the `STGMEDIUM` structure.

```
HRESULT GetDataHere(
    FORMATETC* pformatetc,
    STGMEDIUM* pmedium);
```

### Return Value

Returns E_NOTIMPL.

### Remarks

See [IDataObject::GetDataHere](/windows/win32/api/objidl/nf-objidl-idataobject-getdatahere) in the Windows SDK.

## <a name="querygetdata"></a> IDataObjectImpl::QueryGetData

Determines whether the data object supports a particular `FORMATETC` structure for transferring data.

```
HRESULT QueryGetData(FORMATETC* pformatetc);
```

### Return Value

Returns E_NOTIMPL.

### Remarks

See [IDataObject::QueryGetData](/windows/win32/api/objidl/nf-objidl-idataobject-querygetdata) in the Windows SDK.

## <a name="setdata"></a> IDataObjectImpl::SetData

Transfers data from the client to the data object.

```
HRESULT SetData(
    FORMATETC* pformatetc,
    STGMEDIUM* pmedium,
    BOOL fRelease);
```

### Return Value

Returns E_NOTIMPL.

### Remarks

See [IDataObject::SetData](/windows/win32/api/objidl/nf-objidl-idataobject-setdata) in the Windows SDK.

## See also

[Class Overview](../../atl/atl-class-overview.md)
