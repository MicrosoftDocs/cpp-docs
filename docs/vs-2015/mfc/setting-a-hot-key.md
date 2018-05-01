---
title: "Setting a Hot Key | Microsoft Docs"
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
  - "keyboard shortcuts [C++], hot keys"
  - "access keys [C++], hot keys"
  - "CHotKeyCtrl class, setting hot key"
ms.assetid: 6f3bc141-e346-4dce-9ca7-3e6b2c453f3f
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Setting a Hot Key
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Setting a Hot Key](https://docs.microsoft.com/cpp/mfc/setting-a-hot-key).  
  
  
Your application can use the information provided by a hot key ([CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)) control in one of two ways:  
  
-   Set up a global hot key for activating a nonchild window by sending a [WM_SETHOTKEY](http://msdn.microsoft.com/library/windows/desktop/ms646284) message to the window to be activated.  
  
-   Set up a thread-specific hot key by calling the Windows function [RegisterHotKey](http://msdn.microsoft.com/library/windows/desktop/ms646309).  
  
## See Also  
 [Using CHotKeyCtrl](../mfc/using-chotkeyctrl.md)   
 [Controls](../mfc/controls-mfc.md)





