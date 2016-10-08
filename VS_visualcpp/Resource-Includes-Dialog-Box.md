---
title: "Resource Includes Dialog Box"
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
ms.assetid: 659a54e6-e416-4045-8411-798730ff4ce3
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
# Resource Includes Dialog Box
You can use the **Resource Includes** dialog box to modify the environment's normal working arrangement of storing all resources in the project .rc file and all [symbols](../VS_visualcpp/Symbols--Resource-Identifiers.md) in Resource.h.  
  
 To open the **Resource Includes** dialog box, right-click an .rc file in [Resource View](../VS_visualcpp/Resource-View-Window.md), then choose **Resource Includes** from the shortcut menu.  
  
 **Symbol header file**  
 Allows you to change the name of the header file where the symbol definitions for your resource file are stored. For more information, see [Changing the Names of Symbol Header Files](../VS_visualcpp/Changing-the-Names-of-Symbol-Header-Files.md).  
  
 **Read-only symbol directives**  
 Enables you to include header files that contain symbols that should not be modified during an editing session. For example, you can include a symbol file that is shared among several projects. You can also include MFC .h files. For more information, see [Including Shared (Read-Only) or Calculated Symbols](../VS_visualcpp/Including-Shared--Read-Only--or-Calculated-Symbols.md).  
  
 **Compile-time directives**  
 Allows you to include resource files that are created and edited separately from the resources in your main resource file, contain compile-time directives (such as those that conditionally include resources), or contain resources in a custom format. You can also use the Compile-time directives box to include standard MFC resource files. For more information, see [Including Resources at Compile Time](../VS_visualcpp/How-to--Include-Resources-at-Compile-Time.md).  
  
> [!NOTE]
>  Entries in these text boxes appear in the .rc file marked by `TEXTINCLUDE 1`, `TEXTINCLUDE 2`, and `TEXTINCLUDE 3` respectively. For more information, see [TN035: Using Multiple Resource Files and Header Files with Visual C++](../VS_visualcpp/TN035--Using-Multiple-Resource-Files-and-Header-Files-with-Visual-C--.md).  
  
 Once you have made changes to your resource file using the **Resource Includes** dialog box, you need to close the .rc file and then reopen it for the changes to take effect. For more information, see [Including Resources at Compile Time](../VS_visualcpp/How-to--Include-Resources-at-Compile-Time.md).  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requirements  
 Win32  
  
## See Also  
 [How to: Specify Include Directories for Resources](../VS_visualcpp/How-to--Specify-Include-Directories-for-Resources.md)   
 [Symbols: Resource Identifiers](../VS_visualcpp/Symbols--Resource-Identifiers.md)   
 [Resource Files](../VS_visualcpp/Resource-Files--Visual-Studio-.md)   
 [Resource Editors](../VS_visualcpp/Resource-Editors.md)