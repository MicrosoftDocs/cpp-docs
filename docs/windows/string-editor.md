---
description: "Learn more about: String Editor (C++)"
title: "String Editor (C++)"
ms.date: "02/14/2019"
f1_keywords: ["vc.editors.string.F1", "vc.editors.string"]
helpviewer_keywords: ["String editor", "string tables", "string tables [C++], String editor", "string editing", "string editing, string tables", "resource editors [C++], String editor", "strings [C++], editing", "strings [C++], searching", "strings [C++]", "strings [C++], adding to string tables", "string tables [C++], deleting strings", "strings [C++], deleting in string tables", "string tables [C++], adding strings", "strings [C++], moving between files", "resource script files [C++], moving strings", "string editing, moving strings between resources", "String editor [C++], moving strings between files", "resource identifiers, string properties", "string tables [C++], changing strings", "strings [C++], properties", "String editor [C++], changing properties of multiple strings", "string tables [C++], changing caption of multiple strings", "special characters, adding to strings", "ASCII characters, adding to strings", "strings [C++], formatting", "strings [C++], special characters"]
ms.assetid: f71ab8de-3068-4e29-8e28-5a33d18dd416
---
# String Editor (C++)

A string table is a Windows resource that contains a list of IDs, values, and captions for all the strings of your application. For example, the status-bar prompts are located in the string table.

While developing an application, you can have several string tables — one for each language or condition. However, an executable module has only one string table. A running application can reference several string tables if you put the tables into different DLLs.

String tables make it easy to localize your application into different languages. If all strings are in a string table, you can localize the application by translating the strings (and other resources) without changing source code. This situation is more desirable than manually finding and replacing various strings in source files.

> [!NOTE]
> Windows doesn't allow the creation of empty string tables. If you create a string table with no entries, it is deleted automatically when you save the resource file.

## How To

The **String Editor** enables you:

### To find a string resource in the string table

1. Open the string table by double-clicking its icon in [Resource View](how-to-create-a-resource-script-file.md#create-resources).

1. Go to menu **Edit** > **Find and Replace** and choose **Find**.

1. In the **Find What** box, select a previous search string from the drop-down list, or type the caption text or resource identifier of the string you want to find.

1. Select any of the **Find** options and select **Find Next**.

> [!TIP]
> To use [regular expressions](/visualstudio/ide/using-regular-expressions-in-visual-studio) when searching files, use the **Find in Files** command in the **Edit** menu.
>
> Type a regular expression to match a pattern or select the button to the right of the **Find What** box to display a list of regular search expressions. When you select an expression from this list, it is substituted as the search text in the **Find What** box.
>
> If you use regular expressions, be sure the **Use: Regular Expressions** check box is selected.

### To add or delete a string resource

You can quickly insert or delete entries into the string table using the **String Editor**. New strings are placed at the end of the table and are given the next available identifier. You can edit the **ID**, **Value**, or **Caption** properties in the [Properties window](/visualstudio/ide/reference/properties-window) as needed.

The **String Editor** makes sure you don't use an ID that's already in use. If you select an ID already in use, the **String Editor** will notify you and then assign a generic unique ID, for example `IDS_STRING58113`.

#### To add a string table entry

1. Open the string table by double-clicking its icon in [Resource View](how-to-create-a-resource-script-file.md#create-resources).

1. Right-click within the string table and choose **New String**.

1. In the **String Editor**, select an **ID** from the **ID** drop-down list or type an *ID* directly in place.

1. Edit the **Value**, if necessary.

1. Type an entry for the **Caption**.

   > [!NOTE]
   > Null strings aren't allowed in Windows string tables. If you create an entry in the string table that's a null string, you'll receive a message asking you to **Please enter a string for this table entry**.

#### To delete a string table entry

Select the entry you want to delete and do one of the following:

- Go to menu **Edit** > **Delete**.

- Right-click the string to delete and choose **Delete**.

- Press the **Delete** key.

### To move a string from one resource script file to another

1. [Open the string tables in both .rc files](../windows/how-to-create-a-resource-script-file.md).

1. Right-click the string to move and choose **Cut**.

1. Place the cursor in the target **String Editor** window.

1. In the *.rc* file to which you want to move the string, right-click and choose **Paste**.

> [!NOTE]
> If the **ID** or **Value** of the moved string conflicts with an existing **ID** or **value** in the destination file, either that **ID** or the **Value** of the moved string changes.

### To change the properties of a string resource

You can use in-place editing to change the **ID**, **Value**, and **Caption** properties.

> [!NOTE]
> You can also edit a string's properties in the [Properties window](/visualstudio/ide/reference/properties-window).

#### To change a string or its identifier

1. Open the string table by double-clicking its icon in [Resource View](how-to-create-a-resource-script-file.md#create-resources).

1. Select the string you want to edit and double-click the **ID**, **Value**, or **Caption** column, then you can:

   - Select an **ID** from the **ID** drop-down list, or type an *ID* directly in place.

   - Type a different number in the **Value** column.

   - Type edits in the **Caption** column.

#### To change the caption property of multiple string resources

1. Open the string table by double-clicking its icon in [Resource View](how-to-create-a-resource-script-file.md#create-resources).

1. Select the strings you want to change by holding down the **Ctrl** key as you select each one.

1. In the [Properties Window](/visualstudio/ide/reference/properties-window), type a new value for the property you want to change.

1. Press **Enter**.

### To add formatting or special characters to a string resource

1. Open the string table by double-clicking its icon in [Resource View](how-to-create-a-resource-script-file.md#create-resources).

1. Select the string you want to modify.

1. In the [Properties Window](/visualstudio/ide/reference/properties-window), add any of the standard escape sequences listed below to the text in the **Caption** box and press **Enter**.

   |To get this...|Type this...|
   |-----------------|---------------|
   | New line | \\n |
   | Carriage return | \\r |
   | Tab | \\t |
   | Backslash (\\) | \\\\ |
   | ASCII character | \\ddd (octal notation) |
   | Alert (bell) | \\a |

   > [!NOTE]
   > The **String Editor** doesn't support the full set of escaped ASCI characters. You can only use those listed above.

## Requirements

Win32

## See also

[Resource Editors](../windows/resource-editors.md)
[Strings](/windows/win32/menurc/strings)<br/>
[About Strings](/windows/win32/menurc/about-strings)<br/>
[Customizing window layouts](/visualstudio/ide/customizing-window-layouts-in-visual-studio)
