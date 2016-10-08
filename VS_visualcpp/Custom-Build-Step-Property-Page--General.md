---
title: "Custom Build Step Property Page: General"
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
ms.assetid: bd319741-0491-46c4-a428-7c61b4b46a02
caps.latest.revision: 7
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
# Custom Build Step Property Page: General
For each combination of project configuration and target platform in your project, you can specify a custom step to be performed when the project is built.  
  
## UIElement List  
 **Command Line**  
 The command to be executed by the custom build step.  
  
 **Description**  
 A message that's displayed when the custom build step runs.  
  
 **Outputs**  
 The output file that the custom build step generates. This setting is required so that incremental builds work correctly.  
  
 **Additional Dependencies**  
 A semicolon-delimited list of any additional input files to use for the custom build step.  
  
 **Execute After and Execute Before**  
 These options define when the custom build step is run in the build process, relative to the listed targets. The most commonly listed targets are BuildGenerateSources, BuildCompile, and BuildLink, because they represent the major steps in the build process. Other often-listed targets are Midl, CLCompile, and Link.  
  
 Treat Output As Content  
 This option is only meaningful for Windows Store or Windows Phone apps, which include all content files in the .appx package.  
  
### To specify a custom build step  
  
1.  On the menu bar, choose **Project**, **Properties**. For more information, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  In the **Property Pages** dialog box, navigate to the **Configuration Properties**, **Custom Build Step**, **General** page.  
  
3.  Modify the settings.  
  
## See Also  
 [Property Pages](../VS_visualcpp/Property-Pages--Visual-C---.md)