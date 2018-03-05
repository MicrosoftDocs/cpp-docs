---
title: "Converting Bitmaps to Toolbars | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["bitmaps [C++], converting to toolbars", "Toolbar editor, converting bitmaps", "toolbars [C++], converting bitmaps"]
ms.assetid: 971c181b-40f5-44be-843d-677a7c235667
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "uwp"]
---
# Converting Bitmaps to Toolbars
You can create a new toolbar by converting a bitmap. The graphic from the bitmap converts to the button images for a toolbar. Usually the bitmap contains several button images on a single bitmap, with one image for each button. Images can be any size; the default is 16 pixels wide and the height of the image. You can specify the size of the button images in the [New Toolbar Resource dialog box](../windows/new-toolbar-resource-dialog-box.md) when you choose Toolbar Editor from the **Image** menu while in the Image editor.  
  
### To convert bitmaps to a toolbar  
  
1.  Open an existing bitmap resource in the [Image editor](../windows/image-editor-for-icons.md). (If the bitmap is not already in your .rc file, right-click the .rc file, choose **Import** from the shortcut menu, navigate to the bitmap you want to add to your .rc file, then click **Open**.)  
  
2.  From the **Image** menu, choose **Toolbar Editor**.  
  
     The [New Toolbar Resource dialog box](../windows/new-toolbar-resource-dialog-box.md) appears. You can change the width and height of the icon images to match the bitmap. The toolbar image is then displayed in the Toolbar editor.  
  
3.  To finish the conversion, change the command **ID** of the button using the [Properties window](/visualstudio/ide/reference/properties-window). Type the new **ID** or select an **ID** from the drop-down list.  
  
    > [!TIP]
    >  The Properties window contains a pushpin button in the title bar. Clicking this button enables or disables Auto Hide for the window. To quickly cycle through all the toolbar button properties without having to reopen the individual property windows, turn Auto Hide off so the Properties window stays stationary.  
  
 You can also change the command IDs of the buttons on the new toolbar by using the [Properties window](/visualstudio/ide/reference/properties-window). For information on editing the new toolbar, see [Creating, Moving, and Editing Toolbar Buttons](../windows/creating-moving-and-editing-toolbar-buttons.md).  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).  
  
 Requirements  
  
 MFC or ATL  
  
## See Also  
 [Creating New Toolbars](../windows/creating-new-toolbars.md)   
 [Toolbar Editor](../windows/toolbar-editor.md)

