---
title: "VC++ Directories Property Page | Microsoft Docs"
ms.custom: ""
ms.date: "11/21/2017"
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
# VC++ Directories property page

The VC++ Directories property page specifies the directories that Visual Studio uses to build a project.

To access this property page, in **Solution Explorer**, select the project (not the solution), then on the menu bar, choose **Project > Properties** to open the **Property Pages** dialog box. In the left pane of the **Property Pages** dialog box, select **Configuration Properties > VC++ Directories**.

When you use Visual Studio to create a project, it inherits certain directories from the default build environment. Many of these directories are given as macros. To examine the current value of a macro, in the right pane of the **VC++ Directories** page, select a property such as **Include Directories** then choose the down-arrow button on the right, and then choose **Edit**. In the dialog box that appears, choose the **Macros>>** button. The dialog expands to show the available macros and their current values. For more information, see [Working with Project Properties](../ide/working-with-project-properties.md).

## Directory property types

You can specify the directories used by Visual Studio when it searches for specific types of files.

### Executable Directories

Specifies the directories to search for executable files. Corresponds to the **PATH** environment variable.

### Include Directories

Specifies the directories to search for include files that are referenced in the source code. Corresponds to the **INCLUDE** environment variable.

### Reference Directories

Specifies the directories to search for assembly and module (metadata) files that are referenced in the source code by the [#using](../preprocessor/hash-using-directive-cpp.md) directive. Corresponds to the **LIBPATH** environment variable.

### Library Directories

Specifies the directories to search for libraries (.lib) files; this includes run-time libraries. Corresponds to the **LIB** environment variable. This setting does not apply to .obj files; to link to an .obj file, on the [Linker > General](../ide/linker-property-pages.md) property page, select **Additional Library Dependencies** and then specify the relative path of the file.

### Source Directories

Specifies the directories to search for source files to use for IntelliSense.

### Exclude Directories

Specifies the directories not to search when checking for build dependencies.

### To specify or modify directory settings

1. In **Solution Explorer**, select the project (not the solution) you want to change, and then on the menu bar, choose **Project > Properties** to open the **Property Pages** dialog box.

1. In the left pane of the **Property Pages** dialog box, select **Configuration Properties > VC++ Directories**.

1. To modify one of the directory list properties, select it, choose the down-arrow button on the right, and then choose **Edit**.

   In the top edit control in the dialog box that appears, you can add or remove values, and you can rearrange the order in which the values appear. You can also change whether the project inherits any settings by selecting or clearing the **Inherit from parent or project defaults** check box.

## Share the settings

You can share project properties with other users or across multiple computers. For more information, see [Working with Project Properties](../ide/working-with-project-properties.md).
