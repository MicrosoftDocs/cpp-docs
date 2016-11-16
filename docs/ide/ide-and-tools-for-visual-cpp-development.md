---
title: "IDE and Tools for Visual C++ Development | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Visual C++, development tools"
ms.assetid: 56eabafb-1956-4f0f-bec5-29b887763559
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# IDE and Tools for Visual C++ Development
As part of the Visual Studio Integrated Development Environment (IDE), Visual C++ shares many windows and tools in common with other languages. Many of those, including **Solution Explorer**, the Code Editor, and the Debugger, are documented in the MSDN library under [Visual Studio IDE](/visualstudio/ide/visual-studio-ide). Often, a shared tool or window has a slightly different set of features for C++ than for the .NET languages or Javascript. Some windows or tools are only available in Visual Studio Pro or Visual Studio Enterprise. This topic introduces the Visual Studio IDE from the perspective of Visual C++, and provides links to other topics relevant to Visual C++.  
  
 In addition to shared tools in the Visual Studio IDE, Visual C++ has several tools specifically for native code development. These tools are also listed in this article. For a list of which tools are available in each edition of Visual Studio, see [Visual C++ Tools and Features in Visual Studio Editions](../ide/visual-cpp-tools-and-features-in-visual-studio-editions.md).  
  
## Creating a solution and project(s)  
 In all editions of Visual C++, you organize the source code and related files for an executable ( such as an .exe, .dll or .lib) into a project. A project has a project file in XML format (.vcxproj) that specifies all the files and resources needed to compile the program, as well as other configuration settings, for example the target platform (x86, x64 or ARM) and whether you are building a release version or debug version of the program. A project (or many projects) are contained in a *Solution*; for example, a solution might contain several Win32 DLL projects, and a single Win32 console application that uses those DLLs. When you build the project, the MSBuild engine consumes the project file and produces the executable file and/or any other custom output you have specified.  
  
 **Project templates**  
  
 Visual C++ comes with several project templates, which contain starter code and the settings needed for a variety of basic program types. Typically you start by choosing **File &#124; New Project** to create a project from a project template, then add new source code files to that project, or start coding in the files provided. For information specific to C++ projects and project wizards, see [Creating and Managing Visual C++ Projects](../ide/creating-and-managing-visual-cpp-projects.md).  
  
 **Application wizards**  
  
 Visual C++ provides wizards for some project types. A wizard guides you step-by-step through the process of creating a new project. This is useful for project types that have many options and settings. For more information, see [Creating Desktop Projects By Using Application Wizards](../ide/creating-desktop-projects-by-using-application-wizards.md).  
  
