---
title: "Connecting a Pop-up Menu to Your Application"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 295cbf0e-6416-478e-bc3d-472fb98e0e52
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Connecting a Pop-up Menu to Your Application
### To connect a pop-up menu to your application  
  
1.  Add a message handler for [WM_CONTEXTMENU](_win32_WM_CONTEXTMENU) (for example). For more information, see [Mapping Messages to Functions](../VS_visualcpp/Mapping-Messages-to-Functions.md).  
  
2.  Add the following code to the message handler:  
  
    ```  
    CMenu menu;  
    VERIFY(menu.LoadMenu(IDR_MENU1));  
    CMenu* pPopup = menu.GetSubMenu(0);  
    ASSERT(pPopup != NULL);  
    pPopup->TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON, point.x, point.y, AfxGetMainWnd());  
    ```  
  
    > [!NOTE]
    >  The [CPoint](../VS_visualcpp/CPoint-Class.md) **passed by the message handler is in screen coordinates.**  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requirements**  
  
 MFC  
  
## See Also  
 [Creating Pop-up Menus](../VS_visualcpp/Creating-Pop-up-Menus.md)   
 [Menu Editor](../VS_visualcpp/Menu-Editor.md)   
 [Menus](_win32_Menus)