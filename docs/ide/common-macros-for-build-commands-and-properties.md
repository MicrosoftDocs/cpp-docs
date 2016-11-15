---
title: "Common Macros for Build Commands and Properties | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.GenerateXMLDocumentationFiles"
  - "VC.Project.VCCLCompilerTool.XMLDocumentationFileName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "$(FrameworkSDKDir) macro"
  - "ProjectName macro $(ProjectName)"
  - "DevEnvDir macro $(DevEnvDir)"
  - "$(DevEnvDir) macro"
  - "TargetPath macro $(TargetPath)"
  - "VSInstallDir macro $(VSInstallDir)"
  - "$(InputFileName) macro"
  - "$(SolutionFileName) macro"
  - "macros [C++], build macros"
  - "InputFileName macro $(InputFileName)"
  - "$(VCInstallDir) macro"
  - "$(IntDir) macro"
  - "$(ConfigurationName) macro"
  - "SolutionDir macro $(SolutionDir)"
  - "$(TargetPath) macro"
  - "$(Inherit) macro"
  - "$(SolutionPath) macro"
  - "WebDeployRoot macro $(WebDeployRoot)"
  - "WebDeployPath macro $(WebDeployPath)"
  - "StopEvaluating macro $(StopEvaluating)"
  - "$(RootNamespace) macro"
  - "$(WebDeployRoot) macro"
  - "ProjectPath macro $(ProjectPath)"
  - "$(ProjectPath) macro"
  - "$(InputDir) macro"
  - "SolutionName macro $(SolutionName)"
  - "ProjectExt macro $(ProjectExt)"
  - "$(TargetExt) macro"
  - "$(ProjectFileName) macro"
  - "TargetName macro $(TargetName)"
  - "$(References) macro"
  - "References macro $(References)"
  - "TargetExt macro $(TargetExt)"
  - "ProjectDir macro $(ProjectDir)"
  - "$(TargetDir) macro"
  - "SolutionExt macro $(SolutionExt)"
  - "$(SolutionDir) macro"
  - "ProjectFileName macro $(ProjectFileName)"
  - "VCInstallDir macro $(VCInstallDir)"
  - "$(InputExt) macro"
  - "$(TargetFileName) macro"
  - "$(SolutionExt) macro"
  - "PlatformName macro $(PlatformName)"
  - "IntDir macro $(IntDir)"
  - "$(FrameworkVersion) macro"
  - "$(ProjectDir) macro"
  - "build macros [C++]"
  - "InputPath macro $(InputPath)"
  - "$(VSInstallDir) macro"
  - "$(WebDeployPath) macro"
  - "TargetFileName macro $(TargetFileName)"
  - "NoInherit macro $(NoInherit)"
  - "ConfigurationName macro $(ConfigurationName)"
  - "$(ProjectExt) macro"
  - "TargetDir macro $(TargetDir)"
  - "InputName macro $(InputName)"
  - "$(ProjectName) macro"
  - "FrameworkSDKDir macro $(FrameworkSDKDir)"
  - "$(ParentName) macro"
  - "InputExt macro $(InputExt)"
  - "$(SafeRootNamespace) macro"
  - "InputDir macro $(InputDir)"
  - "$(FxCopDir) macro"
  - "$(RemoteMachine) macro"
  - "Inherit macro $(Inherit)"
  - "FrameworkVersion macro $(FrameworkVersion)"
  - "$(StopEvaluating) macro"
  - "$(OutDir) macro"
  - "FrameworkDir macro $(FrameworkDir)"
  - "SolutionFileName macro $(SolutionFileName)"
  - "$(NoInherit) macro"
  - "RemoteMachine macro $(RemoteMachine)"
  - "properties [C++], build property macros"
  - "$(TargetName) macro"
  - "$(SolutionName) macro"
  - "$(InputPath) macro"
  - "ParentName macro $(ParentName)"
  - "OutDir macro $(OutDir)"
  - "SafeRootNamespace macro $(SafeRootNamespace)"
  - "FxCopDir macro $(FxCopDir)"
  - "$(InputName) macro"
  - "RootNamespace macro $(RootNamespace)"
  - "builds [C++], macros"
  - "$(FrameworkDir) macro"
  - "$(PlatformName) macro"
  - "SolutionPath macro $(SolutionPath)"
ms.assetid: 239bd708-2ea9-4687-b264-043f1febf98b
caps.latest.revision: 22
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
# Common Macros for Build Commands and Properties
Depending on your installation options, Visual Studio can make hundreds of macros available to you. These correspond to the MSBuild properties that are set by default, or in .props or .targets files, or in your project settings. You can use these macros anywhere in a project's **Property Pages** dialog box where strings are accepted. These macros are not case sensitive.  
  
 To display the currently available macros, in the column to the right of a property name, click the drop-down arrow. If **Edit** is available, click it and then in the edit dialog box, click **Macros**. For more information, see the **Specifying User-Defined Values** section of [Property Pages](../ide/property-pages-visual-cpp.md).  
  
 Macros that are marked "Deprecated" are no longer used or have been replaced by an equivalent [item metadata macro](/visualstudio/msbuild/itemmetadata-element-msbuild) (**%(***name***)**). Macros that are marked "Deprecated; migrated" are also deprecated. And in addition, if the project that contains the macro is migrated from Visual Studio 2008, Visual Studio converts the macro to the equivalent current macro.  
  
 The following table describes a commonly used subset of the available macros. This list is not exhaustive. For details on how MSBuild property definitions are created and used as macros in .props, .targets, and .vcxproj files, see [MSBuild Properties](/visualstudio/msbuild/msbuild-properties).  
  
