---
title: "Adding Tabs to a Tab Control | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["tab controls [MFC], adding tabs", "putting tabs on CTabCtrls [MFC]", "CTabCtrl class [MFC], adding tabs", "tabs [MFC], adding to CTabCtrl class [MFC]"]
ms.assetid: 7f3d9340-e3c7-4c71-9912-be57534ecc78
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Adding Tabs to a Tab Control
After creating the tab control ([CTabCtrl](../mfc/reference/ctabctrl-class.md)), add as many tabs as you need.  
  
### To add a tab item  
  
1.  Prepare a [TCITEM](/windows/desktop/api/commctrl/ns-commctrl-tagtcitema) structure.  
  
2.  Call [CTabCtrl::InsertItem](../mfc/reference/ctabctrl-class.md#insertitem), passing the structure.  
  
3.  Repeat steps 1 and 2 for additional tab items.  
  
 For more information, see [Creating a Tab Control](/windows/desktop/Controls/tab-controls) in the Windows SDK.  
  
## See Also  
 [Using CTabCtrl](../mfc/using-ctabctrl.md)   
 [Controls](../mfc/controls-mfc.md)

