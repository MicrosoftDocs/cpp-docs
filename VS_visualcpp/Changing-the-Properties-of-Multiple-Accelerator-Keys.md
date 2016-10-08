---
title: "Changing the Properties of Multiple Accelerator Keys"
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
ms.assetid: b55c9bd6-b430-48bb-b942-0e6f21d7abf9
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
# Changing the Properties of Multiple Accelerator Keys
### To change the properties of multiple accelerator keys  
  
1.  Open the accelerator table by double-clicking its icon in [Resource View](../VS_visualcpp/Resource-View-Window.md).  
  
    > [!NOTE]
    >  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../VS_visualcpp/How-to--Create-a-Resource-Script-File.md).  
  
2.  Select the accelerator keys you want to change by holding down the **CTRL** key as you click each one.  
  
3.  Go to the [Properties window](../Topic/Properties%20Window.md) and type in the values you want all of the selected accelerators to share.  
  
    > [!NOTE]
    >  Each modifier value appears as a Boolean property in the Properties window. If you change a [Modifier](../VS_visualcpp/Accelerator-Modifier-Property.md) value in the Properties window, the accelerator table treats the new modifier as an addition to any modifiers that were previously there. Because of this, if you set any modifier values, you will need to set all of them to ensure that every accelerator shares the same Modifier settings.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](assetId:///9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requirements**  
  
 Win32  
  
## See Also  
 [Editing Accelerator Tables](../VS_visualcpp/Editing-Accelerator-Tables.md)   
 [Accelerator Editor](../VS_visualcpp/Accelerator-Editor.md)