---
description: "Learn more about: Accelerator Editor (C++)"
title: "Accelerator Editor (C++)"
ms.date: "02/14/2019"
f1_keywords: ["vc.editors.accelerator.F1", "vc.editors.accelerator"]
helpviewer_keywords: ["accelerator tables [C++], editing", "tables [C++], accelerator key", "accelerator keys [C++]", "resource editors [C++], Accelerator editor", "keyboard shortcuts [C++], Accelerator editor", "accelerator properties", "properties [C++], accelerator properties", "Type property", "Key property", "Modifier property", "VIRTKEY", "Key property", "ID property", "accelerator tables [C++], editing", "keyboard shortcuts [C++], editing in an accelerator table", "searching, in accelarator tables", "accelerator tables [C++], finding entries", "accelerator tables [C++], adding entries", "New Accelerator command", "accelerator tables [C++], deleting entries", "keyboard shortcuts [C++], deleting entry from accelerator table", "accelerator tables [C++], copying entries", "rc files [C++], moving an accelerator table entry", ".rc files [C++], moving accelerator table entries", "accelerator tables [C++], moving entries", "keyboard shortcuts [C++], property changing", "accelerator tables [C++], changing properties"]
ms.assetid: 013c30b6-5d61-4f1c-acef-8bd15bed7060
---
# Accelerator Editor (C++)

An accelerator table is a C++ Windows resource that contains a list of accelerator keys, known as shortcut keys, and the command identifiers that are associated with them. A program can have more than one accelerator table.

Normally, accelerators are used as keyboard shortcuts for program commands that are also available on a menu or toolbar. However, you can use the accelerator table to define key combinations for commands that don't have a user-interface object associated with them.

> [!TIP]
> When using the **Accelerator Editor**, right-click to display a shortcut menu of frequent commands. The commands available depend on what the pointer is pointing to.

You can use [Class View](/visualstudio/ide/viewing-the-structure-of-code) to hook accelerator key commands to code. For a list of pre-defined accelerator keys, see [Accelerator Keys](predefined-accelerator-keys.md).

> [!NOTE]
> Windows doesn't allow you to create empty accelerator tables. If you create an accelerator table with no entries, it is deleted automatically when you save the table.

## Accelerator Properties

You can set accelerator properties in the [Properties window](/visualstudio/ide/reference/properties-window) at any time. You can also use the **Accelerator Editor** to modify the accelerator properties in the accelerator table. Changes made using the **Properties** window or the **Accelerator Editor** have the same result, edits are immediately reflected in the accelerator table.

The **ID** property references each accelerator table entry in program code. This entry is the command value that the program receives when a user presses the accelerator key or a key combination. To make an accelerator the same as a menu item, make the **ID** the same, so long as the **ID** of the accelerator table is the same as the **ID** for the menu resource.

Each accelerator **ID** has three properties: **Modifier**, **Key**, and **Type**

The **Modifier** property sets control key combinations for the accelerator.

> [!NOTE]
> In the **Properties** window, the **Modifier** property appears as three separate **Boolean** properties, all of which can be controlled independently: **Alt**, **Ctrl**, and **Shift**.

The following are legal entries for the **Modifier** property in the accelerator table:

   |Value|Description|
   |-----------|-----------------|
   |**None**|User presses only the **Key** value.<br/><br/>This value is most effectively used with the ASCII/ANSI values 001 through 026, which is interpreted as ^A through ^Z (**Ctrl+A** through **Ctrl+Z**).|
   |**Alt**|User must press **Alt** before the **Key** value.|
   |**Ctrl**|User must press **Ctrl** before the **Key** value, not valid with ASCII Type.|
   |**Shift**|User must press **Shift** before the **Key** value.|
   |**Ctrl+Alt**|User must press **Ctrl** and **Alt** before the **Key** value, not valid with ASCII Type.|
   |**Ctrl+Shift**|User must press **Ctrl** and **Shift** before the **Key** value, not valid with ASCII Type.|
   |**Alt+Shift**|User must press **Alt** and **Shift** before the **Key** value, not valid with ASCII Type.|
   |**Ctrl+Alt+Shift**|User must press **Ctrl**, **Alt**, and **Shift** before the **Key** value, not valid with ASCII Type.|

The **Key** property sets the actual key to use as the accelerator.

The following are legal entries for the **Key** property in the accelerator table:

   |Value|Description|
   |-----------|-----------------|
   |An integer between 0 and 255 in decimal format.|The value determines whether the value is treated as ASCII or ANSI as follows:<br/><br/>   - Single-digit numbers are always interpreted as the corresponding key, rather than as ASCII or ANSI values.<br/>   - Values from 1 through 26, when preceded with zeros, are interpreted as ^A through ^Z, which represents the ASCII value of the letters of the alphabet when pressed with the **Ctrl** key held down.<br/>   - Values from 27-32 are always interpreted as three-digit decimal values 027 through 032.<br/>   - Values from 033 through 255, whether preceded by 0's or not are interpreted as ANSI values.|
   |A single keyboard character.|Uppercase A - Z or the numbers 0 - 9 can be either ASCII or virtual key values. Any other character is ASCII only.|
   |A single keyboard character in the range A - Z (uppercase only), preceded by a caret (^), for example, ^C.|This option enters the ASCII value of the key when it's pressed with the **Ctrl** key held down.|
   |Any valid virtual key identifier.|The drop-down **Key** box in the accelerator table contains a list of standard virtual key identifiers.|

