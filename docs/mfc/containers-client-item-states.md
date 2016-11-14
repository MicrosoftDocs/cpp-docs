---
title: "Containers: Client-Item States | Microsoft Docs"
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
  - "OLE containers, client-item states"
  - "states, OLE container client-item"
  - "lifetime, lifetime states and OLE container client items"
  - "client items and OLE containers"
ms.assetid: e7021caa-bd07-4adb-976e-f5f3d025bc53
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
# Containers: Client-Item States
This article explains the different states a client item passes through in its lifetime.  
  
 A client item passes through several states as it is created, activated, modified, and saved. Each time the item's state changes, the framework calls [COleClientItem::OnChange](../mfc/reference/coleclientitem-class.md#coleclientitem__onchange) with the `OLE_CHANGED_STATE` notification. The second parameter is a value from the **COleClientItem::ItemState** enumeration. It can be one of the following:  
  
-   **COleClientItem::emptyState**  
  
-   **COleClientItem::loadedState**  
  
-   **COleClientItem::openState**  
  
-   **COleClientItem::activeState**  
  
-   **COleClientItem::activeUIState**  
  
 In the empty state, a client item is not yet completely an item. Memory has been allocated for it, but it has not yet been initialized with the OLE item's data. This is the state a client item is in when it has been created through a call to **new** but has not yet undergone the second step of the typical two-step creation.  
  
 In the second step, performed through a call to `COleClientItem::CreateFromFile` or another **CreateFrom***xxxx* function, the item is completely created. The OLE data (from a file or some other source, such as the Clipboard) has been associated with the `COleClientItem`-derived object. Now the item is in the loaded state.  
  
 When an item has been opened in the server's window rather than opened in place in the container's document, it is in the open (or fully open) state. In this state, a cross-hatch usually is drawn over the representation of the item in the container's window to indicate that the item is active elsewhere.  
  
 When an item has been activated in place, it passes, usually only briefly, through the active state. It then enters the UI active state, in which the server has merged its menus, toolbars, and other user-interface components with those of the container. The presence of these user-interface components distinguishes the UI active state from the active state. Otherwise, the active state resembles the UI active state. If the server supports Undo, the server is required to retain the OLE item's undo-state information until it reaches the loaded or open state.  
  
## See Also  
 [Containers](../mfc/containers.md)   
 [Activation](../mfc/activation-cpp.md)   
 [Containers: Client-Item Notifications](../mfc/containers-client-item-notifications.md)   
 [Trackers](../mfc/trackers.md)   
 [CRectTracker Class](../mfc/reference/crecttracker-class.md)
