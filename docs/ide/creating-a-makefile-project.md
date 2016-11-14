---
title: "Creating a Makefile Project | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.makefile.project"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Makefile projects, creating"
  - "project files [C++], Makefile projects"
ms.assetid: dd077af3-97a8-48fb-baaa-cf7e07ddef61
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Creating a Makefile Project
If you have a project that you build from the command line with a makefile, then the Visual Studio development environment will not recognize your project. To open and build your project using [!INCLUDE[vsUltShort](../ide/includes/vsultshort_md.md)], [!INCLUDE[vsPro](../ide/includes/vspro_md.md)], or Visual Studio Express for Windows Desktop, first create an empty project by selecting the MakeFile project template. You can then use this project to build your project from the Visual Studio development environment.  
  
 The project displays no files in Solution Explorer. The project specifies the build settings, which are reflected in the project's property page.  
  
 The output file that you specify in the project has no effect on the name that the build script generates; it declares only an intention.  
  
### To create a Makefile project  
  
1.  Follow the instructions in the help topic [Creating a Project with a Visual C++ Application Wizard](../ide/creating-desktop-projects-by-using-application-wizards.md).  
  
2.  In the **New Project** dialog box, select **Makefile Project** in the Templates pane to open the wizard.  
  
3.  In the [Application Settings](../ide/application-settings-makefile-project-wizard.md) page, provide the command, output, clean, and rebuild information.  
  
4.  Click **Finish** to close the wizard and open the newly created project in **Solution Explorer**.  
  
 You can view and edit the project's properties in its property page. See [Setting Visual C++ Project Properties](../ide/working-with-project-properties.md) for information about displaying the property page.  
  
## See Also  
 [Makefile Project Wizard](../ide/makefile-project-wizard.md)   
 [Special Characters in a Makefile](../build/special-characters-in-a-makefile.md)   
 [Contents of a Makefile](../build/contents-of-a-makefile.md)