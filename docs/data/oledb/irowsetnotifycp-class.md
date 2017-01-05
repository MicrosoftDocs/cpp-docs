---
title: "IRowsetNotifyCP Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IRowsetNotifyCP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IRowsetNotifyCP class"
ms.assetid: ccef402b-94a0-4c2e-9a13-7e854ef82390
caps.latest.revision: 10
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
# IRowsetNotifyCP Class
Implements the provider site for the connection point interface [IRowsetNotify](https://msdn.microsoft.com/en-us/library/ms712959.aspx).  
  
## Syntax  
  
```  
template <  
   class T,   
   class ReentrantEventSync = CComSharedMutex   
>  
class IRowsetNotifyCP :   
   public IConnectionPointImpl<  
      T,   
      piid = &__uuidof(IRowsetNotify),   
      CComDynamicUnkArray DynamicUnkArray  
   >,  
   public ReentrantEventSync  
```  
  
#### Parameters  
 `T`  
 A class derived from `IRowsetNotifyCP`.  
  
 `ReentrantEventSync`  
 A mutex class that supports reentrancy (the default is **CComSharedMutex**). A mutex is a synchronization object that allows one thread mutually exclusive access to a resource.  
  
 `piid`  
 A interface ID pointer (**IID\***) for an **IRowsetNotify** connection point interface. The default value is **&__uuidof(IRowsetNotify)**.  
  
 `DynamicUnkArray`  
 An array of type [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md), which is a dynamically allocated array of **IUnknown** pointers to the client sink interfaces.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[Fire_OnFieldChange](../../data/oledb/irowsetnotifycp-fire-onfieldchange.md)|Notifies the consumer of a change to the value of a column.|  
|[Fire_OnRowChange](../../data/oledb/irowsetnotifycp-fire-onrowchange.md)|Notifies the consumer of a change affecting the rows.|  
|[Fire_OnRowsetChange](../../data/oledb/irowsetnotifycp-fire-onrowsetchange.md)|Notifies the consumer of a change affecting the entire rowset.|  
  
## Remarks  
 `IRowsetNotifyCP` implements broadcast functions to advise listeners on the connection point **IID_IRowsetNotify** of changes to the contents of the rowset.  
  
 Note that you must also implement and register `IRowsetNotify` on the consumer (also known as the "sink") using [IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md) so that the consumer can handle notifications. See [Receiving Notifications](../../data/oledb/receiving-notifications.md) about implementing the connection point interface on the consumer.  
  
 For detailed information on implementing notifications, see "Supporting Notifications" in [Creating an Updatable Provider](../../data/oledb/creating-an-updatable-provider.md).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Notifications (COM)](http://msdn.microsoft.com/library/windows/desktop/ms678433)   
 [Overview of Notifications (OLE DB)](https://msdn.microsoft.com/en-us/library/ms725406.aspx)   
 [BEGIN_CONNECTION_POINT_MAP](http://msdn.microsoft.com/library/3896cda6-a8e2-4ed1-ac38-befbe2352034)   
 [END_CONNECTION_POINT_MAP](http://msdn.microsoft.com/library/807c5233-b58c-49a2-a34f-3b5f4a7b1b82)   
 [CONNECTION_POINT_ENTRY](http://msdn.microsoft.com/library/0a7f3053-6433-49b2-a9b5-8a307e8efe14)   
 [Creating an Updatable Provider](../../data/oledb/creating-an-updatable-provider.md)