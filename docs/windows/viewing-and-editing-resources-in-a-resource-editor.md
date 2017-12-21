---
title: "Viewing and Editing Resources in a Resource Editor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["vs.resourceview"]
dev_langs: ["C++"]
helpviewer_keywords: ["resources [Visual Studio], viewing", "rc files, viewing resources", "Resource View pane", "layouts, previewing resource", "code, viewing resources", "resource editors, viewing resources", ".rc files, viewing resources", "resources [Visual Studio], editing"]
ms.assetid: ba8bdc07-3f60-43c7-aa5c-d5dd11f0966e
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "uwp"]
---
# Viewing and Editing Resources in a Resource Editor
Each resource type has a Resource editor specific to that resource type. You can rearrange, resize, add controls and features, or otherwise modify aspects of a resource using the associated editor. You can also edit a resource in [text format](../windows/how-to-open-a-resource-script-file-in-text-format.md) and [binary format](../windows/opening-a-resource-for-binary-editing.md).  
  
 Some resource types are individual files that can be imported and used in various ways; these include bitmaps, icons, cursors, toolbars, and html files. Such resources have file names as well as [resource identifiers](../windows/symbols-resource-identifiers.md). Others, such as dialogs, menus, and string tables in Win32 projects, exist only as part of a resource script (.rc) file or resource template (.rct) file.  
  
> [!NOTE]
>  Properties of a resource [can be modified using the Properties window](../windows/changing-the-properties-of-a-resource.md).  
  
## Win32 Resources  
 You can access Win32 resources in the [Resource View](../windows/resource-view-window.md) pane.  
  
#### To view a Win32 resource in a resource editor  
  
1.  Select **Resource View** from the **View** menu.  
  
2.  If the Resource View window is not the top-most window, click the **Resource View** tab to bring it to the top.  
  
3.  From Resource View, expand the folder for the project that contains resources you want to view. For example, if you want to view a dialog resource, expand the Dialog folder.  
  
    > [!NOTE]
    >  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).  
  
4.  Double-click the resource, for example, IDD_ABOUTBOX.  
  
     The resource opens in the appropriate editor. For example, for dialog resources, the resource opens inside the Dialog editor.  
  
     You can also [view resources in an .rc (resource script) file without having a project open](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).  
  
#### To delete an existing Win 32 resource  
  
1.  In Resource View, expand the node for a resource type.  
  
2.  Right-click on the resource you want to delete and choose **Delete** from the shortcut menu.  
  
    > [!NOTE]
    >  You can delete a resource using the same shortcut menu command when you have the .rc file open in a document window outside a project.  
  
## Resources in Managed Projects  
 Because managed projects do not use resource script files, you must open your resources from **Solution Explorer**. You can use the [Image editor](../windows/image-editor-for-icons.md) and the [Binary editor](binary-editor.md) to work with resource files in managed projects. Any managed resources you want to edit must be linked resources. The Visual Studio resource editors do not support editing embedded resources.  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).  
  
#### To view a managed resource in a resource editor  
  
1.  In Solution Explorer, double-click the resource, for example, Bitmap1.bmp.  
  
     The resource opens in the appropriate editor.  
  
#### To delete an existing managed resource  
  
1.  In Solution Explorer, right-click the resource you want to delete and choose **Delete** from the shortcut menu.  
  
### Requirements  
 None  
  
## See Also  
 [Resource Editors](../windows/resource-editors.md)

