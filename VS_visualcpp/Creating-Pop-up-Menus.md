---
title: "Creating Pop-up Menus"
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
ms.assetid: dff4dddf-2e8d-4c34-b755-90baae426b58
caps.latest.revision: 11
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Creating Pop-up Menus
[Pop-up menus](../VS_visualcpp/Menus--MFC-.md) display frequently used commands. They can be context sensitive to the location of the pointer. Using pop-up menus in your application requires building the menu itself and then connecting it to application code.  
  
 Once you have created the menu resource, your application code needs to load the menu resource and use [TrackPopupMenu](http://msdn.microsoft.com/library/windows/desktop/ms648002) to cause the menu to appear. Once the user has dismissed the pop-up menu by clicking outside it, or has clicked on a command, that function will return. If the user chooses a command, that command message will be sent to the window whose handle was passed.  
  
### To create a pop-up menu  
  
1.  [Create a menu](../VS_visualcpp/Creating-a-Menu.md) with an empty title (don't provide a **Caption**).  
  
2.  [Add a menu command to the new menu](../VS_visualcpp/Adding-Commands-to-a-Menu.md). Move to the first menu command below the blank menu title (the temporary caption says Type Here). Type a **Caption** and any other information.  
  
     Repeat this process for any other menu commands in the pop-up menu.  
  
3.  Save the menu resource.  
  
    > [!TIP]
    >  For more information on viewing the pop-up menu, see [Viewing a Menu as a Pop-Up Menu](../VS_visualcpp/Viewing-a-Menu-as-a-Pop-up-Menu.md).  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requirements**  
  
 Win32  
  
## See Also  
 [Connecting a Pop-up Menu to Your Application](../VS_visualcpp/Connecting-a-Pop-up-Menu-to-Your-Application.md)   
 [Menu Editor](../VS_visualcpp/Menu-Editor.md)