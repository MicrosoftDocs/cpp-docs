---
title: "How to: Import and Export Resources"
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
ms.assetid: 3c9329dc-dcb8-4edd-a600-78e3e572bd89
caps.latest.revision: 7
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
# How to: Import and Export Resources
You can import graphical resources (bitmaps, icons, cursors, and toolbars), HTML files, and custom resources for use in Visual C++. You can export the same types of files from a Visual C++ project to separate files that can be used outside the development environment.  
  
> [!NOTE]
>  Resource types such as accelerators, dialog boxes, and string tables cannot be imported or exported because they are not stand-alone file types.  
  
### To import an individual resource into your current resource file  
  
1.  In [Resource View](../VS_visualcpp/Resource-View-Window.md), right-click the node for the resource script (*.rc) file to which you want to add a resource.  
  
2.  Click **Import** on the shortcut menu.  
  
3.  Locate and select the file name of the bitmap (.bmp), icon (.ico), cursor (.cur), Html file (.htm), or other file that you want to import.  
  
4.  Click **OK** to add the resource to the selected file in **Resource** view.  
  
    > [!NOTE]
    >  The import process works the same way no matter which particular resource type you have selected. The imported resource is automatically added to the correct node for that resource type.  
  
### To export a bitmap, icon, or cursor as a separate file (for use outside of Visual C++)  
  
1.  In **Resource** view, right-click the resource you want to export.  
  
2.  Click **Export** on the shortcut menu.  
  
3.  In the **Export Resource** dialog box, accept the current file name or type a new one.  
  
4.  Navigate to the folder where you want to save the file and click **Export**.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requirements  
  
 Win32  
  
## See Also  
 [Resource Files](../VS_visualcpp/Resource-Files--Visual-Studio-.md)   
 [Resource Editors](../VS_visualcpp/Resource-Editors.md)