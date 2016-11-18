---
title: "Using a Hot Key Control | Microsoft Docs"
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
  - "CHotKeyCtrl class, using"
  - "hot key controls"
ms.assetid: cdd6524b-cc43-447f-b151-164273559685
caps.latest.revision: 10
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
# Using a Hot Key Control
Typical usage of a hot key control follows the pattern below:  
  
-   The control is created. If the control is specified in a dialog box template, creation is automatic when the dialog box is created. (You should have a [CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md) member in your dialog class that corresponds to the hot key control.) Alternatively, you can use the [Create](../mfc/reference/chotkeyctrl-class.md#chotkeyctrl__create) member function to create the control as a child window of any window.  
  
-   If you want to set a default value for the control, call the [SetHotKey](../mfc/reference/chotkeyctrl-class.md#chotkeyctrl__sethotkey) member function. If you want to prohibit certain shift states, call [SetRules](../mfc/reference/chotkeyctrl-class.md#chotkeyctrl__setrules). For controls in a dialog box, a good time to do this is in the dialog box's [OnInitDialog](../mfc/reference/cdialog-class.md#cdialog__oninitdialog) function.  
  
-   The user interacts with the control by pressing a hot key combination when the hot key control has focus. The user then somehow indicates that this task is complete, perhaps by clicking a button in the dialog box.  
  
-   When your program is notified that the user has selected a hot key, it should use the member function [GetHotKey](../mfc/reference/chotkeyctrl-class.md#chotkeyctrl__gethotkey) to retrieve the virtual key and shift state values from the hot key control.  
  
-   Once you know what key the user selected, you can set the hot key using one of the methods described in [Setting a Hot Key](../mfc/setting-a-hot-key.md).  
  
-   If the hot key control is in a dialog box, it and the `CHotKeyCtrl` object will be destroyed automatically. If not, you need to ensure that both the control and the `CHotKeyCtrl` object are properly destroyed.  
  
## See Also  
 [Using CHotKeyCtrl](../mfc/using-chotkeyctrl.md)   
 [Controls](../mfc/controls-mfc.md)

