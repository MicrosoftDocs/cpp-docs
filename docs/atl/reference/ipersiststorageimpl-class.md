---
description: "Learn more about: IPersistStorageImpl Class"
title: "IPersistStorageImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IPersistStorageImpl", "ATLCOM/ATL::IPersistStorageImpl", "ATLCOM/ATL::IPersistStorageImpl::GetClassID", "ATLCOM/ATL::IPersistStorageImpl::HandsOffStorage", "ATLCOM/ATL::IPersistStorageImpl::InitNew", "ATLCOM/ATL::IPersistStorageImpl::IsDirty", "ATLCOM/ATL::IPersistStorageImpl::Load", "ATLCOM/ATL::IPersistStorageImpl::Save", "ATLCOM/ATL::IPersistStorageImpl::SaveCompleted"]
helpviewer_keywords: ["storage, ATL", "IPersistStorageImpl class"]
ms.assetid: d652f02c-239c-47c7-9a50-3e9fc3014fff
---
# IPersistStorageImpl Class

This class implements the [IPersistStorage](/windows/win32/api/objidl/nn-objidl-ipersiststorage) interface.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <class T>
class ATL_NO_VTABLE IPersistStorageImpl : public IPersistStorage
```

#### Parameters

*T*<br/>
Your class, derived from `IPersistStorageImpl`.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IPersistStorageImpl::GetClassID](#getclassid)|Retrieves the object's CLSID.|
|[IPersistStorageImpl::HandsOffStorage](#handsoffstorage)|Instructs the object to release all storage objects and enter HandsOff mode. The ATL implementation returns S_OK.|
|[IPersistStorageImpl::InitNew](#initnew)|Initializes a new storage.|
|[IPersistStorageImpl::IsDirty](#isdirty)|Checks whether the object's data has changed since it was last saved.|
|[IPersistStorageImpl::Load](#load)|Loads the object's properties from the specified storage.|
|[IPersistStorageImpl::Save](#save)|Saves the object's properties to the specified storage.|
|[IPersistStorageImpl::SaveCompleted](#savecompleted)|Notifies an object that it can return to Normal mode to write to its storage object. The ATL implementation returns S_OK.|

## Remarks

`IPersistStorageImpl` implements the [IPersistStorage](/windows/win32/api/objidl/nn-objidl-ipersiststorage) interface, which allows a client to request that your object load and save its persistent data using a storage.

The implementation of this class requires class `T` to make an implementation of the `IPersistStreamInit` interface available via `QueryInterface`. Typically this means that class `T` should derive from [IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md), provide an entry for `IPersistStreamInit` in the [COM map](com-map-macros.md), and use a [property map](property-map-macros.md) to describe the class's persistent data.

**Related Articles** [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md), [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)

## Inheritance Hierarchy

`IPersistStorage`

`IPersistStorageImpl`

## Requirements

**Header:** atlcom.h

## <a name="getclassid"></a> IPersistStorageImpl::GetClassID

Retrieves the object's CLSID.

```
STDMETHOD(GetClassID)(CLSID* pClassID);
```

### Remarks

See [IPersist::GetClassID](/windows/win32/api/objidl/nf-objidl-ipersist-getclassid) in the Windows SDK.

## <a name="handsoffstorage"></a> IPersistStorageImpl::HandsOffStorage

Instructs the object to release all storage objects and enter HandsOff mode.

```
STDMETHOD(HandsOffStorage)(void);
```

### Return Value

Returns S_OK.

### Remarks

See [IPersistStorage::HandsOffStorage](/windows/win32/api/objidl/nf-objidl-ipersiststorage-handsoffstorage) in the Windows SDK.

## <a name="initnew"></a> IPersistStorageImpl::InitNew

Initializes a new storage.

```
STDMETHOD(InitNew)(IStorage*);
```

### Remarks

The ATL implementation delegates to the [IPersistStreamInit](/windows/win32/api/ocidl/nn-ocidl-ipersiststreaminit) interface.

See [IPersistStorage:InitNew](/windows/win32/api/objidl/nf-objidl-ipersiststorage-initnew) in the Windows SDK.

## <a name="isdirty"></a> IPersistStorageImpl::IsDirty

Checks whether the object's data has changed since it was last saved.

```
STDMETHOD(IsDirty)(void);
```

### Remarks

The ATL implementation delegates to the [IPersistStreamInit](/windows/win32/api/ocidl/nn-ocidl-ipersiststreaminit) interface.

See [IPersistStorage:IsDirty](/windows/win32/api/objidl/nf-objidl-ipersiststorage-isdirty) in the Windows SDK.

## <a name="load"></a> IPersistStorageImpl::Load

Loads the object's properties from the specified storage.

```
STDMETHOD(Load)(IStorage* pStorage);
```

### Remarks

The ATL implementation delegates to the [IPersistStreamInit](/windows/win32/api/ocidl/nn-ocidl-ipersiststreaminit) interface. `Load` uses a stream named "Contents" to retrieve the object's data. The [Save](#save) method originally creates this stream.

See [IPersistStorage:Load](/windows/win32/api/objidl/nf-objidl-ipersiststorage-load) in the Windows SDK.

## <a name="save"></a> IPersistStorageImpl::Save

Saves the object's properties to the specified storage.

```
STDMETHOD(Save)(IStorage* pStorage, BOOL fSameAsLoad);
```

### Remarks

The ATL implementation delegates to the [IPersistStreamInit](/windows/win32/api/ocidl/nn-ocidl-ipersiststreaminit) interface. When `Save` is first called, it creates a stream named "Contents" on the specified storage. This stream is then used in later calls to `Save` and in calls to [Load](#load).

See [IPersistStorage:Save](/windows/win32/api/objidl/nf-objidl-ipersiststorage-save) in the Windows SDK.

## <a name="savecompleted"></a> IPersistStorageImpl::SaveCompleted

Notifies an object that it can return to Normal mode to write to its storage object.

```
STDMETHOD(SaveCompleted)(IStorage*);
```

### Return Value

Returns S_OK.

### Remarks

See [IPersistStorage:SaveCompleted](/windows/win32/api/objidl/nf-objidl-ipersiststorage-savecompleted) in the Windows SDK.

## See also

[Storages and Streams](/windows/win32/Stg/storages-and-streams)<br/>
[IPersistStreamInitImpl Class](../../atl/reference/ipersiststreaminitimpl-class.md)<br/>
[IPersistPropertyBagImpl Class](../../atl/reference/ipersistpropertybagimpl-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
