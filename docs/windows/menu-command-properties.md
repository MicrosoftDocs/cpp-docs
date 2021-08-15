---
description: "Learn more about: Menu Commands (C++)"
title: "Menu Commands (C++)"
ms.date: "02/15/2019"
helpviewer_keywords: ["menu items, properties", "keyboard shortcuts [C++], menu association", "commands [C++], associating menu commands with accelerator keys", "menu commands [C++], associating with keyboard shortcuts", "status bars [C++], associating menu items", "menus [C++], status bar text", "access keys [C++], checking", "menus [C++], shortcut keys", "keyboard shortcuts [C++], command assignments", "access keys [C++], assigning", "mnemonics [C++], adding to menus", "keyboard shortcuts [C++], uniqueness checking", "mnemonics [C++], uniqueness checking", "Check Mnemonics command"]
ms.assetid: 6d308205-3c9e-42f2-ab42-45e656940e45
---
# Menu Commands (C++)

The information below is organized according to the **Menu** properties that appear in the [Properties Window](/visualstudio/ide/reference/properties-window) when you select a menu command. These are listed alphabetically although the **Properties** window also enables you to view these properties by category.

|Property|Description|
|--------------|-----------------|
|**Break**|Can be one of these values:<br/>  - **None**: No break. This is the default.<br/>  - **Column**: For static menus, this value places the menu command on a new line.<br/>      For pop-up menus, this value places the menu command in a new column with no dividing line between the columns.<br/>      Setting this property affects the appearance of the menu only at run time, not in the menu editor.<br />   - **Bar**: Same as **Column** except, for pop-up menus, this value separates the new column from the old column with a vertical line.<br/>      Setting this property affects the appearance of the menu only at run time, not in the **Menu Editor**.|
|**Caption**|The text that labels the menu command (the menu name). To make one of the letters in the caption of a menu command the mnemonic key, precede it with an ampersand (&).|
|**Checked**|If **True**, the menu command is initially checked. Type: **Bool**. Default: **False**.|
|**Enabled**|If **False**, the menu item is disabled.|
|**Grayed**|If **True**, the menu command is initially grayed and inactive. Type: **Bool**. Default: **False**.|
|**Help**|Aligns menu item to the right. Default: **False**.<br/><br/>For example, the **Help** menu command is always on the right in all Windows applications. If you set this property on a menu item, that item will appear at the very far right and at the very end of the menu. Applies to top-level items.|
|**ID**|A symbol defined in the header file. Type: **Symbol**, **Integer**, or **Quoted String**.<br/><br/>You may use any symbol that is commonly available in any of the editors, even though the [Properties Window](/visualstudio/ide/reference/properties-window) does not provide a drop-down list for you to select from.|
|**Popup**|If **True**, the menu command is a pop-up menu. Type: **Bool**. Default: **True** for top-level menus on a menu bar, otherwise **False**.|
|**Prompt**|Contains text to appear in the status bar when this menu command is highlighted. The text is placed in the string table with the same identifier as the menu command.<br/><br/>This property is available for any type of project, but the run-time functionality is MFC specific.|
|**Right to Left Justify**|Right-justifies the menu command on the menu bar at run time. Type: **Bool**. Default: **False**.|
|**Right to Left Order**|Allows menu commands to display right to left when the interface is localized to any language that reads right-to-left, such as Hebrew or Arabic.|
|**Separator**|If **True**, the menu command is a separator. Type: **Bool**. Default: **False**.|

## Associate Menu Commands

There are often times you want a menu command and a keyboard combination to issue the same program command. Identical commands are issued by using the **Menu Editor** to assign the same resource identifier to the menu command and to an entry in your application's accelerator table. You then edit the [Caption](../windows/menu-command-properties.md) of the menu command to show the name of the accelerator key.

### To associate a menu command with an accelerator key

1. In the **Menu Editor**, select the menu command you want.

1. In the [Properties Window](/visualstudio/ide/reference/properties-window), add the name of the accelerator key to the **Caption** property:

   - Following the menu caption, type the escape sequence for a tab (\t), so that all the menu's accelerator keys are left aligned.

   - Type the name of the modifier key (**Ctrl**, **Alt**, or **Shift**) followed by a plus sign (**+**) and the name, letter, or symbol of the additional key.

   For example, to assign **Ctrl**+**O** to the **Open** command on the **File** menu, you modify the menu command's **Caption** so that it looks like the following text:

   ```
   &Open...\tCtrl+O
   ```

   The menu command in the **Menu Editor** is updated to reflect the new caption as you type it.

1. [Create the accelerator-table entry](./accelerator-editor.md) in the **Accelerator** editor and assign it the same identifier as the menu command. Use a key combination that you think will be easy to remember.

Your MFC application can display descriptive text for each of the menu commands a user may select. Display descriptive text by assigning a text string to each menu command using the **Prompt** property in the **Properties** window. If you have a string in the [string table](../windows/string-editor.md) whose ID is the same as the command, an MFC application will automatically display this string resource in the status bar of the running application when a user hovers over a menu item.

- To associate a menu command with a status bar text string in MFC applications, in the **Menu Editor**, select the menu command. In the [Properties Window](/visualstudio/ide/reference/properties-window), type the associated status bar text in the **Prompt** box.

In a C++ project, you can assign an access key (a mnemonic that allows the user to select the menu with the keyboard) to your menus and menu commands.

- To assign an access (shortcut) key to a menu command, type an ampersand (`&`) in front of a letter in the menu name or command name to specify that letter as the corresponding access key.

   For example, "&File" sets **Alt**+**F** as the shortcut key for the **File** menu in applications written for Microsoft Windows.

   The menu item will provide a visible cue that one of the letters has a shortcut key assigned to it. The letter following the ampersand will appear underlined (contingent on the operating system).

> [!NOTE]
> Make sure all the access keys on a menu are unique by right-clicking your menu and choosing **Check Mnemonics**.

## Requirements

Win32

## See also

[Menu Editor](../windows/menu-editor.md)

<!--
[Strings (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>-->
