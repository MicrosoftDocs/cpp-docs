---
description: "Learn more about: Containers: Client-Item Notifications"
title: "Containers: Client-Item Notifications"
ms.date: "11/04/2016"
helpviewer_keywords: ["notifications [MFC], container client item", "OLE containers [MFC], client-item notifications", "client items and OLE containers"]
ms.assetid: e1f1c427-01f5-45f2-b496-c5bce3d76340
---
# Containers: Client-Item Notifications

This article discusses the overridable functions that the MFC framework calls when server applications modify items in your client application's document.

[COleClientItem](reference/coleclientitem-class.md) defines several overridable functions that are called in response to requests from the component application, which is also called the server application. These overridables usually act as notifications. They inform the container application of various events, such as scrolling, activation, or a change of position, and of changes that the user makes when editing or otherwise manipulating the item.

The framework notifies your container application of changes through a call to `COleClientItem::OnChange`, an overridable function whose implementation is required. This protected function receives two arguments. The first specifies the reason the server changed the item:

|Notification|Meaning|
|------------------|-------------|
|**OLE_CHANGED**|The OLE item's appearance has changed.|
|**OLE_SAVED**|The OLE item has been saved.|
|**OLE_CLOSED**|The OLE item has been closed.|
|**OLE_RENAMED**|The server document containing the OLE item has been renamed.|
|**OLE_CHANGED_STATE**|The OLE item has changed from one state to another.|
|**OLE_CHANGED_ASPECT**|The OLE item's draw aspect has been changed by the framework.|

These values are from the **OLE_NOTIFICATION** enumeration, which is defined in AFXOLE.H.

The second argument to this function specifies how the item has changed or what state it has entered:

|When first argument is|Second argument|
|----------------------------|---------------------|
|**OLE_SAVED** or **OLE_CLOSED**|Is not used.|
|**OLE_CHANGED**|Specifies the aspect of the OLE item that has changed.|
|**OLE_CHANGED_STATE**|Describes the state being entered (*emptyState*, *loadedState*, *openState*, *activeState*, or *activeUIState*).|

For more information about the states a client item can assume, see [Containers: Client-Item States](containers-client-item-states.md).

The framework calls `COleClientItem::OnGetItemPosition` when an item is being activated for in-place editing. Implementation is required for applications that support in-place editing. The MFC Application Wizard provides a basic implementation, which assigns the item's coordinates to the `CRect` object that is passed as an argument to `OnGetItemPosition`.

If an OLE item's position or size changes during in-place editing, the container's information about the item's position and clipping rectangles must be updated and the server must receive information about the changes. The framework calls `COleClientItem::OnChangeItemPosition` for this purpose. The MFC Application Wizard provides an override that calls the base class's function. You should edit the function that the application wizard writes for your `COleClientItem`-derived class so that the function updates any information retained by your client-item object.

## See also

[Containers](containers.md)<br/>
[Containers: Client-Item States](containers-client-item-states.md)<br/>
[COleClientItem::OnChangeItemPosition](reference/coleclientitem-class.md#onchangeitemposition)
