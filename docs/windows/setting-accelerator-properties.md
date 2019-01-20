---
title: "Setting Accelerator Properties (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["accelerator properties", "properties [C++], accelerator properties", "Type property", "Key property", "Modifier property", "VIRTKEY", "Key property", "ID property"]
ms.assetid: 0fce9156-3025-4e18-b034-e219a4c65812
---
# Setting Accelerator properties

You can set accelerator properties in the [Properties window](/visualstudio/ide/reference/properties-window) at any time. You can also use the [Accelerator editor](../windows/accelerator-editor.md) to modify the accelerator properties in the accelerator table. Changes made using the **Properties** window or the **Accelerator** editor have the same result: edits are immediately reflected in the accelerator table.

## ID property

The **ID** property references each accelerator table entry in program code. This entry is the command value that the program will receive when a user presses the accelerator key or a key combination. To make an accelerator the same as a menu item, make their IDs the same (so long as the ID of the accelerator table is the same as the ID for the menu resource).

There are three properties for each accelerator ID: the **Modifier** property, the **Key** property, and the **Type** property.

## Modifier property

The **Modifier** property sets control key combinations for the accelerator.

> [!NOTE]
> In the **Properties** window, this property appears as three separate **Boolean** properties, all of which can be controlled independently: **Alt**, **Ctrl**, and **Shift**.

The following are legal entries for the **Modifier** property in the accelerator table:

   |Value|Description|
   |-----------|-----------------|
   |**None**|User presses only the **Key** value. This value is most effectively used with the ASCII/ANSI values 001 through 026, which is interpreted as ^A through ^Z (**Ctrl+A** through **Ctrl+Z**).|
   |**Alt**|User must press the **Alt** key before the **Key** value.|
   |**Ctrl**|User must press the **Ctrl** key before the **Key** value. Not valid with ASCII Type.|
   |**Shift**|User must press the **Shift** key before the **Key** value.|
   |**Ctrl+Alt**|User must press the **Ctrl** key and the **Alt** key before the **Key** value. Not valid with ASCII Type.|
   |**Ctrl+Shift**|User must press the **Ctrl** key and the **Shift** key before the **Key** value. Not valid with ASCII Type.|
   |**Alt+Shift**|User must press the **Alt** key and the **Shift** key before the **Key** value. Not valid with ASCII Type.|
   |**Ctrl+Alt+Shift**|User must press **Ctrl**, **Alt**, and **Shift** before the **Key** value. Not valid with ASCII Type.|

## Key property

The **Key** property sets the actual key to use as the accelerator.

The following are legal entries for the **Key** property in the accelerator table:

   |Value|Description|
   |-----------|-----------------|
   |An integer between 0 and 255 in decimal format.|The value determines whether the value is treated as ASCII or ANSI as follows:<br/><br/>- Single-digit numbers are always interpreted as the corresponding key, rather than as ASCII or ANSI values.<br/>- Values from 1 through 26, when preceded with zeros, are interpreted as ^A through ^Z, which represents the ASCII value of the letters of the alphabet when pressed with the **Ctrl** key held down.<br/>- Values from 27-32 are always interpreted as three-digit decimal values 027 through 032.<br/>- Values from 033 through 255, whether preceded by 0's or not are interpreted as ANSI values.|
   |A single keyboard character.|Uppercase A - Z or the numbers 0 - 9 can be either ASCII or virtual key values; any other character is ASCII only.|
   |A single keyboard character in the range A - Z (uppercase only), preceded by a caret (^) (for example, ^C).|This option enters the ASCII value of the key when it's pressed with the **Ctrl** key held down.|
   |Any valid virtual key identifier.|The drop-down Key box in the Accelerator table contains a list of standard virtual key identifiers.|

> [!NOTE]
> When entering an ASCII value, the modifier property options are limited. The only control key available for use is the **Alt** key.

> [!TIP]
> Another way to define an accelerator key is to right-click an entry or multiple entries in the Accelerator table, choose **Next Key Typed** from the shortcut menu, and then press any of the keys or key combinations on the keyboard. The **Next Key Typed** command is also available from the **Edit** menu.

## Type property

The **Type** property determines whether the shortcut key combination associated with the accelerator ID is interpreted as an ASCII/ANSI key value or a virtual key (VIRTKEY) combination.

- If the **Type** property is ASCII, the **Modifier** property may only be `None` or `Alt`, or it can have an accelerator that uses the **Ctrl** key (specified by preceding the key with a `^`).

- If the **Type** property is VIRTKEY, any combination of `Modifier` and `Key` values is valid.

> [!NOTE]
> If you want to enter a value into the accelerator table and have the value be treated as ASCII/ANSI, simply click the **Type** for the entry in the table and select ASCII from the drop down list. However, if you use the **Next Key Typed** command (**Edit** menu) to specify the `Key`, you must change the **Type** property from VIRTKEY to ASCII *before* entering the `Key` code.

## Requirements

Win32

## See also

- [Editing in an Accelerator Table](../windows/editing-in-an-accelerator-table.md)
- [Predefined Accelerator Keys](../windows/predefined-accelerator-keys.md)
- [Resource Editors](../windows/resource-editors.md)
