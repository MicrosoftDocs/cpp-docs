---
title: "Creating Pop-up Menus (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["context menus [C++], Menu Editor", "pop-up menus [C++], creating", "menus [C++], pop-up", "menus [C++], creating", "shortcut menus [C++], creating", "pop-up menus [C++], displaying", "pop-up menus [C++], connecting to applications", "context menus [C++], connecting to applications", "shortcut menus [C++], connecting to applications", "pop-up menus"]
ms.assetid: dff4dddf-2e8d-4c34-b755-90baae426b58
---
# Creating Pop-up Menus (C++)

[Pop-up menus](../mfc/menus-mfc.md) display frequently used commands. They can be context sensitive to the location of the pointer. Using pop-up menus in your application requires building the menu itself and then connecting it to application code.

Once you've created the menu resource, your application code needs to load the menu resource and use [TrackPopupMenu](/windows/desktop/api/winuser/nf-winuser-trackpopupmenu) to cause the menu to appear. Once the user has dismissed the pop-up menu by selecting outside it, or has selected a command, that function will return. If the user chooses a command, that command message will be sent to the window whose handle was passed.

## To create a pop-up menu

1. [Create a menu](../windows/creating-a-menu.md) with an empty title (don't provide a **Caption**).

1. [Add a menu command to the new menu](../windows/adding-commands-to-a-menu.md). Move to the first menu command below the blank menu title (the temporary caption says `Type Here`). Type a **Caption** and any other information.

   Repeat this process for any other menu commands in the pop-up menu.

1. Save the menu resource.

## To connect a pop-up menu to your application

1. Add a message handler for WM_CONTEXTMENU (for example). For more information, see [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md).

1. Add the following code to the message handler:

    ```cpp
    CMenu menu;
    VERIFY(menu.LoadMenu(IDR_MENU1));
    CMenu* pPopup = menu.GetSubMenu(0);
    ASSERT(pPopup != NULL);
    pPopup->TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON, point.x, point.y, AfxGetMainWnd());
    ```

   > [!NOTE]
   > The [CPoint](../atl-mfc-shared/reference/cpoint-class.md) passed by the message handler is in screen coordinates.

   > [!NOTE]
   > Connecting a pop-up menu to your application requires MFC.

## To view a menu resource as a pop-up menu

Normally, when you're working in the **Menu** editor, a menu resource is displayed as a menu bar. However, you might have menu resources that are added to the application's menu bar while the program is running.

Right-click the menu and choose **View as Popup** from the shortcut menu.

   This option is only a viewing preference and won't modify your menu.

   > [!NOTE]
   > To change back to the menu-bar view, click **View as Popup** again (which removes the check mark and returns your menu-bar view).

## Requirements

Win32

## See Also

[Menu Editor](../windows/menu-editor.md)
