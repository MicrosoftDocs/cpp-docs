---
title: "Creating New Toolbars (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.toolbar"]
dev_langs: ["C++"]
helpviewer_keywords: ["toolbars [C++], creating", "Toolbar editor [C++], creating new toolbars", "Insert Resource"]
ms.assetid: 1b28264b-0718-4df8-9f65-979805d2efef
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Creating New Toolbars (C++)

### To create a new toolbar

1. In **Resource** view, right-click your .rc file, then choose **Add Resource** from the shortcut menu. (If you have an existing toolbar in your .rc file, you can simply right-click the **Toolbar** folder and select **Insert Toolbar** from the shortcut menu.)

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

2. In the **Add Resource** dialog box, select **Toolbar** in the **Resource Type** list, then click **New**.

   If a plus sign (**+**) appears next to the **Toolbar** resource type, it means that toolbar templates are available. Click the plus sign to expand the list of templates, select a template, and click **New**.

   \- or -

3. [Convert an existing bitmap to a toolbar](../windows/converting-bitmaps-to-toolbars.md).

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

MFC or ATL

## See Also

[Toolbar Editor](../windows/toolbar-editor.md)