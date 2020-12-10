---
description: "Learn more about: IConnectionPointContainerImpl Class"
title: "IConnectionPointContainerImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IConnectionPointContainerImpl", "ATLCOM/ATL::IConnectionPointContainerImpl", "ATLCOM/ATL::IConnectionPointContainerImpl::EnumConnectionPoints", "ATLCOM/ATL::IConnectionPointContainerImpl::FindConnectionPoint"]
helpviewer_keywords: ["connectable objects", "connection points [C++], container", "IConnectionPointContainerImpl class"]
ms.assetid: 10db5a8d-8be9-4d9d-8a82-8ab9ffe3e9d6
---
# IConnectionPointContainerImpl Class

This class implements a connection point container to manage a collection of [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) objects.

## Syntax

```
template<class T>
class ATL_NO_VTABLE IConnectionPointContainerImpl
   : public IConnectionPointContainer
```

#### Parameters

*T*<br/>
Your class, derived from `IConnectionPointContainerImpl`.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IConnectionPointContainerImpl::EnumConnectionPoints](#enumconnectionpoints)|Creates an enumerator to iterate through the connection points supported in the connectable object.|
|[IConnectionPointContainerImpl::FindConnectionPoint](#findconnectionpoint)|Retrieves an interface pointer to the connection point that supports the specified IID.|

## Remarks

`IConnectionPointContainerImpl` implements a connection point container to manage a collection of [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) objects. `IConnectionPointContainerImpl` provides two methods that a client can call to retrieve more information about a connectable object:

- `EnumConnectionPoints` allows the client to determine which outgoing interfaces the object supports.

- `FindConnectionPoint` allows the client to determine whether the object supports a specific outgoing interface.

For information about using connection points in ATL, see the article [Connection Points](../../atl/atl-connection-points.md).

## Inheritance Hierarchy

`IConnectionPointContainer`

`IConnectionPointContainerImpl`

## Requirements

**Header:** atlcom.h

## <a name="enumconnectionpoints"></a> IConnectionPointContainerImpl::EnumConnectionPoints

Creates an enumerator to iterate through the connection points supported in the connectable object.

```
STDMETHOD(EnumConnectionPoints)(IEnumConnectionPoints** ppEnum);
```

### Remarks

See [IConnectionPointContainer::EnumConnectionPoints](/windows/win32/api/ocidl/nf-ocidl-iconnectionpointcontainer-enumconnectionpoints) in the Windows SDK.

## <a name="findconnectionpoint"></a> IConnectionPointContainerImpl::FindConnectionPoint

Retrieves an interface pointer to the connection point that supports the specified IID.

```
STDMETHOD(FindConnectionPoint)(REFIID riid, IConnectionPoint** ppCP);
```

### Remarks

See [IConnectionPointContainer::FindConnectionPoint](/windows/win32/api/ocidl/nf-ocidl-iconnectionpointcontainer-findconnectionpoint) in the Windows SDK.

## See also

[IConnectionPointContainer](/windows/win32/api/ocidl/nn-ocidl-iconnectionpointcontainer)<br/>
[Class Overview](../../atl/atl-class-overview.md)
