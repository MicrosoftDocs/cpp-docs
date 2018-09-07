---
title: "CTreeCtrl vs. CTreeView | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
f1_keywords: ["CTreeCtrl", "CTreeView"]
dev_langs: ["C++"]
helpviewer_keywords: ["tree view controls", "CTreeCtrl class [MFC], vs. CTreeView class [MFC]", "CTreeView class [MFC], vs. CTreeCtrl class [MFC]", "tree controls [MFC], and tree view"]
ms.assetid: bba5af25-103f-4b53-84d3-071bc9bd6494
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CTreeCtrl vs. CTreeView
MFC provides two classes that encapsulate tree controls: [CTreeCtrl](../mfc/reference/ctreectrl-class.md) and [CTreeView](../mfc/reference/ctreeview-class.md). Each class is useful in different situations.  
  
 Use `CTreeCtrl` when you need a plain child window control; for instance, in a dialog box. You'd especially want to use `CTreeCtrl` if there will be other child controls in the window, as in a typical dialog box.  
  
 Use `CTreeView` when you want the tree control to act like a view window in document/view architecture as well as a tree control. A `CTreeView` will occupy the entire client area of a frame window or splitter window. It will be automatically resized when its parent window is resized, and it can process command messages from menus, accelerator keys, and toolbars. Since a tree control contains the data necessary to display the tree, the corresponding document object does not have to be complicated — you could even use [CDocument](../mfc/reference/cdocument-class.md) as the document type in your document template.  
  
## See Also  
 [Using CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controls](../mfc/controls-mfc.md)

