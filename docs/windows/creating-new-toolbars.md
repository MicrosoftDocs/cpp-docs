---
title: "Creating New Toolbars | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["vc.editors.toolbar"]
dev_langs: ["C++"]
helpviewer_keywords: ["toolbars [C++], creating", "Toolbar editor, creating new toolbars", "Insert Resource"]
ms.assetid: 1b28264b-0718-4df8-9f65-979805d2efef
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "uwp"]
---
# Creating New Toolbars
### To create a new toolbar  
  
1.  In **Resource** view, right-click your .rc file, then choose **Add Resource** from the shortcut menu. (If you have an existing toolbar in your .rc file, you can simply right-click the **Toolbar** folder and select **Insert Toolbar** from the shortcut menu.)  
  
     **Note** If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).  
  
2.  In the **Add Resource** dialog box, select **Toolbar** in the **Resource Type** list, then click **New**.  
  
     If a plus sign (+) appears next to the **Toolbar** resource type, it means that toolbar templates are available. Click the plus sign to expand the list of templates, select a template, and click **New**.  
  
     \- or -  
  
3.  [Convert an existing bitmap to a toolbar](../windows/converting-bitmaps-to-toolbars.md).  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](https://msdn.microsoft.com/library/f45fce5x.aspx) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](https://msdn.microsoft.com/library/xbx3z216.aspx). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](https://msdn.microsoft.com/library/h6270d0z.aspx).  
  
 Requirements  
  
 MFC or ATL  
  
## See Also  
 [Toolbar Editor](../windows/toolbar-editor.md)

