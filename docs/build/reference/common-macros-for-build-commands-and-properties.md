---
description: "Learn more about: Common macros for MSBuild commands and properties"
title: "Common macros for MSBuild commands and properties"
ms.date: "08/02/2019"
helpviewer_keywords: ["$(FrameworkSDKDir) macro", "ProjectName macro $(ProjectName)", "DevEnvDir macro $(DevEnvDir)", "$(DevEnvDir) macro", "TargetPath macro $(TargetPath)", "VSInstallDir macro $(VSInstallDir)", "$(InputFileName) macro", "$(SolutionFileName) macro", "macros [C++], build macros", "InputFileName macro $(InputFileName)", "$(VCInstallDir) macro", "$(IntDir) macro", "$(ConfigurationName) macro", "SolutionDir macro $(SolutionDir)", "$(TargetPath) macro", "$(Inherit) macro", "$(SolutionPath) macro", "WebDeployRoot macro $(WebDeployRoot)", "WebDeployPath macro $(WebDeployPath)", "StopEvaluating macro $(StopEvaluating)", "$(RootNamespace) macro", "$(WebDeployRoot) macro", "ProjectPath macro $(ProjectPath)", "$(ProjectPath) macro", "$(InputDir) macro", "SolutionName macro $(SolutionName)", "ProjectExt macro $(ProjectExt)", "$(TargetExt) macro", "$(ProjectFileName) macro", "TargetName macro $(TargetName)", "$(References) macro", "References macro $(References)", "TargetExt macro $(TargetExt)", "ProjectDir macro $(ProjectDir)", "$(TargetDir) macro", "SolutionExt macro $(SolutionExt)", "$(SolutionDir) macro", "ProjectFileName macro $(ProjectFileName)", "VCInstallDir macro $(VCInstallDir)", "$(InputExt) macro", "$(TargetFileName) macro", "$(SolutionExt) macro", "PlatformName macro $(PlatformName)", "IntDir macro $(IntDir)", "$(FrameworkVersion) macro", "$(ProjectDir) macro", "build macros [C++]", "InputPath macro $(InputPath)", "$(VSInstallDir) macro", "$(WebDeployPath) macro", "TargetFileName macro $(TargetFileName)", "NoInherit macro $(NoInherit)", "ConfigurationName macro $(ConfigurationName)", "$(ProjectExt) macro", "TargetDir macro $(TargetDir)", "InputName macro $(InputName)", "$(ProjectName) macro", "FrameworkSDKDir macro $(FrameworkSDKDir)", "$(ParentName) macro", "InputExt macro $(InputExt)", "$(SafeRootNamespace) macro", "InputDir macro $(InputDir)", "$(FxCopDir) macro", "$(RemoteMachine) macro", "Inherit macro $(Inherit)", "FrameworkVersion macro $(FrameworkVersion)", "$(StopEvaluating) macro", "$(OutDir) macro", "FrameworkDir macro $(FrameworkDir)", "SolutionFileName macro $(SolutionFileName)", "$(NoInherit) macro", "RemoteMachine macro $(RemoteMachine)", "properties [C++], build property macros", "$(TargetName) macro", "$(SolutionName) macro", "$(InputPath) macro", "ParentName macro $(ParentName)", "OutDir macro $(OutDir)", "SafeRootNamespace macro $(SafeRootNamespace)", "FxCopDir macro $(FxCopDir)", "$(InputName) macro", "RootNamespace macro $(RootNamespace)", "builds [C++], macros", "$(FrameworkDir) macro", "$(PlatformName) macro", "$(PlatformShortName) macro","SolutionPath macro $(SolutionPath)"]
ms.assetid: 239bd708-2ea9-4687-b264-043f1febf98b
---
# Common macros for MSBuild commands and properties

Depending on your installation options, Visual Studio can make hundreds of macros available to you in a Visual Studio project (based on MSBuild). They correspond to the MSBuild properties that are set by default, or in .props or .targets files, or in your project settings. You can use these macros anywhere in a project's **Property Pages** dialog box where strings are accepted. These macros aren't case-sensitive.

