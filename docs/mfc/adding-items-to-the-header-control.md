---
title: "Adding Items to the Header Control | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["controls [MFC], header", "CHeaderCtrl class [MFC], adding items", "header controls [MFC], adding items to"]
ms.assetid: 2e9a28b1-7302-4a93-8037-c5a4183e589a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Adding Items to the Header Control
After creating your header control ([CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)) in its parent window, add as many "header items" as you need: usually one per column.  
  
### To add a header item  
  
1.  Prepare an [HD_ITEM](/windows/desktop/api/commctrl/ns-commctrl-_hd_itema) structure.  
  
2.  Call [CHeaderCtrl::InsertItem](../mfc/reference/cheaderctrl-class.md#insertitem), passing the structure.  
  
3.  Repeat steps 1 and 2 for additional items.  
  
 For more information, see [Adding an Item to a Header Control](/windows/desktop/Controls/header-controls) in the Windows SDK.  
  
## See Also  
 [Using CHeaderCtrl](../mfc/using-cheaderctrl.md)   
 [Controls](../mfc/controls-mfc.md)

