---
title: "Editing a String in a Version Information Resource | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.version"]
dev_langs: ["C++"]
helpviewer_keywords: ["version information resources", "resources [Visual Studio], editing version information"]
ms.assetid: d3a7d4e4-7d31-47c2-902c-f50b8404ba4f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Editing a String in a Version Information Resource

### To edit a string in a version information resource

1. Click the item once to select it, then again to begin editing it. Make the changes directly in the **Version Information** table or in the [Properties window](/visualstudio/ide/reference/properties-window). The changes you make will be reflected in both places.

     > [!NOTE] 
     > When editing the `FILEFLAGS` key in the **Version Information** editor, you'll notice you cannot set the **Debug**, **Private Build**, or **Special Build** properties (in the **Properties** window) for .rc files:

   - The **Version Information** editor sets the **Debug** property with a `#ifdef` in the resource script, based on the `_DEBUG` build flag.

   - If the `Private Build` key has a **Value** set in the **Version Information** table, the corresponding **Private Build** property (in the **Properties** window) for the `FILEFLAGS` key will be **True**. If the **Value** is empty, the property will be **False**. Likewise, the **Special Build** key (in the **Version Information** table) is tied to the **Special Build** property for the `FILEFLAGS` key.

You can sort the information sequence of the string block by clicking either the Key or the Value column headings. These headings automatically rearrange the information into the selected sequence.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

Win32

## See Also

[Version Information Editor](../windows/version-information-editor.md)  
[Version Information (Windows)](https://msdn.microsoft.com/library/windows/desktop/ms646981.aspx)