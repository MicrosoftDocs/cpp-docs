---
title: "Enabling Tool Tips | Microsoft Docs"
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
  - "initializing tool tips"
  - "enabling tool tips"
  - "tool tips [C++], initializing"
  - "tool tips [C++], enabling"
ms.assetid: 06b7c889-7722-4ce6-8b88-9efa50fe6369
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Enabling Tool Tips
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Enabling Tool Tips](https://docs.microsoft.com/cpp/mfc/enabling-tool-tips).  
  
  
You can enable tool tip support for the child controls of a window (such as the controls on a form view or dialog box).  
  
### To enable tool tips for the child controls of a window  
  
1.  Call `EnableToolTips` for the window for which you want to provide tool tips.  
  
2.  Provide a string for each control in your [TTN_NEEDTEXT notification](../mfc/handling-ttn-needtext-notification-for-tool-tips.md) handler. The handler is in the message map of the window that contains the child controls (for example, your form view class). This handler should call a function that identifies the control and sets **pszText** to specify the text used by the tool tip control.  
  
## See Also  
 [Tool Tips in Windows Not Derived from CFrameWnd](../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md)





