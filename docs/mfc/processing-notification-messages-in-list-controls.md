---
title: "Processing Notification Messages in List Controls | Microsoft Docs"
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
  - "processing notifications"
  - "CListCtrl class, processing notifications"
ms.assetid: 1f0e296e-d2a3-48fc-ae38-51d7fb096f51
caps.latest.revision: 11
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
# Processing Notification Messages in List Controls
As users click column headers, drag icons, edit labels, and so on, the list control ([CListCtrl](../mfc/reference/clistctrl-class.md)) sends notification messages to its parent window. Handle these messages if you want to do something in response. For example, when the user clicks a column header, you might want to sort the items based on the contents of the clicked column, as in Microsoft Outlook.  
  
 Process **WM_NOTIFY** messages from the list control in your view or dialog class. Use the Properties window to create an [OnChildNotify](../mfc/reference/cwnd-class.md#cwnd__onchildnotify) handler function with a switch statement based on which notification message is being handled.  
  
 For a list of the notifications a list control can send to its parent window, see [List View Control Reference](http://msdn.microsoft.com/library/windows/desktop/bb774737) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## See Also  
 [Using CListCtrl](../mfc/using-clistctrl.md)   
 [Controls](../mfc/controls-mfc.md)

