---
description: "Learn more about: MSBuild reference for C++ projects"
title: "MSBuild reference for C++ projects in Visual Studio"
ms.date: "12/08/2018"
helpviewer_keywords: ["MSBuild reference [C++]"]
---
# MSBuild reference for C++ projects

MSBuild is the native build system for all projects in Visual Studio, including C++ projects. When you build a project in the Visual Studio integrated development environment (IDE), it invokes the msbuild.exe tool, which in turn consumes the .vcxproj project file, and various .targets and .props files. In general, we strongly recommend using the Visual Studio IDE to set project properties and invoke MSBuild. Manually editing project files can lead to serious problems if not done correctly.

If for some reason you wish to use MSBuild directly from the command line, see [Use MSBuild from the command line](../msbuild-visual-cpp.md). For more information about MSBuild in general, see [MSBuild](/visualstudio/msbuild/msbuild) in the Visual Studio documentation.

## In this section

[MSBuild internals for C++ projects](msbuild-visual-cpp-overview.md)<br/>
Information about how properties and targets are stored and consumed.

[Common macros for build commands and properties](common-macros-for-build-commands-and-properties.md)<br/>
Describes macros (compile-time constants) that can be used to define properties such as paths and product versions.

[File types created for C++ projects](file-types-created-for-visual-cpp-projects.md)<br/>
Describes the various kinds of files that Visual Studio creates for different project types.

[Visual Studio C++ project templates](visual-cpp-project-types.md)<br>
Describes the MSBuild-based project types that are available for C++.

[C++ new item templates](using-visual-cpp-add-new-item-templates.md)<br>
Describes source files and other items you can add to a Visual Studio project.

[Precompiled header files](../creating-precompiled-header-files.md)
How to use precompiled header files and how to create your own custom precompiled code to speed up build times.

[Visual Studio project property reference](property-pages-visual-cpp.md)<br/>
Reference documentation for project properties that are set in the Visual Studio IDE.

## See also

[C/C++ Building Reference](c-cpp-building-reference.md)
