---
title: "Global Hot Keys | Microsoft Docs"
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
  - "keyboard shortcuts [C++], hot keys"
  - "CHotKeyCtrl class, global hot keys"
  - "access keys [C++], hot keys"
  - "global hot keys"
ms.assetid: e0b95d14-c571-4c9a-9cd1-e7fc1f0e278d
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
# Global Hot Keys
A global hot key is associated with a particular nonchild window. It allows the user to activate the window from any part of the system. An application sets a global hot key for a particular window by sending the [WM_SETHOTKEY](http://msdn.microsoft.com/library/windows/desktop/ms646284) message to that window. For instance, if `m_HotKeyCtrl` is the [CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md) object and `pMainWnd` is a pointer to the window to be activated when the hot key is pressed, you could use the following code to associate the hot key specified in the control with the window pointed to by `pMainWnd`.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#18](../mfc/codesnippet/cpp/global-hot-keys_1.cpp)]  
  
 Whenever the user presses a global hot key, the window specified receives a [WM_SYSCOMMAND](http://msdn.microsoft.com/library/windows/desktop/ms646360) message that specifies **SC_HOTKEY** as the type of the command. This message also activates the window that receives it. Because this message does not include any information on the exact key that was pressed, using this method does not allow distinguishing between different hot keys that may be attached to the same window. The hot key remains valid until the application that sent **WM_SETHOTKEY** exits.  
  
## See Also  
 [Using CHotKeyCtrl](../mfc/using-chotkeyctrl.md)   
 [Controls](../mfc/controls-mfc.md)

