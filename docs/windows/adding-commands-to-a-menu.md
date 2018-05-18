---
title: "Adding Commands to a Menu | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.menu"]
dev_langs: ["C++"]
helpviewer_keywords: ["menu items, adding to menus", "menus, adding items", "commands, adding to menus", "commands", "menu items"]
ms.assetid: 1523a755-0ab5-42f8-9e98-bb9881564431
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
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
  

  
 **Requirements**  
  
 Win32  
  
## See Also  
 [Menu Editor](../windows/menu-editor.md)   
