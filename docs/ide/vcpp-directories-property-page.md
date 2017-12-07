---
title: "VC++ Directories Property Page | Microsoft Docs"
ms.custom: ""
ms.date: "11/28/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-ide"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["VC.Project.VCDirectories.IncludePath", "VC.Project.VCDirectories.ReferencePath", "VC.Project.VCDirectories.SourcePath", "VC.Project.VCDirectories.LibraryWPath", "VC.Project.VCDirectories.ExecutablePath", "VC.Project.VCDirectories.LibraryPath", "VS.ToolsOptionsPages.Projects.VCDirectories", "VC.Project.VCDirectories.ExcludePath"]
dev_langs: ["C++"]
helpviewer_keywords: ["VC++ Directories Property Page"]
ms.assetid: 428eeef6-f127-4271-b3ea-0ae6f2c3d624
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# VC++ Directories Property Page (Windows)

Use this property page to tell Visual Studio which directories to use when building the currently-selected project. To set directories for multiple projects in a solution, use a custom property sheet as described in [Creating reusable property configurations](working-with-project-properties.md#bkmkPropertySheets).

For the Linux version of this page, see [VC++ Directories (Linux C++)](../linux/prop-pages/directories-linux.md).   

To access the **VC++ Directories** property page:

1. from the main menu choose **View | Solution Explorer**
1. right-click on the project node (not the top-level solution) and choose **Properties**
1. in the left pane of the **Property Pages** dialog box, expand **Configuration Properties** and select **VC++ Directories**.  

VC++ Directories properties apply to a project, not the top-level solution node:

![Select the project node](media/vcppdir.png "Select the project node to see the VC++ Directories properties")

If you don't see the property page, make sure you have the project node selected in **Solution Explorer**. Note that a **VC++ Directories** property page for cross-platform projects looks different. For non-Windows projects, see [VC++ Directories (Linux C++)](../linux/prop-pages/directories-linux.md) or . 
 
If you are not familiar with *project properties* in Visual Studio, you might find it helpful to first read [Working with project properties](working-with-project-properties.md). 
 
The default settings for VC++ directories depend on project type. For desktop projects they include the VC++ tools locations for a particular Platform Toolset and the Windows SDK location. You can change the **Platform Toolset** and **Windows SDK version** on the **Configuration Properties – General** page. To view the values for any of the directories:

1. in the right pane of the **VC++ Directories** page, select a row. For example, **Library Directories**
1. choose the down-arrow button on the right
1. choose **Edit**.

![Edit Library Directories](media/vcppdir_libdir_edit.png "Dialog to edit library paths")

You now see a dialog box like this: 

![Show Library Directories](media/vcppdir_libdir.png "Dialog to add or remove library paths")

Use this dialog to view the current directories. However, if you want to change or add a directory, it is better to use **Property Manager** to create a property sheet or modify the default user property sheet. For more information, see [Creating reusable property configurations](working-with-project-properties.md#bkmkPropertySheets).

As shown above, many of the inherited paths are given as macros.  To examine the current value of a macro, choose the **Macros** button in the lower right corner of the dialog box. Note that many macros depend on the configuration type. A macro in a debug build might evaluate to a different path than the same macro in a release build. 

You can search for partial or complete matches in the edit box. The following illustration shows all the macros that contain the string "WindowsSDK" and it also shows the current path that the macro evaluates to:

![See macro values](media/vcppdir_libdir_macros.png "Dialog to edit macros")

Note: The list will populate as you type. Don't press **Enter**.

For more information about macros and why you should use them instead of hard-coded paths whenever possible, see [Working with Project Properties](../ide/working-with-project-properties.md#bkmkPropertiesVersusMacros). 

For a list of commonly used macros, see [Common Macros for Build Commands and Properties](https://docs.microsoft.com/en-us/cpp/ide/common-macros-for-build-commands-and-properties).

You can define your own macros in two ways:
-	Set environment variables in a developer command prompt. All environment variables are treated as MSBuild properties/macros.
-	Define user macros in a .props file. For more information, see [Property page macros](working-with-project-properties.md#bkmkPropertiesVersusMacros). 

For more information, see these blog posts: [VC++ Directories](http://blogs.msdn.com/b/vsproject/archive/2009/07/07/vc-directories.aspx), [Inherited Properties and Property Sheets](http://blogs.msdn.com/b/vsproject/archive/2009/06/23/inherited-properties-and-property-sheets.aspx), and [Visual Studio 2010 C++ Project Upgrade Guide](http://blogs.msdn.com/b/vcblog/archive/2010/03/02/visual-studio-2010-c-project-upgrade-guide.aspx).  
  
## Directory Types

You can also specify other directories, as follows.  
  
**Executable Directories**  
Directories in which to search for executable files. Corresponds to the **PATH** environment variable.

**Include Directories**  
Directories in which to search for include files that are referenced in the source code. Corresponds to the **INCLUDE** environment variable.

**Reference Directories**  
 Directories in which to search for assembly and module (metadata) files that are referenced in the source code by the [#using](../preprocessor/hash-using-directive-cpp.md) directive. Corresponds to the **LIBPATH** environment variable.

**Library Directories**  
Directories in which to search for libraries (.lib) files; this includes run-time libraries. Corresponds to the **LIB** environment variable. This setting does not apply to .obj files; to link to an .obj file, on the [Linker](../ide/linker-property-pages.md)**General** property page, select **Additional Library Dependencies** and then specify the relative path of the file.

**Source Directories**  
Directories in which to search for source files to use for IntelliSense.

**Exclude Directories**  
Directories not to search when checking for build dependencies.

## Sharing the Settings

You can share project properties with other users or across multiple computers. For more information, see [Working with Project Properties](../ide/working-with-project-properties.md).
