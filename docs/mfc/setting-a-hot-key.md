---
title: "Setting a Hot Key | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["keyboard shortcuts [MFC], hot keys", "access keys [MFC], hot keys", "CHotKeyCtrl class [MFC], setting hot key"]
ms.assetid: 6f3bc141-e346-4dce-9ca7-3e6b2c453f3f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Setting a Hot Key
Your application can use the information provided by a hot key ([CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)) control in one of two ways:  
  
-   Set up a global hot key for activating a nonchild window by sending a [WM_SETHOTKEY](/windows/desktop/inputdev/wm-sethotkey) message to the window to be activated.  
  
-   Set up a thread-specific hot key by calling the Windows function [RegisterHotKey](https://msdn.microsoft.com/library/windows/desktop/ms646309).  
  
## See Also  
 [Using CHotKeyCtrl](../mfc/using-chotkeyctrl.md)   
 [Controls](../mfc/controls-mfc.md)

