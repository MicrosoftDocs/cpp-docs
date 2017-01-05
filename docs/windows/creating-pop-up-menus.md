---
title: "Creating Pop-up Menus | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "context menus, Menu Editor"
  - "pop-up menus, creating"
  - "menus, pop-up"
  - "menus, creating"
  - "shortcut menus, creating"
  - "pop-up menus, displaying"
ms.assetid: dff4dddf-2e8d-4c34-b755-90baae426b58
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Creating Pop-up Menus
[Pop-up menus](../mfc/menus-mfc.md) display frequently used commands. They can be context sensitive to the location of the pointer. Using pop-up menus in your application requires building the menu itself and then connecting it to application code.  
  
 Once you have created the menu resource, your application code needs to load the menu resource and use [TrackPopupMenu](http://msdn.microsoft.com/library/windows/desktop/ms648002) to cause the menu to appear. Once the user has dismissed the pop-up menu by clicking outside it, or has clicked on a command, that function will return. If the user chooses a command, that command message will be sent to the window whose handle was passed.  
  
### To create a pop-up menu  
  
1.  [Create a menu](../windows/creating-a-menu.md) with an empty title (don't provide a **Caption**).  
  
2.  [Add a menu command to the new menu](../windows/adding-commands-to-a-menu.md). Move to the first menu command below the blank menu title (the temporary caption says Type Here). Type a **Caption** and any other information.  
  
     Repeat this process for any other menu commands in the pop-up menu.  
  
3.  Save the menu resource.  
  
    > [!TIP]
    >  For more information on viewing the pop-up menu, see [Viewing a Menu as a Pop-Up Menu](../windows/viewing-a-menu-as-a-pop-up-menu.md).  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/Library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 **Requirements**  
  
 Win32  
  
## See Also  
 [Connecting a Pop-up Menu to Your Application](../windows/connecting-a-pop-up-menu-to-your-application.md)   
 [Menu Editor](../mfc/menu-editor.md)