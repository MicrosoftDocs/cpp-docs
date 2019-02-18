---
title: "Creating a C++ Makefile Project"
ms.date: "10/19/2018"
f1_keywords: ["vc.appwiz.makefile.project"]
helpviewer_keywords: ["Makefile projects, creating", "project files [C++], Makefile projects"]
ms.assetid: dd077af3-97a8-48fb-baaa-cf7e07ddef61
---
# Creating a C++ Makefile Project

A *makefile* is a text file that contains instructions for how to compile and link (or *build*) a set of C++ source code files. A *make* program reads the makefile and invokes a compiler, linker and possibly other programs to make an executable file. Microsoft's implementation of the *make* program is called **NMAKE**. (Visual Studio by default uses the MSBuild system based on .vcxproj files; this is what is created by **File | New | Project**.)

If you have an existing makefile project, you have these choices if you want to code and/or debug it in the Visual Studio IDE:

- Create a Makefile Project in Visual Studio that uses your existing makefile to build your code in the IDE. (You will not have all the IDE features that you get with a native MSBuild project.) See [To create a makefile project](#create_a_makefile_project) below.
- Use the **Create New Project from Existing Code Files** wizard to create a native MSBuild project from your source code. For more information, see [How to: Create a C++ Project from Existing Code](how-to-create-a-cpp-project-from-existing-code.md).
- **Visual Studio 2017 and later**: Use the **Open Folder** feature to open a makefile project without converting it to MSBuild. For more information, see [Open Folder projects in Visual C++](non-msbuild-projects.md).

## <a name="create_a_makefile_project"> To create a Makefile project with the makefile project template

In Visual Studio 2017 and later, the Makefile project template is available when the C++ Desktop Development workload is installed.

Follow the wizard to specify the commands and environment used by your makefile. You can then use this project to build your code in the Visual Studio development environment.

By default, the makefile project displays no files in Solution Explorer. The makefile project specifies the build settings, which are reflected in the project's property page.

The output file that you specify in the project has no effect on the name that the build script generates; it declares only an intention. Your makefile still controls the build process and specifies the build targets.

1. From the Visual Studio start page, type "makefile" in the **New Project** search box. Or, in the **New Project** dialog box, expand **Visual C++** > **General** (Visual Studio 2015) or **Other** (Visual Studio 2017) and then select **Makefile Project** in the Templates pane to open the project wizard.

1. In the [Application Settings](../ide/application-settings-makefile-project-wizard.md) page, provide the command, output, clean, and rebuild information for debug and retail builds.

1. Click **Finish** to close the wizard and open the newly created project in **Solution Explorer**.

You can view and edit the project's properties in its property page. See [Setting Visual C++ Project Properties](../ide/working-with-project-properties.md) for information about displaying the property page.

## See also

[Makefile Project Wizard](../ide/makefile-project-wizard.md)<br/>
[Special Characters in a Makefile](../build/special-characters-in-a-makefile.md)<br/>
[Contents of a Makefile](../build/contents-of-a-makefile.md)<br/>
