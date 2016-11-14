---
title: "Build System Changes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.msbuild.changes"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Build system changes, project file (.vcxprog)"
  - "Build system changes, custom build rules"
  - "Build system changes, MSBuild"
  - "MSBuild, build system changes"
  - "Build system changes, .vsprops"
  - "Build system changes, $(Inherit)"
  - "Build system changes, $(NoInherit)"
ms.assetid: e564d95f-a6cc-4d97-b57e-1a71daf66f4a
caps.latest.revision: 13
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
# Build System Changes
The MSBuild system is used to build Visual C++ projects. However, in Visual Studio 2008 and earlier releases, the VCBuild system was used. Certain file types and concepts that depended on VCBuild either do not exist or are represented differently in the current system. This document discusses the differences in the current build system.  
  
## .vcproj is now .vcxproj  
 Project files no longer use the .vcproj file name extension. Visual Studio automatically converts project files that were created by an earlier release of Visual C++ to the format that is used by the current system. For more information about how to manually upgrade a project, see [/Upgrade (devenv.exe)](/visualstudio/ide/reference/upgrade-devenv-exe).  
  
 In the current release, the file name extension for a project file is .vcxproj.  
  
## .vsprops is now .props  
 In earlier releases, a *project property sheet* is an XML-based file that has a .vsprops file name extension. A project property sheet lets you specify switches for build tools such as the compiler or linker and create user-defined macros.  
  
 In the current release, the file name extension for a project property sheet is .props.  
  
## Custom Build Rules and .rules Files  
 In earlier releases, a *rule file* is an XML-based file that has a .rules file name extension. A rule file lets you define custom build rules and incorporate them into the build process of a Visual C++ project. A custom build rule, which can be associated with one or more file name extensions, lets you pass input files to a tool that creates one or more output files.  
  
 In this release, custom build rules are represented by three file types, .xml, .props, and .targets, instead of a .rules file. When a .rules file that was created by using an earlier release of Visual C++ is migrated to the current release, equivalent .xml, .props, and .targets files are created and stored in your project together with the original .rules file.  
  
> [!IMPORTANT]
>  In the current release, the [!INCLUDE[TLA2#tla_ide](../build/includes/tla2sharptla_ide_md.md)] does not support the creation of new rules. For that reason, the easiest way to use a rule file from a project that was created by using an earlier release of Visual C++ is to migrate the project to the current release.  
  
## Inheritance Macros  
 In earlier releases, the **$(Inherit)** macro specifies the order in which inherited properties appear on the command line that is composed by the project build system. The **$(NoInherit)** macro causes any occurrences of $(Inherit) to be ignored and causes any properties that would otherwise be inherited, not to be inherited. For example, by default the $(Inherit) macro causes files specified by using the [/I (Additional Include Directories)](../build/reference/i-additional-include-directories.md) compiler option to be appended to the command line.  
  
 In the current release, inheritance is supported by specifying the value of a property as the concatenation of one or more literal values and property macros. The **$(Inherit)** and **$(NoInherit)** macros are not supported.  
  
 In the following example, a semicolon-delimited list is assigned to a property on a property page. The list consists of the concatenation of the *\<value>* literal and the value of the `MyProperty` property, which is accessed by using the macro notation, **$(***MyProperty***)**.  
  
```  
Property=<value>;$(MyProperty)  
```  
  
## .vcxproj.user Files  
 A user file (.vcxproj.user) stores user-specific properties, for example, debugging and deployment settings. The vcxproj.user file applies to all projects for a particular user.  
  
## .vcxproj.filters File  
 When **Solution Explorer** is used to add a file to a project, the filters file (.vcxproj.filters) defines where in the **Solution Explorer** tree view the file is added, based on its file name extension.  
  
## VC++ Directories Settings  
 Visual C++ directories settings are specified on the [VC++ Directories Property Page](../ide/vcpp-directories-property-page.md). In earlier releases of Visual Studio, directories settings apply per-user and the list of excluded directories is specified in the sysincl.dat file.  
  
 You cannot change the VC++ directories settings if you run [devenv /resetsettings](/visualstudio/ide/reference/resetsettings-devenv-exe) at the command line. You also cannot change the settings if you open the **Tools** menu, click **Import and Export Settings**, and then select the **Reset all settings** option.  
  
 Migrate VC++ directories settings from a .vssettings file that is created by an earlier release of Visual C++. Open the **Tools** menu, click **Import and Export Settings**, select **Import selected environment settings**, and then follow the directions in the wizard. Or when you start Visual Studio for the first time, on the **Choose Default Environment Settings** dialog box, select **Migrate my eligible settings from a previous version and apply them in addition to the default settings selected below**.  
  
## See Also  
 [MSBuild (Visual C++)](../build/msbuild-visual-cpp.md)