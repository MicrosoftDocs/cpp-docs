---
title: "Binary Editor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.binary.F1"]
dev_langs: ["C++"]
helpviewer_keywords: ["editors, Binary", "resources [Visual Studio], editing", "resource editors, Binary editor", "Binary editor"]
ms.assetid: 2483c48b-1252-4dbc-826b-82e6c1a0e9cb
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Binary Editor
> [!WARNING]
>  The **Binary Editor** is not available in Express editions.  
  
 The Binary editor allows you to edit any resource at the binary level in either hexadecimal or ASCII format. You can also use the [Find command](/visualstudio/ide/reference/find-command) to search for either ASCII strings or hexadecimal bytes. You should use the **Binary** editor only when you need to view or make minor changes to custom resources or resource types not supported by the Visual Studio environment.  
  
 To open the **Binary Editor**, first choose **File** > **New** > **File** from the main menu, select the file you want to edit, then click on the drop arrow next to the **Open** button, and choose **Open With** > **Binary Editor**.  
  
> [!CAUTION]
>  Editing resources such as dialog boxes, images, or menus in the Binary editor is dangerous. Incorrect editing could corrupt the resource, making it unreadable in its native editor.  
  
> [!TIP]
>  While using the **Binary** editor, in many instances, you can right-click to display a shortcut menu of resource-specific commands. The commands available depend on what your cursor is pointing to. For example, if you click while pointing to the **Binary** editor with selected hexadecimal values, the shortcut menu shows the **Cut**, **Copy**, and **Paste** commands.  
  
 With the **Binary** editor, you can:  
  
-   [Open a resource for binary editing](../windows/opening-a-resource-for-binary-editing.md)  
  
-   [Edit binary data](../windows/editing-binary-data.md)  
  
-   [Find binary data](../windows/finding-binary-data.md)  
  
-   [Create a new custom or data resource](../windows/creating-a-new-custom-or-data-resource.md)  
  
## Managed Resources  
 You can use the [Image editor](../windows/image-editor-for-icons.md) and the **Binary** editor to work with resource files in managed projects. Any managed resources you want to edit must be linked resources. The Visual Studio resource editors do not support editing embedded resources.  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).  
  
## Requirements  
 None  
  
## See Also  
 [Resource Editors](../windows/resource-editors.md)