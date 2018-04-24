---
title: "Handling TTN_NEEDTEXT Notification for Tool Tips | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "TTN_NEEDTEXT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "TTN_NEEDTEXT message"
  - "notifications, tool tips"
  - "tool tips [C++], notifications"
ms.assetid: d0370a65-21ba-4676-bcc5-8cf851bbb15c
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Handling TTN_NEEDTEXT Notification for Tool Tips
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Handling TTN_NEEDTEXT Notification for Tool Tips](https://docs.microsoft.com/cpp/mfc/handling-ttn-needtext-notification-for-tool-tips).  
  
  
As part of [enabling tool tips](../mfc/enabling-tool-tips.md), you handle the **TTN_NEEDTEXT** message by adding the following entry to your owner window's message map:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#40](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCControlLadenDialog/Cpp/MFCControlLadenDialogDlg.cpp#40)]  
  
 `memberFxn`  
 The member function to be called when text is needed for this button.  
  
 Note that the ID of a tool tip is always 0.  
  
 Declare your handler function in the class definition as follows:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#53](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCControlLadenDialog/Cpp/MFCControlLadenDialogDlg.h#53)]  
  
 where the italicized parameters are:  
  
 `id`  
 Identifier of the control that sent the notification. Not used. The control id is taken from the **NMHDR** structure.  
  
 `pNMHDR`  
 A pointer to the [NMTTDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb760258) structure. This structure is also discussed further in [The TOOLTIPTEXT Structure](../mfc/tooltiptext-structure.md).  
  
 `pResult`  
 A pointer to result code you can set before you return. **TTN_NEEDTEXT** handlers can ignore the `pResult` parameter.  
  
 As an example of a form-view notification handler:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#54](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCControlLadenDialog/Cpp/MFCControlLadenDialogDlg.cpp#54)]  
  
 Call `EnableToolTips` (this fragment taken from `OnInitDialog`):  
  
 [!code-cpp[NVC_MFCControlLadenDialog#55](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCControlLadenDialog/Cpp/MFCControlLadenDialogDlg.cpp#55)]  
  
## See Also  
 [Tool Tips in Windows Not Derived from CFrameWnd](../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md)





