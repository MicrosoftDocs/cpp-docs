---
title: "IRowsetNotifyCP Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["IRowsetNotifyCP", "Fire_OnFieldChange", "ATL::IRowsetNotifyCP::Fire_OnFieldChange", "ATL.IRowsetNotifyCP.Fire_OnFieldChange", "IRowsetNotifyCP.Fire_OnFieldChange",  "IRowsetNotifyCP::Fire_OnFieldChange", "IRowsetNotifyCP.Fire_OnRowChange", "ATL.IRowsetNotifyCP.Fire_OnRowChange", "Fire_OnRowChange", "ATL::IRowsetNotifyCP::Fire_OnRowChange",    "IRowsetNotifyCP::Fire_OnRowChange", "Fire_OnRowsetChange", "IRowsetNotifyCP::Fire_OnRowsetChange", "IRowsetNotifyCP.Fire_OnRowsetChange", "ATL::IRowsetNotifyCP::Fire_OnRowsetChange", "ATL.IRowsetNotifyCP.Fire_OnRowsetChange"]
dev_langs: ["C++"]
helpviewer_keywords: ["IRowsetNotifyCP class", "Fire_OnFieldChange method", "Fire_OnRowChange method", "Fire_OnRowsetChange method"]
ms.assetid: ccef402b-94a0-4c2e-9a13-7e854ef82390
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IRowsetNotifyCP Class
Implements the provider site for the connection point interface [IRowsetNotify](https://msdn.microsoft.com/library/ms712959.aspx).  
  
## Syntax

```cpp
template <class T, class ReentrantEventSync = CComSharedMutex>  
class IRowsetNotifyCP :   
   public IConnectionPointImpl<  
      T,   
      piid = &__uuidof(IRowsetNotify),   
      CComDynamicUnkArray DynamicUnkArray>,  
   public ReentrantEventSync  
```  
  
### Parameters  
 *T*  
 A class derived from `IRowsetNotifyCP`.  
  
 *ReentrantEventSync*  
 A mutex class that supports reentrancy (the default is `CComSharedMutex`). A mutex is a synchronization object that allows one thread mutually exclusive access to a resource.  
  
 *piid*  
 A interface ID pointer (`IID*`) for an `IRowsetNotify` connection point interface. The default value is `&__uuidof(IRowsetNotify)`.  
  
 *DynamicUnkArray*  
 An array of type [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md), which is a dynamically allocated array of `IUnknown` pointers to the client sink interfaces. 

## Requirements  
 **Header:** atldb.h   
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[Fire_OnFieldChange](#onfieldchange)|Notifies the consumer of a change to the value of a column.|  
|[Fire_OnRowChange](#onrowchange)|Notifies the consumer of a change affecting the rows.|  
|[Fire_OnRowsetChange](#onrowsetchange)|Notifies the consumer of a change affecting the entire rowset.|  
  
## Remarks  
 `IRowsetNotifyCP` implements broadcast functions to advise listeners on the connection point `IID_IRowsetNotify` of changes to the contents of the rowset.  
  
 Note that you must also implement and register `IRowsetNotify` on the consumer (also known as the "sink") using [IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md) so that the consumer can handle notifications. See [Receiving Notifications](../../data/oledb/receiving-notifications.md) about implementing the connection point interface on the consumer.  
  
 For detailed information on implementing notifications, see "Supporting Notifications" in [Creating an Updatable Provider](../../data/oledb/creating-an-updatable-provider.md).  

## <a name="onfieldchange"></a> IRowsetNotifyCP::Fire_OnFieldChange
Broadcasts an [OnFieldChange](https://msdn.microsoft.com/library/ms715961.aspx) event to notify consumers of a change to the value of a column.  
  
### Syntax  
  
```cpp
HRESULT Fire_OnFieldChange(IRowset* pRowset,  
   HROW hRow,  
   DBORDINAL cColumns,  
   DBORDINAL* rgColumns,  
   DBREASON eReason,  
   DBEVENTPHASE ePhase,  
   BOOL fCantDeny);  
```  
  
#### Parameters  
 See [IRowsetNotify::OnFieldChange](https://msdn.microsoft.com/library/ms715961.aspx) in the *OLE DB Programmer's Reference*. 

## <a name="onrowchange"></a> IRowsetNotifyCP::Fire_OnRowChange
Broadcasts an [OnRowChange](https://msdn.microsoft.com/library/ms722694.aspx) event to all listeners on the connection point `IID_IRowsetNotify` to notify consumers of a change affecting the rows.  
  
### Syntax  
  
```cpp
HRESULT Fire_OnRowChange(IRowset* pRowset,  
   DBCOUNTITEM cRows,  
   const HROW rghRows[],  
   DBREASON eReason,  
   DBEVENTPHASE ePhase,  
   BOOL fCantDeny);  
```  
  
#### Parameters  
 See [IRowsetNotify::OnRowChange](https://msdn.microsoft.com/library/ms722694.aspx) in the *OLE DB Programmer's Reference*.  

## <a name="onrowsetchange"></a> IRowsetNotifyCP::Fire_OnRowsetChange
Broadcasts an [OnRowsetChange](https://msdn.microsoft.com/library/ms722669.aspx) event to all listeners on the connection point `IID_IRowsetNotify` to notify consumers of a change affecting the entire rowset.  
  
### Syntax  
  
```cpp
HRESULT Fire_OnRowsetChange(IRowset* pRowset,  
   DBREASON eReason,  
   DBEVENTPHASE ePhase,  
   BOOL fCantDeny);  
```  
  
#### Parameters  
 See [IRowsetNotify::OnRowsetChange](https://msdn.microsoft.com/library/ms722669.aspx) in the *OLE DB Programmer's Reference*.
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Notifications (COM)](http://msdn.microsoft.com/library/windows/desktop/ms678433)   
 [BEGIN_CONNECTION_POINT_MAP](../../atl/reference/connection-point-macros.md#begin_connection_point_map)   
 [END_CONNECTION_POINT_MAP](../../atl/reference/connection-point-macros.md#end_connection_point_map)   
 [CONNECTION_POINT_ENTRY](../../atl/reference/connection-point-macros.md#connection_point_entry)   
 [Creating an Updatable Provider](../../data/oledb/creating-an-updatable-provider.md)