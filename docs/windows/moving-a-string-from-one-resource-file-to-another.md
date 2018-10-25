---
title: "Moving a String from One Resource File to Another (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["strings [C++], moving between files", "resource script files [C++], moving strings", "string editing, moving strings between resources", "String editor [C++], moving strings between files"]
ms.assetid: 94f8ee81-9b4c-4788-ba95-68c58db38029
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Moving a String from One Resource File to Another (C++)

### To move a string from one resource script file to another

1. Open the string tables in both .rc files. (For more information, see [Viewing Resources in a Resource Script File Outside of a Project](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).)

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

2. Right-click the string you want to move and choose **Cut** from the shortcut menu.

3. Place the cursor in the target **String Editor** window.

4. In the .rc file to which you want to move the string, right-click and choose **Paste** from the shortcut menu.

   > [!NOTE]
   > If the **ID** or **value** of the moved string conflicts with an existing **ID** or **value** in the destination file, either the **ID** or the **value** of the moved string changes. If a string exists with the same **ID**, the **ID** of the moved string changes. If a string exists with the same **value**, the **value** of the moved string changes.

For information on adding resources to managed projects (those that target the common language runtime), please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](/previous-versions/visualstudio/visual-studio-2010/y99d1cd3).

## Requirements

Win32

## See Also

[String Editor](../windows/string-editor.md)<br/>
[Resource Files](../windows/resource-files-visual-studio.md)<br/>
[Customizing window layouts](/visualstudio/ide/customizing-window-layouts-in-visual-studio)