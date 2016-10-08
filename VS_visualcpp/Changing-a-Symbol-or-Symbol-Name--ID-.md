---
title: "Changing a Symbol or Symbol Name (ID)"
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
ms.assetid: 26541832-8dba-4177-b642-e08f94502ea7
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
# Changing a Symbol or Symbol Name (ID)
When you create a new resource or resource object, the development environment assigns it a default symbol name, for example, IDD_DIALOG1. You can use the [Properties Window](../Topic/Properties%20Window.md) to change the default symbol name or to change the name of any symbol already associated with a resource.  
  
### To change a resource's symbol name  
  
1.  In [Resource View](../VS_visualcpp/Resource-View-Window.md), select the resource.  
  
    > [!NOTE]
    >  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../VS_visualcpp/How-to--Create-a-Resource-Script-File.md).  
  
2.  In the **Properties** window, type a new symbol name or select from the list of existing symbols in the **ID** box.  
  
     If you type a new symbol name, it is automatically assigned a value.  
  
 You can use the [Resource Symbols dialog box](../VS_visualcpp/Resource-Symbols-Dialog-Box.md) to change the names of symbols not currently assigned to a resource. For more information, see [Changing Unassigned Symbols](../VS_visualcpp/Changing-Unassigned-Symbols.md).  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requirements  
  
 Win32  
  
## See Also  
 [Symbol Name Restrictions](../VS_visualcpp/Symbol-Name-Restrictions.md)   
 [Predefined Symbol IDs](../VS_visualcpp/Predefined-Symbol-IDs.md)