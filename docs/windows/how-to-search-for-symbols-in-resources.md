---
title: "How to: Search for Symbols in Resources | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["symbols, finding", "resources [Visual Studio], searching for symbols"]
ms.assetid: 6efef8e8-d0d4-4c49-b895-314974e7791a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# How to: Search for Symbols in Resources

### To find symbols in resources

1. From the **Edit** menu, choose **Find Symbol**.

2. In the [Find Symbol dialog box](/visualstudio/ide/go-to), in the **Find What** box, select a previous search string from the drop-down list or type the accelerator key you want to find (for example, ID_ACCEL1).

   > [!TIP]
   > To use [regular expressions](/visualstudio/ide/using-regular-expressions-in-visual-studio) for your search, you must use the [Find in Files command](/visualstudio/ide/reference/find-command) from the **Edit** menu instead of the **Find Symbol** command. To enable regular expressions, you must have the **Use: Regular Expressions** check box selected in the [Find dialog box](/visualstudio/ide/finding-and-replacing-text). Then you can click the right-arrow button to the right of the **Find What** box to display a list of regular search expressions. When you select an expression from this list, it is substituted as the search text in the **Find What** box.

3. Select any of the **Find** options.

4. Click **Find Next**.

   > [!NOTE]
   > You cannot search for symbols in string, accelerator, or binary resources.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties,.

## Requirements

Win32

## See Also

[Symbols: Resource Identifiers](../windows/symbols-resource-identifiers.md)  
[Resource Files](../windows/resource-files-visual-studio.md)  
[Resource Editors](../windows/resource-editors.md)