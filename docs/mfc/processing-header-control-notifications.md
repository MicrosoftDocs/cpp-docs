---
title: "Processing Header-Control Notifications | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["CHeaderCtrl class [MFC], processing notifications", "controls [MFC], header", "notifications [MFC], processing for CHeaderCtrl", "header controls [MFC], processing notifications", "header control notifications"]
ms.assetid: e6c6af7c-d458-4d33-85aa-48014ccde5f6
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Processing Header-Control Notifications
In your view or dialog class, use the Properties window to create an [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) handler function with a switch statement for any header-control ([CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)) notification messages you want to handle (see [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md)). Notifications are sent to the parent window when the user clicks or double-clicks a header item, drags a divider between items, and so on.  
  
 The notification messages associated with a header control are listed in [Header Control Reference](http://msdn.microsoft.com/library/windows/desktop/bb775239) in the Windows SDK.  
  
## See Also  
 [Using CHeaderCtrl](../mfc/using-cheaderctrl.md)   
 [Controls](../mfc/controls-mfc.md)

