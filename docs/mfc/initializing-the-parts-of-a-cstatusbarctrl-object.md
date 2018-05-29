---
title: "Initializing the Parts of a CStatusBarCtrl Object | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
f1_keywords: ["CStatusBarCtrl"]
dev_langs: ["C++"]
helpviewer_keywords: ["CStatusBarCtrl class [MFC], simple mode", "status bars [MFC], declaring parts of", "simple status bars [MFC]", "status bars [MFC], icons", "status bars [MFC], simple mode", "icons, using in status bars", "CStatusBarCtrl class [MFC], declaring parts of"]
ms.assetid: 60e8f285-d2d8-424a-a6ea-2fc548370303
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Initializing the Parts of a CStatusBarCtrl Object
By default, a status bar displays status information using separate panes. These panes (also referred to as parts) can contain either a text string, an icon, or both.  
  
 Use [SetParts](../mfc/reference/cstatusbarctrl-class.md#setparts) to define how many parts, and the length, the status bar will have. After you have created the parts of the status bar, make calls to [SetText](../mfc/reference/cstatusbarctrl-class.md#settext) and [SetIcon](../mfc/reference/cstatusbarctrl-class.md#seticon) to set the text or icon for a specific part of the status bar. Once the part has been successfully set, the control is automatically redrawn.  
  
 The following example initializes an existing `CStatusBarCtrl` object (`m_StatusBarCtrl`) with four panes and then sets an icon (IDI_ICON1) and some text in the second part.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#31](../mfc/codesnippet/cpp/initializing-the-parts-of-a-cstatusbarctrl-object_1.cpp)]  
  
 For more information on setting the mode of a `CStatusBarCtrl` object to simple, see [Setting the Mode of a CStatusBarCtrl Object](../mfc/setting-the-mode-of-a-cstatusbarctrl-object.md).  
  
## See Also  
 [Using CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)   
 [Controls](../mfc/controls-mfc.md)

