---
title: "How to: Add a Custom Build Step to MSBuild Projects | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "msbuild.cpp.howto.addcustombuildstep"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "msbuild (c++), howto: add a custom build step"
ms.assetid: a20a0c47-4df4-4754-a1f0-a94a99958916
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# How to: Add a Custom Build Step to MSBuild Projects
A custom build step is a user-defined step in a build. A custom build step behaves like any other *command tool* step, such as the standard compile or link tool step.  
  
 Specify a custom build step in the project file (.vcxproj). The step can specify a command line to execute, any additional input or output files, and a message to display. If **MSBuild** determines that your output files are out-of-date with regard to your input files, it displays the message and executes the command.  
  
 To specify the location of the custom build step in the sequence of build targets, use one or both of the `CustomBuildAfterTargets` and `CustomBuildBeforeTargets` XML elements in the project file. For example, you could specify that the custom build step runs after the link tool target and before the manifest tool target. The actual set of available targets depends on your particular build.  
  
 Specify the `CustomBuildBeforeTargets` element to execute the custom build step before a particular target runs, the `CustomBuildAfterTargets` element to execute the step after a particular target runs, or both elements to execute the step between two adjacent targets. If neither element is specified, your custom build tool executes at its default location, which is after the **Link** target.  
  
 Custom build steps and custom build tools share the information specified in the `CustomBuildBeforeTargets` and `CustomBuildAfterTargets` XML elements. Therefore, specify those targets just one time in your project file.  
  
### To define what is executed by the custom build step  
  
1.  Add a property group to the project file. In this property group, specify the command, its inputs and outputs, and a message, as shown in the following example. This example creates a .cab file from the main.cpp file you created in [Walkthrough: Using MSBuild to Create a Visual C++ Project](../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md).  
  
    ```  
    <ItemDefinitionGroup>  
      <CustomBuildStep>  
        <Command>makecab.exe $(ProjectDir)main.cpp $(TargetName).cab</Command>  
        <Outputs>$(TargetName).cab</Outputs>  
        <Inputs>$(TargetFileName)</Inputs>  
      </CustomBuildStep>  
    </ItemDefinitionGroup>  
    ```  
  
### To define where in the build the custom build step will execute  
  
1.  Add the following property group to the project file. You can specify both targets, or you can omit one if you just want the custom step to execute before or after a particular target. This example tells **MSBuild** to perform the custom step after the compile step but before the link step.  
  
    ```  
    <PropertyGroup>  
      <CustomBuildAfterTargets>ClCompile</CustomBuildAfterTargets>  
      <CustomBuildBeforeTargets>Link</CustomBuildBeforeTargets>  
    </PropertyGroup>  
    ```  
  
## See Also  
 [Walkthrough: Using MSBuild to Create a Visual C++ Project](../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md)   
 [How to: Use Build Events in MSBuild Projects](../build/how-to-use-build-events-in-msbuild-projects.md)   
 [How to: Add Custom Build Tools to MSBuild Projects](../build/how-to-add-custom-build-tools-to-msbuild-projects.md)