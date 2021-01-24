---
description: "Learn more about: IConnectionPointImpl Class"
title: "IConnectionPointImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IConnectionPointImpl", "ATLCOM/ATL::IConnectionPointImpl", "ATLCOM/ATL::IConnectionPointImpl::Advise", "ATLCOM/ATL::IConnectionPointImpl::EnumConnections", "ATLCOM/ATL::IConnectionPointImpl::GetConnectionInterface", "ATLCOM/ATL::IConnectionPointImpl::GetConnectionPointContainer", "ATLCOM/ATL::IConnectionPointImpl::Unadvise", "ATLCOM/ATL::IConnectionPointImpl::m_vec"]
helpviewer_keywords: ["connection points [C++], implementing", "IConnectionPointImpl class"]
ms.assetid: 27992115-3b86-45dd-bc9e-54f32876c557
---
# IConnectionPointImpl Class

This class implements a connection point.

## Syntax

```
template<class T, const IID* piid, class CDV = CComDynamicUnkArray>
class ATL_NO_VTABLE IConnectionPointImpl : public _ICPLocator<piid>
```

#### Parameters

*T*<br/>
Your class, derived from `IConnectionPointImpl`.

*piid*<br/>
A pointer to the IID of the interface represented by the connection point object.

*CDV*<br/>
A class that manages the connections. The default value is [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md), which allows unlimited connections. You can also use [CComUnkArray](../../atl/reference/ccomunkarray-class.md), which specifies a fixed number of connections.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IConnectionPointImpl::Advise](#advise)|Establishes a connection between the connection point and a sink.|
|[IConnectionPointImpl::EnumConnections](#enumconnections)|Creates an enumerator to iterate through the connections for the connection point.|
|[IConnectionPointImpl::GetConnectionInterface](#getconnectioninterface)|Retrieves the IID of the interface represented by the connection point.|
|[IConnectionPointImpl::GetConnectionPointContainer](#getconnectionpointcontainer)|Retrieves an interface pointer to the connectable object.|
|[IConnectionPointImpl::Unadvise](#unadvise)|Terminates a connection previously established through `Advise`.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[IConnectionPointImpl::m_vec](#m_vec)|Manages the connections for the connection point.|

## Remarks

`IConnectionPointImpl` implements a connection point, which allows an object to expose an outgoing interface to the client. The client implements this interface on an object called a sink.

ATL uses [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md) to implement the connectable object. Each connection point within the connectable object represents an outgoing interface, identified by *piid*. Class *CDV* manages the connections between the connection point and a sink. Each connection is uniquely identified by a "cookie."

For more information about using connection points in ATL, see the article [Connection Points](../../atl/atl-connection-points.md).

## Inheritance Hierarchy

`_ICPLocator`

`IConnectionPointImpl`

## Requirements

**Header:** atlcom.h

## <a name="advise"></a> IConnectionPointImpl::Advise

Establishes a connection between the connection point and a sink.

```
STDMETHOD(Advise)(
    IUnknown* pUnkSink,
    DWORD* pdwCookie);
```

### Remarks

Use [Unadvise](#unadvise) to terminate the connection call.

See [IConnectionPoint::Advise](/windows/win32/api/ocidl/nf-ocidl-iconnectionpoint-advise) in the Windows SDK.

## <a name="enumconnections"></a> IConnectionPointImpl::EnumConnections

Creates an enumerator to iterate through the connections for the connection point.

```
STDMETHOD(EnumConnections)(IEnumConnections** ppEnum);
```

### Remarks

See [IConnectionPoint::EnumConnections](/windows/win32/api/ocidl/nf-ocidl-iconnectionpoint-enumconnections) in the Windows SDK.

## <a name="getconnectioninterface"></a> IConnectionPointImpl::GetConnectionInterface

Retrieves the IID of the interface represented by the connection point.

```
STDMETHOD(GetConnectionInterface)(IID* piid2);
```

### Remarks

See [IConnectionPoint::GetConnectionInterface](/windows/win32/api/ocidl/nf-ocidl-iconnectionpoint-getconnectioninterface) in the Windows SDK.

## <a name="getconnectionpointcontainer"></a> IConnectionPointImpl::GetConnectionPointContainer

Retrieves an interface pointer to the connectable object.

```
STDMETHOD(GetConnectionPointContainer)(IConnectionPointContainer** ppCPC);
```

### Remarks

See [IConnectionPoint::GetConnectionPointContainer](/windows/win32/api/ocidl/nf-ocidl-iconnectionpoint-getconnectionpointcontainer) in the Windows SDK.

## <a name="m_vec"></a> IConnectionPointImpl::m_vec

Manages the connections between the connection point object and a sink.

```
CDV m_vec;
```

### Remarks

By default, `m_vec` is of type [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md).

## <a name="unadvise"></a> IConnectionPointImpl::Unadvise

Terminates a connection previously established through [Advise](#advise).

```
STDMETHOD(Unadvise)(DWORD dwCookie);
```

### Remarks

See [IConnectionPoint::Unadvise](/windows/win32/api/ocidl/nf-ocidl-iconnectionpoint-unadvise) in the Windows SDK.

## See also

[IConnectionPoint](/windows/win32/api/ocidl/nn-ocidl-iconnectionpoint)<br/>
[Class Overview](../../atl/atl-class-overview.md)
