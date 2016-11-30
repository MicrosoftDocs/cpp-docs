---
title: "Handling Tool Tip Notifications | Microsoft Docs"
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
  - "TOOLTIPTEXT structure"
  - "CToolBarCtrl class, handling notifications"
  - "notifications, tool tips"
  - "tool tips [C++], notifications"
ms.assetid: ddb93b5f-2e4f-4537-8053-3453c86e2bbb
caps.latest.revision: 12
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
# Handling Tool Tip Notifications
When you specify the `TBSTYLE_TOOLTIPS` style, the toolbar creates and manages a tool tip control. A tool tip is a small pop-up window that contains a line of text describing a toolbar button. The tool tip is hidden, appearing only when the user puts the cursor on a toolbar button and leaves it there for approximately one-half second. The tool tip is displayed near the cursor.  
  
 Before the tool tip is displayed, the **TTN_NEEDTEXT** notification message is sent to the toolbar's owner window to retrieve the descriptive text for the button. If the toolbar's owner window is a `CFrameWnd` window, tool tips are displayed without any extra effort, because `CFrameWnd` has a default handler for the **TTN_NEEDTEXT** notification. If the toolbar's owner window is not derived from `CFrameWnd`, such as a dialog box or form view, you must add an entry to your owner window's message map and provide a notification handler in the message map. The entry to your owner window's message map is as follows:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#40](../mfc/codesnippet/cpp/handling-tool-tip-notifications_1.cpp)]  
  
## Remarks  
 `memberFxn`  
 The member function to be called when text is needed for this button.  
  
 Note that the id of a tool tip is always 0.  
  
 In addition to the **TTN_NEEDTEXT** notification, a tool tip control can send the following notifications to a toolbar control:  
  
|Notification|Meaning|  
|------------------|-------------|  
|**TTN_NEEDTEXTA**|Tool tip control requires ASCII text (Windows 95 only)|  
|**TTN_NEEDTEXTW**|Tool tip control requires UNICODE text (Windows NT only)|  
|**TBN_HOTITEMCHANGE**|Indicates that the hot (highlighted) item has changed.|  
|**NM_RCLICK**|Indicates the user has right-clicked a button.|  
|**TBN_DRAGOUT**|Indicates the user has clicked the button and dragged the pointer off the button. It allows an application to implement drag and drop from a toolbar button. When receiving this notification, the application will begin the drag and drop operation.|  
|**TBN_DROPDOWN**|Indicates the user has clicked a button that uses the **TBSTYLE_DROPDOWN** style.|  
|**TBN_GETOBJECT**|Indicates the user moved the pointer over a button that uses the **TBSTYLE_DROPPABLE** style.|  
  
 For an example handler function and more information about enabling tool tips, see [Tool Tips](../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md).  
  
## See Also  
 [Using CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controls](../mfc/controls-mfc.md)

