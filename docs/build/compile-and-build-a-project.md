---
title: "Build a C++ project"
ms.date: "11/29/18"
helpviewer_keywords: ["Visual C++ projects, building", "projects [C++], building"]
---
# Build a C++ project in Visual Studio

Build commands are located on the **Build** main menu item. If there are multiple projects in your solution, you can choose to build just one, or all projects. 

When a Visual Studio project is loaded, and you choose **Build** or **Rebuild**, the IDE invokes the MSBuild engine, which applies all the settings you have made in the project property pages and invokes the compiler along with any other custom build tools you have specified. If you choose **Build**, the build process is run only on those files that have changed. If you choose **Rebuild**, all build outputs are deleted, and the build process is run for all files. If you choose **Clean** all outputs are deleted but the build process is not invoked. 

For CMake and other project types, you 

For general information about building projects in Visual Studio, see [Compile and build in Visual Studio](/visualstudio/ide/compiling-and-building-in-visual-studio).

## Build errors

Any errors or warnings that are generated are displayed in the [Output Window](/visualstudio/ide/reference/output-window) and in the [Error List Window](/visualstudio/ide/reference/error-list-window).

An error prevents the build from completing. A warning does not stop the build, but generally indicates a potential issue that should be addressed. 

To see documentation for an error or warning, select in in Error List, then press **F1**.

## Build output

If the build succeeds, the binary file and any other output from the build is created in the output folder that is specified in the VC++ Directories property page. The folder has the same name as the configuration that was built. For example, if you do a Debug build, the output goes into a folder called Debug. By default this folder is located directly under the project root folder. 

In Debug builds, the Debug folder also contains the .pdb file which contains symbols for debugging. Depending on the type of project, other files may be placed here as well. In a solution with multiple projects, the outputs from all projects go into the same folder.

## Many ways to say "Build"
 
To build a solution that's open in Visual Studio and selected in **Solution Explorer**, you can:

- On the menu bar, choose **Build**, **Build Solution**.

- Or, in **Solution Explorer**, open the shortcut menu for the solution and then choose **Build Solution**.

- Or, press **F7**. (This is the default keyboard shortcut for the C/C++ development settings.)

- Or, in the [Command Window](/visualstudio/ide/reference/command-window) (on the menu bar, choose **View**, **Other Windows**, **Command Window**), enter `Build.BuildSolution`.

- Or, in the [Quick Launch](/visualstudio/ide/reference/quick-launch-environment-options-dialog-box) box, enter `build build solution`.

To build a project that's selected in **Solution Explorer**, you can:

- On the menu bar, choose **Build**, **Build \<Project Name>**.

- Or, in **Solution Explorer**, open the shortcut menu for the project and then choose **Build**.

- Or, in the Command Window (on the menu bar, choose **View**, **Other Windows**, **Command Window**), enter `Build.BuildOnlyProject`.

- Or, in the Quick Launch box, enter `build project only build only <project name>`.

## See Also