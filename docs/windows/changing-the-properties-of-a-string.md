---
title: "Changing the Properties of a String | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["resource identifiers, string properties", "string tables, changing strings", "strings [C++], properties"]
ms.assetid: 0a220434-f444-4405-9a64-d28d6b965687
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Changing the Properties of a String
### To change a string or its identifier  
  
1.  Open the string table by double-clicking its icon in [Resource View](../windows/resource-view-window.md).  
  
    > [!NOTE]
    >  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Select the string you want to edit, and double-click the **ID**, **Value**, or **Caption** column. Now you can:  
  
    -   Select an **ID** from the **ID drop-down** list, or type an `ID` directly in place.  
  
    -   Type a different number in the **Value** column.  
  
    -   Type edits in the **Caption** column.  
  
        > [!NOTE]
        >  You can also edit a string's properties in the [Properties window](/visualstudio/ide/reference/properties-window).  
  
 For information on adding resources to managed projects (those that target the common language runtime), please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
## Requirements  
 Win32  
  
## See Also  
 [String Editor](../windows/string-editor.md)   