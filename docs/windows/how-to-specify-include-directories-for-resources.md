---
title: "How to: Specify Include Directories for Resources | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["directories [C++], specifying include paths for resources", "include files, specifying for resources", "resources [Visual Studio], including in projects"]
ms.assetid: d6a7c0f6-4810-4bb0-b4b7-7d2476a20ca2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# How to: Specify Include Directories for Resources

### To specify include directories for a specific .rc file

1. Right-click the .rc file in Solution Explorer and select **Properties** from the shortcut menu.

2. In the **Property Pages** dialog box, click the **Resources** node in the left pane, then specify the additional include directories in the **Additional include directories** property.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the .NET Framework Developer's Guide. 

## Requirements

Win32

## See Also

[Resource Includes Dialog Box](../windows/resource-includes-dialog-box.md)  
[TN035: Using Multiple Resource Files and Header Files with Visual C++](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md)  
[Symbols: Resource Identifiers](../windows/symbols-resource-identifiers.md)  
[Resource Files](../windows/resource-files-visual-studio.md)  
[Resource Editors](../windows/resource-editors.md)