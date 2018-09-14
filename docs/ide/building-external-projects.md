---
title: "Building External Projects | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["external projects", "Visual C++ projects, external projects", "builds [C++], external projects", "projects [C++], external projects", "Makefile projects, external projects"]
ms.assetid: 650b7803-ea91-489d-bee3-8f3e990e223c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Building External Projects
An external project is a Visual C++ project that uses a makefile or other facilities that are outside (foreign or external to) the Visual C++ development environment.  
  
 If you have an external project (for example, a makefile project) that you want to build in the Visual C++ development environment, create a Makefile project and specify your project's build command and output in the Makefile Application Wizard. For more information, see [Creating a Makefile Project](../ide/creating-a-makefile-project.md).  
  
 Note that Visual C++ no longer supports the ability to export a makefile for the active project from the development environment. Use [Devenv Command Line Switches](/visualstudio/ide/reference/devenv-command-line-switches) to build Visual Studio projects at the command line.  
  
## See Also  
 [Building C++ Projects in Visual Studio](../ide/building-cpp-projects-in-visual-studio.md)