---
title: "Specify Project Settings, Create New Project From Existing Code Files Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.importwiz.appsettings"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Create New Project From Existing Code Files Wizard, project settings"
ms.assetid: 9b8860c9-d35f-4f18-9565-2934d3d7f569
caps.latest.revision: 13
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
# Specify Project Settings, Create New Project From Existing Code Files Wizard
Use this page of the Create New Project From Existing Code Files wizard to specify:  
  
-   The build environment for the new project  
  
-   Build settings to match a specific type of new project to generate  
  
## Task List  
 [How to: Create a C++ Project from Existing Code](../ide/how-to-create-a-cpp-project-from-existing-code.md)  
  
## UIElement List  
 **Use Visual Studio**  
 Specifies to use build tools that are included in Visual Studio for building the new project. This option is selected by default.  
  
 **Project Type**  
 Specifies the type of project that the wizard will generate.  
  
 **Windows application project**  
 Indicates that the wizard will generate a project for an executable Windows application. This option is available from the **Project Type** drop-down list box.  
  
 **Console application project**  
 Indicates that the wizard will generate a project for a console application. This option is available from the **Project Type** drop-down list box.  
  
 **Dynamically linked library (DLL) project**  
 Indicates that the wizard will generate a project for an empty dynamic link library application. This option is available from the **Project Type** drop-down list box.  
  
 **Static library (LIB) project**  
 Indicates that the wizard will generate a project for a static library application. This option is available from the **Project Type** drop-down list box.  
  
 **Add support for ATL**  
 Adds ATL support to the new project.  
  
 **Add support for MFC**  
 Adds MFC support to the new project.  
  
 **Add support for the Common Language Runtime**  
 Adds CLR programming support to the new project.  
  
 **Common Language Runtime**  
 Specifies the new project to be compliant with CLR features.  
  
 **Common Language Runtime (old syntax)**  
 Specifies the new project to be compliant with Managed Extensions for C++ syntax, which is CLR programming syntax prior to Visual C++ 2005.  
  
 **Use external build system**  
 Specifies to use build tools that are not included in Visual Studio for building the new project. When this option is selected, you can specify build command lines on the **Specify Debug Configuration Settings** and **Specify Release Configuration Settings** pages.  
  
> [!NOTE]
>  When the **Use External Build System** option is checked, the IDE does not build the new project, so the /D, /I, /FI, /AI, or /FU options are not required for compilation. However, these options must be set correctly in order for IntelliSense to function properly.  
  
## See Also  
 [Specify Debug Configuration Settings, Create New Project From Existing Code Files Wizard](../ide/specify-debug-configuration-settings.md)   
 [Specify Release Configuration Settings, Create New Project From Existing Code Files Wizard](../ide/specify-release-configuration.md)