## Creating user interfaces with designers  
 If your program has a user interface, one of the first tasks is to populate it with controls such as buttons, list boxes and so on. Visual Studio includes a visual design surface and a toolbox for each flavor of C++ application. No matter which type of app you are creating, the basic idea is the same: you drag a control from the toolbox window and drop it onto the design surface at the desired location. In the background, Visual Studio generates the resources and code required to make it all work.  
  
 For more information about designing a user interface for a Universal Windows Platform app, see  [Design and UI](https://developer.microsoft.com/en-us/windows/design).  
  
 For more information about creating a user interface for an MFC application, see [MFC Desktop Applications](../mfc/mfc-desktop-applications.md). For information about Win32 Windows programs, see [Windows Desktop Applications](../windows/windows-desktop-applications-cpp.md).  
  
 For information about Windows Forms applications with C++/CLI, see [Creating a Windows Forms Application By Using the .NET Framework (C++)](http://msdn.microsoft.com/en-us/8e007885-6c8b-4fb2-a41d-91febd114a9b).  
  
## Writing and editing code  
 **Semantic colorization**  
  
 After you create a project, all the project files are displayed in the Solution Explorer window. When you click on a .h or .cpp file in Solution Explorer, the file opens up in the code editor. The code editor is a specialized word processor for C++ source code. It color-codes language keywords, method and variable names, and other elements of your code to make the code more readable and easier to understand.  
  
 **Intellisense**  
  
 The code editor also supports several features that together are known as Intellisense. You can hover over a method and see some basic documentation for it. After you type a class variable name and a . or ->, a list of instance members of that class appears. If you type a class name and then a ::, a list of static members appears. When you start typing a class or method name, the code editor will offer suggestions to complete the statement. For more information, see [Using IntelliSense](/visualstudio/ide/using-intellisense).  
  
 **Code snippets**  
  
 You can use Intellisense code snippets to generate commonly-used or complicated code constructs with a shortcut keystroke. For more information, see [Code Snippets](/visualstudio/ide/code-snippets).  
  
## Navigating code  
 The VIEW menu provides access to many windows and tools for navigating around in your code files. For detailed information about these windows, see [Viewing the Structure of Code](/visualstudio/ide/viewing-the-structure-of-code).  
  
 **Solution Explorer**  
  
 In all editions of Visual Studio, use the Solution Explorer pane to navigate between the files in a project. Expand a .h or .cpp file icon to view the classes in the file. Expand a class to see its members. Double-click on a member to navigate to its definition or implementation in the file.  
  
 **Class View and Code Definition Window**  
  
 Use the Class View pane to see the namespaces and classes across all the files, including partial classes. You can expand each namespace or class to see its members and double-click on the member to navigate to that location in the source file. If you open the Code Definition Window, you can view the definition or implementation of the type when you choose it in Class View.  
  
 **Object Browser**  
  
 Use Object Browser to explore type information in Windows Runtime components (.winmd files), .NET assemblies and COM type libraries. It is not used with Win32 DLLs.  
  
 **Go To Definition/Declaration**  
  
 Press F12 on any API name or member variable to go to its definition. If the definition is in a .winmd file (for a [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] app) then you will be shown the type info in the Object Browser. You can also Go To Definition or Go To Declaration by right-clicking on the variable or type name and choosing the option from the context menu.  
  
 **Find All References**  
  
 In a source code file, right-click with the mouse cursor over the name of a type or method or variable, and choose Find all References to return a list of every location in the file, project or solution where the type is used. Find All References is intelligent and only returns instances of the same identical variable, even if other variables at different scope have the same name.  
  
 **Architecture Explorer and Dependency Graphs (Ultimate)**  
  
 Use Architecture Explorer to view relationships between various elements in your code. For more information, see [Find code with Architecture Explorer](http://msdn.microsoft.com/en-us/b1707926-ef73-47f9-92cd-e00d0fac7e76). Use  dependency graphs to view dependency relationships. For more information, see [How to: Generate Dependency Graphs for C and C++ Code](http://msdn.microsoft.com/en-us/3bd5cf9f-62f6-41d0-9f35-d4b2637cba3c).  
  
## Adding and Editing Resources  
 The term "resource" in the context of a Visual Studio desktop project includes things such as dialog boxes, icons, localizable strings, spash screens, database connection strings, or any arbitrary data that you want to include in the executable file.  
  
 For more information on adding and editing resources in native desktop C++ projects, see [Working with Resource Files](../mfc/working-with-resource-files.md).  
  
## Building (compiling and linking)  
 Press **Ctrl + Shift + B** to compile and link a project. Visual Studio uses [MSBuild](/visualstudio/msbuild/msbuild1) to create executable code. You can set general build options under **Tools &#124; Options &#124; Projects and Solutions** and you can set properties for specific projects under **Project &#124; Properties**. Build errors and warnings are reported in the Error List (**Ctrl +\\, E**). Additional information is sometimes shown in the Output Window (**Alt + 2**). For more information, see  [Working with Project Properties](../ide/working-with-project-properties.md) and [Building C++ Projects in Visual Studio](../ide/building-cpp-projects-in-visual-studio.md).  
  
 You can also use the Visual C++ compiler (cl.exe) and many other build-related standalone tools such as NMAKE and LIB directly from the command line. For more information, see [Building on the Command Line](../build/building-on-the-command-line.md) and [C/C++ Building Reference](../build/reference/c-cpp-building-reference.md).  
  
## Testing  
 Visual Studio includes a unit test framework for both native C++ and C++/CLI. For more information, see [Verifying Code by Using Unit Tests](/visualstudio/test/unit-test-your-code) and [Writing Unit tests for C/C++ with the Microsoft Unit Testing Framework for C++](/visualstudio/test/writing-unit-tests-for-c-cpp-with-the-microsoft-unit-testing-framework-for-cpp)  
  
## Debugging  
 You can debug your program by pressing F5 when your project configuration is set to Debug. While debugging you can set breakpoints by pressing F9, step through code by pressing F10, view the values of specified variables or registers, and even in some cases make changes in code and continue debugging without re-compiling. For more information, see [Debugging in Visual Studio](/visualstudio/debugger/debugging-in-visual-studio).  
  
## Deploying completed applications  
 You deploy a [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] to customers through the Windows Store through the **PROJECT &#124; Store** menu option. Deployment of the CRT is handled automatically behind the scenes. For more information, see [Selling Apps](http://go.microsoft.com/fwlink/p/?LinkId=262280).  
  
 When you deploy a native C++ desktop application to another computer, you must install the application itself and any library files that the application depends on. There are three ways to deploy the Visual C++ runtime with an application: central deployment, local deployment, or static linking. For more information, see [Deploying Desktop Applications](../ide/deploying-native-desktop-applications-visual-cpp.md).  
  
 For more information about deploying a C++/CLI program, see [Deployment Guide for Developers](http://msdn.microsoft.com/Library/094d043e-33c4-40ba-a503-e0b20b55f4cf),  
  
## Other tools  
  
## Related Articles  
  
|||  
|-|-|  
|[Visual C++ Tools and Features in Visual Studio Editions](../ide/visual-cpp-tools-and-features-in-visual-studio-editions.md)|Shows which features are available in the various editions of Visual Studio.|  
|[Visual C++ Guided Tour](http://msdn.microsoft.com/en-us/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)|Provides an overview of the Visual Studio development environment and the kinds of C++ apps that you can create.|  
|[Creating and Managing Visual C++ Projects](../ide/creating-and-managing-visual-cpp-projects.md)|Provides an overview of C++ projects in Visual Studio and links to other articles that explain how to create and manage them.|  
|[Building C/C++ Programs](../build/building-c-cpp-programs.md)|Describes how to build C++ projects.|  
|[Deploying Desktop Applications](../ide/deploying-native-desktop-applications-visual-cpp.md)|Provides an overview of deployment for C++ apps and links to other articles that describe deployment in detail.|  
|[Porting and Upgrading Programs](http://msdn.microsoft.com/en-us/c36c44b3-5a9b-4bb4-9b7a-469aa770ed00)|Links to articles that describe how to open C++ apps that were created in earlier versions of Visual Studio, and also how to open apps that were created by using tools other than Visual Studio.|  
|||  
|[Visual C++](../top/visual-cpp-in-visual-studio.md)|Describes key features of Visual C++ in Visual Studio and links to the rest of the Visual C++ documentation.|