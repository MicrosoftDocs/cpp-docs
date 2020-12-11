---
description: "Learn more about: IRowsetNotifyImpl Class"
title: "IRowsetNotifyImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["ATL.IRowsetNotifyImpl", "ATL::IRowsetNotifyImpl", "IRowsetNotifyImpl", "IRowsetNotifyImpl.OnFieldChange", "IRowsetNotifyImpl::OnFieldChange", "OnFieldChange", "IRowsetNotifyImpl::OnRowChange", "IRowsetNotifyImpl.OnRowChange", "OnRowChange", "OnRowsetChange", "IRowsetNotifyImpl::OnRowsetChange", "IRowsetNotifyImpl.OnRowsetChange"]
helpviewer_keywords: ["IRowsetNotifyImpl class", "OnFieldChange method", "OnRowChange method", "OnRowsetChange method"]
ms.assetid: fbfd0cb2-38ff-4b42-899a-8de902f834b8
---
# IRowsetNotifyImpl Class

Implements and registers [IRowsetNotify](/previous-versions/windows/desktop/ms712959(v=vs.85)) on the consumer (also known as the "sink") so that it can handle notifications.

## Syntax

```cpp
class ATL_NO_VTABLE IRowsetNotifyImpl : public IRowsetNotify
```

## Requirements

**Header:** atldbcli.h

## Members

### Methods

| Name | Description |
|-|-|
|[OnFieldChange](#onfieldchange)|Notifies the consumer of any change to the value of a column.|
|[OnRowChange](#onrowchange)|Notifies the consumer of the first change to a row or of any change that affects the entire row.|
|[OnRowsetChange](#onrowsetchange)|Notifies the consumer of any change affecting the entire rowset.|

## Remarks

See [Receiving Notifications](../../data/oledb/receiving-notifications.md) about implementing the connection point interface on the consumer.

`IRowsetNotifyImpl` provides a dummy implementation for `IRowsetNotify`, with empty functions for the `IRowsetNotify` methods [OnFieldChange](/previous-versions/windows/desktop/ms715961(v=vs.85)), [OnRowChange](/previous-versions/windows/desktop/ms722694(v=vs.85)), and [OnRowsetChange](/previous-versions/windows/desktop/ms722669(v=vs.85)). If you inherit from this class when you implement an `IRowsetNotify` interface, you can implement only the methods you need. You also need to provide empty implementations for the other methods yourself.

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

See [IRowsetNotify::OnFieldChange](/previous-versions/windows/desktop/ms715961(v=vs.85)) for parameter descriptions.

### Return Value

See [IRowsetNotify::OnFieldChange](/previous-versions/windows/desktop/ms715961(v=vs.85)) for return value descriptions.

### Remarks

This method wraps the [IRowsetNotify::OnFieldChange](/previous-versions/windows/desktop/ms715961(v=vs.85)) method. See that method's description in the OLE DB Programmer's Reference for details.

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

See [IRowsetNotify::OnRowChange](/previous-versions/windows/desktop/ms722694(v=vs.85)) for parameter descriptions.

### Return Value

See [IRowsetNotify::OnRowChange](/previous-versions/windows/desktop/ms722694(v=vs.85)) for return value descriptions.

### Remarks

This method wraps the [IRowsetNotify::OnRowChange](/previous-versions/windows/desktop/ms722694(v=vs.85)) method. See that method's description in the OLE DB Programmer's Reference for details.

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

See [IRowsetNotify::OnRowsetChange](/previous-versions/windows/desktop/ms722669(v=vs.85)) for parameter descriptions.

### Return Value

See [IRowsetNotify::OnRowsetChange](/previous-versions/windows/desktop/ms722669(v=vs.85)) for return value descriptions.

### Remarks

This method wraps the [IRowsetNotify::OnRowsetChange](/previous-versions/windows/desktop/ms722669(v=vs.85)) method. See that method's description in the OLE DB Programmer's Reference for details.

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[IRowsetNotify](/previous-versions/windows/desktop/ms712959(v=vs.85))
[IRowsetNotifyCP Class](../../data/oledb/irowsetnotifycp-class.md)
