---
title: "Visual Studio Projects - C++"
ms.date: "12/10/2018"
f1_keywords: ["vcprojects", "creatingmanagingVC"]
helpviewer_keywords: ["ATL projects, creating", "Visual C++ projects, creating", "projects [C++], creating", "Visual C++ projects", "ATL projects"]
ms.assetid: 11003cd8-9046-4630-a189-a32bf3b88047
---
# Visual Studio projects - C++

A *Visual Studio project* is a project based on the MSBuild build system. MSBuild is the native build system for Visual Studio and is generally the best build system to use for UWP apps as well as Desktop applications that use MFC or ATL libraries, COM components, and other Windows-specific programs. MSBuild is tightly integrated with Visual Studio, but you can also use it from the command line. 

## Create a project

You can create C++ projects by choosing **File &#124; New &#124; Project**, then choosing Visual C++ in the left pane. In the center pane you see a list of project templates: 

   ![Project Templates](../ide/media/vs2017-new-project.png "Visual Studio 2017 New Project Dialog")

After you create a project, it appears in the **Solution Explorer* window:



## Add items

## Compile and run

To compile and run the new project, press **F5** or click the *debug dropdown* with the green arrow on the main toolbar. The *configuration dropdown* is where you choose whether to perform a *Debug* or *Release* build (or some other custom configuration).

A new project compiles without errors. When adding your own code, you may occasionally introduce an error or trigger a warning. An error prevents the build from completing; a warning does not. All errors and warnings will appear both in the Output Window and in the Error List when you build the project. In the Error List, you can press **F1** on a highlighted error to go to its documentation topic.

You can add new files to your project by right-clicking on the project node in **Solution Explorer** and choosing **Add > New Item** to create a new file, or **Add > Existing Item** to add a file that already exists. 

You can add a project to a solution by right-clicking on the solution node and choosing **Add > New Project** or **Add > Existing Project**. Often it is useful to include, for example, a DLL and a client application that uses it in the same solution.

You can also create new projects by:

- choosing **File &#124; New &#124; Project from Existing Code** and following the prompts to add existing source code files. This option works best for relatively small and simple projects, perhaps 25 source codes files or less with few or no complex dependencies.

- starting with a makefile and choose the Makefile Project template under the General tab.

- creating an empty project (under the **General** tab) and manually adding source code files by right-clicking on the project node in solution explorer and choosing **Add &#124; Existing Item**.

- using the [Windows Desktop Wizard](../windows/win32-application-wizard.md).


An MSBuild-based project has a project file in XML format (.vcxproj) that specifies all the files and resources needed to compile the program, as well as other configuration settings, for example the target platform (x86, x64 or ARM) and whether you are building a release version or debug version of the program. A project (or many projects) are contained in a *Solution*; for example, a solution might contain several Win32 DLL projects, and a single Win32 console application that uses those DLLs. When you build the project, the MSBuild engine consumes the project file and produces the executable file and/or any other custom output you have specified.

## In This Section

[Visual Studio C++ project templates](visual-cpp-project-types.md)<br>
Describes the MSBuild-based project types that are available for C++.

[File Types Created for C++ Projects](reference/file-types-created-for-visual-cpp-projects.md)<br>
Describes the kinds of files that are used with various MSBuild project types.

[Creating Desktop Projects By Using Application Wizards](creating-desktop-projects-by-using-application-wizards.md)<br>
How to use the wizards to create C++ projects.

[Working with Project Properties](working-with-project-properties.md)<br>
Describes how to use Property Pages and Property Sheets to specify your project settings.

[Adding Functionality with Code Wizards](../ide/adding-functionality-with-code-wizards-cpp.md)<br>
Describes how to add classes, methods, variables, and other elements to your project to add functionality.

[How to: Organize Project Output Files for Builds](how-to-organize-project-output-files-for-builds.md)<br>
Describes how to organize project output files.

## Related Sections

[Building C/C++ Programs](building-c-cpp-programs.md)<br>
Provides links to topics describing building your program from the command line or from the integrated development environment of Visual Studio.

## See Also

[Visual Studio SDK](https://msdn.microsoft.com/vstudio/extend)
