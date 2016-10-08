---
title: "Win32 Application Wizard"
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
ms.assetid: 5d7b3a5e-8461-479a-969a-67b7883725b9
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
# Win32 Application Wizard
The Visual C++ Win32 Application Wizard allows you to create any of four types of projects (listed in the heading in the table below). In each case, you can specify additional options that are appropriate for the type of project you open. The following table indicates which options are available for each application type.  
  
|Type of support|Console application|Executable (Windows) application|Dynamic-link library|Static library|  
|---------------------|-------------------------|----------------------------------------|---------------------------|--------------------|  
|**Empty project**|Yes|Yes|Yes|No|  
|**Export symbols**|No|No|Yes|No|  
|**Precompiled header**|No|No|No|Yes|  
|**ATL support**|Yes|No|No|No|  
|**MFC support**|Yes|No|No|Yes|  
  
## Overview  
 This wizard page describes the current project settings for the Win32 application you are creating. By default, the following options are set:  
  
-   The project is a Windows application.  
  
-   The project is not empty.  
  
-   The project contains no export symbols.  
  
-   The project does not use a precompiled header file (this option is available for static library projects only).  
  
-   The project includes support for neither MFC nor ATL.  
  
 To change these defaults, click the [Application Settings](../VS_visualcpp/Application-Settings--Win-32-Project-Wizard.md) tab in the left column of the wizard and make the desired changes.  
  
 Once you have created a Windows desktop application, you can add generic C++ classes using the [Generic](../VS_visualcpp/Generic-C---Class-Wizard.md) Code Wizard. You can add other items, such as HTML files, header files, resources, or text files.  
  
> [!NOTE]
>  You cannot add ATL classes, and you can add MFC classes only to those Windows desktop application types that support MFC (see the previous table).  
  
 You can view the files the wizard creates for your project in **Solution Explorer**. For more information about the files the wizard creates for your project, see the project-generated file ReadMe.txt. For more information about the file types, [File Types Created for Visual C++ Projects](../VS_visualcpp/File-Types-Created-for-Visual-C---Projects.md).  
  
## See Also  
 [Creating an Empty Windows Desktop Application](../VS_visualcpp/Creating-an-Empty-Windows-Desktop-Application.md)   
 [Visual C++ Project Types](../VS_visualcpp/Visual-C---Project-Types.md)