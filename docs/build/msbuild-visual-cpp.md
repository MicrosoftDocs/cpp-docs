---
description: "Learn more about: MSBuild on the command line - C++"
title: "MSBuild on the command line - C++"
ms.date: "12/12/2018"
helpviewer_keywords: ["MSBuild"]
ms.assetid: 7a1be7ff-0312-4669-adf2-5f5bf507d560
---
# MSBuild on the command line - C++

In general, we recommend that you use Visual Studio to set project properties and invoke the MSBuild system. However, you can use the **MSBuild** tool directly from the command prompt. The build process is controlled by the information in a project file (.vcxproj) that you can create and edit. The project file specifies build options based on build stages, conditions, and events. In addition, you can specify zero or more command-line *options* arguments.

> **msbuild.exe** [ *project_file* ] [ *options* ]

Use the **/target** (or **/t**) and **/property** (or **/p**) command-line options to override specific properties and targets that are specified in the project file.

An essential function of the project file is to specify a *target*, which is a particular operation applied to your project, and the inputs and outputs that are required to perform that operation. A project file can specify one or more targets, which can include a default target.

Each target consists of a sequence of one or more *tasks*. Each task is represented by a .NET Framework class that contains one executable command. For example, the [CL task](/visualstudio/msbuild/cl-task) contains the [cl.exe](reference/compiling-a-c-cpp-program.md) command.

A *task parameter* is a property of the class task and typically represents a command-line option of the executable command. For example, the `FavorSizeOrSpeed` parameter of the `CL` task corresponds to the **/Os** and **/Ot** compiler options.

Additional task parameters support the MSBuild infrastructure. For example, the `Sources` task parameter specifies a set of tasks that can be consumed by other tasks. For more information about MSBuild tasks, see [Task Reference](/visualstudio/msbuild/msbuild-task-reference).

Most tasks require inputs and outputs, such as file names, paths, and string, numeric, or Boolean parameters. For example, a common input is the name of a .cpp source file to compile. An important input parameter is a string that specifies the build configuration and platform, for example, "Debug\|Win32". Inputs and outputs are specified by one or more user-defined XML `Item` elements contained in an `ItemGroup` element.

A project file can also specify user-defined *properties* and `ItemDefinitionGroup` *items*. Properties and items form name/value pairs that can be used as variables in the build. The name component of a pair defines a *macro*, and the value component declares the *macro value*. A property macro is accessed by using $(*name*) notation, and an item macro is accessed by using %(*name*) notation.

Other XML elements in a project file can test macros, and then conditionally set the value of any macro or control the execution of the build. Macro names and literal strings can be concatenated to generate constructs such as a path and file name. On the command line, the **/property** option sets or overrides a project property. Items cannot be referenced on the command line.

The MSBuild system can conditionally execute a target before or after another target. Also, the system can build a target based on whether the files that the target consumes are newer than the files it emits.

For more information about MSBuild, see:

- [MSBuild](/visualstudio/msbuild/msbuild)
Overview of MSBuild concepts.

- [MSBuild Reference](/visualstudio/msbuild/msbuild-reference)
Reference information about the MSBuild system.

- [Project File Schema Reference](/visualstudio/msbuild/msbuild-project-file-schema-reference)
Lists the MSBuild XML Schema elements, together with their attributes, and parent and child elements. Especially note the [ItemGroup](/visualstudio/msbuild/itemgroup-element-msbuild), [PropertyGroup](/visualstudio/msbuild/propertygroup-element-msbuild), [Target](/visualstudio/msbuild/target-element-msbuild), and [Task](/visualstudio/msbuild/task-element-msbuild) elements.

- [Command-Line Reference](/visualstudio/msbuild/msbuild-command-line-reference)
Describes the command-line arguments and options that you can use with msbuild.exe.

- [Task Reference](/visualstudio/msbuild/msbuild-task-reference)
Describes MSBuild tasks. Especially note these tasks, which are specific to Visual C++: [BscMake Task](/visualstudio/msbuild/bscmake-task), [CL Task](/visualstudio/msbuild/cl-task), [CPPClean Task](/visualstudio/msbuild/cppclean-task), [LIB Task](/visualstudio/msbuild/lib-task), [Link Task](/visualstudio/msbuild/link-task), [MIDL Task](/visualstudio/msbuild/midl-task), [MT Task](/visualstudio/msbuild/mt-task), [RC Task](/visualstudio/msbuild/rc-task), [SetEnv Task](/visualstudio/msbuild/setenv-task), [VCMessage Task](/visualstudio/msbuild/vcmessage-task)

## In This Section

|Term|Definition|
|----------|----------------|
|[Walkthrough: Using MSBuild to Create a C++ Project](walkthrough-using-msbuild-to-create-a-visual-cpp-project.md)|Demonstrates how to create a Visual Studio C++ project using **MSBuild**.|
|[How to: Use Build Events in MSBuild Projects](how-to-use-build-events-in-msbuild-projects.md)|Demonstrates how to specify an action that occurs at a particuler stage in the build: before the build starts; before the link step starts; or after the build ends.|
|[How to: Add a Custom Build Step to MSBuild Projects](how-to-add-a-custom-build-step-to-msbuild-projects.md)|Demonstrates how to add a user-defined stage to the build sequence.|
|[How to: Add Custom Build Tools to MSBuild Projects](how-to-add-custom-build-tools-to-msbuild-projects.md)|Demonstrates how to associate a build tool with a particular file.|
|[How to: Integrate Custom Tools into the Project Properties](how-to-integrate-custom-tools-into-the-project-properties.md)|Demonstrates how to add options for a custom tool to the project properties.|
|[How to: Modify the Target Framework and Platform Toolset](how-to-modify-the-target-framework-and-platform-toolset.md)|Demonstrates how to compile a project for multiple frameworks or toolsets.|

## See also

[Use the MSVC toolset from the command line](building-on-the-command-line.md)
