---
title: "Moving a String from One Resource File to Another"
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
ms.assetid: 94f8ee81-9b4c-4788-ba95-68c58db38029
caps.latest.revision: 11
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
# Moving a String from One Resource File to Another
### To move a string from one resource script file to another  
  
1.  Open the string tables in both .rc files. (For more information, see [Viewing Resources in a Resource Script File Outside of a Project](../VS_visualcpp/How-to--Open-a-Resource-Script-File-Outside-of-a-Project--Standalone-.md).)  
  
    > [!NOTE]
    >  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../VS_visualcpp/How-to--Create-a-Resource-Script-File.md).  
  
2.  Right-click the string you want to move and choose **Cut** from the shortcut menu.  
  
3.  Place the cursor in the target **String Editor** window.  
  
4.  In the .rc file to which you want to move the string, right-click and choose **Paste** from the shortcut menu.  
  
    > [!NOTE]
    >  If the **ID** or **value** of the moved string conflicts with an existing **ID** or **value** in the destination file, either the **ID** or the **value** of the moved string changes. If a string exists with the same **ID**, the **ID** of the moved string changes. If a string exists with the same **value**, the **value** of the moved string changes.  
  
 For information on adding resources to managed projects (those that target the common language runtime), please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](assetId:///9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requirements**  
  
 Win32  
  
## See Also  
 [String Editor](../VS_visualcpp/String-Editor.md)   
 [Resource Files](../VS_visualcpp/Resource-Files--Visual-Studio-.md)   
 [Customizing window layouts](../Topic/Customizing%20window%20layouts%20in%20Visual%20Studio.md)   
 [Strings](_win32_Strings)   
 [About Strings](_win32_About_Strings_cpp)