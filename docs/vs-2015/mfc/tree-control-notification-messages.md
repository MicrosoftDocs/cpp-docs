---
title: "Tree Control Notification Messages | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "notifications, tree controls"
  - "messages, notification"
  - "CTreeCtrl class, notifications"
  - "notifications, CTreeCtrl"
  - "tree controls, notification messages"
ms.assetid: ac7013b4-91dd-4668-bd75-439ca0680ef9
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Tree Control Notification Messages
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Tree Control Notification Messages](https://docs.microsoft.com/cpp/mfc/tree-control-notification-messages).  
  
  
A tree control ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) sends the following notification messages as **WM_NOTIFY** messages:  
  
|Notification message|Description|  
|--------------------------|-----------------|  
|**TVN_BEGINDRAG**|Signals the start of a drag-and-drop operation|  
|**TVN_BEGINLABELEDIT**|Signals the start of in-place label editing|  
|**TVN_BEGINRDRAG**|Signals the start of a drag-and-drop operation, using the right mouse button|  
|**TVN_DELETEITEM**|Signals the deletion of a specific item|  
|**TVN_ENDLABELEDIT**|Signals the end of label editing|  
|**TVN_GETDISPINFO**|Requests information that the tree control requires to display an item|  
|**TVN_ITEMEXPANDED**|Signals that a parent item's list of child items was expanded or collapsed|  
|**TVN_ITEMEXPANDING**|Signals that a parent item's list of child items is about to be expanded or collapsed|  
|**TVN_KEYDOWN**|Signals a keyboard event|  
|**TVN_SELCHANGED**|Signals that the selection has changed from one item to another|  
|**TVN_SELCHANGING**|Signals that the selection is about to be changed from one item to another|  
|**TVN_SETDISPINFO**|Notification to update the information maintained for an item|  
  
## See Also  
 [Using CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controls](../mfc/controls-mfc.md)





