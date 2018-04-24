---
title: "Associating a Menu Command with an Accelerator Key | Microsoft Docs"
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
  - "keyboard shortcuts, menu association"
  - "commands, associating menu commands with accelerator keys"
  - "menu commands, associating with keyboard shortcuts"
ms.assetid: ad2de43f-b20a-4c9f-bda8-0420179da48c
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Associating a Menu Command with an Accelerator Key
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Associating a Menu Command with an Accelerator Key](https://docs.microsoft.com/cpp/windows/associating-a-menu-command-with-an-accelerator-key).  
  
  
There are often times you want a menu command and a keyboard combination to issue the same program command. You do this by using the Menu editor to assign the same resource identifier to the menu command and to an entry in your application's accelerator table. You then edit the [Caption](../windows/menu-command-properties.md) of the menu command to show the name of the accelerator key.  
  
### To associate a menu command with an accelerator key  
  
1.  In the **Menu** editor, select the menu command you want.  
  
2.  In the [Properties Window](http://msdn.microsoft.com/library/e6e0fa4f-75c4-4a52-af15-281cd61876ca), add the name of the accelerator key to the **Caption** property:  
  
    -   Following the menu caption, type the escape sequence for a tab (\t), so that all the menu's accelerator keys are left aligned.  
  
    -   Type the name of the modifier key (**CTRL**, **ALT**, or **SHIFT**) followed by a plus sign (**+**) and the name, letter, or symbol of the additional key.  
  
         For example, to assign **CTRL+O** to the **Open** command on the **File** menu, you modify the menu command's **Caption** so that it looks like this:  
  
        ```  
        &Open...\tCtrl+O   
        ```  
  
         The menu command in the Menu editor is updated to reflect the new caption as you type it.  
  
3.  [Create the accelerator-table entry](../windows/adding-an-entry-to-an-accelerator-table.md) in the **Accelerator** editor and assign it the same identifier as the menu command. Use a key combination that you think will be easy to remember.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 **Requirements**  
  
 Win32  
  
## See Also  
 [Adding Commands to a Menu](../windows/adding-commands-to-a-menu.md)   
 [Menu Editor](../mfc/menu-editor.md)