## View the current properties and macros

To display all of the currently available macros, in the **Property Pages** dialog, under **VC++ Directories**, choose the drop-down arrow at the end of a property row. Click on **Edit** and then in the edit dialog box, choose the **Macros** button. The current set of properties and macros visible to Visual Studio is listed along with the current value for each. For more information, see the **Specifying User-Defined Values** section of [C++ project property page reference](property-pages-visual-cpp.md).

![VC++ macros button](../media/vcppdir_libdir_macros.png "Macros menu")

## List of common macros

This table describes a commonly used subset of the available macros; there are many more not listed here. Go to the **Macros** dialog to see all of the properties and their current values in your project. For details on how MSBuild property definitions are created and used as macros in .props, .targets, and .vcxproj files, see [MSBuild Properties](/visualstudio/msbuild/msbuild-properties).

|Macro|Description|
|-----------|-----------------|
|**$(Configuration)**|The name of the current project configuration, for example, "Debug".|
|**$(DevEnvDir)**|The installation directory of Visual Studio (defined as drive + path); includes the trailing backslash '\\'.|
|**$(FrameworkDir)**|The directory into which the .NET Framework was installed.|
|**$(FrameworkSDKDir)**|The directory into which you installed the .NET Framework. The .NET Framework could have been installed as part of Visual Studio or separately.|
|**$(FrameworkVersion)**|The version of the .NET Framework used by Visual Studio. Combined with **$(FrameworkDir)**, the full path to the version of the .NET Framework use by Visual Studio.|
|**$(FxCopDir)**|The path to the fxcop.cmd file. The fxcop.cmd file is not installed with all Visual Studio editions.|
|**$(IntDir)**|Path to the directory specified for intermediate files. If it's a relative path, intermediate files go to this path appended to the project directory. This path should have a trailing slash. It resolves to the value for the **Intermediate Directory** property. Don't use **$(OutDir)** to define this property.|
|**$(OutDir)**|Path to the output file directory. If it's a  relative path, output files go to this path appended to the project directory. This path should have a trailing slash. It resolves to the value for the **Output Directory** property. Don't use **$(IntDir)** to define this property.|
|**$(Platform)**|The name of current project platform, for example, "Win32".|
|**$(PlatformShortName)**|The short name of current architecture, for example, "x86" or "x64".|
|**$(ProjectDir)**|The directory of the project (defined as drive + path); includes the trailing backslash '\\'.|
|**$(ProjectExt)**|The file extension of the project. It includes the '.' before the file extension.|
|**$(ProjectFileName)**|The file name of the project (defined as base name + file extension).|
|**$(ProjectName)**|The base name of the project.|
|**$(ProjectPath)**|The absolute path name of the project (defined as drive + path + base name + file extension).|
|**$(PublishDir)**|The output location for the publish target; includes the trailing backslash '\\'. Defaults to the **$(OutDir)app.publish\\** folder.|
|**$(RemoteMachine)**|Set to the value of the **Remote Machine** property on the Debug property page. See [Changing Project Settings for a C/C++ Debug Configuration](/visualstudio/debugger/project-settings-for-a-cpp-debug-configuration) for more information.|
|**$(RootNameSpace)**|The namespace, if any, containing the application.|
|**$(SolutionDir)**|The directory of the solution (defined as drive + path); includes the trailing backslash '\\'. Defined only when building a solution in the IDE.|
|**$(SolutionExt)**|The file extension of the solution. It includes the '.' before the file extension. Defined only when building a solution in the IDE.|
|**$(SolutionFileName)**|The file name of the solution (defined as base name + file extension). Defined only when building a solution in the IDE.|
|**$(SolutionName)**|The base name of the solution. Defined only when building a solution in the IDE.|
|**$(SolutionPath)**|The absolute path name of the solution (defined as drive + path + base name + file extension). Defined only when building a solution in the IDE.|
|**$(TargetDir)**|The directory of the primary output file for the build (defined as drive + path); includes the trailing backslash '\\'.|
|**$(TargetExt)**|The file extension of the primary output file for the build. It includes the '.' before the file extension.|
|**$(TargetFileName)**|The file name of the primary output file for the build (defined as base name + file extension).|
|**$(TargetName)**|The base name of the primary output file for the build.|
|**$(TargetPath)**|The absolute path name of the primary output file for the build (defined as drive + path + base name + file extension).|
|**$(VCInstallDir)**|The directory that contains the C++ content of your Visual Studio installation. This property contains the version of the targeted Microsoft C++ (MSVC) toolset, which might be different that the host Visual Studio. For example, when building with `$(PlatformToolset) = v140`, **$(VCInstallDir)** contains the path to the Visual Studio 2015 installation.|
|**$(VSInstallDir)**|The directory into which you installed Visual Studio. This property contains the version of the targeted Visual Studio toolset, which might be different that the host Visual Studio. For example, when building with `$(PlatformToolset) = v110`, **$(VSInstallDir)** contains the path to the Visual Studio 2012 installation.|
|**$(WebDeployPath)**|The relative path from the web deployment root to where the project outputs belong.|
|**$(WebDeployRoot)**|The absolute path to the location of **\<localhost>**. For example, c:\inetpub\wwwroot.|

