---
title: "Specifying Build Events | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.IVCEventTool.CommandLine"
  - "VC.Project.IVCEventTool.ExcludedFromBuild"
  - "VC.Project.IVCEventTool.Description"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Pre-Link event"
  - "build events [C++], specifying"
  - "custom build steps [C++], build events"
  - "builds [C++], events"
  - "events [C++], build"
  - "builds [C++], customizing C++"
  - "build events [C++]"
  - "post-build events"
ms.assetid: 788a6c18-2dbe-4a49-8cd6-86c1ad7a95cc
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
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
# Specifying Build Events
You can use build events to specify commands that run before the build starts, before the link process, or after the build finishes.  
  
 Build events are executed only if the build successfully reaches those points in the build process. If an error occurs in the build, the *post-build* event will not occur; if the error occurs before the linking phase, neither the *pre-link* nor the *post-build* event will occur. Additionally, if no files need to be linked, the *pre-link* event will not occur. The *pre-link* event is also not available in projects that do not contain a link step.  
  
 If no files need to be built, no build events will occur.  
  
 For general information on build events, see [Understanding Custom Build Steps and Build Events](../ide/understanding-custom-build-steps-and-build-events.md).  
  
### To specify a build event  
  
1.  In **Solution Explorer**, select the project for which you want to specify the build event.  
  
2.  Open the project's **Property Pages** dialog box. For more information, see [Working with Project Properties](../ide/working-with-project-properties.md).  
  
3.  In the **Build Events** folder, select a build event property page.  
  
4.  Specify the properties associated with the build event:  
  
    -   In **Command Line**, specify a command as if you were specifying it at the command prompt. Specify a valid command or batch file, and any required input or output files. Specify the **call** batch command before the name of a batch file to guarantee that all subsequent commands are executed.  
  
         Multiple input and output files can be specified symbolically with MSBuild macros. [!INCLUDE[crabout](../build/reference/includes/crabout_md.md)] specifying the location of files, or the names of sets of files, see [Common Macros for Build Commands and Properties](../ide/common-macros-for-build-commands-and-properties.md).  
  
         Because the '%' character is reserved by MSBuild, if you specify an environment variable replace each **%** escape character with the **%25** hexadecimal escape sequence. For example, replace **%WINDIR%** with **%25WINDIR%25**. MSBuild replaces each **%25** sequence with the **%** character before it accesses the environment variable.  
  
    -   In **Description**, type a description for this event. The description will be printed to the **Output** window when this event occurs.  
  
    -   In **Excluded From Build**, specify **Yes** if you do not want the event to run.  
  
## See Also  
 [Understanding Custom Build Steps and Build Events](../ide/understanding-custom-build-steps-and-build-events.md)   
 [Common Macros for Build Commands and Properties](../ide/common-macros-for-build-commands-and-properties.md)   
 [Troubleshooting Build Customizations](../ide/troubleshooting-build-customizations.md)