---
title: "VCBuild vs. MSBuild"
description: "The VIsual Studio C++ build system changed from VCBuild to MSBuild in Visual Studio 2010."
ms.date: "10/25/2019"
helpviewer_keywords: ["Build system changes, project file (.vcxprog)", "Build system changes, custom build rules", "Build system changes, MSBuild", "MSBuild, build system changes", "Build system changes, .vsprops", "Build system changes, $(Inherit)", "Build system changes, $(NoInherit)"]
ms.assetid: e564d95f-a6cc-4d97-b57e-1a71daf66f4a
---
# VCBuild vs. MSBuild: Build system changes in Visual Studio 2010

The MSBuild system for C++ projects was introduced in Visual Studio 2010. In Visual Studio 2008 and earlier releases, the VCBuild system was used. Certain file types and concepts that depended on VCBuild either do not exist or are represented differently in MSBuild. This document discusses the differences in the current build system. To convert a Visual Studio 2008 project to MSBuild, you must use Visual Studio 2010. After the project is converted, you should use the latest version of Visual Studio to upgrade to the current IDE and compiler toolset. For more information, including how to obtain Visual Studio 2010, see [Instructions for Visual Studio 2008](use-native-multi-targeting.md#instructions-for-visual-studio-2008).

The following sections summarize the changes from VCBuild to MSBuild. If your VCBuild project has custom build rules or macros that aren't recognized by MSBuild, see [Visual Studio Projects - C++](../build/creating-and-managing-visual-cpp-projects.md) to learn how to translate those instructions to the MSBuild system. The initial conversion from VCBuild to MSBuild is just an intermediate step. It isn't necessary to get the project file completely correct or to get the program to compile without errors. You are only using Visual Studio 2010 to convert the project to MSBuild format so that you get the project working in the latest version of Visual Studio.

## .vcproj is now .vcxproj

Project files no longer use the .vcproj file name extension. Visual Studio 2010 automatically converts project files that were created by an earlier release of Visual C++ to the MSBuild format, which uses the .vcxproj extension for project files.

## .vsprops is now .props

In Visual Studio 2008 and earlier, a *project property sheet* is an XML-based file that has a .vsprops file name extension. A project property sheet lets you specify switches for build tools such as the compiler or linker and create user-defined macros. In MSBuild, the file name extension for a project property sheet is .props.

## Custom build rules and .rules files

In Visual Studio 2008 and earlier, a *rule file* is an XML-based file that has a .rules file name extension. A rule file lets you define custom build rules and incorporate them into the build process of a Visual Studio C++ project. A custom build rule, which can be associated with one or more file name extensions, lets you pass input files to a tool that creates one or more output files.

In the MSBuild system, custom build rules are represented by three file types, .xml, .props, and .targets, instead of a .rules file. When a .rules file that was created by using an earlier release of Visual C++ is migrated to Visual Studio 2010, equivalent .xml, .props, and .targets files are created and stored in your project together with the original .rules file.

> [!IMPORTANT]
> In Visual Studio 2010, the IDE does not support the creation of new rules. For that reason, the easiest way to use a rule file from a project that was created by using an earlier release of Visual C++ is to migrate the project to Visual Studio 2010.

## Inheritance macros

In Visual Studio 2008 and earlier, the **$(Inherit)** macro specifies the order in which inherited properties appear on the command line that is composed by the project build system. The **$(NoInherit)** macro causes any occurrences of $(Inherit) to be ignored and causes any properties that would otherwise be inherited, not to be inherited. For example, by default the $(Inherit) macro causes files specified by using the [/I (Additional Include Directories)](../build/reference/i-additional-include-directories.md) compiler option to be appended to the command line.

In Visual Studio 2010, inheritance is supported by specifying the value of a property as the concatenation of one or more literal values and property macros. The **$(Inherit)** and **$(NoInherit)** macros are not supported.

In the following example, a semicolon-delimited list is assigned to a property on a property page. The list consists of the concatenation of the *\<value>* literal and the value of the `MyProperty` property, which is accessed by using the macro notation, **$(**<em>MyProperty</em>**)**.

```
Property=<value>;$(MyProperty)
```

## .vcxproj.user files

A user file (.vcxproj.user) stores user-specific properties, for example, debugging and deployment settings. The *vcxproj.user* file applies to all projects for a particular user.

## .vcxproj.filters file

When **Solution Explorer** is used to add a file to a project, the filters file (*.vcxproj.filters*) defines where in the **Solution Explorer** tree view the file is added, based on its file name extension.

## VC++ Directories settings

Visual C++ directories settings are specified on the [VC++ Directories Property Page](../build/reference/vcpp-directories-property-page.md). In Visual Studio 2008 and earlier, directories settings apply per-user and the list of excluded directories is specified in the *sysincl.dat* file.

You cannot change the VC++ directories settings if you run [devenv /resetsettings](/visualstudio/ide/reference/resetsettings-devenv-exe) at the command line. You also cannot change the settings if you open the **Tools** menu, click **Import and Export Settings**, and then select the **Reset all settings** option.

To migrate VC++ directories settings from a *.vssettings* file that was created by an earlier release of Visual Studio:

1. Open the **Tools** menu, click **Import and Export Settings**
2. Select **Import selected environment settings**
3. Follow the directions in the wizard.

## See also

[MSBuild on the Command Line - C++](../build/msbuild-visual-cpp.md)
