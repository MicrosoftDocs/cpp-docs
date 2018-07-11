---
title: "Tool Tips in Windows Not Derived from CFrameWnd | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["enabling tool tips [MFC]", "TOOLTIPTEXT structure [MFC]", "Help [MFC], tool tips for controls", "TTN_NEEDTEXT message [MFC]", "controls [MFC], tool tips", "handler functions [MFC], tool tips"]
ms.assetid: cad5ef0f-02e3-4151-ad0d-3d42e6932b0e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Tool Tips in Windows Not Derived from CFrameWnd
This article family covers enabling tool tips for controls contained in a window that is not derived from [CFrameWnd](../mfc/reference/cframewnd-class.md). The article [Toolbars Tool Tips](../mfc/toolbar-tool-tips.md) provides information about tool tips for controls in a `CFrameWnd`.  
  
 Topics covered in this article family include:  
  
-   [Enabling Tool Tips](../mfc/enabling-tool-tips.md)  
  
-   [Handling TTN_NEEDTEXT Notification for Tool Tips](../mfc/handling-ttn-needtext-notification-for-tool-tips.md)  
  
-   [The TOOLTIPTEXT Structure](../mfc/tooltiptext-structure.md)  
  
 Tool tips are automatically displayed for buttons and other controls contained in a parent window derived from `CFrameWnd`. This is because `CFrameWnd` has a default handler for the [TTN_GETDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb760269) notification, which handles **TTN_NEEDTEXT** notifications from tool tip controls associated with controls.  
  
 However, this default handler is not called when the **TTN_NEEDTEXT** notification is sent from a tool tip control associated with a control in a window that is not a `CFrameWnd`, such as a control on a dialog box or a form view. Therefore, it is necessary for you to provide a handler function for the **TTN_NEEDTEXT** notification message in order to display tool tips for child controls.  
  
 The default tool tips provided for your windows by [CWnd::EnableToolTips](../mfc/reference/cwnd-class.md#enabletooltips) do not have text associated with them. To retrieve text for the tool tip to display, the **TTN_NEEDTEXT** notification is sent to the tool tip control's parent window just before the tool tip window is displayed. If there is no handler for this message to assign some value to the *pszText* member of the **TOOLTIPTEXT** structure, there will be no text displayed for the tool tip.  
  
## See Also  
 [Tool Tips](../mfc/tool-tips.md)

