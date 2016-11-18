---
title: "NMake Property Page | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCNMakeTool.ReBuildCommandLine"
  - "VC.Project.VCNMakeTool.CleanCommandLine"
  - "VC.Project.VCNMakeTool.Output"
  - "VC.Project.VCNMakeTool.BuildCommandLine"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "NMake property page"
ms.assetid: bd20cb52-9f1d-4240-b4fc-4f43205ac94b
caps.latest.revision: 12
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
# NMake Property Page
The **NMake** property page lets you specify build settings for NMake projects.  
  
 For more information about NMake projects, see [Creating a Makefile Project](../ide/creating-a-makefile-project.md).  
  
 The **NMake** property page contains the following properties.  
  
## UIElement List  
 **Build Command Line**  
 Specifies the command to be run when **Build** is clicked on the **Build** menu.  
  
 **Rebuild All Command Line**  
 Specifies the command to be run when **Rebuild All** is clicked on the **Build** menu.  
  
 **Clean Command Line**  
 Specifies the command to be run when **Clean** is clicked on the **Build** menu.  
  
 **Output**  
 Specifies the name of the file that will contain the output for the command line. By default, this file name is based on the project name.  
  
 **Preprocessor Definitions**  
 Specifies any preprocessor definitions that the source files use. The default value is determined by the current platform and configuration.  
  
 **Include Search Path**  
 Specifies the directories where the compiler searches for include files.  
  
 **Forced Includes**  
 Specifies files that the preprocessor automatically processes even if they are not included in the project files.  
  
 **Assembly Search Path**  
 Specifies the directories where the .NET Framework searches when it trys to resolve .NET assemblies.  
  
 **Forced Using Assemblies**  
 Specifies assemblies that the .NET Framework automatically processes.  
  
 **Additional Options**  
 Specifies any additional compiler switches for IntelliSense to use when it parses C++ files.  
  
 For information about how to access the **NMake** property page, see [Working with Project Properties](../ide/working-with-project-properties.md).  
  
 For information about how to programmatically access members of this object, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCNMakeTool>.  
  
## See Also  
 [Property Pages](../ide/property-pages-visual-cpp.md)   
 [How to: Enable IntelliSense for Makefile Projects](../ide/how-to-enable-intellisense-for-makefile-projects.md)