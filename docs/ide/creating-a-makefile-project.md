---
title: "Creating a Makefile Project | Microsoft Docs"
ms.custom: ""
ms.date: "02/28/2018"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
f1_keywords: ["vc.appwiz.makefile.project"]
dev_langs: ["C++"]
helpviewer_keywords: ["Makefile projects, creating", "project files [C++], Makefile projects"]
ms.assetid: dd077af3-97a8-48fb-baaa-cf7e07ddef61
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Creating a Makefile Project

If you have an existing source code project that you build from the command line by using a makefile, the Visual Studio development environment has several ways of turning it into a project that can take full advantage of Visual Studio IDE features. This article describes how to create a Makefile Project in Visual Studio that uses your existing makefile to build your code in the IDE. Alternatively, you can use the **Create New Project from Existing Code Files** wizard to create a native MSBuild project from your source code. For more information, see [How to: Create a C++ Project from Existing Code](how-to-create-a-cpp-project-from-existing-code.md). Starting in Visual Studio 2017, you can also use the **Open Folder** feature, which can use several existing build systems as if they were native Visual Studio projects. For more information, see [Open Folder projects in Visual C++](non-msbuild-projects.md).

To use Visual Studio to open and build your source code by using your existing makefile, you first create a new project by selecting the MakeFile project template. A wizard helps you specify the commands and environment used by your makefile. You can then use this project to build your code in the Visual Studio development environment.

By default, the makefile project displays no files in Solution Explorer. The makefile project specifies the build settings, which are reflected in the project's property page.

The output file that you specify in the project has no effect on the name that the build script generates; it declares only an intention. Your makefile still controls the build process and specifies the build targets.

## To create a Makefile project

1. Follow the instructions in the help topic [Creating a Project with a Visual C++ Application Wizard](../ide/creating-desktop-projects-by-using-application-wizards.md).

1. In the **New Project** dialog box, expand **Visual C++** > **General** and then select **Makefile Project** in the Templates pane to open the project wizard.

1. In the [Application Settings](../ide/application-settings-makefile-project-wizard.md) page, provide the command, output, clean, and rebuild information for debug and retail builds.

1. Click **Finish** to close the wizard and open the newly created project in **Solution Explorer**.

You can view and edit the project's properties in its property page. See [Setting Visual C++ Project Properties](../ide/working-with-project-properties.md) for information about displaying the property page.

## See Also

[Makefile Project Wizard](../ide/makefile-project-wizard.md)<br/>
[Special Characters in a Makefile](../build/special-characters-in-a-makefile.md)<br/>
[Contents of a Makefile](../build/contents-of-a-makefile.md)<br/>
