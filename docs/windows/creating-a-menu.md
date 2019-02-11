---
title: "Creating Menus (C++)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.menu"]
helpviewer_keywords: ["mnemonics [C++], associating menu items", "menus [C++], associating commands with mnemonic keys", "menus [C++], creating", "menus [C++], adding items", "commands [C++], adding to menus", "menu items, adding to menus", "submenus", "submenus [C++], creating", "menus [C++], creating", "context menus [C++], Menu Editor", "pop-up menus [C++], creating", "menus [C++], pop-up", "menus [C++], creating", "shortcut menus [C++], creating", "pop-up menus [C++], displaying", "pop-up menus [C++], connecting to applications", "context menus [C++], connecting to applications", "shortcut menus [C++], connecting to applications", "pop-up menus"]
ms.assetid: 66f94448-9b97-4b73-bf97-10d4bf87cc65
---
# Creating Menus (C++)

> [!NOTE]
> The **Resource Window** is not available in Express editions.

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## To create a standard menu

1. From the **View** menu, select **Resource View** and then right-click on the **Menu** heading and choose **Add Resource**. Choose **Menu**.

1. Select the **New Item** box (the rectangle that contains "Type Here") on the menu bar.

   ![New Item box in the menu editor](../windows/media/vcmenueditornewitembox.gif "vcMenuEditorNewItemBox")<br/>
   New Item Box

1. Type a name for your new menu, for example, "File".

   The text you type appears in both the **Menu** editor and in the **Caption** box in the [Properties Window](/visualstudio/ide/reference/properties-window). You can edit the properties for your new menu in either location.

   Once you have given your new menu a name on the menu bar, the new-item box shifts to the right (to allow you to add another menu), and another new-item box opens below your first menu so you can add menu commands to it.

   ![Expanded New Item box](../windows/media/vcmenueditornewitemboxexpanded.gif "vcMenuEditorNewItemBoxExpanded")<br/>
   New Item Box with Focus Shifted After You Type Menu Name

   > [!NOTE]
   > To create a single-item menu on the menu bar, set the **Popup** property to **False**.

## To create a submenu

1. Select the menu command for which you want to create a submenu.

1. In the **New Item** box that appears to the right, type the name of the new menu command. This new command will appear first on the submenu menu.

1. Add additional menu commands to the submenu menu.

## To insert a new menu between existing menus

Select an existing menu name and press the **Insert** key. The **New Item** box is inserted before the selected item.

   \- or -

Right-click on the menu bar and choose **Insert New** from the shortcut menu.

## To add commands to a menu

1. Create a menu.

1. Select a menu name, for example, **File**.

   Each menu will expand and expose a new item box for commands. For example, you can add the commands **New**, **Open**, and **Close** to a **File** menu.

1. In the new item box, type a name for the new menu command.

   > [!NOTE]
   > The text you type appears in both the **Menu** editor and in the **Caption** box in the [Properties Window](/visualstudio/ide/reference/properties-window). You can edit the properties for your new menu in either location.

   > [!TIP]
   > You can define a mnemonic key (hot key) that allows the user to select the menu command. Type an ampersand (`&`) in front of a letter to specify it as the mnemonic. The user can select the menu command by typing that letter.

1. In the **Properties** window, select the menu command properties that apply. For details, see [Menu Command Properties](../windows/menu-command-properties.md).

1. In the **Prompt** box in the **Properties** window, type the prompt string you want to appear in your application's status bar.

   This step creates an entry in the string table with the same resource identifier as the menu command you created.

   > [!NOTE]
   > Prompts can only apply to menu items with a **Popup** property of **True**. For example, top-level menu items can have prompts if they have sub-menu items. The purpose of a **Prompt** is to indicate what will happen if a user selects the menu item.

1. Press **Enter** to complete the menu command.

   The new item box is selected so you can create additional menu commands.

## To create pop-up menus

[Pop-up menus](../mfc/menus-mfc.md) display frequently used commands. They can be context sensitive to the location of the pointer. Using pop-up menus in your application requires building the menu itself and then connecting it to application code.

Once you've created the menu resource, your application code needs to load the menu resource and use [TrackPopupMenu](/windows/desktop/api/winuser/nf-winuser-trackpopupmenu) to cause the menu to appear. Once the user has dismissed the pop-up menu by selecting outside it, or has selected a command, that function will return. If the user chooses a command, that command message will be sent to the window whose handle was passed.

### To create a pop-up menu

1. [Create a menu](../windows/creating-a-menu.md) with an empty title (don't provide a **Caption**).

1. [Add a menu command to the new menu](../windows/adding-commands-to-a-menu.md). Move to the first menu command below the blank menu title (the temporary caption says `Type Here`). Type a **Caption** and any other information.

   Repeat this process for any other menu commands in the pop-up menu.

1. Save the menu resource.

### To connect a pop-up menu to your application

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

### To view a menu resource as a pop-up menu

Normally, when you're working in the **Menu** editor, a menu resource is displayed as a menu bar. However, you might have menu resources that are added to the application's menu bar while the program is running.

Right-click the menu and choose **View as Popup** from the shortcut menu.

   This option is only a viewing preference and won't modify your menu.

   > [!NOTE]
   > To change back to the menu-bar view, click **View as Popup** again (which removes the check mark and returns your menu-bar view).

## Requirements

Win32

## See also

[Menu Editor](../windows/menu-editor.md)