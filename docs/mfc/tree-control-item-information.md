---
title: "Tree Control Item Information | Microsoft Docs"
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
  - "tree controls, item information"
  - "CTreeCtrl class, item information"
ms.assetid: 8dcab855-27de-49e9-95d8-f78ba963ea71
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
# Tree Control Item Information
Tree controls ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) have a number of member functions that retrieve information about items in the control. The [GetItem](../mfc/reference/ctreectrl-class.md#ctreectrl__getitem) member function retrieves some or all of the data associated with an item. This data could include the item's text, state, images, count of child items, and an application-defined 32-bit data value. There is also a [SetItem](../mfc/reference/ctreectrl-class.md#ctreectrl__setitem) function that can set some or all of the data associated with an item.  
  
 The [GetItemState](../mfc/reference/ctreectrl-class.md#ctreectrl__getitemstate), [GetItemText](../mfc/reference/ctreectrl-class.md#ctreectrl__getitemtext), [GetItemData](../mfc/reference/ctreectrl-class.md#ctreectrl__getitemdata), and [GetItemImage](../mfc/reference/ctreectrl-class.md#ctreectrl__getitemimage) member functions retrieve individual attributes of an item. Each of these functions has a corresponding Set function for setting the attributes of an item.  
  
 The [GetNextItem](../mfc/reference/ctreectrl-class.md#ctreectrl__getnextitem) member function retrieves the tree control item that bears the specified relationship to the current item. This function can retrieve an item's parent, the next or previous visible item, the first child item, and so on. There are also member functions to traverse the tree: [GetRootItem](../mfc/reference/ctreectrl-class.md#ctreectrl__getrootitem), [GetFirstVisibleItem](../mfc/reference/ctreectrl-class.md#ctreectrl__getfirstvisibleitem), [GetNextVisibleItem](../mfc/reference/ctreectrl-class.md#ctreectrl__getnextvisibleitem), [GetPrevVisibleItem](../mfc/reference/ctreectrl-class.md#ctreectrl__getprevvisibleitem), [GetChildItem](../mfc/reference/ctreectrl-class.md#ctreectrl__getchilditem), [GetNextSiblingItem](../mfc/reference/ctreectrl-class.md#ctreectrl__getnextsiblingitem), [GetPrevSiblingItem](../mfc/reference/ctreectrl-class.md#ctreectrl__getprevsiblingitem), [GetParentItem](../mfc/reference/ctreectrl-class.md#ctreectrl__getparentitem), [GetSelectedItem](../mfc/reference/ctreectrl-class.md#ctreectrl__getselecteditem), and [GetDropHilightItem](../mfc/reference/ctreectrl-class.md#ctreectrl__getdrophilightitem).  
  
 The [GetItemRect](../mfc/reference/ctreectrl-class.md#ctreectrl__getitemrect) member function retrieves the bounding rectangle for a tree control item. The [GetCount](../mfc/reference/ctreectrl-class.md#ctreectrl__getcount) and [GetVisibleCount](../mfc/reference/ctreectrl-class.md#ctreectrl__getvisiblecount) member functions retrieve a count of the items in a tree control and a count of the items that are currently visible in the tree control's window, respectively. You can ensure that a particular item is visible by calling the [EnsureVisible](../mfc/reference/ctreectrl-class.md#ctreectrl__ensurevisible) member function.  
  
## See Also  
 [Using CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controls](../mfc/controls-mfc.md)

