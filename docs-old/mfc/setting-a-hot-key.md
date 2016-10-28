---
title: "Setting a Hot Key"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "keyboard shortcuts [C++], hot keys"
  - "access keys [C++], hot keys"
  - "CHotKeyCtrl class, setting hot key"
ms.assetid: 6f3bc141-e346-4dce-9ca7-3e6b2c453f3f
caps.latest.revision: 8
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
# Setting a Hot Key
Your application can use the information provided by a hot key ([CHotKeyCtrl](../mfcref/chotkeyctrl-class.md)) control in one of two ways:  
  
-   Set up a global hot key for activating a nonchild window by sending a [WM_SETHOTKEY](http://msdn.microsoft.com/library/windows/desktop/ms646284) message to the window to be activated.  
  
-   Set up a thread-specific hot key by calling the Windows function [RegisterHotKey](http://msdn.microsoft.com/library/windows/desktop/ms646309).  
  
## See Also  
 [Using CHotKeyCtrl](../mfc/using-chotkeyctrl.md)   
 [Controls](../mfc/controls--mfc-.md)