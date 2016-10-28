---
title: "Thread-Specific Hot Keys"
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
  - "CHotKeyCtrl class, thread-specific hot keys"
  - "keyboard shortcuts [C++], hot keys"
  - "threading [C++], hot keys in CHotKeyCtrl"
  - "access keys [C++], hot keys"
ms.assetid: b6021274-1498-483f-bcbf-ba5723547cc8
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
# Thread-Specific Hot Keys
An application sets a thread-specific hot key ([CHotKeyCtrl](../mfcref/chotkeyctrl-class.md)) by using the Windows **RegisterHotKey** function. When the user presses a thread-specific hot key, Windows posts a [WM_HOTKEY](http://msdn.microsoft.com/library/windows/desktop/ms646279) message to the beginning of a particular thread's message queue. The **WM_HOTKEY** message contains the virtual key code, shift state, and user-defined ID of the specific hot key that was pressed. For a list of standard virtual key codes, see Winuser.h. For more information on this method, see [RegisterHotKey](http://msdn.microsoft.com/library/windows/desktop/ms646309).  
  
 Note that the shift state flags used in the call to **RegisterHotKey** are not the same as those returned by the [GetHotKey](../Topic/CHotKeyCtrl::GetHotKey.md) member function; you'll have to translate these flags before calling **RegisterHotKey**.  
  
## See Also  
 [Using CHotKeyCtrl](../mfc/using-chotkeyctrl.md)   
 [Controls](../mfc/controls--mfc-.md)