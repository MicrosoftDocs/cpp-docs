---
description: "Learn more about: Supporting Notifications"
title: "Supporting Notifications"
ms.date: "11/04/2016"
helpviewer_keywords: ["notifications [C++], OLE DB consumers", "events [C++], notifications in OLE DB", "OLE DB consumers, notifications", "rowsets, event notifications", "OLE DB provider templates, notifications", "OLE DB providers, notifications"]
ms.assetid: 76e875fd-2bfd-4e4e-9f43-dbe5a3fa7382
---
# Supporting Notifications

## Implementing Connection Point Interfaces on the Provider and Consumer

To implement notifications, a provider class must inherit from [IRowsetNotifyCP](../../data/oledb/irowsetnotifycp-class.md) and [IConnectionPointContainer](../../atl/reference/iconnectionpointcontainerimpl-class.md).

`IRowsetNotifyCP` implements the provider site for the connection point interface [IRowsetNotify](/previous-versions/windows/desktop/ms712959(v=vs.85)). `IRowsetNotifyCP` implements broadcast functions to advise listeners on the connection point `IID_IRowsetNotify` of changes to the contents of the rowset.

You must also implement and register `IRowsetNotify` on the consumer (also known as the sink) using [IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md) so that the consumer can handle notifications. For information about implementing the connection point interface on the consumer, see [Receiving Notifications](../../data/oledb/receiving-notifications.md).

Also, the class must have a map that defines the connection point entry, like this:

```cpp
BEGIN_CONNECTION_POINT_MAP
   CONNECTIONPOINT_ENTRY (IID_IRowsetNotify)
END_CONNECTION_POINT_MAP
```

## Adding IRowsetNotify

To add `IRowsetNotify`, you need to add `IConnectionPointContainerImpl<rowset-name>` and `IRowsetNotifyCP<rowset-name>` to your inheritance chain.

For example, here is the inheritance chain for `RUpdateRowset` in [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV):

> [!NOTE]
> The sample code might differ from what is listed here; you should regard the sample code as the more up-to-date version.

```cpp
///////////////////////////////////////////////////////////////////////////
// class RUpdateRowset (in rowset.h)

class RUpdateRowset :
public CRowsetImpl< RUpdateRowset, CAgentMan, CUpdateCommand,
         CAtlArray< CAgentMan, CAtlArray<CAgentMan>>, CSimpleRow,
         IRowsetScrollImpl< RUpdateRowset, IRowsetScroll >>,
      public IRowsetUpdateImpl< RUpdateRowset, CAgentMan >,
      public IConnectionPointContainerImpl<RUpdateRowset>,
      public IRowsetNotifyCP<RUpdateRowset>
```

### Setting COM Map Entries

You also need to add the following to the COM map in your rowset:

```cpp
COM_INTERFACE_ENTRY(IConnectionPointContainer)
COM_INTERFACE_ENTRY_IMPL(IConnectionPointContainer)
```

These macros allow anyone calling `QueryInterface` for your connection point container (the basis of `IRowsetNotify`) to find the requested interface on your provider. For an example of how to use connection points, see the ATL POLYGON sample and tutorial.

### Setting Connection Point Map Entries

You also need to add a connection point map. It should look something like:

```cpp
BEGIN_CONNECTION_POINT_MAP(rowset-name)
     CONNECTION_POINT_ENTRY(_uuidof(IRowsetNotify))
END_CONNECTION_POINT_MAP()
```

This connection point map allows a component looking for the `IRowsetNotify` interface to find it in your provider.

### Setting Properties

You also need to add the following properties to your provider. You only need to add properties based on the interfaces that you support.

|Property|Add if you support|
|--------------|------------------------|
|DBPROP_IConnectionPointContainer|Always|
|DBPROP_NOTIFICATIONGRANULARITY|Always|
|DBPROP_NOTIFICATIONPHASES|Always|
|DBPROP_NOTIFYCOLUMNSET|`IRowsetChange`|
|DBPROP_NOTIFYROWDELETE|`IRowsetChange`|
|DBPROP_NOTIFYROWINSERT|`IRowsetChange`|
|DBPROP_NOTIFYROWSETFETCHPOSITIONCHANGE|Always|
|DBPROP_NOTIFYROWFIRSTCHANGE|`IRowsetUpdate`|
|DBPROP_NOTIFYROWSETRELEASE|Always|
|DBPROP_NOTIFYROWUNDOCHANGE|`IRowsetUpdate`|
|DBPROP_NOTIFYROWUNDODELETE|`IRowsetUpdate`|
|DBPROP_NOTIFYROWUNDOINSERT|`IRowsetUpdate`|
|DBPROP_NOTIFYROWUPDATE|`IRowsetUpdate`|

Most of the implementation for the notifications is already embedded in the OLE DB Provider Templates. If you don't add `IRowsetNotifyCP` to your inheritance chain, the compiler removes all that code from your compilation stream, thus making your code size smaller.

## See also

[Advanced Provider Techniques](../../data/oledb/advanced-provider-techniques.md)
