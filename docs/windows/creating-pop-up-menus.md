---
title: "Creating Pop-up Menus (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["context menus [C++], Menu Editor", "pop-up menus [C++], creating", "menus [C++], pop-up", "menus [C++], creating", "shortcut menus [C++], creating", "pop-up menus [C++], displaying"]
ms.assetid: dff4dddf-2e8d-4c34-b755-90baae426b58
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Creating Pop-up Menus (C++)

[Pop-up menus](../mfc/menus-mfc.md) display frequently used commands. They can be context sensitive to the location of the pointer. Using pop-up menus in your application requires building the menu itself and then connecting it to application code.

Once you have created the menu resource, your application code needs to load the menu resource and use [TrackPopupMenu](/windows/desktop/api/winuser/nf-winuser-trackpopupmenu) to cause the menu to appear. Once the user has dismissed the pop-up menu by clicking outside it, or has clicked on a command, that function will return. If the user chooses a command, that command message will be sent to the window whose handle was passed.

### To create a pop-up menu

1. [Create a menu](../windows/creating-a-menu.md) with an empty title (don't provide a **Caption**).

2. [Add a menu command to the new menu](../windows/adding-commands-to-a-menu.md). Move to the first menu command below the blank menu title (the temporary caption says `Type Here`). Type a **Caption** and any other information.

   Repeat this process for any other menu commands in the pop-up menu.

3. Save the menu resource.

   > [!TIP]
   > For more information on viewing the pop-up menu, see [Viewing a Menu as a Pop-Up Menu](../windows/viewing-a-menu-as-a-pop-up-menu.md).

## Requirements

Win32

## See Also

[Connecting a Pop-up Menu to Your Application](../windows/connecting-a-pop-up-menu-to-your-application.md)<br/>
[Menu Editor](../windows/menu-editor.md)