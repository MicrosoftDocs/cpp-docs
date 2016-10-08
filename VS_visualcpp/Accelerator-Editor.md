---
title: "Accelerator Editor"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 013c30b6-5d61-4f1c-acef-8bd15bed7060
caps.latest.revision: 10
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
# Accelerator Editor
An accelerator table is a Windows resource that contains a list of accelerator keys (also known as shortcut keys) and the command identifiers that are associated with them. A program can have more than one accelerator table.  
  
 Normally, accelerators are used as keyboard shortcuts for program commands that are also available on a menu or toolbar. However, you can use the accelerator table to define key combinations for commands that don't have a user-interface object associated with them.  
  
 You can use [Class View](assetId:///8d7430a9-3e33-454c-a9e1-a85e3d2db925) to hook accelerator key commands to code.  
  
 With the Accelerator editor, you can:  
  
-   [Set Accelerator Properties](../VS_visualcpp/Setting-Accelerator-Properties.md)  
  
-   [Associate an Accelerator Key with a Menu Item](../VS_visualcpp/Associating-an-Accelerator-Key-with-a-Menu-Item.md)  
  
-   [Edit Accelerator Tables](../VS_visualcpp/Editing-Accelerator-Tables.md)  
  
-   [Use Predefined Accelerator Keys](../VS_visualcpp/Predefined-Accelerator-Keys.md)  
  
    > [!TIP]
    >  While using the Accelerator editor, you can right-click to display a shortcut menu of frequently used commands. The commands available depend on what the pointer is pointing to.  
  
    > [!NOTE]
    >  Windows does not allow you to create empty accelerator tables. If you create an accelerator table with no entries, it is deleted automatically when you save the table.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](assetId:///9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requirements  
 Win32  
  
## See Also  
 [Resource Editors](../VS_visualcpp/Resource-Editors.md)