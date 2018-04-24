---
title: "Tree Control Item Selection | Microsoft Docs"
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
  - "tree controls, item selection"
  - "controls [MFC], selecting items in"
  - "CTreeCtrl class, item selection"
  - "item selection in tree controls"
ms.assetid: 7bcb3b16-b9c8-4c06-9350-7bc3c1c5009b
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Tree Control Item Selection
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Tree Control Item Selection](https://docs.microsoft.com/cpp/mfc/tree-control-item-selection).  
  
  
When the selection changes from one item to another, a tree control ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) sends [TVN_SELCHANGING](http://msdn.microsoft.com/library/windows/desktop/bb773547) and [TVN_SELCHANGED](http://msdn.microsoft.com/library/windows/desktop/bb773544) notification messages. Both notifications include a value that specifies whether the change is the result of a mouse click or a keystroke. The notifications also include information about the item that is gaining the selection and the item that is losing the selection. You can use this information to set item attributes that depend on the selection state of the item. Returning **TRUE** in response to **TVN_SELCHANGING** prevents the selection from changing; returning **FALSE** allows the change.  
  
 An application can change the selection by calling the [SelectItem](../mfc/reference/ctreectrl-class.md#selectitem) member function.  
  
## See Also  
 [Using CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controls](../mfc/controls-mfc.md)





