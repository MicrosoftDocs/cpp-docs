---
title: "Tree Control Item Information"
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
  - "tree controls, item information"
  - "CTreeCtrl class, item information"
ms.assetid: 8dcab855-27de-49e9-95d8-f78ba963ea71
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
# Tree Control Item Information
Tree controls ([CTreeCtrl](../mfcref/ctreectrl-class.md)) have a number of member functions that retrieve information about items in the control. The [GetItem](../Topic/CTreeCtrl::GetItem.md) member function retrieves some or all of the data associated with an item. This data could include the item's text, state, images, count of child items, and an application-defined 32-bit data value. There is also a [SetItem](../Topic/CTreeCtrl::SetItem.md) function that can set some or all of the data associated with an item.  
  
 The [GetItemState](../Topic/CTreeCtrl::GetItemState.md), [GetItemText](../Topic/CTreeCtrl::GetItemText.md), [GetItemData](../Topic/CTreeCtrl::GetItemData.md), and [GetItemImage](../Topic/CTreeCtrl::GetItemImage.md) member functions retrieve individual attributes of an item. Each of these functions has a corresponding Set function for setting the attributes of an item.  
  
 The [GetNextItem](../Topic/CTreeCtrl::GetNextItem.md) member function retrieves the tree control item that bears the specified relationship to the current item. This function can retrieve an item's parent, the next or previous visible item, the first child item, and so on. There are also member functions to traverse the tree: [GetRootItem](../Topic/CTreeCtrl::GetRootItem.md), [GetFirstVisibleItem](../Topic/CTreeCtrl::GetFirstVisibleItem.md), [GetNextVisibleItem](../Topic/CTreeCtrl::GetNextVisibleItem.md), [GetPrevVisibleItem](../Topic/CTreeCtrl::GetPrevVisibleItem.md), [GetChildItem](../Topic/CTreeCtrl::GetChildItem.md), [GetNextSiblingItem](../Topic/CTreeCtrl::GetNextSiblingItem.md), [GetPrevSiblingItem](../Topic/CTreeCtrl::GetPrevSiblingItem.md), [GetParentItem](../Topic/CTreeCtrl::GetParentItem.md), [GetSelectedItem](../Topic/CTreeCtrl::GetSelectedItem.md), and [GetDropHilightItem](../Topic/CTreeCtrl::GetDropHilightItem.md).  
  
 The [GetItemRect](../Topic/CTreeCtrl::GetItemRect.md) member function retrieves the bounding rectangle for a tree control item. The [GetCount](../Topic/CTreeCtrl::GetCount.md) and [GetVisibleCount](../Topic/CTreeCtrl::GetVisibleCount.md) member functions retrieve a count of the items in a tree control and a count of the items that are currently visible in the tree control's window, respectively. You can ensure that a particular item is visible by calling the [EnsureVisible](../Topic/CTreeCtrl::EnsureVisible.md) member function.  
  
## See Also  
 [Using CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controls](../mfc/controls--mfc-.md)