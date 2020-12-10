---
description: "Learn more about: Containers: Client-Item States"
title: "Containers: Client-Item States"
ms.date: "11/04/2016"
helpviewer_keywords: ["OLE containers [MFC], client-item states", "states, OLE container client-item", "lifetime, lifetime states and OLE container client items", "client items and OLE containers"]
ms.assetid: e7021caa-bd07-4adb-976e-f5f3d025bc53
---
# Containers: Client-Item States

This article explains the different states a client item passes through in its lifetime.

A client item passes through several states as it is created, activated, modified, and saved. Each time the item's state changes, the framework calls [COleClientItem::OnChange](reference/coleclientitem-class.md#onchange) with the **OLE_CHANGED_STATE** notification. The second parameter is a value from the `COleClientItem::ItemState` enumeration. It can be one of the following:

- *COleClientItem::emptyState*

- *COleClientItem::loadedState*

- *COleClientItem::openState*

- *COleClientItem::activeState*

- *COleClientItem::activeUIState*

In the empty state, a client item is not yet completely an item. Memory has been allocated for it, but it has not yet been initialized with the OLE item's data. This is the state a client item is in when it has been created through a call to **`new`** but has not yet undergone the second step of the typical two-step creation.

In the second step, performed through a call to `COleClientItem::CreateFromFile` or another `CreateFrom`*xxxx* function, the item is completely created. The OLE data (from a file or some other source, such as the Clipboard) has been associated with the `COleClientItem`-derived object. Now the item is in the loaded state.

When an item has been opened in the server's window rather than opened in place in the container's document, it is in the open (or fully open) state. In this state, a cross-hatch usually is drawn over the representation of the item in the container's window to indicate that the item is active elsewhere.

When an item has been activated in place, it passes, usually only briefly, through the active state. It then enters the UI active state, in which the server has merged its menus, toolbars, and other user-interface components with those of the container. The presence of these user-interface components distinguishes the UI active state from the active state. Otherwise, the active state resembles the UI active state. If the server supports Undo, the server is required to retain the OLE item's undo-state information until it reaches the loaded or open state.

## See also

[Containers](containers.md)<br/>
[Activation](activation-cpp.md)<br/>
[Containers: Client-Item Notifications](containers-client-item-notifications.md)<br/>
[Trackers](trackers.md)<br/>
[CRectTracker Class](reference/crecttracker-class.md)
