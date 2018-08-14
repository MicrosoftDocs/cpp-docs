---
title: "Creating a 256-Color Icon or Cursor (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["256-color palette", "cursors, color", "colors, icons", "colors, cursors", "icons, color"]
ms.assetid: 2738089b-4fd3-4c45-96ae-6a15e4c6b780
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Creating a 256-Color Icon or Cursor (Image Editor for Icons)
Using the **Image** editor, icons and cursors can be sized large (64 × 64) with a 256-color palette to choose from. After creating the resource, a device image style is selected.  
  
### To create a 256-color icon or cursor  
  
1.  In [Resource View](../windows/resource-view-window.md), right-click your .rc file, then choose **Insert Resource** from the shortcut menu. (If you already have an existing image resource in your .rc file, such as a cursor, you can simply right-click the **Cursor** folder and select **Insert Cursor** from the shortcut menu.)  
  
    > [!NOTE] 
    > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).  
  
2.  In the [Insert Resource dialog box](../windows/add-resource-dialog-box.md), select **Icon** or **Cursor** and click **New**.  
  
3.  On the **Image** menu, click **New Device Image**.  
  
4.  Select the 256-color image style you want.  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).  
  
## Requirements  
 None  
  
## See Also  
 [Using the 256-Color Palette](../windows/using-the-256-color-palette-image-editor-for-icons.md)   
 [Accelerator Keys](../windows/accelerator-keys-image-editor-for-icons.md)   
 [Icons and Cursors: Image Resources for Display Devices](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)