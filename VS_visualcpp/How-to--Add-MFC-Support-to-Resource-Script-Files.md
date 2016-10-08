---
title: "How to: Add MFC Support to Resource Script Files"
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
ms.assetid: 599dfe9d-ad26-4e34-899c-49b56599e37f
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
# How to: Add MFC Support to Resource Script Files
Normally, when you build an MFC application for Windows using the [MFC Application Wizard](../VS_visualcpp/MFC-Application-Wizard.md), the wizard generates a basic set of files (including a resource script (.rc) file) that contains the core features of the Microsoft Foundation classes (MFC). However, if you are editing an .rc file for a Windows application that is not based on MFC, the following features specific to the MFC framework are not available:  
  
-   MFC code wizards (previously called "[MFC ClassWizard](assetId:///98dc2434-ba93-4e0b-b084-1a4bc26cdf1e)")  
  
-   Menu prompt strings  
  
-   List contents for combo box controls  
  
-   ActiveX control hosting  
  
 However, you can add MFC support to existing .rc files that do not have it.  
  
### To add MFC support to .rc files  
  
1.  Open the resource script file.  
  
    > [!NOTE]
    >  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../VS_visualcpp/How-to--Create-a-Resource-Script-File.md).  
  
2.  In [Resource View](../VS_visualcpp/Resource-View-Window.md), highlight the resources folder (for example, MFC.rc).  
  
3.  In the [Properties window](../Topic/Properties%20Window.md), set the **MFC Mode** property to **True**.  
  
    > [!NOTE]
    >  In addition to setting this flag, the .rc file must be part of an MFC project. For example, just setting **MFC Mode** to **True** on an .rc file in a Win32 project won't give you any of the MFC features.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requirements**  
  
 MFC  
  
## See Also  
 [Resource Files](../VS_visualcpp/Resource-Files--Visual-Studio-.md)   
 [Resource Editors](../VS_visualcpp/Resource-Editors.md)