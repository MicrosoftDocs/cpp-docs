---
title: "Creating an Icon or Other Image (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.bitmap"]
dev_langs: ["C++"]
helpviewer_keywords: ["bitmaps [C++]", "images [C++], creating", "resource toolbars", "resources [Visual Studio], creating images", "bitmaps [C++], creating", "graphics [C++], creating", "Image editor [C++], creating images"]
ms.assetid: 66db3fb2-cfc1-48a2-9bdd-53f61eb7ee30
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Creating an Icon or Other Image (Image Editor for Icons)
You can create a new image (bitmap, icon, cursor, or toolbar), then use the Image editor to customize its appearance. You can also create a new bitmap patterned after a [template](../windows/how-to-use-resource-templates.md).  
  
### To add a new image resource to an unmanaged C++ project  
  
1.  In [Resource View](../windows/resource-view-window.md), right-click your .rc file, then choose **Insert Resource** from the shortcut menu. (If you already have an existing image resource in your .rc file, such as a cursor, you can simply right-click the **Cursor** folder and select **Insert Cursor** from the shortcut menu.)  
  
    > [!NOTE]
    > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).  
  
2.  In the [Insert Resource dialog box](../windows/add-resource-dialog-box.md), select the type of image resource you'd like to create (**Bitmap**, for example) then click **New**.  
  
     If a plus sign (**+**) appears next to the image resource type in the **Insert Resource** dialog box, it means that toolbar templates are available. Click the plus sign to expand the list of templates, select a template, and click **New**.  
  
### To add a new image resource to a project in a .NET programming language  
  
1.  In **Solution Explorer**, right-click the project folder (for example, `WindowsApplication1`).  
  
2.  From the shortcut menu, click **Add**, then choose **Add New Item**.  
  
3.  In the **Categories** pane, expand the **Local Project Items** folder, then choose **Resources**.  
  
4.  In the **Templates** pane, choose the resource type you'd like to add to your project.  
  
     The resource is added to your project in **Solution Explorer** and the resource opens in the [Image editor](../windows/image-editor-for-icons.md). You can now use all the tools available in the Image editor to modify your image. For more information on adding images to a managed project, see [Loading a Picture at Design Time](/dotnet/framework/winforms/controls/how-to-load-a-picture-using-the-designer-windows-forms).  
  
    > [!NOTE]
    >  Any managed resources you want to edit must be linked resources. The Visual Studio resource editors do not support editing embedded resources. For more information, see [Creating Resource Files](/dotnet/framework/resources/creating-resource-files-for-desktop-apps) in the *.NET Framework Developer's Guide*.  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).  
  
## Requirements  
 None  
  
## See Also  
 [Icons and Cursors: Image Resources for Display Devices](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)   
 [Converting Bitmaps to Toolbars](../windows/converting-bitmaps-to-toolbars.md)   
 [Creating New Toolbars](../windows/creating-new-toolbars.md)   
 [Editing Graphical Resources](../windows/editing-graphical-resources-image-editor-for-icons.md)   
 [Image Editor for Icons](../windows/image-editor-for-icons.md)