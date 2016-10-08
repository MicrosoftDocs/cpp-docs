---
title: "Adding Formatting or Special Characters to a String"
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
ms.assetid: c40f394a-8b2c-4896-ab30-6922863ddbb5
caps.latest.revision: 10
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
# Adding Formatting or Special Characters to a String
### To add formatting or special characters to a string  
  
1.  Open the string table by double-clicking its icon in [Resource View](../VS_visualcpp/Resource-View-Window.md).  
  
    > [!NOTE]
    >  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../VS_visualcpp/How-to--Create-a-Resource-Script-File.md).  
  
2.  Select the string you want to modify.  
  
3.  In the [Properties Window](../Topic/Properties%20Window.md), add any of the standard escape sequences listed below to the text in the **Caption** box, and press **ENTER**.  
  
    |To get this|Type this|  
    |-----------------|---------------|  
    |New line|\n|  
    |Carriage return|\r|  
    |Tab|\t|  
    |Backslash (\\)|\\\|  
    |ASCII character|\ddd (octal notation)|  
    |Alert (bell)|\a|  
  
> [!NOTE]
>  The String editor does not support the full set of escaped ASCI characters. You can only use those listed above.  
  
 For information on adding resources to managed projects (those that target the common language runtime), please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](assetId:///9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requirements**  
  
 Win32  
  
## See Also  
 [String Editor](../VS_visualcpp/String-Editor.md)   
 [Strings](_win32_Strings)   
 [About Strings](_win32_About_Strings_cpp)