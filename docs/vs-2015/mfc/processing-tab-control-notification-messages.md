---
title: "Processing Tab Control Notification Messages | Microsoft Docs"
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
  - "notifications, tab controls"
  - "CTabCtrl class, processing notifications"
  - "notifications, processing in CTabCtrl"
  - "processing notifications"
  - "tab controls, processing notifications"
ms.assetid: 758ccb7a-9e73-48f8-9073-23f7cb09918c
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Processing Tab Control Notification Messages
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Processing Tab Control Notification Messages](https://docs.microsoft.com/cpp/mfc/processing-tab-control-notification-messages).  
  
  
As users click tabs or buttons, the tab control ([CTabCtrl](../mfc/reference/ctabctrl-class.md)) sends notification messages to its parent window. Handle these messages if you want to do something in response. For example, when the user clicks a tab, you may want to preset control data on the page prior to displaying it.  
  
 Process **WM_NOTIFY** messages from the tab control in your view or dialog class. Use the Properties window to create an [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) handler function with a switch statement based on which notification message is being handled. For a list of the notifications a tab control can send to its parent window, see the **Notifications** section of [Tab Control Reference](http://msdn.microsoft.com/library/windows/desktop/bb760548) in the [!INCLUDE[winSDK](../includes/winsdk-md.md)].  
  
## See Also  
 [Using CTabCtrl](../mfc/using-ctabctrl.md)   
 [Controls](../mfc/controls-mfc.md)





