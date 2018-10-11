---
title: "IRowsetNotifyImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL.IRowsetNotifyImpl", "ATL::IRowsetNotifyImpl", "IRowsetNotifyImpl", "IRowsetNotifyImpl.OnFieldChange", "IRowsetNotifyImpl::OnFieldChange", "OnFieldChange", "IRowsetNotifyImpl::OnRowChange", "IRowsetNotifyImpl.OnRowChange", "OnRowChange", "OnRowsetChange", "IRowsetNotifyImpl::OnRowsetChange", "IRowsetNotifyImpl.OnRowsetChange"]
dev_langs: ["C++"]
helpviewer_keywords: ["IRowsetNotifyImpl class", "OnFieldChange method", "OnRowChange method", "OnRowsetChange method"]
ms.assetid: fbfd0cb2-38ff-4b42-899a-8de902f834b8
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IRowsetNotifyImpl Class

Implements and registers [IRowsetNotify](/previous-versions/windows/desktop/ms712959) on the consumer (also known as the "sink") so that it can handle notifications.  
  
## Syntax

```cpp
class ATL_NO_VTABLE IRowsetNotifyImpl : public IRowsetNotify  
```  

## Requirements  

**Header:** atldbcli.h  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[OnFieldChange](#onfieldchange)|Notifies the consumer of any change to the value of a column.|  
|[OnRowChange](#onrowchange)|Notifies the consumer of the first change to a row or of any change that affects the entire row.|  
|[OnRowsetChange](#onrowsetchange)|Notifies the consumer of any change affecting the entire rowset.|  
  
## Remarks  

See [Receiving Notifications](../../data/oledb/receiving-notifications.md) about implementing the connection point interface on the consumer.  
  
`IRowsetNotifyImpl` provides a dummy implementation for `IRowsetNotify`, with empty functions for the `IRowsetNotify` methods [OnFieldChange](/previous-versions/windows/desktop/ms715961), [OnRowChange](/previous-versions/windows/desktop/ms722694), and [OnRowsetChange](/previous-versions/windows/desktop/ms722669). If you inherit from this class when you implement an `IRowsetNotify` interface, you can implement only the methods you need. You also need to provide empty implementations for the other methods yourself.  

## <a name="onfieldchange"></a> IRowsetNotifyImpl::OnFieldChange

Notifies the consumer of any change to the value of a column.  
  
### Syntax  
  
```cpp
STDMETHOD(OnFieldChange)(   
/* [in] */ IRowset* /* pRowset */,  
/* [in] */ HROW /* hRow */,  
/* [in] */ DBORDINAL /* cColumns */,  
/* [size_is][in] */ DBORDINAL /* rgColumns */ [] ,  
/* [in] */ DBREASON /* eReason */,  
/* [in] */ DBEVENTPHASE /* ePhase */,  
/* [in] */ BOOL /* fCantDeny */)  
```  
  
#### Parameters  

See [IRowsetNotify::OnFieldChange](/previous-versions/windows/desktop/ms715961) for parameter descriptions.  
  
### Return Value  

See [IRowsetNotify::OnFieldChange](/previous-versions/windows/desktop/ms715961) for return value descriptions.  
  
### Remarks  

This method wraps the [IRowsetNotify::OnFieldChange](/previous-versions/windows/desktop/ms715961) method. See that method's description in the OLE DB Programmer's Reference for details.  

## <a name="onrowchange"></a> IRowsetNotifyImpl::OnRowChange

Notifies the consumer of the first change to a row or of any change that affects the entire row.  
  
### Syntax  
  
```cpp
STDMETHOD(OnRowChange)(   
/* [in] */ IRowset* /* pRowset */,  
/* [in] */ DBCOUNTITEM /* cRows */,  
/* [size_is][in] */ const HROW /* rghRows*/ [] ,  
/* [in] */ DBREASON /* eReason */,  
/* [in] */ DBEVENTPHASE /* ePhase */,  
/* [in] */ BOOL /* fCantDeny */)  
```  
  
#### Parameters  

See [IRowsetNotify::OnRowChange](/previous-versions/windows/desktop/ms722694) for parameter descriptions.  
  
### Return Value  

See [IRowsetNotify::OnRowChange](/previous-versions/windows/desktop/ms722694) for return value descriptions.  
  
### Remarks  

This method wraps the [IRowsetNotify::OnRowChange](/previous-versions/windows/desktop/ms722694) method. See that method's description in the OLE DB Programmer's Reference for details. 

## <a name="onrowsetchange"></a> IRowsetNotifyImpl::OnRowsetChange

Notifies the consumer of any change affecting the entire rowset.  
  
### Syntax  
  
```cpp
STDMETHOD(OnRowsetChange)(   
/* [in] */ IRowset* /* pRowset */,  
/* [in] */ DBREASON /* eReason */,  
/* [in] */ DBEVENTPHASE /* ePhase */,  
/* [in] */ BOOL /* fCantDeny */)  
```  
  
#### Parameters  

See [IRowsetNotify::OnRowsetChange](/previous-versions/windows/desktop/ms722669) for parameter descriptions.  
  
### Return Value  

See [IRowsetNotify::OnRowsetChange](/previous-versions/windows/desktop/ms722669) for return value descriptions.  
  
### Remarks  

This method wraps the [IRowsetNotify::OnRowsetChange](/previous-versions/windows/desktop/ms722669) method. See that method's description in the OLE DB Programmer's Reference for details.
  
## See Also  

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[IRowsetNotify](/previous-versions/windows/desktop/ms712959)   
[IRowsetNotifyCP Class](../../data/oledb/irowsetnotifycp-class.md)