---
description: "Learn more about: IPersistStreamInitImpl Class"
title: "IPersistStreamInitImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IPersistStreamInitImpl", "ATLCOM/ATL::IPersistStreamInitImpl", "ATLCOM/ATL::IPersistStreamInitImpl::GetClassID", "ATLCOM/ATL::IPersistStreamInitImpl::GetSizeMax", "ATLCOM/ATL::IPersistStreamInitImpl::InitNew", "ATLCOM/ATL::IPersistStreamInitImpl::IsDirty", "ATLCOM/ATL::IPersistStreamInitImpl::Load", "ATLCOM/ATL::IPersistStreamInitImpl::Save"]
helpviewer_keywords: ["IPersistStreamInit ATL implementation", "IPersistStreamInitImpl class", "streams, ATL"]
ms.assetid: ef217c3c-020f-4cf8-871e-ef68e57865b8
---
# IPersistStreamInitImpl Class

This class implements `IUnknown` and provides a default implementation of the [IPersistStreamInit](/windows/win32/api/ocidl/nn-ocidl-ipersiststreaminit) interface.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template<class T>
class ATL_NO_VTABLE IPersistStreamInitImpl
   : public IPersistStreamInit
```

#### Parameters

*T*<br/>
Your class, derived from `IPersistStreamInitImpl`.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IPersistStreamInitImpl::GetClassID](#getclassid)|Retrieves the object's CLSID.|
|[IPersistStreamInitImpl::GetSizeMax](#getsizemax)|Retrieves the size of the stream needed to save the object's data. The ATL implementation returns E_NOTIMPL.|
|[IPersistStreamInitImpl::InitNew](#initnew)|Initializes a newly created object.|
|[IPersistStreamInitImpl::IsDirty](#isdirty)|Checks whether the object's data has changed since it was last saved.|
|[IPersistStreamInitImpl::Load](#load)|Loads the object's properties from the specified stream.|
|[IPersistStreamInitImpl::Save](#save)|Saves the object's properties to the specified stream.|

## Remarks

The [IPersistStreamInit](/windows/win32/api/ocidl/nn-ocidl-ipersiststreaminit) interface allows a client to request that your object loads and saves its persistent data to a single stream. Class `IPersistStreamInitImpl` provides a default implementation of this interface and implements `IUnknown` by sending information to the dump device in debug builds.

**Related Articles** [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md), [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)

## Inheritance Hierarchy

`IPersistStreamInit`

`IPersistStreamInitImpl`

## Requirements

**Header:** atlcom.h

## <a name="getclassid"></a> IPersistStreamInitImpl::GetClassID

Retrieves the object's CLSID.

```
STDMETHOD(GetClassID)(CLSID* pClassID);
```

### Remarks

See [IPersist::GetClassID](/windows/win32/api/objidl/nf-objidl-ipersist-getclassid) in the Windows SDK.

## <a name="getsizemax"></a> IPersistStreamInitImpl::GetSizeMax

Retrieves the size of the stream needed to save the object's data.

```
STDMETHOD(GetSizeMax)(ULARGE_INTEGER FAR* pcbSize);
```

### Return Value

Returns E_NOTIMPL.

### Remarks

See [IPersistStreamInit::GetSizeMax](/windows/win32/api/ocidl/nf-ocidl-ipersiststreaminit-getsizemax) in the Windows SDK.

## <a name="initnew"></a> IPersistStreamInitImpl::InitNew

Initializes a newly created object.

```
STDMETHOD(InitNew)();
```

### Remarks

See [IPersistStreamInit::InitNew](/windows/win32/api/ocidl/nf-ocidl-ipersiststreaminit-initnew) in the Windows SDK.

## <a name="isdirty"></a> IPersistStreamInitImpl::IsDirty

Checks whether the object's data has changed since it was last saved.

```
STDMETHOD(IsDirty)();
```

### Remarks

See [IPersistStreamInit::IsDirty](/windows/win32/api/ocidl/nf-ocidl-ipersiststreaminit-isdirty) in the Windows SDK.

## <a name="load"></a> IPersistStreamInitImpl::Load

Loads the object's properties from the specified stream.

```
STDMETHOD(Load)(LPSTREAM pStm);
```

### Remarks

ATL uses the object's property map to retrieve this information.

See [IPersistStreamInit::Load](/windows/win32/api/ocidl/nf-ocidl-ipersiststreaminit-load) in the Windows SDK.

## <a name="save"></a> IPersistStreamInitImpl::Save

Saves the object's properties to the specified stream.

```
STDMETHOD(Save)(LPSTREAM pStm, BOOL fClearDirty);
```

### Remarks

ATL uses the object's property map to store this information.

See [IPersistStreamInit::Save](/windows/win32/api/ocidl/nf-ocidl-ipersiststreaminit-save) in the Windows SDK.

## See also

[Storages and Streams](/windows/win32/Stg/storages-and-streams)<br/>
[Class Overview](../../atl/atl-class-overview.md)
