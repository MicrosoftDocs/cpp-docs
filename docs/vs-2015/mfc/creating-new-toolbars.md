---
title: "Creating New Toolbars | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.toolbar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "toolbars [C++], creating"
  - "Toolbar editor, creating new toolbars"
  - "Insert Resource"
ms.assetid: 1b28264b-0718-4df8-9f65-979805d2efef
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creating New Toolbars
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Creating New Toolbars](https://docs.microsoft.com/cpp/windows/creating-new-toolbars).  
  
  
To create a new toolbar  
  
1.  In **Resource** view, right-click your .rc file, then choose **Add Resource** from the shortcut menu. (If you have an existing toolbar in your .rc file, you can simply right-click the **Toolbar** folder and select **Insert Toolbar** from the shortcut menu.)  
  
     **Note** If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).  
  
2.  In the **Add Resource** dialog box, select **Toolbar** in the **Resource Type** list, then click **New**.  
  
     If a plus sign (+) appears next to the **Toolbar** resource type, it means that toolbar templates are available. Click the plus sign to expand the list of templates, select a template, and click **New**.  
  
     \- or -  
  
3.  [Convert an existing bitmap to a toolbar](../mfc/converting-bitmaps-to-toolbars.md).  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requirements  
  
 MFC or ATL  
  
## See Also  
 [Toolbar Editor](../mfc/toolbar-editor.md)









