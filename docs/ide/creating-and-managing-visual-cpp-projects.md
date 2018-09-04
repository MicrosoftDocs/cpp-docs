---
title: "Creating and Managing Visual C++ Projects | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
f1_keywords: ["vcprojects", "creatingmanagingVC"]
dev_langs: ["C++"]
helpviewer_keywords: ["ATL projects, creating", "Visual C++ projects, creating", "projects [C++], creating", "Visual C++ projects", "ATL projects"]
ms.assetid: 11003cd8-9046-4630-a189-a32bf3b88047
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Creating and Managing MSBuild-based Visual C++ Projects
MSBuild is the native build system for Visual C++ and is generally the best build system to use for UWP apps as well as Desktop applications that use MFC or ATL libraries. MSBuild is tightly integrated with the Visual Studio IDE and project system, but you can also use it from the command line. Starting in Visual Studio 2017, Visual C++ supports [CMake and other non-MSBuild systems through the Open Folder feature](non-msbuild-projects.md).

An MSBuild-based project has a project file in XML format (.vcxproj) that specifies all the files and resources needed to compile the program, as well as other configuration settings, for example the target platform (x86, x64 or ARM) and whether you are building a release version or debug version of the program. A project (or many projects) are contained in a *Solution*; for example, a solution might contain several Win32 DLL projects, and a single Win32 console application that uses those DLLs. When you build the project, the MSBuild engine consumes the project file and produces the executable file and/or any other custom output you have specified.

You can create Visual C++ projects by choosing **File &#124; New &#124; Project**, ensuring that Visual C++ is selected in the left pane, and then choosing from the list of project templates in the middle pane. When you click on a template, in many cases a wizard will appear that enables you to set various project properties before the project is created. You can view and modify those properties later by using the project's property pages (**Project &#124; Properties**).  
  
 You can also create new projects by:  
  
-   choosing **File &#124; New &#124; Project from Existing Code** and following the prompts to add existing source code files. This option works best for relatively small and simple projects, perhaps 25 source codes files or less with few or no complex dependencies.  
  
-   starting with a makefile and choose the Makefile Project template under the General tab.  
  
-   creating an empty project (under the **General** tab) and manually adding source code files by right-clicking on the project node in solution explorer and choosing **Add &#124; Existing Item**.  
  
-   using the [Win32 Application Wizard](../windows/win32-application-wizard.md).  
  
## In This Section  
 [Visual C++ Project Types](../ide/visual-cpp-project-types.md)  
 Describes the MSBuild-based project types that are available in Visual C++.  
  
 [File Types Created for Visual C++ Projects](../ide/file-types-created-for-visual-cpp-projects.md)  
 Describes the kinds of files that are used with various MSBuild project types.  
  
 [Creating Desktop Projects By Using Application Wizards](../ide/creating-desktop-projects-by-using-application-wizards.md)  
 How to use the wizards to create projects with Visual C++.  
  
 [Working with Project Properties](../ide/working-with-project-properties.md)  
 Describes how to use Property Pages and Property Sheets to specify your project settings.  
  
 [Adding Functionality with Code Wizards](../ide/adding-functionality-with-code-wizards-cpp.md)  
 Describes how to add classes, methods, variables, and other elements to your project to add functionality.  
  
 [How to: Organize Project Output Files for Builds](../ide/how-to-organize-project-output-files-for-builds.md)  
 Describes how to organize project output files.  
  
## Related Sections  
 [Building C/C++ Programs](../build/building-c-cpp-programs.md)  
 Provides links to topics describing building your program from the command line or from the integrated development environment of Visual Studio.  
  
## See Also  
 [Visual Studio SDK](https://msdn.microsoft.com/vstudio/extend)
