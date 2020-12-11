---
description: "Learn more about: IRowsetNotifyCP Class"
title: "IRowsetNotifyCP Class"
ms.date: "11/04/2016"
f1_keywords: ["IRowsetNotifyCP", "Fire_OnFieldChange", "ATL::IRowsetNotifyCP::Fire_OnFieldChange", "ATL.IRowsetNotifyCP.Fire_OnFieldChange", "IRowsetNotifyCP.Fire_OnFieldChange", "IRowsetNotifyCP::Fire_OnFieldChange", "IRowsetNotifyCP.Fire_OnRowChange", "ATL.IRowsetNotifyCP.Fire_OnRowChange", "Fire_OnRowChange", "ATL::IRowsetNotifyCP::Fire_OnRowChange", "IRowsetNotifyCP::Fire_OnRowChange", "Fire_OnRowsetChange", "IRowsetNotifyCP::Fire_OnRowsetChange", "IRowsetNotifyCP.Fire_OnRowsetChange", "ATL::IRowsetNotifyCP::Fire_OnRowsetChange", "ATL.IRowsetNotifyCP.Fire_OnRowsetChange"]
helpviewer_keywords: ["IRowsetNotifyCP class", "Fire_OnFieldChange method", "Fire_OnRowChange method", "Fire_OnRowsetChange method"]
ms.assetid: ccef402b-94a0-4c2e-9a13-7e854ef82390
---
# IRowsetNotifyCP Class

Implements the provider site for the connection point interface [IRowsetNotify](/previous-versions/windows/desktop/ms712959(v=vs.85)).

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

*T*<br/>
A class derived from `IRowsetNotifyCP`.

*ReentrantEventSync*<br/>
A mutex class that supports reentrancy (the default is `CComSharedMutex`). A mutex is a synchronization object that allows one thread mutually exclusive access to a resource.

*piid*<br/>
A interface ID pointer (`IID*`) for an `IRowsetNotify` connection point interface. The default value is `&__uuidof(IRowsetNotify)`.

*DynamicUnkArray*<br/>
An array of type [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md), which is a dynamically allocated array of `IUnknown` pointers to the client sink interfaces.

## Requirements

**Header:** atldb.h

## Members

### Methods

| Name | Description |
|-|-|
|[Fire_OnFieldChange](#onfieldchange)|Notifies the consumer of a change to the value of a column.|
|[Fire_OnRowChange](#onrowchange)|Notifies the consumer of a change affecting the rows.|
|[Fire_OnRowsetChange](#onrowsetchange)|Notifies the consumer of a change affecting the entire rowset.|

## Remarks

`IRowsetNotifyCP` implements broadcast functions to advise listeners on the connection point `IID_IRowsetNotify` of changes to the contents of the rowset.

Note that you must also implement and register `IRowsetNotify` on the consumer (also known as the "sink") using [IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md) so that the consumer can handle notifications. See [Receiving Notifications](../../data/oledb/receiving-notifications.md) about implementing the connection point interface on the consumer.

For detailed information on implementing notifications, see "Supporting Notifications" in [Creating an Updatable Provider](../../data/oledb/creating-an-updatable-provider.md).

## <a name="onfieldchange"></a> IRowsetNotifyCP::Fire_OnFieldChange

Broadcasts an [OnFieldChange](/previous-versions/windows/desktop/ms715961(v=vs.85)) event to notify consumers of a change to the value of a column.

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

See [IRowsetNotify::OnFieldChange](/previous-versions/windows/desktop/ms715961(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="onrowchange"></a> IRowsetNotifyCP::Fire_OnRowChange

Broadcasts an [OnRowChange](/previous-versions/windows/desktop/ms722694(v=vs.85)) event to all listeners on the connection point `IID_IRowsetNotify` to notify consumers of a change affecting the rows.

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

See [IRowsetNotify::OnRowChange](/previous-versions/windows/desktop/ms722694(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="onrowsetchange"></a> IRowsetNotifyCP::Fire_OnRowsetChange

Broadcasts an [OnRowsetChange](/previous-versions/windows/desktop/ms722669(v=vs.85)) event to all listeners on the connection point `IID_IRowsetNotify` to notify consumers of a change affecting the entire rowset.

### Syntax

```cpp
HRESULT Fire_OnRowsetChange(IRowset* pRowset,
   DBREASON eReason,
   DBEVENTPHASE ePhase,
   BOOL fCantDeny);
```

#### Parameters

See [IRowsetNotify::OnRowsetChange](/previous-versions/windows/desktop/ms722669(v=vs.85)) in the *OLE DB Programmer's Reference*.

## See also

[OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
[Notifications (COM)](/windows/win32/com/notifications)<br/>
[BEGIN_CONNECTION_POINT_MAP](../../atl/reference/connection-point-macros.md#begin_connection_point_map)<br/>
[END_CONNECTION_POINT_MAP](../../atl/reference/connection-point-macros.md#end_connection_point_map)<br/>
[CONNECTION_POINT_ENTRY](../../atl/reference/connection-point-macros.md#connection_point_entry)<br/>
[Creating an Updatable Provider](../../data/oledb/creating-an-updatable-provider.md)
