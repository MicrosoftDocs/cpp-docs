---
title: "Thread-Specific Hot Keys | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["CHotKeyCtrl class [MFC], thread-specific hot keys", "keyboard shortcuts [MFC], hot keys", "threading [MFC], hot keys in CHotKeyCtrl", "access keys [MFC], hot keys"]
ms.assetid: b6021274-1498-483f-bcbf-ba5723547cc8
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Thread-Specific Hot Keys
An application sets a thread-specific hot key ([CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)) by using the Windows **RegisterHotKey** function. When the user presses a thread-specific hot key, Windows posts a [WM_HOTKEY](http://msdn.microsoft.com/library/windows/desktop/ms646279) message to the beginning of a particular thread's message queue. The **WM_HOTKEY** message contains the virtual key code, shift state, and user-defined ID of the specific hot key that was pressed. For a list of standard virtual key codes, see Winuser.h. For more information on this method, see [RegisterHotKey](http://msdn.microsoft.com/library/windows/desktop/ms646309).  
  
 Note that the shift state flags used in the call to **RegisterHotKey** are not the same as those returned by the [GetHotKey](../mfc/reference/chotkeyctrl-class.md#gethotkey) member function; you'll have to translate these flags before calling **RegisterHotKey**.  
  
## See Also  
 [Using CHotKeyCtrl](../mfc/using-chotkeyctrl.md)   
 [Controls](../mfc/controls-mfc.md)

