---
title: "Linker Tools Error LNK1104 | Microsoft Docs"
ms.custom: ""
ms.date: "05/17/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["LNK1104"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK1104"]
ms.assetid: 9ca6f929-0efc-4055-8354-3cf5b4e636dc
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Error LNK1104
cannot open file '*filename*'  
  
The linker could not open the specified file.  
  
## Possible causes and solutions
  
This error can occur when the linker attempts to open a file for reading or for writing. The most common causes of this problem are that the file does not exist, can't be found in one of the directories the linker searches, or is in use and locked by another process. Less commonly, you may have run out of disk space, the file may be too large, the path to the file may be too long, or you may not have permission to access the file.  

Check for one of these common issues:  

-   Your application is already running when you try to rebuild it. If the file that can't be opened is the executable or a debugging file such as a .pdb, this is a common cause. To fix this issue, stop the program and unload it from the debugger before building it again.  
  
-   The file *filename* is built by your solution, but does not yet exist when the linker tries to access it. This can happen when one project depends on another project to produce this file, but the projects are not built in the correct order. To fix this issue, make sure your project references are set in the project that uses the file so the missing file is built before it is required. For more information, see [Adding references in Visual C++ projects](../../ide/adding-references-in-visual-cpp-projects.md) and [Managing references in a project](/visualstudio/ide/managing-references-in-a-project).  
  
-   The filename or path specified on the command line or in a #pragma lib directive is incorrect, or the path has an invalid drive specification. Check your spelling and verify the file exists at the specified location.  
  
-   If you are using the Visual Studio IDE to build a project that was copied from another computer, the installation locations for libraries may be different. Check the Library Directories property on the [VC++ Directories Property Page](../../ide/vcpp-directories-property-page.md) and update it if necessary. To see and edit the current library paths set in the IDE, choose the drop-down control for the Library Directories property and choose **Edit**. The **Evaluated value** section of the Library Directories dialog lists the current paths searched for library files.  
  
-   If you're building a project that was created using an older version of Visual Studio, the platform toolset and libraries for that version may not be not installed. To fix this issue, you have two options: you can upgrade the project to use the current platform toolset you have installed, or you can install the older toolset and build the project unchanged. For more information, see [Upgrading Projects from Earlier Versions of Visual C++](../../porting/upgrading-projects-from-earlier-versions-of-visual-cpp.md) and [Use native multi-targeting in Visual Studio to build old projects](../../porting/use-native-multi-targeting.md).
  
-   The libraries for the current project configuration or platform toolset are not installed. Verify that the platform toolset and Windows SDK specified in the [General property page](../../ide/general-property-page-project.md) for your project are installed, and verify that the required libraries are available in the Library Directories specified in the [VC++ Directories Property Page](../../ide/vcpp-directories-property-page.md) for your configuration settings. There are separate settings for Debug and Retail configurations, so if one build works but the other causes an error, make sure the settings are correct and the required tools and libraries are installed for both configurations.  
  
-   The path to the Windows SDK is out of date. If you have installed a version of the Windows SDK that is newer than your version of Visual Studio, make sure that the paths specified in the [VC++ Directories Property Page](../../ide/vcpp-directories-property-page.md) are updated to match the new SDK. If you use the Developer Command Prompt, make sure that the batch file that initializes the environment variables is updated for the new SDK paths.  
  
-   Another program may have the file open and the linker cannot write to it. Antivirus programs often temporarily block access to newly created files. To fix this issue, try excluding your project build directories from the antivirus scanner.  
  
-   If you are using a parallel build option, it's possible that Visual Studio has locked the file on another thread. To fix this issue, verify that you do not build the same code object or library in multiple projects, and that you use build dependencies or project references to pick up built binaries in your project.  
  
-   You have an incorrect LIB environment variable. In command line builds, verify that the LIB environment variable is set and contains all the directories for the libraries you use. In the IDE, the LIB variable is set by the Library Directories property on the [VC++ Directories Property Page](../../ide/vcpp-directories-property-page.md). Make sure all the directories that contain the libraries you need are listed here. If you need to supply a library directory that overrides a standard library directory, you can use the [/LIBPATH](../../build/reference/libpath-additional-libpath.md)) option on the command line, or the Additional Library Directories property in the Linker property page for your project.  
  
-   When specifying individual libraries in a project's Property Pages dialog box, library names must be separated by spaces, not commas.  
  
-   The path for *filename* expands to more than 260 characters. Change the names or rearrange your directory structure if needed to shorten the paths to the required files.  
  
-   The file is too large. Libraries or object files more than a gigabyte in size may cause problems for the 32-bit linker. A possible fix for this issue is to use the 64-bit toolset. For more information on how to do this at the command line, see [How to: Enable a 64-Bit Visual C++ Toolset on the Command Line](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md). For information on how to do this in the IDE, see [Using MSBuild with the 64-bit Compiler and Tools](../../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md#using-msbuild-to-build-your-project)  and this Stack Overflow post: [How to make Visual Studio use the native amd64 toolchain](http://stackoverflow.com/questions/19820718/how-to-make-visual-studio-use-the-native-amd64-toolchain/23793055).  
  
-   You have insufficient file permissions to access *filename*. This can happen if you access library files in protected system directories, or use files copied from other users that have their original permissions set. To fix this issue, move the file to a writeable project directory. If the file is in a writeable directory but has inaccessible permissions, you can use an Administrator command prompt and run the takeown.exe command to take ownership of the file.  
  
-   You don't have enough disk space. The linker uses temporary files in several cases. Even if you have sufficient disk space, a very large link can deplete or fragment the available disk space. Consider using the [/OPT (Optimizations)](../../build/reference/opt-optimizations.md) option; doing transitive comdat elimination reads all the object files multiple times.  
  
-   If the *filename* is named LNK*n*, which is a filename generated by the linker for a temporary file, the directory specified in the TMP environment variable may not exist, or more than one directory may be specified for the TMP environment variable. Only one directory path should be specified for the TMP environment variable.  
  
-   If the error message occurs for a library name, and you recently ported the .mak file from a previous Microsoft Visual C++ development system, the library may no longer be valid. Ensure that the library name is correct and still exists in the specified location, or update the LIB path to point to the new location.  
