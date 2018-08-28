---
title: "Destroying the List Control | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["list controls [MFC], destroying", "CListCtrl class [MFC], destroying controls"]
ms.assetid: 513ec820-3a02-49d2-b073-a6a7a3fc91b3
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Destroying the List Control
If you embed your [CListCtrl](../mfc/reference/clistctrl-class.md) object as a data member of a view or dialog class, it is destroyed when its owner is destroyed. If you use a [CListView](../mfc/reference/clistview-class.md), the framework destroys the control when it destroys the view.  
  
 If you arrange for some of your list data to be stored in the application rather than the list control, you will need to arrange for its deallocation. For more information, see [Callback Items and the Callback Mask](/windows/desktop/Controls/using-list-view-controls) in the Windows SDK.  
  
 In addition, you are responsible for deallocating any image lists you created and associated with the list control object.  
  
## See Also  
 [Using CListCtrl](../mfc/using-clistctrl.md)   
 [Controls](../mfc/controls-mfc.md)

