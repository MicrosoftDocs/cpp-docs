---
title: "Adding Tabs to a Tab Control | Microsoft Docs"
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
  - "tab controls, adding tabs"
  - "putting tabs on CTabCtrls"
  - "CTabCtrl class, adding tabs"
  - "tabs, adding to CTabCtrl class"
ms.assetid: 7f3d9340-e3c7-4c71-9912-be57534ecc78
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Adding Tabs to a Tab Control
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Adding Tabs to a Tab Control](https://docs.microsoft.com/cpp/mfc/adding-tabs-to-a-tab-control).  
  
  
After creating the tab control ([CTabCtrl](../mfc/reference/ctabctrl-class.md)), add as many tabs as you need.  
  
### To add a tab item  
  
1.  Prepare a [TCITEM](http://msdn.microsoft.com/library/windows/desktop/bb760554) structure.  
  
2.  Call [CTabCtrl::InsertItem](../mfc/reference/ctabctrl-class.md#ctabctrl__insertitem), passing the structure.  
  
3.  Repeat steps 1 and 2 for additional tab items.  
  
 For more information, see [Creating a Tab Control](http://msdn.microsoft.com/library/windows/desktop/bb760550) in the [!INCLUDE[winSDK](../includes/winsdk-md.md)].  
  
## See Also  
 [Using CTabCtrl](../mfc/using-ctabctrl.md)   
 [Controls](../mfc/controls-mfc.md)





