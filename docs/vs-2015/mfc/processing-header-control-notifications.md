---
title: "Processing Header-Control Notifications | Microsoft Docs"
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
  - "CHeaderCtrl class, processing notifications"
  - "controls [MFC], header"
  - "notifications, processing for CHeaderCtrl"
  - "header controls, processing notifications"
  - "header control notifications"
ms.assetid: e6c6af7c-d458-4d33-85aa-48014ccde5f6
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Processing Header-Control Notifications
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Processing Header-Control Notifications](https://docs.microsoft.com/cpp/mfc/processing-header-control-notifications).  
  
  
In your view or dialog class, use the Properties window to create an [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) handler function with a switch statement for any header-control ([CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)) notification messages you want to handle (see [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md)). Notifications are sent to the parent window when the user clicks or double-clicks a header item, drags a divider between items, and so on.  
  
 The notification messages associated with a header control are listed in [Header Control Reference](http://msdn.microsoft.com/library/windows/desktop/bb775239) in the [!INCLUDE[winSDK](../includes/winsdk-md.md)].  
  
## See Also  
 [Using CHeaderCtrl](../mfc/using-cheaderctrl.md)   
 [Controls](../mfc/controls-mfc.md)





