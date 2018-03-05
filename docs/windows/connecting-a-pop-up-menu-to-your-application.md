---
title: "Connecting a Pop-up Menu to Your Application | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["pop-up menus, connecting to applications", "context menus, connecting to applications", "menus, pop-up", "shortcut menus, connecting to applications"]
ms.assetid: 295cbf0e-6416-478e-bc3d-472fb98e0e52
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "uwp"]
---
# Connecting a Pop-up Menu to Your Application
### To connect a pop-up menu to your application  
  
1.  Add a message handler for WM_CONTEXTMENU (for example). For more information, see [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md).  
  
2.  Add the following code to the message handler:  
  
    ```  
    CMenu menu;  
    VERIFY(menu.LoadMenu(IDR_MENU1));  
    CMenu* pPopup = menu.GetSubMenu(0);  
    ASSERT(pPopup != NULL);  
    pPopup->TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON, point.x, point.y, AfxGetMainWnd());  
    ```  
  
    > [!NOTE]
    >  The [CPoint](../atl-mfc-shared/reference/cpoint-class.md) **passed by the message handler is in screen coordinates.**  
  

  
 **Requirements**  
  
 MFC  
  
## See Also  
 [Creating Pop-up Menus](../windows/creating-pop-up-menus.md)   
 [Menu Editor](../windows/menu-editor.md)   
