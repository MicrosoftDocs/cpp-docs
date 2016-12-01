---
title: "Using Drop-Down Buttons in a Toolbar Control | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "TBN_DROPDOWN"
  - "TBSTYLE_EX_DRAWDDARROWS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CToolBarCtrl class, drop-down buttons"
  - "toolbars [C++], drop-down buttons"
  - "drop-down buttons in toolbars"
  - "TBSTYLE_EX_DRAWDDARROWS"
  - "TBN_DROPDOWN notification"
ms.assetid: b859f758-d2f6-40d9-9c26-0ff61993b9b2
caps.latest.revision: 12
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
# Using Drop-Down Buttons in a Toolbar Control
In addition to standard push buttons, a toolbar can also have drop-down buttons. A drop-down button is usually indicated by the presence of an attached down arrow.  
  
> [!NOTE]
>  The attached down arrow will appear only if the `TBSTYLE_EX_DRAWDDARROWS` extended style has been set.  
  
 When the user clicks on this arrow (or the button itself, if no arrow is present), a `TBN_DROPDOWN` notification message is sent to the parent of the toolbar control. You can then handle this notification and display a pop-up menu; similar to the behavior of Internet Explorer.  
  
 The following procedure illustrates how to implement a drop-down toolbar button with a pop-up menu:  
  
### To implement a drop-down button  
  
1.  Once your `CToolBarCtrl` object has been created, set the `TBSTYLE_EX_DRAWDDARROWS` style, using the following code:  
  
     [!code-cpp[NVC_MFCControlLadenDialog#36](../mfc/codesnippet/cpp/using-drop-down-buttons-in-a-toolbar-control_1.cpp)]  
  
2.  Set the `TBSTYLE_DROPDOWN` style for any new ([InsertButton](../mfc/reference/ctoolbarctrl-class.md#ctoolbarctrl__insertbutton) or [AddButtons](../mfc/reference/ctoolbarctrl-class.md#ctoolbarctrl__addbuttons)) or existing ([SetButtonInfo](../mfc/reference/ctoolbarctrl-class.md#ctoolbarctrl__setbuttoninfo)) buttons that will be drop-down buttons. The following example demonstrates modifying an existing button in a `CToolBarCtrl` object:  
  
     [!code-cpp[NVC_MFCControlLadenDialog#37](../mfc/codesnippet/cpp/using-drop-down-buttons-in-a-toolbar-control_2.cpp)]  
  
3.  Add a `TBN_DROPDOWN` handler to the parent class of the toolbar object.  
  
     [!code-cpp[NVC_MFCControlLadenDialog#38](../mfc/codesnippet/cpp/using-drop-down-buttons-in-a-toolbar-control_3.cpp)]  
  
4.  In the new handler, display the appropriate popup menu. The following code demonstrates one method:  
  
     [!code-cpp[NVC_MFCControlLadenDialog#39](../mfc/codesnippet/cpp/using-drop-down-buttons-in-a-toolbar-control_4.cpp)]  
  
## See Also  
 [Using CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controls](../mfc/controls-mfc.md)

