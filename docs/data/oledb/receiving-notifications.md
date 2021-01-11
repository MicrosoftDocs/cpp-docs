---
description: "Learn more about: Receiving Notifications"
title: "Receiving Notifications"
ms.date: "10/24/2018"
helpviewer_keywords: ["notifications [C++], OLE DB consumers", "receiving notifications in OLE DB", "events [C++], notifications in OLE DB", "notifications [C++], events", "OLE DB consumers, notifications", "rowsets, event notifications", "OLE DB providers, notifications"]
ms.assetid: 305a1103-0c87-40c8-94bc-7fbbdd52ae32
---
# Receiving Notifications

OLE DB provides interfaces for receiving notifications when events occur. These are described in [OLE DB Object Notifications](/previous-versions/windows/desktop/ms725406(v=vs.85)) in the **OLE DB Programmer's Reference**. Setup of these events uses the standard COM connection-point mechanism. For example, an ATL object that wants to retrieve events through `IRowsetNotify` implements the `IRowsetNotify` interface by adding `IRowsetNotify` to the class-derived list and exposing it through a COM_INTERFACE_ENTRY macro.

`IRowsetNotify` has three methods, which can be called at various times. If you want to respond to only one of these methods, you can use the [IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md) class, which returns E_NOTIMPL for the methods you aren't interested in.

When you create the rowset, you must tell the provider that you want the returned rowset object to support `IConnectionPointContainer`, which is needed to set up the notification.

The following code shows how to open the rowset from an ATL object and use the `AtlAdvise` function to set up the notification sink. `AtlAdvise` returns a cookie that is used when you call `AtlUnadvise`.

```cpp
CDBPropSet propset(DBPROPSET_ROWSET);
propset.AddProperty(DBPROP_IConnectionPointContainer, true);
```

Then, used by the following code:

```cpp
product.Open(session, _T("Products"), &propset);

AtlAdvise(product.m_spRowset, GetUnknown(), IID_IRowsetNotify, &m_dwCookie);
```

## See also

[Using Accessors](../../data/oledb/using-accessors.md)
