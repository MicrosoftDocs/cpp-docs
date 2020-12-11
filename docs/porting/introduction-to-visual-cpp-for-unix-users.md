---
description: "Learn more about: Introduction to Microsoft C++ for UNIX Users"
title: "Introduction to Microsoft C++ for UNIX Users"
ms.date: "10/23/2019"
helpviewer_keywords: ["UNIX [C++]"]
ms.assetid: 36108b31-e7fa-49a8-a1f7-7077fcbec873
---
# Introduction to Microsoft C++ for UNIX Users

This topic provides information for users of all flavors of UNIX who are new to Visual Studio and want to become productive with C++ either from the command line or by using Visual Studio. You can use Visual Studio with the Microsoft C++ compiler to target Windows. You can also use the Visual Studio IDE with GCC or Clang in UNIX environments such as remote Linux machines, MinGW-w64, and Windows Subsystem for Linux. To use C++ in Visual Studio, the **Desktop Development with C++** workload must be installed. Open the Visual Studio Installer to install the workload or add or remove optional components. Also install the **Linux Development with C++** workload if you'll be targeting a remote Linux machine. For Android or iOS development, install the **Mobile Development with C++** workload.

## Getting started on the command line

You can use the Microsoft C++ compiler from the command line in a similar way that you would use a UNIX command-line environment. You compile from the command prompt by using the command-line C and C++ compiler (CL.EXE), linker (LINK.EXE), and other tools, including NMAKE.EXE, the Microsoft version of the UNIX make utility.

In UNIX, commands are installed in a common folder, such as /usr/bin. In Visual Studio, the command-line tools are installed in your Visual Studio installation directory in the VC\bin subdirectory and its subdirectories. Unlike UNIX, these tools are not available in a plain command prompt window. To use the command-line tools, you must use a special developer command prompt that sets up the path and other environment variables that are necessary to compile C++ programs. For more information, see [Build C/C++ code on the command line](../build/building-on-the-command-line.md) and [Walkthrough: Compiling a Native C++ Program on the Command Line](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md).

## Debugging your code

You can use the Visual Studio debugger for Microsoft C++ projects from the command line, or from within the IDE. Compile with the [/Z7, /Zi, /ZI (Debug Information Format)](../build/reference/z7-zi-zi-debug-information-format.md) switch to enable stepping through sources. For more information, see [Debugging Native Code](/visualstudio/debugger/debugging-native-code) and [Using the Visual Studio IDE for C++ Desktop Development](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).

For programs compiled with GCC or Clang, Visual Studio invokes GDB, LLDB, or whatever custom debugger you specify.

## Visual Studio project system

The Visual Studio project system is called MSBuild. It uses project files in XML format; C++ project files have the extension .vcxproj. An application that consists of multiple libraries and executables, each potentially built with a different set of compiler options or even in a different language, are stored in multiple projects that are part of a single *solution*. A solution is an abstraction for a container to group multiple projects together. Information about solutions is stored in a solution file with the extension .sln. For more information, see [Solutions and Projects in Visual Studio](/visualstudio/ide/solutions-and-projects-in-visual-studio) and [Using the Visual Studio IDE for C++ Desktop Development](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md). From the main menu, choose **File** > **New** > **Project** to see the available Visual Studio project templates.

Starting in Visual Studio 2017, support for CMake projects is added, as well as options for using the Microsoft C++ compiler with any arbitrary build system, or with a loose folder of source files and no project files. For more information, see [CMake projects in Visual Studio](../build/cmake-projects-in-visual-studio.md) and [Open Folder projects in Visual Studio](../build/open-folder-projects-cpp.md).

## Microsoft-specific modifiers

The Microsoft C++ compiler implements several extensions to the standard C++ programming language to support programming for Windows operating systems. These extensions are used to specify storage class attributes, function calling conventions, and based addressing, among other things. For a complete list of all supported C++ extensions, see [Microsoft-Specific Modifiers](../cpp/microsoft-specific-modifiers.md).

You can disable all Microsoft-specific extensions to C++ by using the `/Za` compiler option. This option is recommended if you want to write code to run on multiple platforms. For more information on the `/Za` compiler option, see [/Za, /Ze (Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md). For more information on C++ compiler conformance, see [Microsoft C++ language conformance table](../overview/visual-cpp-language-conformance.md) and [Nonstandard Behavior](../cpp/nonstandard-behavior.md).

## Precompiled headers

The Microsoft C and C++ compilers provide options for precompiling any C or C++ code, including inline code. Using this performance feature, you can compile a stable body of code, store the compiled state of the code in a file, and, during subsequent compilations, combine the precompiled code with code that is still under development. Each subsequent compilation is faster because the stable code does not need to be recompiled.

By default, all precompiled code is specified in the files *pch.h* and *pch.cpp* (*stdafx.h* and *stdafx.cpp* in Visual Studio 2017 and earlier). For more information on precompiled headers, see [Creating Precompiled Header Files](../build/creating-precompiled-header-files.md).

## Related sections

For more information, see [Running Linux programs on Windows](../porting/porting-from-unix-to-win32.md).

## See also

[Projects and build systems](../build/projects-and-build-systems-cpp.md)
