---
title: "Creating an MFC Application"
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
ms.assetid: b8b8aa08-9c49-404c-8078-b42079ac18f0
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
# Creating an MFC Application
An MFC application is an executable application for Windows that is based on the Microsoft Foundation Class (MFC) Library. The easiest way to create an MFC application is to use the MFC Application Wizard.  
  
> [!IMPORTANT]
>  MFC projects are not supported in Visual Studio Express editions.  
  
 MFC executables generally fall into five types: standard Windows applications, dialog boxes, forms-based applications, Explorer-style applications, and Web browser–style applications. For more information, see:  
  
-   [Using the Classes to Write Windows Applications](../VS_visualcpp/Using-the-Classes-to-Write-Applications-for-Windows.md)  
  
-   [Creating and Displaying Dialog Boxes](../VS_visualcpp/Creating-and-Displaying-Dialog-Boxes.md)  
  
-   [Creating a Forms-Based MFC Application](../VS_visualcpp/Creating-a-Forms-Based-MFC-Application.md)  
  
-   [Creating a File Explorer-Style MFC Application](../VS_visualcpp/Creating-a-File-Explorer-Style-MFC-Application.md)  
  
-   [Creating a Web Browser-Style MFC Application](../VS_visualcpp/Creating-a-Web-Browser-Style-MFC-Application.md)  
  
 The MFC Application Wizard generates the appropriate classes and files for any of these types of applications, depending on the options you select in the wizard.  
  
### To create an MFC application using the MFC Application Wizard  
  
1.  Follow the instructions in the help topic [Creating a Project with a Visual C++ Application Wizard](../VS_visualcpp/Creating-Desktop-Projects-By-Using-Application-Wizards.md).  
  
2.  In the **New Project** dialog box, select **MFC Application** in the Templates pane to open the wizard.  
  
3.  Define your application settings using the [MFC Application Wizard](../VS_visualcpp/MFC-Application-Wizard.md).  
  
    > [!NOTE]
    >  Skip this step to keep the wizard default settings.  
  
4.  Click **Finish** to close the wizard and open your new project in the development environment.  
  
 Once your project is created, you can view the files created in **Solution Explorer**. For more information about the files the wizard creates for your project, see the project-generated file ReadMe.txt. For more information about the file types, see [File Types Created for Visual C++ Projects](../VS_visualcpp/File-Types-Created-for-Visual-C---Projects.md).  
  
## See Also  
 [Debugging Preparation: Visual C++ Windows Applications](assetId:///a8bc54de-41a3-464d-9a12-db9bdcbc1ad5)   
 [Adding Functionality with Code Wizards](../VS_visualcpp/Adding-Functionality-with-Code-Wizards--C---.md)   
 [Property Pages](../VS_visualcpp/Property-Pages--Visual-C---.md)   
 [Deploying Applications](assetId:///4ff8881d-0daf-47e7-bfe7-774c625031b4)