> [!NOTE]
> When entering an ASCII value, the **Modifier** property options are limited. The only control key available for use is the **Alt** key.

> [!TIP]
> A shortcut to define an accelerator key is to right-click an entry or multiple entries in the accelerator table, then choose **Next Key Typed** and press any of the keys or key combinations on the keyboard.
>
> This **Next Key Typed** command is also available from the **Edit** menu.

The **Type** property determines whether the shortcut key combination associated with the accelerator **ID** is interpreted as an ASCII/ANSI key value or a virtual key (VIRTKEY) combination.

- If the **Type** property is **ASCII**, the **Modifier** property may only be `None` or `Alt`, or it can have an accelerator that uses the **Ctrl** key, as specified by preceding the key with a `^`.

- If the **Type** property is **VIRTKEY**, any combination of **Modifier** and **Key** values is valid.

> [!NOTE]
> If you want to enter a value into the accelerator table and have the value treated as ASCII/ANSI, select the **Type** for the entry in the table and select **ASCII** from the dropdown list. However, if you use the **Next Key Typed** command from the **Edit** menu to specify the **Key**, you must change the **Type** property from **VIRTKEY** to **ASCII** *before* entering the **Key** code.

## Accelerator Tables

In a C++ project, you can edit an accelerator table directly with in-place editing in the **Accelerator Editor**.

The procedures below refer to the use of standard property pages, however, both in-place editing and the property page method have the same result. Changes made using property pages or using in-place editing are immediately reflected in the accelerator table.

### To edit in an accelerator table

1. Open the accelerator table by double-clicking its icon in [Resource View](how-to-create-a-resource-script-file.md#create-resources).

1. Select an entry in the table and select to activate in-place editing.

1. Select from the drop-down combo box or type in place to make changes:

   - For **ID**, select from the list or type to edit.

   - For **Modifier**, select from the list.

   - For **Key**, select from the list or type to edit.

   - For **Type**, select **ASCII** or **VIRTKEY** from the list.

### To find an entry in an open accelerator table

1. Open the accelerator table by double-clicking its icon in [Resource View](how-to-create-a-resource-script-file.md#create-resources).

1. Select a column head to sort the contents of the column alphabetically. For example, select **ID** to display all the IDs in your accelerator table alphabetically.

   You can then scan the list and find the entry.

### To add an entry to an accelerator table

1. Open the accelerator table by double-clicking its icon in [Resource View](how-to-create-a-resource-script-file.md#create-resources).

1. Right-click within the accelerator table and choose **New Accelerator**, or select the empty row entry at the bottom of the table.

1. Select an **ID** from the drop-down list in the **ID** box or type a new *ID* in the **ID** box.

1. Type the *Key* you want to use as an accelerator, or right-click and choose **Next Key Typed** to set a key combination, or go to menu **Edit** > **Next Key Typed**.

1. Change the **Modifier** and **Type**, if necessary, and press **Enter**.

> [!NOTE]
> Make sure all accelerators you define are unique. You can have several key combinations assigned to the same ID with no ill effect, for example, **Ctrl**+**P** and **F8** can both be assigned to ID_PRINT. However, having a key combination assigned to more than one ID won't work well, for example, **Ctrl**+**Z** assigned to both ID_SPELL_CHECK and ID_THESAURUS.

### To delete an entry from an accelerator table

1. Open the accelerator table by double-clicking its icon in [Resource View](how-to-create-a-resource-script-file.md#create-resources).

1. Select the entry you want to delete, or hold down the **Ctrl** or **Shift** key while selecting to choose multiple entries.

1. Right-click and choose **Delete**, or go to menu **Edit** > **Delete**.

> [!TIP]
> You can also press the **Delete** key to delete.

### To move or copy an accelerator table entry to another resource script file

1. Open the accelerator tables in both resource script files and select the entry you want to move.

1. From the **Edit** menu, choose **Copy** or **Cut**.

1. Select an entry in the target resource script file and from the **Edit** menu, choose **Paste**.

> [!NOTE]
> You can also use the shortcut keys for copying and pasting.

### To change the properties of multiple accelerator keys

1. Open the accelerator table by double-clicking its icon in [Resource View](how-to-create-a-resource-script-file.md#create-resources).

1. Select the accelerator keys you want to change by holding down the **Ctrl** key as you select each one.

1. Go to the [Properties window](/visualstudio/ide/reference/properties-window) and type in the values you want all of the selected accelerators to share.

> [!NOTE]
> Each modifier value appears as a Boolean property in the **Properties** window. If you change a modifier value in the **Properties** window, the accelerator table treats the new modifier as an addition to any modifiers that were previously there. Because of this, if you set any modifier values, you'll need to set all of them to ensure that every accelerator shares the same **Modifier** settings.

## Requirements

Win32

## See also

[Resource Editors](resource-editors.md)<br/>
[Accelerator Keys](predefined-accelerator-keys.md)<br/>
