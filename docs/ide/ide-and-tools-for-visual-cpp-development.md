---
title: "IDE and Tools for Visual C++ Development | Microsoft Docs"
ms.custom: ""
ms.date: "09/27/2018"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["Visual C++, development tools"]
ms.assetid: 56eabafb-1956-4f0f-bec5-29b887763559
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# IDE and Tools for Visual C++ Development

As part of the Visual Studio Integrated Development Environment (IDE), Microsoft Visual C++ (MSVC) shares many windows and tools in common with other languages. Many of those, including **Solution Explorer**, the code editor, and the debugger, are documented under [Visual Studio IDE](/visualstudio/ide/visual-studio-ide). Often, a shared tool or window has a slightly different set of features for C++ than for the .NET languages or JavaScript. A few windows or tools are only available in Visual Studio Professional or Visual Studio Enterprise editions.

In addition to shared tools in the Visual Studio IDE, MSVC has several tools specifically for native code development. These tools are also listed in this article. For a list of which tools are available in each edition of Visual Studio, see [Visual C++ Tools and Features in Visual Studio Editions](../ide/visual-cpp-tools-and-features-in-visual-studio-editions.md).

## Create projects

A *project* is basically a set of source code files and resources such as images or data files that are built into an executable file.

Visual Studio 2015 provides support for MSBuild projects. You can download Visual Studio extensions for other build systems such as Qt or CMake.

Visual Studio 2017 provides support for any build system or custom build tools that you wish to use, with full support for IntelliSense, browsing and debugging:

- MSBuild is the native build system for Visual Studio. When you select **File** > **New** > **Project** from the main menu, you see many kinds of MSBuild *project templates* that get you started quickly developing different kinds of C++ applications.

    ![Project Templates](../ide/media/vs2017-new-project.png "Visual Studio 2017 New Project Dialog")

    In general, you should use these templates for new projects unless you have a specific reason to use CMake or another project system. Some projects have a *wizard* that guides you step-by-step through the process of creating a new project. For more information, see [Creating and managing MSBuild-based projects](creating-and-managing-visual-cpp-projects.md).

- CMake is a cross-platform build system that is integrated into the Visual Studio IDE when you install the Desktop development with C++ workload. For more information, see [CMake projects in Visual C++](cmake-tools-for-visual-cpp.md).
- Any other C++ build system, including a loose collection of files, is supported via the Open Folder feature. You create simple JSON files to invoke your build program and configure debugging sessions. For more information, see [Open Folder projects in Visual C++](non-msbuild-projects.md).

## Create user interfaces with designers

If your program has a user interface, one of the first tasks is to populate it with controls such as buttons, list boxes and so on. Visual Studio includes a visual design surface and a toolbox for each flavor of C++ application. No matter which type of app you are creating, the basic idea is the same: you drag a control from the toolbox window and drop it onto the design surface at the desired location. In the background, Visual Studio generates the resources and code required to make it all work. Then you write the code to populate the controls with data or customize their appearance and behavior.

![Designer and Toolbox](../ide/media/vs2017-toolbox-designer.png "Visual Studio 2017 Toolbox and designer")

