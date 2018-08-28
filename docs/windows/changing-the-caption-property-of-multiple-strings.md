---
title: "Changing the Caption Property of Multiple Strings | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["String editor, changing properties of multiple strings", "strings [C++], changing caption property of multiple", "string editing, string tables", "string tables, changing caption of multiple strings"]
ms.assetid: 82ac4389-fd9c-4794-a18f-c6bf5b253bd7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Changing the Caption Property of Multiple Strings

The following procedure shows you how to change the caption property of multiple strings.

### To change the caption property of multiple strings

1. Open the string table by double-clicking its icon in [Resource View](../windows/resource-view-window.md).

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

2. Select the strings you want to change by holding down the **Ctrl** key as you click each one.

3. In the [Properties Window](/visualstudio/ide/reference/properties-window), type a new value for the property you want to change.

4. Press **Enter**.

For information on adding resources to managed projects (those that target the common language runtime), please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](https://msdn.microsoft.com/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](https://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).

## Requirements

Win32

## See Also

[String Editor](../windows/string-editor.md)  