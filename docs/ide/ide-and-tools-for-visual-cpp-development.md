---
title: "IDE and Tools for Visual C++ Development | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-ide"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["Visual C++, development tools"]
ms.assetid: 56eabafb-1956-4f0f-bec5-29b887763559
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IDE and Tools for Visual C++ Development
As part of the Visual Studio Integrated Development Environment (IDE), Visual C++ shares many windows and tools in common with other languages. Many of those, including **Solution Explorer**, the Code Editor, and the Debugger, are documented under [Visual Studio IDE](/visualstudio/ide/visual-studio-ide). Often, a shared tool or window has a slightly different set of features for C++ than for the .NET languages or Javascript. Some windows or tools are only available in Visual Studio Pro or Visual Studio Enterprise.   
  
 In addition to shared tools in the Visual Studio IDE, Visual C++ has several tools specifically for native code development. These tools are also listed in this article. For a list of which tools are available in each edition of Visual Studio, see [Visual C++ Tools and Features in Visual Studio Editions](../ide/visual-cpp-tools-and-features-in-visual-studio-editions.md).  
## Creating a solution and project(s)  

A "project" is basically a set of source code files and resources such as images or data files that are built into an executable file. Visual Studio 2017 can support any build system or custom build tools that you wish to use, with full support for Intellisense, browsing and debugging:
 - MSBuild is the "native" build system for Visual Studio and is often the best choice for UWP apps or legacy Windows desktop applications that use MFC or ATL. For more information about MSBuild-based C++ projects, see [Creating and managing MSBuild-based projects](creating-and-managing-visual-cpp-projects.md).
 - CMake is a cross-platform build system that is integrated into the Visual Studio IDE when you install the Desktop C++ workload. For more information, see [CMake projects in Visual C++](cmake-tools-for-visual-cpp.md).
 - Any other C++ build system, including a loose collection of files, is supported via the Open Folder feature. You create simple JSON files to invoke your build program and configure debugging sessions. For more information, see [Bring your C++ code to Visual Studio](https://blogs.msdn.microsoft.com/vcblog/2017/04/14/bring-your-cpp-code-to-visual-studio/).
 
 
 **Project templates (MSBuild)**  
  
 Visual C++ comes with several templates for MSBuild-based projects; these templates contain starter code and the settings needed for a variety of basic program types. Typically you start by choosing **File &#124; New Project** to create a project from a project template, then add new source code files to that project, or start coding in the files provided. For information specific to C++ projects and project wizards, see [Creating and Managing Visual C++ Projects](../ide/creating-and-managing-visual-cpp-projects.md).  
  
 **Application wizards (MSBuild)**  
  
 Visual C++ provides wizards for some MSBuild project types when you choose **File &#124; New Project**. A wizard guides you step-by-step through the process of creating a new project. This is useful for project types that have many options and settings. For more information, see [Creating Desktop Projects By Using Application Wizards](../ide/creating-desktop-projects-by-using-application-wizards.md).  
  
## Creating user interfaces with designers (MSBuild) 
 If your program has a user interface, one of the first tasks is to populate it with controls such as buttons, list boxes and so on. Visual Studio includes a visual design surface and a toolbox for each flavor of C++ application. No matter which type of app you are creating, the basic idea is the same: you drag a control from the toolbox window and drop it onto the design surface at the desired location. In the background, Visual Studio generates the resources and code required to make it all work. Then you write the code to populate the controls with data or customize their appearance and behavior.
  
 For more information about designing a user interface for a Universal Windows Platform app, see  [Design and UI](https://developer.microsoft.com/en-us/windows/design).  
  
 For more information about creating a user interface for an MFC application, see [MFC Desktop Applications](../mfc/mfc-desktop-applications.md). For information about Win32 Windows programs, see [Windows Desktop Applications](../windows/windows-desktop-applications-cpp.md).  
  
 For information about Windows Forms applications with C++/CLI, see [Creating a Windows Forms Application By Using the .NET Framework (C++)](http://msdn.microsoft.com/en-us/8e007885-6c8b-4fb2-a41d-91febd114a9b).  
  
## Writing and editing code  
 **Semantic colorization**  
  
 After you create a project, all the project files are displayed in the **Solution Explorer** window. When you click on a .h or .cpp file in **Solution Explorer**, the file opens up in the code editor. The code editor is a specialized word processor for C++ source code. It color-codes language keywords, method and variable names, and other elements of your code to make the code more readable and easier to understand.  
  
 **Intellisense**  
  
 The code editor also supports several features that together are known as Intellisense. You can hover over a method and see some basic documentation for it. After you type a class variable name and a . or ->, a list of instance members of that class appears. If you type a class name and then a ::, a list of static members appears. When you start typing a class or method name, the code editor will offer suggestions to complete the statement. For more information, see [Using IntelliSense](/visualstudio/ide/using-intellisense).  
  
 **Code snippets**  
  
 You can use Intellisense code snippets to generate commonly-used or complicated code constructs with a shortcut keystroke. For more information, see [Code Snippets](/visualstudio/ide/code-snippets).  
  
## Navigating code  
 The **View** menu provides access to many windows and tools for navigating around in your code files. For detailed information about these windows, see [Viewing the Structure of Code](/visualstudio/ide/viewing-the-structure-of-code).  
  
 **Solution Explorer**  
  
 In all editions of Visual Studio, use the Solution Explorer pane to navigate between the files in a project. Expand a .h or .cpp file icon to view the classes in the file. Expand a class to see its members. Double-click on a member to navigate to its definition or implementation in the file.  
  
 **Class View and Code Definition Window**  
  
 Use the **Class View** pane to see the namespaces and classes across all the files, including partial classes. You can expand each namespace or class to see its members and double-click on the member to navigate to that location in the source file. If you open the Code Definition Window, you can view the definition or implementation of the type when you choose it in Class View.  
  
 **Object Browser**  
  
 Use **Object Browser** to explore type information in Windows Runtime components (.winmd files), .NET assemblies and COM type libraries. It is not used with Win32 DLLs.  
  
 **Go To Definition/Declaration**  
  
 Press F12 on any API name or member variable to go to its definition. If the definition is in a .winmd file (for a [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] app) then you will be shown the type info in the Object Browser. You can also choose **Go To Definition** or **Go To Declaration** by right-clicking on the variable or type name and choosing the option from the context menu.  
  
 **Find All References**  
  
 In a source code file, right-click with the mouse cursor over the name of a type or method or variable, and choose **Find all References** to return a list of every location in the file, project or solution where the type is used. **Find All References** is intelligent and only returns instances of the same identical variable, even if other variables at different scope have the same name.  
  
 **Architecture Explorer and Dependency Graphs (Ultimate)**  
  
 Use **Architecture Explorer** to view relationships between various elements in your code. For more information, see [Find code with Architecture Explorer](http://msdn.microsoft.com/en-us/b1707926-ef73-47f9-92cd-e00d0fac7e76). Use dependency graphs to view dependency relationships. For more information, see [How to: Generate Dependency Graphs for C and C++ Code](http://msdn.microsoft.com/en-us/3bd5cf9f-62f6-41d0-9f35-d4b2637cba3c).  
  
## Adding and Editing Resources  (MSBuild)
 The term "resource" in the context of a Visual Studio desktop project includes things such as dialog boxes, icons, localizable strings, spash screens, database connection strings, or any arbitrary data that you want to include in the executable file.  
  
 For more information on adding and editing resources in native desktop C++ projects, see [Working with Resource Files](../windows/working-with-resource-files.md).  
  
## Building (compiling and linking)  
 Press **Ctrl + Shift + B** to compile and link a project. To create executable code, Visual Studio uses [MSBuild](/visualstudio/msbuild/msbuild1) or CMake or whatever build environment you set up via **Open Folder**. For MSBuild projects, you set general build options under **Tools &#124; Options &#124; Projects and Solutions** and you can set properties for specific projects under **Project &#124; Properties**. Build errors and warnings are reported in the Error List (**Ctrl +\\, E**). Non-MSBuild projects are configured with JSON files that you create in Solution Explorer. Whatever build system you use, the Output Window (**Alt + 2**) shows information about the build process. For more information about MSBuild configurations, see  [Working with Project Properties](../ide/working-with-project-properties.md) and [Building C++ Projects in Visual Studio](../ide/building-cpp-projects-in-visual-studio.md).  
  
 You can also use the Visual C++ compiler (cl.exe) and many other build-related standalone tools such as NMAKE and LIB directly from the command line. For more information, see [Build C/C++ code on the command line](../build/building-on-the-command-line.md) and [C/C++ Building Reference](../build/reference/c-cpp-building-reference.md).  
  
## Testing  
 Visual Studio includes a unit test framework for both native C++ and C++/CLI. For more information, see [Verifying Code by Using Unit Tests](/visualstudio/test/unit-test-your-code) and [Writing Unit tests for C/C++ with the Microsoft Unit Testing Framework for C++](/visualstudio/test/writing-unit-tests-for-c-cpp-with-the-microsoft-unit-testing-framework-for-cpp)  
  
## Debugging  
 You can debug your program by pressing **F5** when your project configuration is set to Debug. While debugging you can set breakpoints by pressing **F9**, step through code by pressing **F10**, view the values of specified variables or registers, and even in some cases make changes in code and continue debugging without re-compiling. For more information, see [Debugging in Visual Studio](/visualstudio/debugger/debugging-in-visual-studio).  
  
## Deploying completed applications  
 You deploy a [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] to customers through the Windows Store through the **PROJECT &#124; Store** menu option. Deployment of the CRT is handled automatically behind the scenes. For more information, see [Selling Apps](http://go.microsoft.com/fwlink/p/?LinkId=262280).  
  
 When you deploy a native C++ desktop application to another computer, you must install the application itself and any library files that the application depends on. There are three ways to deploy the Visual C++ runtime with an application: central deployment, local deployment, or static linking. For more information, see [Deploying Desktop Applications](../ide/deploying-native-desktop-applications-visual-cpp.md).  
  
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
|[Visual C++](../top/visual-cpp-in-visual-studio.md)|Describes key features of Visual C++ in Visual Studio and links to the rest of the Visual C++ documentation.|
