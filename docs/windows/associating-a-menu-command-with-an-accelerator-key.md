---
title: "Associating Menu Commands (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["keyboard shortcuts [C++], menu association", "commands [C++], associating menu commands with accelerator keys", "menu commands [C++], associating with keyboard shortcuts", "status bars [C++], associating menu items", "menus [C++], status bar text", "access keys [C++], checking", "menus [C++], shortcut keys", "keyboard shortcuts [C++], command assignments", "access keys [C++], assigning", "mnemonics [C++], adding to menus", "keyboard shortcuts [C++], uniqueness checking", "mnemonics [C++], uniqueness checking", "Check Mnemonics command"]
ms.assetid: ad2de43f-b20a-4c9f-bda8-0420179da48c
---
# Associating Menu Commands (C++)

There are often times you want a menu command and a keyboard combination to issue the same program command. Identical commands are issued by using the **Menu** editor to assign the same resource identifier to the menu command and to an entry in your application's accelerator table. You then edit the [Caption](../windows/menu-command-properties.md) of the menu command to show the name of the accelerator key.

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## To associate a menu command with an accelerator key

1. In the **Menu** editor, select the menu command you want.

1. In the [Properties Window](/visualstudio/ide/reference/properties-window), add the name of the accelerator key to the **Caption** property:

   - Following the menu caption, type the escape sequence for a tab (\t), so that all the menu's accelerator keys are left aligned.

   - Type the name of the modifier key (**Ctrl**, **Alt**, or **Shift**) followed by a plus sign (**+**) and the name, letter, or symbol of the additional key.

       For example, to assign **Ctrl**+**O** to the **Open** command on the **File** menu, you modify the menu command's **Caption** so that it looks like the following text:

        ```
        &Open...\tCtrl+O
        ```

       The menu command in the **Menu** editor is updated to reflect the new caption as you type it.

1. [Create the accelerator-table entry](../windows/adding-an-entry-to-an-accelerator-table.md) in the **Accelerator** editor and assign it the same identifier as the menu command. Use a key combination that you think will be easy to remember.

## To associate a menu command with a status bar text string in MFC applications

Your MFC application can display descriptive text for each of the menu commands a user may select. Display descriptive text by assigning a text string to each menu command using the **Prompt** property in the **Properties** window. If you have a string in the [string table](../windows/string-editor.md) whose ID is the same as the command, an MFC application will automatically display this string resource in the status bar of the running application when a user hovers over a menu item.

1. In the **Menu** editor, select the menu command.

1. In the [Properties Window](/visualstudio/ide/reference/properties-window), type the associated status bar text in the **Prompt** box.

> [!NOTE]
> This set of steps requires MFC.

## To assign an access (shortcut) key to a menu command

In a C++ project, you can assign an access key (a mnemonic that allows the user to select the menu with the keyboard) to your menus and menu commands.

Type an ampersand (`&`) in front of a letter in the menu name or command name to specify that letter as the corresponding access key. For example, "&File" sets **Alt**+**F** as the shortcut key for the **File** menu in applications written for Microsoft Windows.

   The menu item will provide a visible cue that one of the letters has a shortcut key assigned to it. The letter following the ampersand will appear underlined (contingent on the operating system).

   > [!NOTE]
   > Make sure all the access keys on a menu are unique by right-clicking your menu and choosing **Check Mnemonics** from the shortcut menu.

## Requirements

Win32

## See Also

[Menu Editor](../windows/menu-editor.md)<br/>
[Adding Commands to a Menu](../windows/adding-commands-to-a-menu.md)<br/>
[Strings (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>
