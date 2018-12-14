---
title: "How to: Create a C++ Project from Existing Code"
ms.date: "12/10/2018"
helpviewer_keywords: ["C++, creating projects from existing code"]
ms.assetid: e328a938-395c-48ea-9e35-dd433de12b31
---
# How to: Create a C++ Project from Existing Code

In Visual Studio, you can port your existing code files into a Visual C++ project by using the **Create New Project From Existing Code Files** wizard. This wizard is not available in older Express editions of Visual Studio. This wizard creates a new solution and project that uses the MSBuild system to manage your source files and build configuration.

Porting your existing code files into a Visual C++ project enables you to use all of the native MSBuild project management features built into the IDE. If you prefer to use your existing build system, such as nmake makefiles, CMake, or alternatives, you can use the Open Folder option instead. For more information, see [Open Folder projects in Visual C++](non-msbuild-projects.md). Both options let you use IDE features such as [IntelliSense](/visualstudio/ide/using-intellisense) and [Project Properties](working-with-project-properties.md).

### To create a C++ project from existing code

1. On the **File** menu, point to **New**, and then click **Project From Existing Code**.

1. On the first page of the **Create New Project from Existing Code Files** wizard, select **Visual C++** in the **What type of project would you like to create** list. Choose **Next** to continue.

1. Specify your project location and the directory for your source files. For details on this page, see [Specify Project Location and Source Files, Create New Project From Existing Code Files Wizard](specify-project-location-and-source-files.md). Choose **Next** to continue.

1. Specify the project settings to use. For details on this page, see [Specify Project Settings, Create New Project From Existing Code Files Wizard](specify-project-settings-create-new-project-from-existing-code-files-wizard.md). Choose **Next** to continue.

1. Specify the Debug configuration settings to use. For details on this page, see [Specify Debug Configuration Settings, Create New Project From Existing Code Files Wizard](specify-debug-configuration-settings.md). Choose **Next** to continue.

1. Specify the Release configuration settings to use. For details on this page, see [Specify Release Configuration Settings, Create New Project From Existing Code Files Wizard](specify-release-configuration.md). Choose **Finish** to generate the new project.

## In this section

[Specify Project Location and Source Files, Create New Project From Existing Code Files Wizard](specify-project-location-and-source-files.md)<br/>
[Specify Project Settings, Create New Project From Existing Code Files Wizard](specify-project-settings-create-new-project-from-existing-code-files-wizard.md)<br/>
[Specify Debug Configuration Settings, Create New Project From Existing Code Files Wizard](specify-debug-configuration-settings.md)<br/>
[Specify Release Configuration Settings, Create New Project From Existing Code Files Wizard](specify-release-configuration.md)<br/>