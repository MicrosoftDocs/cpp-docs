---
title: "AddCommonConfig"
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
ms.assetid: 16abad93-6dd0-4daa-bf76-91eb6ffbdffa
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
# AddCommonConfig
Adds the default configurations to the project.  
  
## Syntax  
  
```  
  
      function AddCommonConfig(   
   oProj,   
   strProjectName    
);  
```  
  
#### Parameters  
 `oProj`  
 The selected project.  
  
 `strProjectName`  
 The name of the project.  
  
## Remarks  
 Call this function to add the default code model configurations to the project your wizard creates. You can specify either a Release configuration or a Debug configuration. The following tables list the code model object's default property settings for each configuration type.  
  
### Visual C++ Compiler Tool Object  
  
|Object property|Release configuration setting|Debug configuration setting|  
|---------------------|-----------------------------------|---------------------------------|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UsePrecompiledHeader?qualifyHint=False>|pchUseUsingSpecific|pchUseUsingSpecific|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.WarningLevel?qualifyHint=False>|3|3|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.MinimalRebuild?qualifyHint=False>|Not applicable|true|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DebugInformationFormat?qualifyHint=False>|debugEnabled|debugEditAndContinue|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization?qualifyHint=False>|optimizeMaxSpeed|Not applicable|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BasicRuntimeChecks?qualifyHint=False>|Not applicable|runtimeBasicCheckAll|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Detect64BitPortabilityProblems?qualifyHint=False>|true|true|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OmitFramePointers?qualifyHint=False>|true|Not applicable|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableFunctionLevelLinking?qualifyHint=False>|true|Not applicable|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.StringPooling?qualifyHint=False>|true|Not applicable|  
  
### Visual C++ Configuration Object  
  
|Object property|Release configuration setting|Debug configuration setting|  
|---------------------|-----------------------------------|---------------------------------|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.IntermediateDirectory?qualifyHint=False>|"Release"|"Debug"|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.OutputDirectory?qualifyHint=False>|"Release"|"Debug"|  
  
### Visual C++ Linker Tool Object  
  
|Object property|Release configuration setting|Debug configuration setting|  
|---------------------|-----------------------------------|---------------------------------|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SubSystem?qualifyHint=False>|subSystemWindows|subSystemWindows|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TargetMachine?qualifyHint=False>|machineX86|machineX86|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateDebugInformation?qualifyHint=False>|true|true|  
  
## Example  
  
```  
// Create the Visual C++ project.  
selProj = CreateProject(strProjectName, strProjectPath);  
// Add the common configuration to the project.  
   AddCommonConfig(selProj, strProjectName);  
   selProj.Object.keyword = "MyProj";  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)