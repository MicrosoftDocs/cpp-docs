---
title: "Containers: Client-Item Notifications | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "notifications, container client item"
  - "OLE containers, client-item notifications"
  - "client items and OLE containers"
ms.assetid: e1f1c427-01f5-45f2-b496-c5bce3d76340
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Containers: Client-Item Notifications
This article discusses the overridable functions that the MFC framework calls when server applications modify items in your client application's document.  
  
 [COleClientItem](../mfc/reference/coleclientitem-class.md) defines several overridable functions that are called in response to requests from the component application, which is also called the server application. These overridables usually act as notifications. They inform the container application of various events, such as scrolling, activation, or a change of position, and of changes that the user makes when editing or otherwise manipulating the item.  
  
 The framework notifies your container application of changes through a call to `COleClientItem::OnChange`, an overridable function whose implementation is required. This protected function receives two arguments. The first specifies the reason the server changed the item:  
  
|Notification|Meaning|  
|------------------|-------------|  
|`OLE_CHANGED`|The OLE item's appearance has changed.|  
|`OLE_SAVED`|The OLE item has been saved.|  
|`OLE_CLOSED`|The OLE item has been closed.|  
|**OLE_RENAMED**|The server document containing the OLE item has been renamed.|  
|`OLE_CHANGED_STATE`|The OLE item has changed from one state to another.|  
|**OLE_CHANGED_ASPECT**|The OLE item's draw aspect has been changed by the framework.|  
  
 These values are from the **OLE_NOTIFICATION** enumeration, which is defined in AFXOLE.H.  
  
 The second argument to this function specifies how the item has changed or what state it has entered:  
  
|When first argument is|Second argument|  
|----------------------------|---------------------|  
|`OLE_SAVED` or `OLE_CLOSED`|Is not used.|  
|`OLE_CHANGED`|Specifies the aspect of the OLE item that has changed.|  
|`OLE_CHANGED_STATE`|Describes the state being entered (`emptyState`, **loadedState**, `openState`, `activeState`, or `activeUIState`).|  
  
 For more information about the states a client item can assume, see [Containers: Client-Item States](../mfc/containers-client-item-states.md).  
  
 The framework calls `COleClientItem::OnGetItemPosition` when an item is being activated for in-place editing. Implementation is required for applications that support in-place editing. The MFC Application Wizard provides a basic implementation, which assigns the item's coordinates to the `CRect` object that is passed as an argument to `OnGetItemPosition`.  
  
 If an OLE item's position or size changes during in-place editing, the container's information about the item's position and clipping rectangles must be updated and the server must receive information about the changes. The framework calls `COleClientItem::OnChangeItemPosition` for this purpose. The MFC Application Wizard provides an override that calls the base class's function. You should edit the function that the application wizard writes for your `COleClientItem`-derived class so that the function updates any information retained by your client-item object.  
  
## See Also  
 [Containers](../mfc/containers.md)   
 [Containers: Client-Item States](../mfc/containers-client-item-states.md)   
 [COleClientItem::OnChangeItemPosition](../mfc/reference/coleclientitem-class.md#coleclientitem__onchangeitemposition)

