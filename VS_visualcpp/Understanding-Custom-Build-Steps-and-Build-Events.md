---
title: "Understanding Custom Build Steps and Build Events"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: beb2f017-3e9f-4b2c-9b57-2572fd2628e4
caps.latest.revision: 12
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
# Understanding Custom Build Steps and Build Events
From within the Visual C++ development environment, there are three basic ways to customize the build process:  
  
 **Custom Build Steps**  
 A custom build step is a build rule associated with a project. A custom build step can specify a command line to execute, any additional input or output files, and a message to display. For more information, see [How to: Add a Custom Build Step to MSBuild Projects](../VS_visualcpp/How-to--Add-a-Custom-Build-Step-to-MSBuild-Projects.md).  
  
 **Custom Build Tools**  
 A custom build tool is a build rule associated with one or more files. A custom build step can pass input files to a custom build tool, which results in one or more output files. For example, the help files in an MFC application are built with a custom build tool. For more information, see [How to: Add Custom Build Tools to MSBuild Projects](../VS_visualcpp/How-to--Add-Custom-Build-Tools-to-MSBuild-Projects.md) and [Specifying Custom Build Tools](../VS_visualcpp/Specifying-Custom-Build-Tools.md).  
  
 **Build Events**  
 Build events let you customize a project's build. There are three build events: *pre-build*, *pre-link*, and *post-build*. A build event lets you specify an action to occur at a specific time in the build process. For example, you could use a build event to register a file with **regsvr32.exe** after the project finishes building. For more information, see [Specifying Build Events](../VS_visualcpp/Specifying-Build-Events.md).  
  
 [Troubleshooting Build Customizations](../VS_visualcpp/Troubleshooting-Build-Customizations.md) can help you ensure that your custom build steps and build events run as expected.  
  
 The output format of a custom build step or build event can also enhance the usability of the tool. For more information, see [Formatting the Output of a Custom Build Step or Build Event](../VS_visualcpp/Formatting-the-Output-of-a-Custom-Build-Step-or-Build-Event.md).  
  
 Build events and custom build steps run in the following order along with other build steps:  
  
1.  Pre-Build event  
  
2.  Custom build tools on individual files  
  
3.  MIDL  
  
4.  Resource compiler  
  
5.  The C/C++ compiler  
  
6.  Pre-Link event  
  
7.  Linker or Librarian (as appropriate)  
  
8.  Manifest Tool  
  
9. BSCMake  
  
10. Custom build step on the project  
  
11. Post-Build event  
  
 The `custom build step on the project` and a `post-build event` run sequentially after all other build processes finish.  
  
## See Also  
 [Building C++ Projects in Visual Studio](../VS_visualcpp/Building-C---Projects-in-Visual-Studio.md)   
 [Common Macros for Build Commands and Properties](../VS_visualcpp/Common-Macros-for-Build-Commands-and-Properties.md)   
 [Tool Build Order Dialog Box](assetId:///6204c5b1-7ce9-4948-9ff6-0268642ee14c)