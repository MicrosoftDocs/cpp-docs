---
title: "Thread-Specific Hot Keys | Microsoft Docs"
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
  - "CHotKeyCtrl class, thread-specific hot keys"
  - "keyboard shortcuts [C++], hot keys"
  - "threading [C++], hot keys in CHotKeyCtrl"
  - "access keys [C++], hot keys"
ms.assetid: b6021274-1498-483f-bcbf-ba5723547cc8
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Thread-Specific Hot Keys
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Thread-Specific Hot Keys](https://docs.microsoft.com/cpp/mfc/thread-specific-hot-keys).  
  
  
An application sets a thread-specific hot key ([CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)) by using the Windows **RegisterHotKey** function. When the user presses a thread-specific hot key, Windows posts a [WM_HOTKEY](http://msdn.microsoft.com/library/windows/desktop/ms646279) message to the beginning of a particular thread's message queue. The **WM_HOTKEY** message contains the virtual key code, shift state, and user-defined ID of the specific hot key that was pressed. For a list of standard virtual key codes, see Winuser.h. For more information on this method, see [RegisterHotKey](http://msdn.microsoft.com/library/windows/desktop/ms646309).  
  
 Note that the shift state flags used in the call to **RegisterHotKey** are not the same as those returned by the [GetHotKey](../mfc/reference/chotkeyctrl-class.md#gethotkey) member function; you'll have to translate these flags before calling **RegisterHotKey**.  
  
## See Also  
 [Using CHotKeyCtrl](../mfc/using-chotkeyctrl.md)   
 [Controls](../mfc/controls-mfc.md)





