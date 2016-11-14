---
title: "IConnectionPointContainerImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::IConnectionPointContainerImpl"
  - "ATL.IConnectionPointContainerImpl"
  - "ATL.IConnectionPointContainerImpl<T>"
  - "IConnectionPointContainerImpl"
  - "ATL::IConnectionPointContainerImpl<T>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "connectable objects"
  - "connection points [C++], container"
  - "IConnectionPointContainerImpl class"
ms.assetid: 10db5a8d-8be9-4d9d-8a82-8ab9ffe3e9d6
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# IConnectionPointContainerImpl Class
This class implements a connection point container to manage a collection of [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) objects.  
  
## Syntax  
  
```
template<class T>  class ATL_NO_VTABLE IConnectionPointContainerImpl :   public IConnectionPointContainer
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IConnectionPointContainerImpl`.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IConnectionPointContainerImpl::EnumConnectionPoints](#iconnectionpointcontainerimpl__enumconnectionpoints)|Creates an enumerator to iterate through the connection points supported in the connectable object.|  
|[IConnectionPointContainerImpl::FindConnectionPoint](#iconnectionpointcontainerimpl__findconnectionpoint)|Retrieves an interface pointer to the connection point that supports the specified IID.|  
  
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
  
##  <a name="iconnectionpointcontainerimpl__enumconnectionpoints"></a>  IConnectionPointContainerImpl::EnumConnectionPoints  
 Creates an enumerator to iterate through the connection points supported in the connectable object.  
  
```
STDMETHOD(EnumConnectionPoints)(IEnumConnectionPoints** ppEnum);
```  
  
### Remarks  
 See [IConnectionPointContainer::EnumConnectionPoints](http://msdn.microsoft.com/library/windows/desktop/ms682460) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="iconnectionpointcontainerimpl__findconnectionpoint"></a>  IConnectionPointContainerImpl::FindConnectionPoint  
 Retrieves an interface pointer to the connection point that supports the specified IID.  
  
```
STDMETHOD(FindConnectionPoint)(REFIID riid,
    IConnectionPoint** ppCP);
```  
  
### Remarks  
 See [IConnectionPointContainer::FindConnectionPoint](http://msdn.microsoft.com/library/windows/desktop/ms692476) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## See Also  
 [IConnectionPointContainer](http://msdn.microsoft.com/library/windows/desktop/ms683857)   
 [Class Overview](../../atl/atl-class-overview.md)
