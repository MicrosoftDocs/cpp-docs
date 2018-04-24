---
title: "List Control and List View | Microsoft Docs"
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
  - "CListView class, and CListCtrl"
  - "views, list and list control"
  - "CListCtrl class, and CListView"
  - "list views"
  - "list controls, List view"
ms.assetid: 7aee1c48-b158-4399-be0b-be366993665e
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# List Control and List View
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [List Control and List View](https://docs.microsoft.com/cpp/mfc/list-control-and-list-view).  
  
  
For convenience, MFC encapsulates the list control in two ways. You can use list controls:  
  
-   Directly, by embedding a [CListCtrl](../mfc/reference/clistctrl-class.md) object in a dialog class.  
  
-   Indirectly, by using class [CListView](../mfc/reference/clistview-class.md).  
  
 `CListView` makes it easy to integrate a list control with the MFC document/view architecture, encapsulating the control much as [CEditView](../mfc/reference/ceditview-class.md) encapsulates an edit control: the control fills the entire surface area of an MFC view. (The view *is* the control, cast to `CListView`.)  
  
 A `CListView` object inherits from [CCtrlView](../mfc/reference/cctrlview-class.md) and its base classes and adds a member function to retrieve the underlying list control. Use view members to work with the view as a view. Use the [GetListCtrl](../mfc/reference/clistview-class.md#getlistctrl) member function to gain access to the list control's member functions. Use these members to:  
  
-   Add, delete, or manipulate "items" in the list.  
  
-   Set or get list control attributes.  
  
 To obtain a reference to the `CListCtrl` underlying a `CListView`, call `GetListCtrl` from your list view class:  
  
 [!code-cpp[NVC_MFCListView#4](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCListView/Cpp/MyListView.cpp#4)]  
  
 This topic describes both ways to use the list control.  
  
## See Also  
 [Using CListCtrl](../mfc/using-clistctrl.md)   
 [Controls](../mfc/controls-mfc.md)





