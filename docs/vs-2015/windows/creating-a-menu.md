---
title: "Creating a Menu | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.menu"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "mnemonics, associating menu items"
  - "menus, associating commands with mnemonic keys"
  - "menus, creating"
ms.assetid: 66f94448-9b97-4b73-bf97-10d4bf87cc65
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creating a Menu
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Creating a Menu](https://docs.microsoft.com/cpp/windows/creating-a-menu).  
  
  
NOTE]
>  The Resource Window is not available in Express editions.  
  
### To create a standard menu  
  
1.  From the **View** menu, click on **Resource View** and then right-click on the **Menu** heading and choose **Add Resource**. Choose **Menu**.  
  
2.  Select the **New Item** box (the rectangle that contains "Type Here") on the menu bar.  
  
     ![New Item box in the menu editor](../windows/media/vcmenueditornewitembox.gif "vcMenuEditorNewItemBox")  
New Item Box  
  
3.  Type a name for your new menu, for example, "File".  
  
     The text you type appears in both the **Menu** editor and in the **Caption** box in the [Properties Window](http://msdn.microsoft.com/library/e6e0fa4f-75c4-4a52-af15-281cd61876ca). You can edit the properties for your new menu in either location.  
  
     Once you have given your new menu a name on the menu bar, the new-item box shifts to the right (to allow you to add another menu), and another new-item box opens below your first menu so you can add menu commands to it.  
  
     ![Expanded New Item box](../windows/media/vcmenueditornewitemboxexpanded.gif "vcMenuEditorNewItemBoxExpanded")  
New Item Box with Focus Shifted After You Type Menu Name  
  
    > [!NOTE]
    >  To create a single-item menu on the menu bar, set the Popup property to False.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 **Requirements**  
  
 Win32  
  
## See Also  
 [Menu Editor](../mfc/menu-editor.md)

