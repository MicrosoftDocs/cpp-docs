---
title: "Adding Formatting or Special Characters to a String Resource (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["special characters, adding to strings", "ASCII characters, adding to strings", "strings [C++], formatting", "strings [C++], special characters"]
ms.assetid: c40f394a-8b2c-4896-ab30-6922863ddbb5
---
# Adding Formatting or Special Characters to a String Resource (C++)

### To add formatting or special characters to a string

1. Open the string table by double-clicking its icon in [Resource View](../windows/resource-view-window.md).

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

2. Select the string you want to modify.

3. In the [Properties Window](/visualstudio/ide/reference/properties-window), add any of the standard escape sequences listed below to the text in the **Caption** box, and press **Enter**.

   |To get this|Type this|
   |-----------------|---------------|
   |New line|\n|
   |Carriage return|\r|
   |Tab|\t|
   |Backslash (\\)|\\\|
   |ASCII character|\ddd (octal notation)|
   |Alert (bell)|\a|

> [!NOTE]
> The **String** editor does not support the full set of escaped ASCI characters. You can only use those listed above.

For information on adding resources to managed projects (those that target the common language runtime), please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](/previous-versions/visualstudio/visual-studio-2010/y99d1cd3).

## Requirements

Win32

## See Also

[String Editor](../windows/string-editor.md)