## Obsolete macros

The build system for C++ was significantly changed between Visual Studio 2008 and Visual Studio 2010. Many macros used in earlier project types have been changed to new ones. These macros are no longer used or have been replaced by one or more equivalent properties or [item metadata macro](/visualstudio/msbuild/itemmetadata-element-msbuild) (**%(**_name_**)**) values. Macros that are marked "migrated" can be updated by the project migration tool. If the project that contains the macro is migrated from Visual Studio 2008 or earlier to Visual Studio 2010, Visual Studio converts the macro to the equivalent current macro. Later versions of Visual Studio can't convert projects from Visual Studio 2008 and earlier to the new project type. You must convert these projects in two steps; first convert them to Visual Studio 2010, and then convert the result to your newer version of Visual Studio. For more information, see [Overview of potential upgrade issues](../../porting/overview-of-potential-upgrade-issues-visual-cpp.md).

|Macro|Description|
|-----------|-----------------|
|**$(InputDir)**|(Migrated.) The directory of the input file (defined as drive + path); includes the trailing backslash '\\'. If the project is the input, then this macro is equivalent to **$(ProjectDir)**.|
|**$(InputExt)**|(Migrated.) The file extension of the input file. It includes the '.' before the file extension. If the project is the input, then this macro is equivalent to **$(ProjectExt)**. For source files, this is **%(Extension)**.|
|**$(InputFileName)**|(Migrated.) The file name of the input file (defined as base name + file extension). If the project is the input, then this macro is equivalent to **$(ProjectFileName)**. For source files, this is **%(Identity)**.|
|**$(InputName)**|(Migrated.) The base name of the input file. If the project is the input, then this macro is equivalent to **$(ProjectName)**. For source files, this is **%(Filename)**.|
|**$(InputPath)**|(Migrated.) The absolute path name of the input file (defined as drive + path + base name + file extension). If the project is the input, then this macro is equivalent to **$(ProjectPath)**. For source files, this is **%(FullPath)**.|
|**$(ParentName)**|Name of the item containing this project item. This will be the parent folder name, or project name.|
|**$(SafeInputName)**|The name of the file as a valid class name, minus file extension. This property does not have an exact equivalent.|
|**$(SafeParentName)**|The name of the immediate parent in valid name format. For example, a form is the parent of a .resx file. This property does not have an exact equivalent.|
|**$(SafeRootNamespace)**|The namespace name in which the project wizards will add code. This namespace name will only contain characters that would be permitted in a valid C++ identifier. This property does not have an exact equivalent.|

## See also

[Visual Studio Projects - C++](../creating-and-managing-visual-cpp-projects.md)\
[Visual C++ porting and upgrading guide](../../porting/visual-cpp-porting-and-upgrading-guide.md)\
[Overview of potential upgrade issues](../../porting/overview-of-potential-upgrade-issues-visual-cpp.md)
