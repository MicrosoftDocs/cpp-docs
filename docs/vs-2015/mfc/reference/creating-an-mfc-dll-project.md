---
title: "Creating an MFC DLL Project | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.mfcdll.project"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC DLLs [C++], creating projects"
  - "DLLs [C++], MFC"
  - "projects [C++], creating"
  - "DLLs [C++], creating"
ms.assetid: 05540b93-4781-4a90-aadf-55158313f5b2
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creating an MFC DLL Project
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Creating an MFC DLL Project](https://docs.microsoft.com/cpp/mfc/reference/creating-an-mfc-dll-project).  
  
  
An MFC DLL is a binary file that acts as a shared library of functions that can be used simultaneously by multiple applications. The easiest way to create an MFC DLL project is to use the MFC DLL Wizard.  
  
> [!NOTE]
>  The appearance of features in the IDE can depend on your active settings or edition, and might differ from those described in Help. To change your settings, choose **Import and Export Settings** on the **Tools** menu. For more information, see [Customizing Development Settings in Visual Studio](http://msdn.microsoft.com/en-us/22c4debb-4e31-47a8-8f19-16f328d7dcd3).  
  
### To create an MFC DLL Project using the MFC DLL Wizard  
  
1.  Follow the instructions in the help topic [Creating a Project with a Visual C++ Application Wizard](../../ide/creating-desktop-projects-by-using-application-wizards.md).  
  
 **Note** In the **New Project** dialog box, select the `MFC DLL` icon in the Templates pane to open the MFC DLL Wizard.  
  
1.  Define your application settings using the [application settings](../../mfc/reference/application-settings-mfc-dll-wizard.md) page of the [MFC DLL Wizard](../../mfc/reference/mfc-dll-wizard.md).  
  
    > [!NOTE]
    >  Skip this step to keep the wizard default settings.  
  
2.  Click **Finish** to close the wizard and open your new project in **Solution Explorer**.  
  
 Once your project is created, you can view the files created in the Solution Explorer. For more information about the files the wizard creates for your project, see the project-generated file ReadMe.txt. For more information about the file types, see [File Types Created for Visual C++ Projects](../../ide/file-types-created-for-visual-cpp-projects.md).  
  
## See Also  
 [Visual C++ Project Types](http://msdn.microsoft.com/library/912b4ba2-7719-43d5-b087-db33e3f9329a)   
 [Adding Functionality with Code Wizards](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Property Pages](../../ide/property-pages-visual-cpp.md)   
 [Deploying Applications](http://msdn.microsoft.com/en-us/4ff8881d-0daf-47e7-bfe7-774c625031b4)





