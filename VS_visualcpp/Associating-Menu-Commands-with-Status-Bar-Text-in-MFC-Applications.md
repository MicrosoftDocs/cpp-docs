---
title: "Associating Menu Commands with Status Bar Text in MFC Applications"
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
ms.assetid: 757c0e02-bc97-493f-bccd-6cc6887ebc64
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
# Associating Menu Commands with Status Bar Text in MFC Applications
Your application can display descriptive text for each of the menu commands a user may select. You do this by assigning a text string to each menu command using the **Prompt** property in the Properties window. If you have a string in the [string table](../VS_visualcpp/String-Editor.md) whose ID is the same as the command, an MFC application will automatically display this string resource in the status bar of the running application when a user hovers over a menu item.  
  
### To associate a menu command with a status bar text string  
  
1.  In the **Menu** editor, select the menu command.  
  
2.  In the [Properties Window](../Topic/Properties%20Window.md), type the associated status bar text in the **Prompt** box.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requirements**  
  
 MFC  
  
## See Also  
 [Strings (ATL/MFC)](../VS_visualcpp/Strings--ATL-MFC-.md)   
 [Adding Commands to a Menu](../VS_visualcpp/Adding-Commands-to-a-Menu.md)   
 [Menu Editor](../VS_visualcpp/Menu-Editor.md)