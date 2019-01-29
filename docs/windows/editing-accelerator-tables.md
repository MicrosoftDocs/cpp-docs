---
title: "Editing Accelerator Tables (C++)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.accelerator"]
helpviewer_keywords: ["accelerator tables [C++], editing", "keyboard shortcuts [C++], editing in an accelerator table", "searching, in accelarator tables", "accelerator tables [C++], finding entries", "accelerator tables [C++], adding entries", "New Accelerator command", "accelerator tables [C++], deleting entries", "keyboard shortcuts [C++], deleting entry from accelerator table", "accelerator tables [C++], copying entries", "rc files [C++], moving an accelerator table entry", ".rc files [C++], moving accelerator table entries", "accelerator tables [C++], moving entries", "keyboard shortcuts [C++], property changing", "accelerator tables [C++], changing properties"]
ms.assetid: 56e24efb-d06b-4ed9-8915-1f99f725e247
---
# Editing Accelerator Tables (C++)

In a C++ project, you can edit an accelerator table directly with in-place editing in the **Accelerator** editor.

The procedures below refer to the use of standard property pages, however, both in-place editing and the property page method have the same result. Changes made using property pages or using in-place editing are immediately reflected in the accelerator table.

## To edit in an accelerator table

1. Open the accelerator table by double-clicking its icon in [Resource View](../windows/resource-view-window.md).

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. Select an entry in the table and click to activate in-place editing.

1. Select from the drop-down combo box or type in place to make changes.

   - For [ID](id-property.md), select from the list or type to edit.

   - For [Modifier](../windows/accelerator-modifier-property.md), select from the list.

   - For [Key](../windows/accelerator-key-property.md), select from the list or type to edit.

   - For [Type](../windows/accelerator-type-property.md), select **ASCII** or **VIRTKEY** from the list.

## To find an entry in an open accelerator table

1. Open the accelerator table by double-clicking its icon in [Resource View](../windows/resource-view-window.md).

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. Click a column head to sort the contents of the column alphabetically. For example, click **ID** to display all the IDs in your accelerator table alphabetically.

You can then scan the list and find the entry.

## To add an entry to an accelerator table

1. In a C++ project, open the accelerator table by double-clicking its icon in [Resource View](../windows/resource-view-window.md).

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. Right-click within the accelerator table and choose **New Accelerator** from the shortcut menu, or click on the empty row entry at the bottom of the table.

1. Select an [ID](id-property.md) from the drop-down list in the ID box or type a new ID in the **ID** box.

1. Type the [Key](../windows/accelerator-key-property.md) you want to use as an accelerator or right-click and choose **Next Key Typed** from the shortcut menu to set a key combination (the **Next Key Typed** command is also available from the **Edit** menu).

1. Change the [Modifier](../windows/accelerator-modifier-property.md) and [Type](../windows/accelerator-type-property.md), if necessary.

1. Press **ENTER**.

   > [!NOTE]
   > Make sure all accelerators you define are unique. You can have several key combinations assigned to the same ID with no ill effect, for example, **Ctrl** + **P** and **F8** can both be assigned to ID_PRINT. However, having a key combination assigned to more than one ID will not work well, for example, **Ctrl** + **Z** assigned to both ID_SPELL_CHECK and ID_THESAURUS.

## To delete an entry from an accelerator table

1. Open the accelerator table by double-clicking its icon in [Resource View](../windows/resource-view-window.md).

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. Select the entry you want to delete. (Hold down the **Ctrl** or **Shift** key while clicking to select multiple entries.)

1. Right-click and choose **Delete** from the shortcut menu (or select **Delete** from the **Edit** menu).

\- or -

- Press the **Delete** key.

## To move or copy an accelerator table entry to another resource script file

1. Open the accelerator tables in both resource script files.

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. Select the entry you want to move.

1. From the **Edit** menu, choose **Copy** or **Cut**.

1. Select an entry in the target resource script file.

1. From the **Edit** menu, choose **Paste**.

   > [!NOTE]
   > You can also use the shortcut keys for copying and pasting.

## To change the properties of multiple accelerator keys

1. Open the accelerator table by double-clicking its icon in [Resource View](../windows/resource-view-window.md).

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. Select the accelerator keys you want to change by holding down the **Ctrl** key as you click each one.

1. Go to the [Properties window](/visualstudio/ide/reference/properties-window) and type in the values you want all of the selected accelerators to share.

   > [!NOTE]
   > Each modifier value appears as a Boolean property in the **Properties** window. If you change a [Modifier](../windows/accelerator-modifier-property.md) value in the **Properties** window, the accelerator table treats the new modifier as an addition to any modifiers that were previously there. Because of this, if you set any modifier values, you will need to set all of them to ensure that every accelerator shares the same **Modifier** settings.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

Win32

## See Also

[Accelerator Editor](../windows/accelerator-editor.md)<br/>
[Resource Editors](../windows/resource-editors.md)
