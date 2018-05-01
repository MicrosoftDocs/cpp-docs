---
title: "IConnectionPointImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.IConnectionPointImpl"
  - "IConnectionPointImpl"
  - "ATL::IConnectionPointImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "connection points [C++], implementing"
  - "IConnectionPointImpl class"
ms.assetid: 27992115-3b86-45dd-bc9e-54f32876c557
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IConnectionPointImpl Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IConnectionPointImpl Class](https://docs.microsoft.com/cpp/atl/reference/iconnectionpointimpl-class).  
  
  
This class implements a connection point.  
  
## Syntax  
  
```
template<class T, const IID* piid, class CDV = CComDynamicUnkArray>  
class ATL_NO_VTABLE IConnectionPointImpl : public _ICPLocator<piid>
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IConnectionPointImpl`.  
  
 `piid`  
 A pointer to the IID of the interface represented by the connection point object.  
  
 `CDV`  
 A class that manages the connections. The default value is [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md), which allows unlimited connections. You can also use [CComUnkArray](../../atl/reference/ccomunkarray-class.md), which specifies a fixed number of connections.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IConnectionPointImpl::Advise](#iconnectionpointimpl__advise)|Establishes a connection between the connection point and a sink.|  
|[IConnectionPointImpl::EnumConnections](#iconnectionpointimpl__enumconnections)|Creates an enumerator to iterate through the connections for the connection point.|  
|[IConnectionPointImpl::GetConnectionInterface](#iconnectionpointimpl__getconnectioninterface)|Retrieves the IID of the interface represented by the connection point.|  
|[IConnectionPointImpl::GetConnectionPointContainer](#iconnectionpointimpl__getconnectionpointcontainer)|Retrieves an interface pointer to the connectable object.|  
|[IConnectionPointImpl::Unadvise](#iconnectionpointimpl__unadvise)|Terminates a connection previously established through `Advise`.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[IConnectionPointImpl::m_vec](#iconnectionpointimpl__m_vec)|Manages the connections for the connection point.|  
  
## Remarks  
 `IConnectionPointImpl` implements a connection point, which allows an object to expose an outgoing interface to the client. The client implements this interface on an object called a sink.  
  
 ATL uses [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md) to implement the connectable object. Each connection point within the connectable object represents an outgoing interface, identified by `piid`. Class *CDV* manages the connections between the connection point and a sink. Each connection is uniquely identified by a "cookie."  
  
 For more information about using connection points in ATL, see the article [Connection Points](../../atl/atl-connection-points.md).  
  
## Inheritance Hierarchy  
 `_ICPLocator`  
  
 `IConnectionPointImpl`  
  
## Requirements  
 **Header:** atlcom.h  
  
##  <a name="iconnectionpointimpl__advise"></a>  IConnectionPointImpl::Advise  
 Establishes a connection between the connection point and a sink.  
  
```
STDMETHOD(Advise)(
    IUnknown* pUnkSink,
    DWORD* pdwCookie);
```  
  
### Remarks  
 Use [Unadvise](#iconnectionpointimpl__unadvise) to terminate the connection call.  
  
 See [IConnectionPoint::Advise](http://msdn.microsoft.com/library/windows/desktop/ms678815) in the [!INCLUDE[winSDK](../../includes/winsdk-md.md)].  
  
##  <a name="iconnectionpointimpl__enumconnections"></a>  IConnectionPointImpl::EnumConnections  
 Creates an enumerator to iterate through the connections for the connection point.  
  
```
STDMETHOD(EnumConnections)(IEnumConnections** ppEnum);
```  
  
### Remarks  
 See [IConnectionPoint::EnumConnections](http://msdn.microsoft.com/library/windows/desktop/ms680755) in the [!INCLUDE[winSDK](../../includes/winsdk-md.md)].  
  
##  <a name="iconnectionpointimpl__getconnectioninterface"></a>  IConnectionPointImpl::GetConnectionInterface  
 Retrieves the IID of the interface represented by the connection point.  
  
```
STDMETHOD(GetConnectionInterface)(IID* piid2);
```  
  
### Remarks  
 See [IConnectionPoint::GetConnectionInterface](http://msdn.microsoft.com/library/windows/desktop/ms693468) in the [!INCLUDE[winSDK](../../includes/winsdk-md.md)].  
  
##  <a name="iconnectionpointimpl__getconnectionpointcontainer"></a>  IConnectionPointImpl::GetConnectionPointContainer  
 Retrieves an interface pointer to the connectable object.  
  
```
STDMETHOD(GetConnectionPointContainer)(IConnectionPointContainer** ppCPC);
```  
  
### Remarks  
 See [IConnectionPoint::GetConnectionPointContainer](http://msdn.microsoft.com/library/windows/desktop/ms679669) in the [!INCLUDE[winSDK](../../includes/winsdk-md.md)].  
  
##  <a name="iconnectionpointimpl__m_vec"></a>  IConnectionPointImpl::m_vec  
 Manages the connections between the connection point object and a sink.  
  
```
CDV m_vec;
```     
  
### Remarks  
 By default, `m_vec` is of type [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md).  
  
##  <a name="iconnectionpointimpl__unadvise"></a>  IConnectionPointImpl::Unadvise  
 Terminates a connection previously established through [Advise](#iconnectionpointimpl__advise).  
  
```
STDMETHOD(Unadvise)(DWORD dwCookie);
```  
  
### Remarks  
 See [IConnectionPoint::Unadvise](http://msdn.microsoft.com/library/windows/desktop/ms686608) in the [!INCLUDE[winSDK](../../includes/winsdk-md.md)].  
  
## See Also  
 [IConnectionPoint](http://msdn.microsoft.com/library/windows/desktop/ms694318)   
 [Class Overview](../../atl/atl-class-overview.md)






