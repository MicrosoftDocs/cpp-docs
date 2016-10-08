---
title: "Creating a New Toolbar Button"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 46c120fe-4f2a-4887-a08f-bd1fea04b3f4
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Creating a New Toolbar Button
### To create a new toolbar button  
  
1.  In [Resource view](../VS_visualcpp/Resource-View-Window.md) expand the resource folder (for example, Project1.rc).  
  
    > [!NOTE]
    >  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../VS_visualcpp/How-to--Create-a-Resource-Script-File.md).  
  
2.  Expand the **Toolbar** folder and select a toolbar to edit.  
  
3.  Assign an ID to the blank button at the right end of the toolbar. You can do so by editing the **ID** property in the [Properties Window](../Topic/Properties%20Window.md). For example, you may want to give a toolbar button the same ID as a menu option. In this case, use the drop-down list box to select the **ID** of the menu option.  
  
     –or–  
  
     Select the blank button at the right end of the toolbar (in the Toolbar View pane) and begin drawing. A default button command ID is assigned (ID_BUTTON<n\>).  
  
 You can also copy and paste an image onto a toolbar as a new button.  
  
#### To add an image to a toolbar as a button  
  
1.  In [Resource View](../VS_visualcpp/Resource-View-Window.md), open the toolbar by double-clicking it.  
  
2.  Next, open the image you'd like to add to your toolbar.  
  
    > [!NOTE]
    >  If you open the image in Visual Studio, it will open in the Image editor. You can also open the image in other graphics programs.  
  
3.  From the **Edit** menu, choose **Copy**.  
  
4.  Switch to your toolbar by clicking its tab at the top of the source window.  
  
5.  From the **Edit** menu, choose **Paste**.  
  
     The image will appear on your toolbar as a new button.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](assetId:///9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
### Requirements  
 MFC or ATL  
  
## See Also  
 [Toolbar Button Properties](../VS_visualcpp/Toolbar-Button-Properties.md)   
 [Creating, Moving, and Editing Toolbar Buttons](../VS_visualcpp/Creating--Moving--and-Editing-Toolbar-Buttons.md)   
 [Toolbar Editor](../VS_visualcpp/Toolbar-Editor.md)