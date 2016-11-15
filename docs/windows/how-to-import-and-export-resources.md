---
title: "How to: Import and Export Resources | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.resvw.resource.importing"
  - "vc.resvw.resource.importing"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "resources [Visual Studio], exporting"
  - "graphics [C++], exporting"
  - "graphics [C++], importing"
  - "resources [Visual Studio], importing"
  - "bitmaps [C++], importing and exporting"
  - "toolbars [C++], importing"
  - "images [C++], importing"
  - "toolbars [C++], exporting"
  - "cursors [C++], importing and exporting"
  - "images [C++], exporting"
ms.assetid: 3c9329dc-dcb8-4edd-a600-78e3e572bd89
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# How to: Import and Export Resources
You can import graphical resources (bitmaps, icons, cursors, and toolbars), HTML files, and custom resources for use in Visual C++. You can export the same types of files from a Visual C++ project to separate files that can be used outside the development environment.  
  
> [!NOTE]
>  Resource types such as accelerators, dialog boxes, and string tables cannot be imported or exported because they are not stand-alone file types.  
  
### To import an individual resource into your current resource file  
  
1.  In [Resource View](../windows/resource-view-window.md), right-click the node for the resource script (*.rc) file to which you want to add a resource.  
  
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
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/Library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 Requirements  
  
 Win32  
  
## See Also  
 [Resource Files](../mfc/resource-files-visual-studio.md)   
 [Resource Editors](../mfc/resource-editors.md)