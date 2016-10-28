---
title: "Creating a Menu"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
caps.latest.revision: 10
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
# Creating a Menu
> [!NOTE]
>  The Resource Window is not available in Express editions.  
  
### To create a standard menu  
  
1.  From the **View** menu, click on **Resource View** and then right-click on the **Menu** heading and choose **Add Resource**. Choose **Menu**.  
  
2.  Select the **New Item** box (the rectangle that contains "Type Here") on the menu bar.  
  
     ![New Item box in the menu editor](../windows/media/vcmenueditornewitembox.gif "vcMenuEditorNewItemBox")  
New Item Box  
  
3.  Type a name for your new menu, for example, "File".  
  
     The text you type appears in both the **Menu** editor and in the **Caption** box in the [Properties Window](../Topic/Properties%20Window.md). You can edit the properties for your new menu in either location.  
  
     Once you have given your new menu a name on the menu bar, the new-item box shifts to the right (to allow you to add another menu), and another new-item box opens below your first menu so you can add menu commands to it.  
  
     ![Expanded New Item box](../windows/media/vcmenueditornewitemboxexpanded.gif "vcMenuEditorNewItemBoxExpanded")  
New Item Box with Focus Shifted After You Type Menu Name  
  
    > [!NOTE]
    >  To create a single-item menu on the menu bar, set the Popup property to False.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](assetId:///9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requirements**  
  
 Win32  
  
## See Also  
 [Menu Editor](../mfc/menu-editor.md)