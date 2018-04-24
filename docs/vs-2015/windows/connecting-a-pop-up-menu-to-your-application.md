---
title: "Connecting a Pop-up Menu to Your Application | Microsoft Docs"
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
  - "pop-up menus, connecting to applications"
  - "context menus, connecting to applications"
  - "menus, pop-up"
  - "shortcut menus, connecting to applications"
ms.assetid: 295cbf0e-6416-478e-bc3d-472fb98e0e52
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Connecting a Pop-up Menu to Your Application
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Connecting a Pop-up Menu to Your Application](https://docs.microsoft.com/cpp/windows/connecting-a-pop-up-menu-to-your-application).  
  
  
To connect a pop-up menu to your application  
  
1.  Add a message handler for [WM_CONTEXTMENU](_win32_WM_CONTEXTMENU) (for example). For more information, see [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md).  
  
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
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 **Requirements**  
  
 MFC  
  
## See Also  
 [Creating Pop-up Menus](../windows/creating-pop-up-menus.md)   
 [Menu Editor](../mfc/menu-editor.md)   
 [Menus](_win32_Menus)
