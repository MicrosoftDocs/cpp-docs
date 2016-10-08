---
title: "Changing the Names of Symbol Header Files"
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
ms.assetid: b948284a-7899-402e-ab12-9f2c8480ca9d
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
# Changing the Names of Symbol Header Files
Normally all symbol definitions are saved in Resource.h. However, you may need to change this include filename so that you can, for example, work with more than one resource file in the same directory.  
  
### To change the name of the resource symbol header file  
  
1.  In [Resource View](../VS_visualcpp/Resource-View-Window.md), right-click your .rc file and choose [Resource Includes](../VS_visualcpp/Resource-Includes-Dialog-Box.md) from the shortcut menu.  
  
    > [!NOTE]
    >  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../VS_visualcpp/How-to--Create-a-Resource-Script-File.md).  
  
2.  In the **Symbol header file** box, type the new name for the include file.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.*  
  
 Requirements  
  
 Win32  
  
## See Also  
 [Viewing Resource Symbols](../VS_visualcpp/Viewing-Resource-Symbols.md)   
 [Predefined Symbol IDs](../VS_visualcpp/Predefined-Symbol-IDs.md)