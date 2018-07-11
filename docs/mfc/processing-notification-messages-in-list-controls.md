---
title: "Processing Notification Messages in List Controls | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["processing notifications [MFC]", "CListCtrl class [MFC], processing notifications"]
ms.assetid: 1f0e296e-d2a3-48fc-ae38-51d7fb096f51
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Processing Notification Messages in List Controls
As users click column headers, drag icons, edit labels, and so on, the list control ([CListCtrl](../mfc/reference/clistctrl-class.md)) sends notification messages to its parent window. Handle these messages if you want to do something in response. For example, when the user clicks a column header, you might want to sort the items based on the contents of the clicked column, as in Microsoft Outlook.  
  
 Process WM_NOTIFY messages from the list control in your view or dialog class. Use the Properties window to create an [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) handler function with a switch statement based on which notification message is being handled.  
  
 For a list of the notifications a list control can send to its parent window, see [List View Control Reference](http://msdn.microsoft.com/library/windows/desktop/bb774737) in the Windows SDK.  
  
## See Also  
 [Using CListCtrl](../mfc/using-clistctrl.md)   
 [Controls](../mfc/controls-mfc.md)

