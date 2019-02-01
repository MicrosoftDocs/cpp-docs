---
title: "Creating a Menu (C++)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.menu"]
helpviewer_keywords: ["mnemonics [C++], associating menu items", "menus [C++], associating commands with mnemonic keys", "menus [C++], creating", "menus [C++], adding items", "commands [C++], adding to menus", "menu items, adding to menus"]
ms.assetid: 66f94448-9b97-4b73-bf97-10d4bf87cc65
---
# Creating a Menu (C++)

> [!NOTE]
> The **Resource Window** is not available in Express editions.

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

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

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

## Requirements

Win32

## See Also

[Menu Editor](../windows/menu-editor.md)