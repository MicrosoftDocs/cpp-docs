---
title: "Adding Commands to a Menu | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
  - "menu items, adding to menus"
  - "menus, adding items"
  - "commands, adding to menus"
  - "commands"
  - "menu items"
ms.assetid: 1523a755-0ab5-42f8-9e98-bb9881564431
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Adding Commands to a Menu
### To add commands to a menu  
  
1.  [Create a menu](../windows/creating-a-menu.md).  
  
2.  Click a menu name, for example, File.  
  
     Each menu will expand and expose a new item box for commands. For example, you can add the commands New, Open, and Close to a File menu.  
  
3.  In the new item box, type a name for the new menu command.  
  
    > [!NOTE]
    >  The text you type appears in both the Menu editor and in the **Caption** box in the [Properties Window](/visualstudio/ide/reference/properties-window). You can edit the properties for your new menu in either location.  
  
    > [!TIP]
    >  You can define a mnemonic key (hot key) that allows the user to select the menu command. Type an ampersand (&) in front of a letter to specify it as the mnemonic. The user can select the menu command by typing that letter.  
  
4.  In the Properties window, select the menu command properties that apply. For details, see [Menu Command Properties](../windows/menu-command-properties.md).  
  
5.  In the **Prompt** box in the Properties window, type the prompt string you want to appear in your application's status bar.  
  
     This creates an entry in the string table with the same resource identifier as the menu command you created.  
  
    > [!NOTE]
    >  Prompts can only apply to menu items with a **Popup** property of **True**. For example, top-level menu items can have prompts if they have sub-menu items. The purpose of a Prompt is to indicate what will happen if a user clicks the menu item.  
  
6.  Press **ENTER** to complete the menu command.  
  
     The new item box is selected so you can create additional menu commands.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/Library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 **Requirements**  
  
 Win32  
  
## See Also  
 [Menu Editor](../mfc/menu-editor.md)   