For more information about designing a user interface for a Universal Windows Platform app, see  [Design and UI](https://developer.microsoft.com/en-us/windows/design).

For more information about creating a user interface for an MFC application, see [MFC Desktop Applications](../mfc/mfc-desktop-applications.md). For information about Win32 Windows programs, see [Windows Desktop Applications](../windows/windows-desktop-applications-cpp.md).

## Write code

After you create a project, all the project files are displayed in the **Solution Explorer** window. When you click on a .h or .cpp file in **Solution Explorer**, the file opens up in the code editor. 

![Solution Explorer and code editor](../ide/media/vs2017-solution-explorer-code-editor.png "Visual Studio 2017 Solution Explorer and code editor")

The code editor is a specialized word processor for C++ source code. It color-codes language keywords, method and variable names, and other elements of your code to make the code more readable and easier to understand.

For more information, see [Writing and refactoring code](writing-and-refactoring-code-cpp.md).

## Add and edit resources

The term *resource* includes things such as dialogs, icons, images, localizable strings, splash screens, database connection strings, or any arbitrary data that you want to include in the executable file.

For more information on adding and editing resources in native desktop C++ projects, see [Working with Resource Files](../windows/working-with-resource-files.md).

## Build (compile and link)

Choose **Build** > **Build Solution** on the menu bar, or enter the Ctrl+Shift+B key combination to compile and link a project. Build errors and warnings are reported in the Error List (Ctrl+\\, E). The **Output** Window (Alt+2) shows information about the build process. 

![Output Window and Error List](../ide/media/vs2017-output-error-list.png "Visual Studio 2017 Output window and Error List")
For more information about MSBuild configurations, see [Working with Project Properties](../ide/working-with-project-properties.md) and [Building C++ Projects in Visual Studio](../ide/building-cpp-projects-in-visual-studio.md).

You can also use the compiler (cl.exe) and many other build-related standalone tools such as NMAKE and LIB directly from the command line. For more information, see [Build C/C++ code on the command line](../build/building-on-the-command-line.md) and [C/C++ Building Reference](../build/reference/c-cpp-building-reference.md).

## Test

Visual Studio includes a unit test framework for both native C++ and C++/CLI. For more information, see [Verifying Code by Using Unit Tests](/visualstudio/test/unit-test-your-code) and [Writing Unit tests for C/C++ with the Microsoft Unit Testing Framework for C++](/visualstudio/test/writing-unit-tests-for-c-cpp-with-the-microsoft-unit-testing-framework-for-cpp)

## Analyze

Visual Studio includes static code analysis tools for C++, including an implementation of the [C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md) rules checkers. For more information, see [Code analysis for C/C++ overview](/visualstudio/code-quality/code-analysis-for-c-cpp-overview).

## Debug

You can debug your program by pressing **F5** when your project configuration is set to Debug. While debugging you can set breakpoints by pressing **F9**, step through code by pressing **F10**, view the values of specified variables or registers, and even in some cases make changes in code and continue debugging without re-compiling. For more information, see [Debugging in Visual Studio](/visualstudio/debugger/debugging-in-visual-studio).

## Deploy completed applications

You deploy a UWP app to customers through the Microsoft Store through the **Project** > **Store** menu option. Deployment of the CRT is handled automatically behind the scenes. For more information, see [Publish Windows apps and games](/windows/uwp/publish/).

When you deploy a native C++ desktop application to another computer, you must install the application itself and any library files that the application depends on. There are three ways to deploy the Universal C++ runtime (UCRT) with an application: central deployment, local deployment, or static linking. For more information, see [Deploying Desktop Applications](../ide/deploying-native-desktop-applications-visual-cpp.md).

For more information about deploying a C++/CLI program, see [Deployment Guide for Developers](/dotnet/framework/deployment/deployment-guide-for-developers),

## Related Articles

|||
|-|-|
|[Visual C++ Tools and Features in Visual Studio Editions](../ide/visual-cpp-tools-and-features-in-visual-studio-editions.md)|Shows which features are available in the various editions of Visual Studio.|
|[Creating and managing MSBuild-based projects](../ide/creating-and-managing-visual-cpp-projects.md)|Provides an overview of C++ MSBuild-based projects in Visual Studio and links to other articles that explain how to create and manage them.|
|[CMake projects in Visual C++](cmake-tools-for-visual-cpp.md).|Describes how to build CMake or other non-MSBuild projects in Visual C++.|
|[Building C/C++ Programs](../build/building-c-cpp-programs.md)|Describes how to build C++ projects.|
|[Deploying Desktop Applications](../ide/deploying-native-desktop-applications-visual-cpp.md)|Provides an overview of deployment for C++ apps and links to other articles that describe deployment in detail.|
|[Visual C++ Porting and Upgrading Guide](../porting/visual-cpp-porting-and-upgrading-guide.md)|Detailed information about how to upgrade C++ applications that were created in earlier versions of Visual Studio, and also how to migrate applications that were created by using tools other than Visual Studio.|
|[Visual C++](../visual-cpp-in-visual-studio.md)|Describes key features of Visual C++ in Visual Studio and links to the rest of the Visual C++ documentation.|
