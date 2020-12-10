---
description: "Learn more about: ATL Connection Points"
title: "ATL Connection Points"
ms.date: "11/04/2016"
helpviewer_keywords: ["connections, connection points", "ATL, connection points", "connection points [C++], about connection points"]
ms.assetid: 17d76165-5f83-4f95-b36d-483821c247a1
---
# ATL Connection Points

A connectable object is one that supports outgoing interfaces. An outgoing interface allows the object to communicate with a client. For each outgoing interface, the connectable object exposes a connection point. Each outgoing interface is implemented by a client on an object called a sink.

![Connection points](../atl/media/vc2zw31.gif "Connection points")

Each connection point supports the [IConnectionPoint](/windows/win32/api/ocidl/nn-ocidl-iconnectionpoint) interface. The connectable object exposes its connection points to the client through the [IConnectionPointContainer](/windows/win32/api/ocidl/nn-ocidl-iconnectionpointcontainer) interface.

## In This Section

[ATL Connection Point Classes](../atl/atl-connection-point-classes.md)<br/>
Briefly describes the ATL classes that support connection points.

[Adding Connection Points to an Object](../atl/adding-connection-points-to-an-object.md)<br/>
Outlines the steps used to add connection points to an object.

[ATL Connection Point Example](../atl/atl-connection-point-example.md)<br/>
Provides an example of declaring a connection point.

## Related Sections

[ATL](../atl/active-template-library-atl-concepts.md)<br/>
Provides links to conceptual topics on how to program using the Active Template Library.

## See also

[Concepts](../atl/active-template-library-atl-concepts.md)
