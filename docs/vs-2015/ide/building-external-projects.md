---
title: "Building External Projects | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "external projects"
  - "Visual C++ projects, external projects"
  - "builds [C++], external projects"
  - "projects [C++], external projects"
  - "Makefile projects, external projects"
ms.assetid: 650b7803-ea91-489d-bee3-8f3e990e223c
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Building External Projects
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Building External Projects](https://docs.microsoft.com/cpp/ide/building-external-projects).  
  
  
An external project is a Visual C++ project that uses a makefile or other facilities that are outside (foreign or external to) the Visual C++ development environment.  
  
 If you have an external project (for example, a makefile project) that you want to build in the Visual C++ development environment, create a Makefile project and specify your project's build command and output in the Makefile Application Wizard. For more information, see [Creating a Makefile Project](../ide/creating-a-makefile-project.md).  
  
 Note that Visual C++ no longer supports the ability to export a makefile for the active project from the development environment. Use [Devenv Command Line Switches](../Topic/Devenv%20Command%20Line%20Switches.md) to build Visual Studio projects at the command line.  
  
## See Also  
 [Building C++ Projects in Visual Studio](../ide/building-cpp-projects-in-visual-studio.md)

