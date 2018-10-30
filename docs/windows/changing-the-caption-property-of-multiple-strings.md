---
title: "Changing the Caption Property of Multiple String Resources (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["String editor [C++], changing properties of multiple strings", "string tables [C++], changing caption of multiple strings"]
ms.assetid: 82ac4389-fd9c-4794-a18f-c6bf5b253bd7
---
# Changing the Caption Property of Multiple String Resources (C++)

The following procedure shows you how to change the caption property of multiple strings.

### To change the caption property of multiple strings

1. Open the string table by double-clicking its icon in [Resource View](../windows/resource-view-window.md).

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

2. Select the strings you want to change by holding down the **Ctrl** key as you click each one.

3. In the [Properties Window](/visualstudio/ide/reference/properties-window), type a new value for the property you want to change.

4. Press **Enter**.

For information on adding resources to managed projects (those that target the common language runtime), please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](/previous-versions/visualstudio/visual-studio-2010/y99d1cd3).

## Requirements

Win32

## See Also

[String Editor](../windows/string-editor.md)