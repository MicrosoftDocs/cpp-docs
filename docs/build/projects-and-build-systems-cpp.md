---
title: "C/C++ projects and build systems in Visual Studio"
description: "Use Visual Studio to compile and build C++ projects for Windows, ARM, or Linux based on any project system."
ms.date: "07/17/2019"
helpviewer_keywords: ["builds [C++]", "C++ projects, building", "projects [C++], building", "builds [C++], options", "C++, build options"]
ms.assetid: fa6ed4ff-334a-4d99-b5e2-a1f83d2b3008
ms.topic: "overview"
ms.custom: intro-overview
---
# C/C++ projects and build systems in Visual Studio

You can use Visual Studio to edit, compile, and build any C++ code base with full IntelliSense support without having to convert that code into a Visual Studio project or compile with the MSVC toolset. For example, you can edit a cross-platform CMake project in Visual Studio on a Windows machine, then compile it for Linux using g++ on a remote Linux machine.

## C++ compilation

To *build* a C++ program means to compile source code from one or more files and then link those files into an executable file (.exe), a dynamic-load library (.dll) or a static library (.lib).

Basic C++ compilation involves three main steps:

- The C++ preprocessor transforms all the #directives and macro definitions in each source file. This creates a *translation unit*.
- The C++ compiler compiles each translation unit into object files (.obj), applying whatever compiler options have been set.
- The *linker* merges the object files into a single executable, applying the linker options that have been set.

## The MSVC toolset

The Microsoft C++ compiler, linker, standard libraries, and related utilities make up the MSVC compiler toolset (also called a toolchain or "build tools"). These are included in Visual Studio. You can also download and use the command-line toolset as a free standalone package. For more information, see [Build Tools for Visual Studio](https://visualstudio.microsoft.com/downloads/#build-tools-for-visual-studio-2022) on the Visual Studio Downloads page.

You can build simple programs by invoking the MSVC compiler (cl.exe) directly from the command line. The following command accepts a single source code file, and invokes cl.exe to build an executable called *hello.exe*:

```cmd
cl /EHsc hello.cpp
```

Here the compiler (cl.exe) automatically invokes the C++ preprocessor and the linker to produce the final output file. For more information, see [Building on the command line](building-on-the-command-line.md).

## Build systems and projects

Most real-world programs use some kind of *build system* to manage complexities of compiling multiple source files for multiple configurations (debug vs. release), multiple platforms (x86, x64, ARM, and so on), custom build steps, and even multiple executables that must be compiled in a certain order. You make settings in a build configuration file(s), and the build system accepts that file as input before it invokes the compiler. The set of source code files and build configuration files needed to build an executable file is called a *project*.

The following list shows various options for Visual Studio Projects - C++:

- create a Visual Studio project by using the Visual Studio IDE and configure it by using property pages. Visual Studio projects produce programs that run on Windows. For an overview, see [Compiling and Building](/visualstudio/ide/compiling-and-building-in-visual-studio) in the Visual Studio documentation.

- open a folder that contains a CMakeLists.txt file. CMake support is integrated into Visual Studio. You can use the IDE to edit, test, and debug without modifying the CMake files in any way. This enables you to work in the same CMake project as others who might be using different editors. CMake is the recommended approach for cross-platform development. For more information, see [CMake projects](cmake-projects-in-visual-studio.md).

- open a loose folder of source files with no project file. Visual Studio will use heuristics to build the files. This is an easy way to compile and run small console applications. For more information, see [Open Folder projects](open-folder-projects-cpp.md).

- open a folder that contains a makefile, or any other build system configuration file. You can configure Visual Studio to invoke any arbitrary build commands by adding JSON files to the folder. For more information, see [Open Folder projects](open-folder-projects-cpp.md).

- Open a Windows makefile in Visual Studio. For more information, see [NMAKE Reference](reference/nmake-reference.md).

## MSBuild from the command line

You can invoke MSBuild from the command line by passing it a .vcxproj file along with command-line options. This approach requires a good understanding of MSBuild, and is recommended only when necessary. For more information, see [MSBuild](msbuild-visual-cpp.md).

## In This Section

[Visual Studio projects](creating-and-managing-visual-cpp-projects.md)\
How to create, configure, and build C++ projects in Visual Studio using its native build system (MSBuild).

[CMake projects](cmake-projects-in-visual-studio.md)\
How to code, build, and deploy CMake projects in Visual Studio.

[Open Folder projects](open-folder-projects-cpp.md)\
How to use Visual Studio to code, build, and deploy C++ projects based on any arbitrary build system, or no build system at all.

[Release builds](release-builds.md)\
How to create and troubleshoot optimized release builds for deployment to end users.

[Use the MSVC toolset from the command line](building-on-the-command-line.md)\
Discusses how to use the C/C++ compiler and build tools directly from the command line rather than using the Visual Studio IDE.

[Building DLLs in Visual Studio](dlls-in-visual-cpp.md)\
How to create, debug, and deploy C/C++ DLLs (shared libraries) in Visual Studio.

[Walkthrough: Creating and Using a Static Library](walkthrough-creating-and-using-a-static-library-cpp.md)\
How to create a **.lib** binary file.

[Building C/C++ Isolated Applications and Side-by-side Assemblies](building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)\
Describes the deployment model for Windows Desktop applications, based on the idea of isolated applications and side-by-side assemblies.

[Configure C++ projects for 64-bit, x64 targets](configuring-programs-for-64-bit-visual-cpp.md)\
How to target 64-bit x64 hardware with the MSVC build tools.

[Configure C++ projects for ARM processors](configuring-programs-for-arm-processors-visual-cpp.md)\
How to use the MSVC build tools to target ARM hardware.

[Optimizing Your Code](optimizing-your-code.md)\
How to optimize your code in various ways including program guided optimizations.

[Configuring Programs for Windows XP](configuring-programs-for-windows-xp.md)\
How to target Windows XP with the MSVC build tools.

[C/C++ Building Reference](reference/c-cpp-building-reference.md)\
Provides links to reference articles about program building in C++, compiler and linker options, and various build tools.