|Macro|Description|  
|-----------|-----------------|  
|**$(RemoteMachine)**|Set to the value of the **Remote Machine** property on the Debug property page. See [Changing Project Settings for a C/C++ Debug Configuration](/visualstudio/debugger/project-settings-for-a-cpp-debug-configuration) for more information.|  
|**$(Configuration)**|The name of the current project configuration, for example, "Debug".|  
|**$(Platform)**|The name of current project platform, for example, "Win32".|  
|**$(ParentName)**|(Deprecated.) Name of the item containing this project item. This will be the parent folder name, or project name.|  
|**$(RootNameSpace)**|The namespace, if any, containing the application.|  
|**$(IntDir)**|Path to the directory specified for intermediate files. If this is a relative path, intermediate files go to this path appended to the project directory. This path should have a trailing slash. This resolves to the value for the **Intermediate Directory** property. Do not use **$(OutDir)** to define this property.|  
|**$(OutDir)**|Path to the output file directory. If this is a  relative path, output files go to this path appended to the project directory. This path should have a trailing slash. This resolves to the value for the **Output Directory** property. Do not use **$(IntDir)** to define this property.|  
|**$(DevEnvDir)**|The installation directory of Visual Studio (defined as drive + path); includes the trailing backslash '\\'.|  
|**$(InputDir)**|(Deprecated; migrated.) The directory of the input file (defined as drive + path); includes the trailing backslash '\\'. If the project is the input, then this macro is equivalent to **$(ProjectDir)**.|  
|**$(InputPath)**|(Deprecated; migrated.) The absolute path name of the input file (defined as drive + path + base name + file extension). If the project is the input, then this macro is equivalent to **$(ProjectPath)**.|  
|**$(InputName)**|(Deprecated; migrated.) The base name of the input file. If the project is the input, then this macro is equivalent to **$(ProjectName)**.|  
|**$(InputFileName)**|(Deprecated; migrated.) The file name of the input file (defined as base name + file extension). If the project is the input, then this macro is equivalent to **$(ProjectFileName)**.|  
|**$(InputExt)**|(Deprecated; migrated.) The file extension of the input file. It includes the '.' before the file extension. If the project is the input, then this macro is equivalent to **$(ProjectExt)**.|  
|**$(ProjectDir)**|The directory of the project (defined as drive + path); includes the trailing backslash '\\'.|  
|**$(ProjectPath)**|The absolute path name of the project (defined as drive + path + base name + file extension).|  
|**$(ProjectName)**|The base name of the project.|  
|**$(ProjectFileName)**|The file name of the project (defined as base name + file extension).|  
|**$(ProjectExt)**|The file extension of the project. It includes the '.' before the file extension.|  
|**$(SolutionDir)**|The directory of the solution (defined as drive + path); includes the trailing backslash '\\'.|  
|**$(SolutionPath)**|The absolute path name of the solution (defined as drive + path + base name + file extension).|  
|**$(SolutionName)**|The base name of the solution.|  
|**$(SolutionFileName)**|The file name of the solution (defined as base name + file extension).|  
|**$(SolutionExt)**|The file extension of the solution. It includes the '.' before the file extension.|  
|**$(TargetDir)**|The directory of the primary output file for the build (defined as drive + path); includes the trailing backslash '\\'.|  
|**$(TargetPath)**|The absolute path name of the primary output file for the build (defined as drive + path + base name + file extension).|  
|**$(TargetName)**|The base name of the primary output file for the build.|  
|**$(TargetFileName)**|The file name of the primary output file for the build (defined as base name + file extension).|  
|**$(TargetExt)**|The file extension of the primary output file for the build. It includes the '.' before the file extension.|  
|**$(VSInstallDir)**|The directory into which you installed Visual Studio.<br /><br /> This property contains the version of the targeted Visual Studio, which might be different that the host Visual Studio. For example, when building with `$(PlatformToolset) = v110`, **$(VSInstallDir)** contains the path to the Visual Studio 2012 installation.|  
|**$(VCInstallDir)**|The directory into which you installed Visual C++.<br /><br /> This property contains the version of the targeted Visual C++, which might be different that the host Visual Studio. For example, when building with `$(PlatformToolset) = v140`, **$(VCInstallDir)** contains the path to the Visual C++ 2015 installation.|  
|**$(FrameworkDir)**|The directory into which the .NET Framework was installed.|  
|**$(FrameworkVersion)**|The version of the .NET Framework used by Visual Studio. Combined with **$(FrameworkDir)**, the full path to the version of the .NET Framework use by Visual Studio.|  
|**$(FrameworkSDKDir)**|The directory into which you installed the .NET Framework. The .NET Framework could have been installed as part of Visual Studio or separately.|  
|**$(WebDeployPath)**|The relative path from the web deployment root to where the project outputs belong. Returns the same value as <xref:Microsoft.VisualStudio.VCProjectEngine.VCWebDeploymentTool.RelativePath%2A>.|  
|**$(WebDeployRoot)**|The absolute path to the location of **\<localhost>**. For example, c:\inetpub\wwwroot.|  
|**$(SafeParentName)**|(Deprecated.) The name of the immediate parent in valid name format. For example, a form is the parent of a .resx file.|  
|**$(SafeInputName)**|(Deprecated.) The name of the file as a valid class name, minus file extension.|  
|**$(SafeRootNamespace)**|(Deprecated.) The namespace name in which the project wizards will add code. This namespace name will only contain characters that would be permitted in a valid C++ identifier.|  
|**$(FxCopDir)**|The path to the fxcop.cmd file. The fxcop.cmd file is not installed with all Visual C++ editions.|  
  
## See Also  
 [Building C++ Projects in Visual Studio](../ide/building-cpp-projects-in-visual-studio.md)