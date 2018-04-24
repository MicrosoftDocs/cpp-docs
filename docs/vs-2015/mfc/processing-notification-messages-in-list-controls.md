---
title: "Processing Notification Messages in List Controls | Microsoft Docs"
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
  - "processing notifications"
  - "CListCtrl class, processing notifications"
ms.assetid: 1f0e296e-d2a3-48fc-ae38-51d7fb096f51
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Processing Notification Messages in List Controls
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Processing Notification Messages in List Controls](https://docs.microsoft.com/cpp/mfc/processing-notification-messages-in-list-controls).  
  
  
As users click column headers, drag icons, edit labels, and so on, the list control ([CListCtrl](../mfc/reference/clistctrl-class.md)) sends notification messages to its parent window. Handle these messages if you want to do something in response. For example, when the user clicks a column header, you might want to sort the items based on the contents of the clicked column, as in Microsoft Outlook.  
  
 Process **WM_NOTIFY** messages from the list control in your view or dialog class. Use the Properties window to create an [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) handler function with a switch statement based on which notification message is being handled.  
  
 For a list of the notifications a list control can send to its parent window, see [List View Control Reference](http://msdn.microsoft.com/library/windows/desktop/bb774737) in the [!INCLUDE[winSDK](../includes/winsdk-md.md)].  
  
## See Also  
 [Using CListCtrl](../mfc/using-clistctrl.md)   
 [Controls](../mfc/controls-mfc.md)





