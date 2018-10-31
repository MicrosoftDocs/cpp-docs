---
title: "Adding or Deleting a String Resource (C++)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.string"]
helpviewer_keywords: ["strings [C++], adding to string tables", "string tables [C++], deleting strings", "strings [C++], deleting in string tables", "string tables [C++], adding strings"]
ms.assetid: 077077b4-0f4b-4633-92d6-60b321164cab
---
# Adding or Deleting a String Resource (C++)

You can quickly insert new entries into the string table using the **String** editor. New strings are placed at the end of the table and are given the next available identifier. You can then edit the **ID**, **Value**, or **Caption** properties in the [Properties window](/visualstudio/ide/reference/properties-window) as needed.

The **String** editor makes sure you do not use an ID that's already in use. If you select an ID already in use, the **String** editor will notify you and then assign a generic unique ID, for example `IDS_STRING58113`.

### To add a string table entry

1. Open the string table by double-clicking its icon in [Resource View](../windows/resource-view-window.md).

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

2. Right-click within the string table and choose **New String** from the shortcut menu.

3. In the **String** editor, select an **ID** from the ID drop-down list or type an ID directly in place.

4. Edit the **Value**, if necessary.

5. Type an entry for the **Caption**.

   > [!NOTE]
   > Null strings are not allowed in Windows string tables. If you create an entry in the string table that is a null string, you will receive a message asking you to "Please enter a string for this table entry."

### To delete a string table entry

1. Select the entry you want to delete.

2. On the **Edit** menu, click **Delete**.

\- or -

- Right-click the string you want to delete and choose **Delete** from the shortcut menu.

\- or -

- Press the **Delete** key.

For information on adding resources to managed projects (those that target the common language runtime), please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](/previous-versions/visualstudio/visual-studio-2010/y99d1cd3).

## Requirements

Win32

## See Also

[String Editor](../windows/string-editor.md)