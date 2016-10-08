---
title: "Opening a Resource for Binary Editing"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: d3cdb0e4-da66-410d-8e49-b29073ff2929
caps.latest.revision: 11
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Opening a Resource for Binary Editing
### To open a Windows desktop resource for binary editing  
  
1.  In [Resource View](../VS_visualcpp/Resource-View-Window.md), select the specific resource file you want to edit.  
  
    > [!NOTE]
    >  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../VS_visualcpp/How-to--Create-a-Resource-Script-File.md).  
  
2.  Right-click the resource and click **Open Binary Data** from the shortcut menu.  
  
    > [!NOTE]
    >  If you use the [Resource View](../VS_visualcpp/Resource-View-Window.md) window to open a resource with a format that Visual Studio does not recognize (such as RCDATA or a custom resource), the resource is automatically opened in the Binary editor.  
  
### To open a managed resource for binary editing  
  
1.  In Solution Explorer, select the specific resource file you want to edit.  
  
2.  Right-click the resource and choose **Open With** from the shortcut menu.  
  
3.  In the **Open With** dialog box, choose **Binary Editor**.  
  
    > [!NOTE]
    >  You can use the [Image editor](../VS_visualcpp/Image-Editor-for-Icons.md) and the [Binary editor](../VS_visualcpp/Binary-Editor.md) to work with resource files in managed projects. Any managed resources you want to edit must be linked resources. The Visual Studio resource editors do not support editing embedded resources.  
  
    > [!NOTE]
    >  For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](assetId:///9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 ![Binary Editor](../VS_visualcpp/media/vcBinaryEditor2.gif "vcBinaryEditor2")  
Binary Data for a Dialog Box Displayed in the Binary Editor  
  
 Only certain ASCII values are represented in the Binary editor (0x20 through 0x7E). Extended characters are displayed as periods in the ASCII Value section of the Binary editor (the right panel). The "printable" characters are ASCII values 32 through 126.  
  
> [!NOTE]
>  If you want to use the Binary editor on a resource already being edited in another editor window, close the other editor window first.  
  
 **Requirements**  
  
 None  
  
## See Also  
 [Binary Editor](../VS_visualcpp/Binary-Editor.md)