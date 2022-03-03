---
description: "Learn more about: Create a makefile project"
title: "Create a C++ makefile project in Visual Studio"
ms.date: 09/30/2021
f1_keywords: ["vc.appwiz.makefile.project"]
helpviewer_keywords: ["Makefile projects [C++]"]
---
# Create a C++ makefile project

A *makefile* is a text file that contains instructions for how to compile and link (or *build*) a set of source code files. A program (often called a *make* program) reads the makefile and invokes a compiler, linker, and possibly other programs to make an executable file. The Microsoft program is called [NMAKE](nmake-reference.md).

If you have an existing makefile project, you have these choices if you want to edit, build, and debug in the Visual Studio IDE:

- Create a makefile project in Visual Studio that uses your existing makefile to configure a .vcxproj file that Visual Studio will use for IntelliSense. (You won't have all the IDE features that you get with a native MSBuild project.) See [To create a makefile project](#create_a_makefile_project) below.
- Use the **Create New Project from Existing Code Files** wizard to create a native MSBuild project from your source code. The original makefile won't be used anymore. For more information, see [How to: Create a C++ Project from Existing Code](../how-to-create-a-cpp-project-from-existing-code.md).
- **Visual Studio 2017 and later**: Use the **Open Folder** feature to edit and build a makefile project as-is without any involvement of the MSBuild system. For more information, see [Open Folder projects for C++](../open-folder-projects-cpp.md).
- **Visual Studio 2019 and later**: Create a UNIX makefile project for Linux.

## <a name="create_a_makefile_project"> To create a makefile project with the makefile project template

In Visual Studio 2017 and later, the Makefile project template is available when the C++ Desktop Development workload is installed.

Follow the wizard to specify the commands and environment used by your makefile. You can then use this project to build your code in Visual Studio.

By default, the makefile project displays no files in Solution Explorer. The makefile project specifies the build settings, which are reflected in the project's property page.

The output file that you specify in the project has no effect on the name that the build script generates. It declares only an intention. Your makefile still controls the build process and specifies the build targets.

::: moniker range=">=msvc-160"

### To create a makefile project in Visual Studio

1. From the Visual Studio main menu, choose **File** > **New** > **Project** and type "makefile" into the search box. If you see more than one project template, select from the options depending on your target platform.

1. **Windows only**: In the Makefile project **Debug Configuration Settings** page, provide the command, output, clean, and rebuild information for debug and retail builds. Choose **Next** if you want to specify different settings for a Release configuration.

1. Choose **Finish** to close the dialog and open the newly created project in **Solution Explorer**.

::: moniker-end

::: moniker range="<=msvc-150"

### To create a makefile project in Visual Studio 2015 or Visual Studio 2017

1. From the Visual Studio start page, type "makefile" in the **New Project** search box. Or, in the **New Project** dialog box, expand **Visual C++** > **General** (Visual Studio 2015) or **Other** (Visual Studio 2017) and then select **Makefile Project** in the Templates pane to open the project wizard.

1. In the **Application Settings** page, provide the command, output, clean, and rebuild information for debug and retail builds.

1. Choose **Finish** to close the wizard and open the newly created project in **Solution Explorer**.

::: moniker-end

You can view and edit the project's properties in its property page. For more information about displaying the property page, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

## Makefile project wizard

After you create a makefile project, you can view and edit each of the following options in the **Nmake** page of the project's property page.

- **Build command line:** Specifies the command line to run when the user selects Build from the Build menu. Displayed in the Build command line field on the Nmake page of the project's property page.

- **Output:** Specifies the name of the file that will contain the output for the command line. By default, this option is based on the project name. Displayed in the Output field on the Nmake page of the project's property page.

- **Clean commands:** Specifies the command line to run when the user selects Clean from the Build menu. Displayed in the Clean command line field on the Nmake page of the project's property page.

- **Rebuild command line:** Specifies the command line to run when the user selects Rebuild from the Build menu. Displayed in the Rebuild all command line field on the Nmake page of the project's property page.

## How to: Enable IntelliSense for Makefile Projects

IntelliSense fails in makefile projects when certain project settings or compiler options are set up incorrectly. Follow these steps to configure makefile projects so that IntelliSense works as expected:

1. Open the **Property Pages** dialog box. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **NMake** property page.

1. Modify properties under **IntelliSense** as appropriate:

   - Set the **Preprocessor Definitions** property to define any preprocessor symbols in your makefile project. For more information, see [`/D` (Preprocessor Definitions)](d-preprocessor-definitions.md).

   - Set the **Include Search Path** property to specify the list of directories that the compiler will search to resolve file references that are passed to preprocessor directives in your makefile project. For more information, see [`/I` (Additional Include Directories)](i-additional-include-directories.md).

   - For projects that are built using CL.EXE from a Command Window, set the **INCLUDE** environment variable to specify directories that the compiler will search to resolve file references that are passed to preprocessor directives in your makefile project.

   - Set the **Forced Includes** property to specify which header files to process when building your makefile project. For more information, see [`/FI` (Name Forced Include File)](fi-name-forced-include-file.md).

   - Set the **Assembly Search Path** property to specify the list of directories that the compiler will search to resolve references to .NET assemblies in your project. For more information, see [`/AI` (Specify Metadata Directories)](ai-specify-metadata-directories.md).

   - Set the **Forced Using Assemblies** property to specify which .NET assemblies to process when building your makefile project. For more information, see [`/FU` (Name Forced #using File)](fu-name-forced-hash-using-file.md).

   - Set the **Additional Options** property to specify other compiler switches to be used by IntelliSense when parsing C++ files.

1. Choose **OK** to close the property pages.

1. Use the **Save All** command to save the modified project settings.

The next time you open your makefile project in the Visual Studio development environment, run the **Clean Solution** command and then the **Build Solution** command on your makefile project. IntelliSense should work properly in the IDE.

## See also

[Using IntelliSense](/visualstudio/ide/using-intellisense)\
[NMAKE Reference](nmake-reference.md)\
[How to: Create a C++ project from existing code](../how-to-create-a-cpp-project-from-existing-code.md)\
[Special characters in a makefile](contents-of-a-makefile.md#special-characters-in-a-makefile)\
[Makefile contents and features](contents-of-a-makefile.md)
