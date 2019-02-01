---
title: "Editing Multiple Menus or Menu Commands (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["menu commands [C++], selecting", "menus [C++], selecting", "commands [C++], menu commands", "commands [C++], copying on menus", "menu items, moving", "commands [C++], moving on menus", "menu items, copying", "menu items, deleting", "commands [C++], deleting from menus", "menus [C++], deleting"]
ms.assetid: b6f17897-2a40-4afd-97d4-a38b7661680b
---
# Editing Multiple Menus or Menu Commands

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## To select multiple menu commands

You can select multiple menu names or menu commands to run bulk operations such as deleting or changing properties.

While holding down the **Ctrl** key, select the menus or submenu commands you want.

## To move and copy menus and menu commands

You can move or copy menus and menu commands using the drag-and-drop method or by using commands on the shortcut menu (right-click menu).

### To move or copy menus or menu commands using the drag-and-drop method

1. Drag or copy the item you want to move to:

   - A new location on the current menu.

   - A different menu. (You can navigate to other menus by dragging the mouse pointer over them.)

1. Drop the menu command when the insertion guide shows the position you want.

### To move or copy menus or menu commands using shortcut menu commands

1. Right-click one or more menus or menu commands.

1. From the shortcut menu, choose **Cut** (to move) or **Copy**.

1. If you're moving the items to another menu resource or resource script file, [open it in another window](/visualstudio/ide/customizing-window-layouts-in-visual-studio).

1. Select the position of the menu or menu command you want to move or copy to.

1. From the shortcut menu, choose **Paste**. The moved or copied item is placed before the item you select.

   > [!NOTE]
   > You can also drag, copy, and paste to other menus in other menu windows.

## To delete a menu or menu command

1. Right-click the menu name or command.

1. Choose **Delete** from the shortcut menu.

   > [!NOTE]
   > Similarly, you can use the shortcut menu to perform other actions such as Copy, Cut, Paste, Insert New, Insert Separator, Edit IDs, View as Pop-up, Check Mnemonics, etc.

## Requirements

Win32

## See Also

[Menu Editor](../windows/menu-editor.md)