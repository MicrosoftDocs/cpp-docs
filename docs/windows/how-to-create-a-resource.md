---
title: "How to: Create a Resource (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["[""toolbars [C++], resources"", ""resource toolbars"", ""resources [C++], creating""]"]
ms.assetid: aad44914-9145-45a3-a7d8-9de89b366716
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# How to: Create a Resource

> [!NOTE]
> **Resource View** is not supported in Express editions.

### To create a new resource in Resource View

1. With focus on your .rc file in [Resource View](../windows/resource-view-window.md), click the **Edit** menu and choose **Add Resource** (or right-click the .rc file in **Resource View** and choose **Add Resource** from the shortcut menu).

   > [!NOTE] 
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

2. In the [Add Resource dialog box](../windows/add-resource-dialog-box.md), choose the type of resource you'd like to add to your project.

### To create a new resource in Solution Explorer

1. In **Solution Explorer**, right-click the project folder and choose **Add**, then click **Add Resource** on the shortcut menu.

   If you do not already have an .rc file in your project, this step will create one. You can then repeat this step to add specific resource types to the new .rc file.

2. In the [Add Resource dialog box](../windows/add-resource-dialog-box.md), choose the type of resource you'd like to add to your project.

### To create a new resource in Class View

1. In [Class View](/visualstudio/ide/viewing-the-structure-of-code), right-click your class and choose **Add**, then click **Add Resource** from the shortcut menu.

2. In the [Add Resource dialog box](../windows/add-resource-dialog-box.md), choose the type of resource you'd like to add to your project.

### To create a new resource from the Project menu

1. From the **Project** menu, choose **Add Resource**.

When you create a new resource, Visual C++ assigns a unique name to it, for example, `IDD_Dialog1`. You can customize this resource ID by editing the properties for the resource either in the associated resource editor or in the [Properties Window](/visualstudio/ide/reference/properties-window).

You can create a resource as a new default resource (a resource that is not based on a template) or as a resource patterned after a [template](../windows/how-to-use-resource-templates.md).

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*.

## Requirements

Win32

## See Also

[Resource Files](../windows/resource-files-visual-studio.md)  
[Resource Editors](../windows/resource-editors.md)  
[Add Resource Dialog Box](../windows/add-resource-dialog-box.md)