---
title: "Moving and Copying Menus and Menu Commands | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["commands, copying on menus", "menu items, moving", "commands, moving on menus", "menu items, copying"]
ms.assetid: 1d8df535-9922-4579-a9c2-37aeac1856eb
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Moving and Copying Menus and Menu Commands

You can move or copy menus and menu commands using the drag-and-drop method or by using commands on the shortcut menu (right-click menu).

### To move or copy menus or menu commands using the drag-and-drop method

1. Drag or copy the item you want to move to:

   - A new location on the current menu.

   - A different menu. (You can navigate to other menus by dragging the mouse pointer over them.)

2. Drop the menu command when the insertion guide shows the position you want.

### To move or copy menus or menu commands using shortcut menu commands

1. Right-click one or more menus or menu commands.

2. From the shortcut menu, choose **Cut** (to move) or **Copy**.

3. If you are moving the items to another menu resource or resource script file, [open it in another window](/visualstudio/ide/customizing-window-layouts-in-visual-studio).

4. Select the position of the menu or menu command you want to move or copy to.

5. From the shortcut menu, choose **Paste**. The moved or copied item is placed before the item you select.

   > [!NOTE]
   > You can also drag, copy, and paste to other menus in other menu windows.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties,.

## Requirements

Win32

## See Also

[Menu Editor](../windows/menu-editor.md)