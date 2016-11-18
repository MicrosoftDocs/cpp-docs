---
title: "Creating the List Control | Microsoft Docs"
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
  - "CListCtrl class, creating control"
  - "list controls"
ms.assetid: a4cb1729-31b6-4d2b-a44b-367474848a39
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
# Creating the List Control
How the list control ([CListCtrl](../mfc/reference/clistctrl-class.md)) is created depends on whether you're using the control directly or using class [CListView](../mfc/reference/clistview-class.md) instead. If you use `CListView`, the framework constructs the view as part of its document/view creation sequence. Creating the list view creates the list control as well (the two are the same thing). The control is created in the view's [OnCreate](../mfc/reference/cwnd-class.md#cwnd__oncreate) handler function. In this case, the control is ready for you to add items, via a call to [GetListCtrl](../mfc/reference/clistview-class.md#clistview__getlistctrl).  
  
### To use CListCtrl directly in a dialog box  
  
1.  In the dialog editor, add a List Control to your dialog template resource. Specify its control ID.  
  
2.  Use the [Add Member Variable Wizard](../ide/adding-a-member-variable-visual-cpp.md) to add a member variable of type `CListCtrl` with the Control property. You can use this member to call `CListCtrl` member functions.  
  
3.  Use the Properties window to map handler functions in the dialog class for any list control notification messages you need to handle (see [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md)).  
  
4.  In [OnInitDialog](../mfc/reference/cdialog-class.md#cdialog__oninitdialog), set the styles for the `CListCtrl`. See [Changing List Control Styles](../mfc/changing-list-control-styles.md). This determines the kind of "view" you get in the control, although you can change the view later.  
  
### To use CListCtrl in a nondialog window  
  
1.  Define the control in the view or window class.  
  
2.  Call the control's [Create](../mfc/reference/clistctrl-class.md#clistctrl__create) member function, possibly in [OnInitialUpdate](../mfc/reference/cview-class.md#cview__oninitialupdate), possibly as early as the parent window's [OnCreate](../mfc/reference/cwnd-class.md#cwnd__oncreate) handler function (if you're subclassing the control). Set the styles for the control.  
  
## See Also  
 [Using CListCtrl](../mfc/using-clistctrl.md)   
 [Controls](../mfc/controls-mfc.md)

