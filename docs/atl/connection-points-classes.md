---
description: "Learn more about: Connection Points Classes"
title: "Connection Points Classes (ATL)"
ms.date: "11/04/2016"
ms.topic: "reference"
helpviewer_keywords: ["classes [C++], connection points", "connection points classes"]
ms.assetid: 076365fa-299a-4dce-84c3-a5dff0e0da1f
---
# Connection Points Classes

The following classes provide support for connection points:

- [IConnectionPointContainerImpl](../atl/reference/iconnectionpointcontainerimpl-class.md) Implements a connection point container.

- [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md) Implements a connection point.

- [IPropertyNotifySinkCP](../atl/reference/ipropertynotifysinkcp-class.md) Implements a connection point representing the [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink) interface.

- [CComDynamicUnkArray](../atl/reference/ccomdynamicunkarray-class.md) Manages unlimited connections between a connection point and its sinks.

- [CComUnkArray](../atl/reference/ccomunkarray-class.md) Manages a fixed number of connections between a connection point and its sinks.

- [CFirePropNotifyEvent](../atl/reference/cfirepropnotifyevent-class.md) Notifies a client's sink that an object's property has changed or is about to change.

- [IDispEventImpl](../atl/reference/idispeventimpl-class.md) Provides support for connection points for an ATL COM object. These connection points are mapped with an event sink map, which is provided by your COM object.

- [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) Works in conjunction with the event sink map in your class to route events to the appropriate handler function.

## Related Articles

[Connection Points](../atl/atl-connection-points.md)

[Event Handling and ATL](../atl/event-handling-and-atl.md)

## See also

[Class Overview](../atl/atl-class-overview.md)<br/>
[Connection Point Macros](../atl/reference/connection-point-macros.md)<br/>
[Connection Point Global Functions](../atl/reference/connection-point-global-functions.md)
