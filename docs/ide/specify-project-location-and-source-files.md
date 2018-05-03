---
title: "New Project From Existing Code - Source Files (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
f1_keywords: ["vc.appwiz.importwiz.location"]
dev_langs: ["C++"]
ms.assetid: 29ddffb9-5918-4d72-8c7a-a365f9de96dd
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Specify Project Location and Source Files, Create New Project From Existing Code Files Wizard
Use this page of the Create New Project From Existing Code Files wizard to specify:  
  
-   The directory path of the new project  
  
-   The directories to search for existing source files  
  
-   The kinds of files the wizard will import into the new project  
  
## Task List  
 [How to: Create a C++ Project from Existing Code](../ide/how-to-create-a-cpp-project-from-existing-code.md)  
  
## UIElement List  
 **Project file location**  
 Specifies the directory path of the new project. This location is where the wizard will deposit all the files (and subdirectories) of the new project.  
  
 **Browse**  
 Displays the **Project file location** dialog, which helps you specify the directory that will contain the new project. This control enables you to navigate to the desired folder.  
  
 **Project name**  
 Specifies the name of the new project. Project files, which have file extentions such as .vcxproj will adopt this name. Existing code files will keep their original name.  
  
 **Add files to the project from these folders**  
 When checked, sets the wizard to copy existing code files from their original directories (that are specified in the list box below this control) into the new project.  
  
 **Add Subfolders**  
 Specifies to copy code files from all subdirectories of the directory listed **Folder** column into the new project.  
  
 **Folder**  
 Indicates the path to the directory that contains existing code files to copy into the new project. This column lists all the directories that the wizard will search for existing code files.  
  
 **Add**  
 Displays the **Add files to the project from this folder** dialog box, which helps you the specify directories that the wizard will search for existing code files.  
  
 **Remove**  
 Deletes the directory path that is selected in the list box left of this control.  
  
 **File types to add to the project**  
 Specifies the kinds of files that the wizard will add to the new project based on the given file extensions. File extensions are preceded with the asterisk wildcard character, and are delimited in the list of file extensions by a semicolon.  
  
 **Show all files in Solution Explorer**  
 Specifies that all files in the new project to be visible and displayed in the Solution Explorer window. This option is enabled by default.