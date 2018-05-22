---
title: "Introduction to Visual C++ for UNIX Users | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "UNIX [C++]"
ms.assetid: 36108b31-e7fa-49a8-a1f7-7077fcbec873
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Introduction to Visual C++ for UNIX Users
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Introduction to Visual C++ for UNIX Users](https://docs.microsoft.com/cpp/porting/introduction-to-visual-cpp-for-unix-users).  
  
  
This topic provides information for UNIX users who are new to [!INCLUDE[vcprvc](../includes/vcprvc-md.md)] and want to become productive with [!INCLUDE[vcprvc](../includes/vcprvc-md.md)].  
  
## Getting Started on the Command Line  
 You can use [!INCLUDE[vcprvc](../includes/vcprvc-md.md)] from the command line in a similar way that you would use a UNIX command-line environment. You compile from the command prompt with the command-line C and C++ compiler (CL.EXE) and tools, including NMAKE.EXE, the Microsoft version of the UNIX make utility.  
  
 In UNIX, commands are installed in a common folder, such as /usr/bin. In [!INCLUDE[vcprvc](../includes/vcprvc-md.md)], the command-line tools are installed in your installation directory at VC\bin (on a typical installation at Program Files\Microsoft Visual Studio 8\VC\bin). To use the command-line tools, run vsvars32.bat, which is located in your installation directory at Common7\Tools. This adds your bin directory to your path and sets up other paths that are necessary to compile Visual C++ programs from the command line.  
  
> [!NOTE]
>  If you open a command prompt with the **Visual Studio Command Line Prompt** from the **Start** menu, then vsvars32.bat is run for you.  
  
 To take advantage of more powerful features, such as the debugger, statement completion, and so on, you need to use the development environment. For more information, see [Building on the Command Line](../build/building-on-the-command-line.md) and [Walkthrough: Compiling a Native C++ Program on the Command Line](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md).  
  
## Debugging Your Code  
 If you use the command line and run your applications on your development workstation, you will see that a dialog box to run the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] debugger is displayed when your code encounters a memory access violation, unhandled exception, or other unrecoverable errors. If you click **OK**, then the Visual Studio development environment is started, and the debugger will open to the point of failure. It is possible to debug your applications this way, and, in this case, your source code would only be available if you compiled with the [/Z7, /Zi, /ZI (Debug Information Format)](../build/reference/z7-zi-zi-debug-information-format.md) switch. For more information, see [Debugging Native Code](http://msdn.microsoft.com/library/d94eee90-7e0d-4cac-88c1-9831030daa5e) and [Using the Visual Studio IDE for C++ Desktop Development](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
## Using the Development Environment  
 It is easier to use the development environment to edit and build your source code in a *project*. A project is a collection of source and related files that will be compiled into a single unit, such as a library or executable. A project also contains information on how the files are to be built. Information about projects is stored in a project file with the extension .prj.  
  
 An application that consists of multiple libraries and executables, each potentially built with a different set of compiler options or even in a different language, are stored in multiple projects that are part of a single *solution*. A solution is an abstraction for a container to group multiple projects together. Information about solutions is stored in a solution file with the extension .sln. For more information, see [PAVE: Managing Solutions and Projects](http://msdn.microsoft.com/en-us/7a50db22-d3cc-46f3-b648-ab7e0528e260) and [Using the Visual Studio IDE for C++ Desktop Development](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
## Importing Your Existing Code  
 You can use [!INCLUDE[vcprvc](../includes/vcprvc-md.md)] to use existing code that is set up to compile with or without a makefile and put it into a [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] project. For more information, see the **Create Project From Existing Code Files Wizard**. For more information, see [How to: Create a C++ Project from Existing Code](../ide/how-to-create-a-cpp-project-from-existing-code.md).  
  
## Creating a New Project  
 You can create new projects in the development environment. [!INCLUDE[vcprvc](../includes/vcprvc-md.md)] provides numerous templates that provide standard code for various common projects. You can use application wizards to generate projects with code outlines for various application types.  
  
 You can start with an empty project by using the **Console Application (Win32) Wizard**. Select the **Empty Project** check box. You can then add new and existing files to the project later.  
  
 When you create a project, you must name the project. By default, the project name equals the name of the dynamic-link library (DLL) or executable that is build from the project. For more information, see [Creating Solutions and Projects](http://msdn.microsoft.com/library/836f8ca0-3fc9-4f4b-9090-45f2e4d2e9c8).  
  
## Microsoft-Specific Modifiers  
 Visual C++ contains several extensions to the standard C++ programming language. These extensions are used to specify storage class attributes, function calling conventions, and based addressing, among other things. For a complete list of all Visual C++ extensions, see [Microsoft-Specific Modifiers](../cpp/microsoft-specific-modifiers.md).  
  
 You can disable all Microsoft-specific extensions to C++ by using the **/Za** compiler option. This option is recommended if you want to write code to run on multiple platforms. For more information on the **/Za** compiler option, see [/Za, /Ze (Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md). For more information on Visual C++ conformance, see [Compatibility and Compliance Issues in Visual C++](../misc/compatibility-and-compliance-issues-in-visual-cpp.md).  
  
## Precompiled Headers  
 The Microsoft C and C++ compilers provide options for precompiling any C or C++ code, including inline code. Using this performance feature, you can compile a stable body of code, store the compiled state of the code in a file, and, during subsequent compilations, combine the precompiled code with code that is still under development. Each subsequent compilation is faster because the stable code does not need to be recompiled.  
  
 By default, all precompiled code is specified in the files **stdafx.h** and **stdafx.cpp**. The **New Project** wizard will automatically create these files for you unless you deselect the **Precompiled header** option. For more information on precompiled headers, see [Creating Precompiled Header Files](../build/reference/creating-precompiled-header-files.md).  
  
## Related Sections  
 For more information, see [Porting from UNIX to Win32](../porting/porting-from-unix-to-win32.md).  
  
## See Also  
 [Visual C++ Guided Tour](http://msdn.microsoft.com/en-us/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)

