---
description: "Learn more about: IDBInitializeImpl Class"
title: "IDBInitializeImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["ATL.IDBInitializeImpl<T>", "ATL::IDBInitializeImpl<T>", "IDBInitializeImpl", "ATL::IDBInitializeImpl", "ATL.IDBInitializeImpl", "IDBInitializeImpl.IDBInitializeImpl", "IDBInitializeImpl::IDBInitializeImpl", "Initialize", "IDBInitializeImpl::Initialize", "IDBInitializeImpl.Initialize", "IDBInitializeImpl.Uninitialize", "Uninitialize", "IDBInitializeImpl::Uninitialize", "ATL::IDBInitializeImpl::m_dwStatus", "IDBInitializeImpl.m_dwStatus", "ATL.IDBInitializeImpl.m_dwStatus", "IDBInitializeImpl::m_dwStatus", "IDBInitializeImpl<T>::m_dwStatus", "ATL.IDBInitializeImpl<T>.m_dwStatus", "ATL::IDBInitializeImpl<T>::m_dwStatus", "m_dwStatus", "ATL::IDBInitializeImpl<T>::m_pCUtlPropInfo", "m_pCUtlPropInfo", "IDBInitializeImpl::m_pCUtlPropInfo", "ATL.IDBInitializeImpl.m_pCUtlPropInfo", "IDBInitializeImpl<T>::m_pCUtlPropInfo", "IDBInitializeImpl.m_pCUtlPropInfo", "ATL::IDBInitializeImpl::m_pCUtlPropInfo"]
helpviewer_keywords: ["IDBInitializeImpl class", "IDBInitializeImpl constructor", "Initialize method", "Uninitialize method", "m_dwStatus", "m_pCUtlPropInfo"]
ms.assetid: e4182f81-0443-44f5-a0d3-e7e075d6f883
---
# IDBInitializeImpl Class

Provides an implementation for the [IDBInitialize](/previous-versions/windows/desktop/ms713706(v=vs.85)) interface.

## Syntax

```cpp
template <class T>
class ATL_NO_VTABLE IDBInitializeImpl : public IDBInitialize
```

### Parameters

*T*<br/>
Your class, derived from `IDBInitializeImpl`.

## Requirements

**Header:** atldb.h

## Members

### Methods

| Name | Description |
|-|-|
|[IDBInitializeImpl](#idbinitializeimpl)|The constructor.|

### Interface Methods

| Name | Description |
|-|-|
|[Initialize](#initialize)|Starts the provider.|
|[Uninitialize](#uninitialize)|Stops the provider.|

### Data Members

| Name | Description |
|-|-|
|[m_dwStatus](#dwstatus)|Data source flags.|
|[m_pCUtlPropInfo](#pcutlpropinfo)|A pointer to implementation of DB Properties information.|

## Remarks

A mandatory interface on data source objects and optional interface on enumerators.

## <a name="idbinitializeimpl"></a> IDBInitializeImpl::IDBInitializeImpl

The constructor.

### Syntax

```cpp
IDBInitializeImpl();
```

### Remarks

Initializes all data members.

## <a name="initialize"></a> IDBInitializeImpl::Initialize

Initializes the data source object by preparing its property support.

### Syntax

```cpp
STDMETHOD(Initialize)(void);
```

### Remarks

See [IDBInitialize::Initialize](/previous-versions/windows/desktop/ms718026(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="uninitialize"></a> IDBInitializeImpl::Uninitialize

Places the data source object in an uninitialized state by freeing internal resources such as the property support.

### Syntax

```cpp
STDMETHOD(Uninitialize)(void);
```

### Remarks

See [IDBInitialize::Uninitialize](/previous-versions/windows/desktop/ms719648(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="dwstatus"></a> IDBInitializeImpl::m_dwStatus

Data source flags.

### Syntax

```cpp
DWORD m_dwStatus;
```

### Remarks

These flags specify or indicate the status of various attributes for the data source object. Contains one or more of the following **`enum`** values:

```cpp
enum DATASOURCE_FLAGS {
    DSF_MASK_INIT     = 0xFFFFF00F,
    DSF_PERSIST_DIRTY = 0x00000001,
    DSF_INITIALIZED   = 0x00000010,
};
```

| Value | Description |
|-|-|
|`DSF_MASK_INIT`|A mask to enable restoration of the uninitialized state.|
|`DSF_PERSIST_DIRTY`|Set if data source object requires persistence (that is, if there have been changes).|
|`DSF_INITIALIZED`|Set if data source has been initialized.|

## <a name="pcutlpropinfo"></a> IDBInitializeImpl::m_pCUtlPropInfo

A pointer to implementation object for DB Properties information.

### Syntax

```cpp
CUtlPropInfo< T >* m_pCUtlPropInfo;
```

## See also

[OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)
