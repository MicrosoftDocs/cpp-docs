---
title: "Communicating with a Tree Control | Microsoft Docs"
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
  - "tree controls, communicating with"
  - "CTreeCtrl class, calling member functions"
  - "communications, tree controls"
  - "tree controls"
ms.assetid: 680ad9ee-b11f-452d-93fa-501ca7d7e069
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Communicating with a Tree Control
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Communicating with a Tree Control](https://docs.microsoft.com/cpp/mfc/communicating-with-a-tree-control).  
  
  
You use different methods for calling member functions in a [CTreeCtrl](../mfc/reference/ctreectrl-class.md) object depending on how the object was created:  
  
-   If the tree control is in a dialog box, use a member variable of type `CTreeCtrl` that you create in the dialog box class.  
  
-   If the tree control is a child window, use the `CTreeCtrl` object (or pointer) you used to construct the object.  
  
-   If you're using a `CTreeView` object, use the function [CTreeView::GetTreeCtrl](../mfc/reference/ctreeview-class.md#ctreeview__gettreectrl) to get a reference to the tree control. You can initialize another reference with this value or assign the address of the reference to a `CTreeCtrl` pointer.  
  
## See Also  
 [Using CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controls](../mfc/controls-mfc.md)





