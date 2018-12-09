---
title: "Building C/C++ Projects in Visual Studio"
ms.date: "12/08/2018"
f1_keywords: ["vcbuilding", "buildingaprogramVC"]
helpviewer_keywords: ["builds [C++]", "Visual C++ projects, building", "projects [C++], building", "builds [C++], options", "Visual C++, build options"]
ms.assetid: fa6ed4ff-334a-4d99-b5e2-a1f83d2b3008
---
# Building C/C++ Projects
---
title: "Building C/C++ Programs"
ms.date: "11/27/2018"
f1_keywords: ["vcbuilding", "buildingaprogramVC"]
helpviewer_keywords: ["builds [C++]", "Visual C++ projects, building", "projects [C++], building", "builds [C++], options", "Visual C++, build options"]
ms.assetid: fa6ed4ff-334a-4d99-b5e2-a1f83d2b3008
---
# Building C/C++ Programs

In Visual Studio 2017 and later, the build system and compiler toolset are decoupled from the IDE. This means you can use Visual Studio to edit any existing code base with full IntelliSense support without having to convert that code into a Visual Studio project or use MSVC to compile it. For example, you can edit a CMake project in Visual Studio on your local machine, then compile it using g++ on a remote Linux machine.

## C++ compilation

To *build* a C++ program means to compile source code from one or more files and then link those files into an executable file (.exe), a dynamic-load library (.dll) or a static library (.lib). 

Basic compilation involves three main steps:

- The C++ preprocessor transforms all the #directives and macro definitions in each source file. This creates a *translation unit*.
- The C++ compiler compiles each translation unit into object files, according to whatever compiler options have been set.
- The *linker* merges the object files into a single executable according to the linker options that have been set. 

## The MSVC toolset

You can build simple programs by invoking the MSVC compiler (cl.exe) directly from the command line. The following example is taken from [](). The command accepts a single source code file, and builds an executable called *hello.exe*: 

```cmd
cl /EHsc hello.cpp
```
Note that here the compiler (cl.exe) automatically invokes the C++ preprocessor and the linker to produce the final output file. 

The MSVC compiler, linker, C++ standard libraries, and related utilities comprise the MSCV toolset. You can download and use the toolset as a standalone package for free from the [MSVC compiler tools download location](). For more information, see [Building from the command line](building-from-the-command-line.md).

## Build systems and projects

Most real-world programs use some kind of *build system* to manage complexities of compiling multiple source files for multiple configurations (i.e. debug vs. release), multiple platforms (x86, x64, ARM, and so on), custom build steps, and even multiple executables that must be compiled in a certain order. You make settings in a build configuration file(s), and the build system accepts that file as input before it invoke the compiler. The set of source code files and build configuration files needed to build an executable file is called a *project*. 

The following list shows various options for building C++ projects in Visual Studio:

- create a Visual Studio project by using the Visual Studio IDE and configure it by using property pages. Visual Studio projects produce programs that run on Windows. For an overview, see [Compiling and Building](/visualstudio/ide/compiling-and-building-in-visual-studio). 

- open a folder that contains a CMakeLists.txt file. CMake support is integrated into Visual Studio. You can use the IDE to edit, test and debug without modifying the CMake files in any way. This enables you to work in the same CMake project as others who might be using different editors. CMake is the recommended approach for cross-platform development. For more information, see []().
 
- open a loose folder of source files with no project file. Visual Studio will use heuristics to build the files. This is an easy way to compile and run small console applications. For more information, see []().

- open a folder that contains a makefile, or any other build system configuration file. You can configure Visual Studio to invoke any arbitrary build commands by adding JSON files to the folder. Or you can simply use the command line to build. For more information, see []().

## MSBuild from the command line 

You can invoke MSBuild from the command line by passing it a .vcxproj file along with command-line options. This approach requires a good understanding of MSBuild, and is recommended only when absolutely necessary. For more information, see [MSBuild](../build/msbuild-visual-cpp.md).

## In This Section

[Building C++ Projects in Visual Studio](../ide/building-cpp-projects-in-visual-studio.md)<br/>
Discusses how to use the Visual Studio IDE to build your C/C++ project.

[Build C/C++ code on the command line](../build/building-on-the-command-line.md)<br/>
Discusses how to use the C/C++ command-line compiler and build tools that are included in Visual Studio.

[Building C/C++ Isolated Applications and Side-by-side Assemblies](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)<br/>
Describes the deployment model for Windows Desktop applications, based on the idea of isolated applications and side-by-side assemblies.

[C/C++ Building Reference](../build/reference/c-cpp-building-reference.md)<br/>
Provides links to reference articles about program building in C++, compiler and linker options, and various build tools.

[Configure Visual C++ for 64-bit, x64 targets](../build/configuring-programs-for-64-bit-visual-cpp.md)<br/>
Describes how to configure both Visual Studio and the command line to use the 64-bit toolset and how to target 64-bit architectures, and discusses common migration issues when code is moved to 64-bit architectures.

[Configure Visual C++ for ARM processors](../build/configuring-programs-for-arm-processors-visual-cpp.md)<br/>
Describes the conventions used by ARM processors, and discusses common migration issues when code is moved to ARM architectures.

[Configuring Programs for Windows XP](../build/configuring-programs-for-windows-xp.md)<br/>
Describes how to set the Platform Toolset to target Windows XP development.

## Related Sections

[Compiling and Building](/visualstudio/ide/compiling-and-building-in-visual-studio)<br/>
Describes the Visual Studio build system and tools.

You can build C++ projects either in Visual Studio or on the command line. The Visual Studio IDE has built-in support for the default project system, [MSBuild](../build/msbuild-visual-cpp.md), as well as for CMake. IDE integration with any other build system is enabled through JSON configuration files.

On the command line, you can use the C/C++ compiler (cl.exe) and linker (link.exe) to build simple projects. To build more complex projects on the command line, you can use MSBuild or [NMAKE](../build/nmake-reference.md). 

For an overview about how to use Visual Studio to build projects and solutions, see [Compiling and Building](/visualstudio/ide/compiling-and-building-in-visual-studio).

## In This Section

[Visual Studio Projects (C++)](creating-and-managing-visual-cpp-projects.md)<br/>
[CMake projects](cmake-tools-for-visual-cpp.md)<br/>
[Open Folder projects](non-msbuild-projects.md)<br/>
[Windows makefile projects (NMAKE)](creating-a-makefile-project.md)<br/>
[Use the MSVC toolset from the command line](building-on-the-command-line.md)<br/>
How to use the C/C++ compiler and build tools directly from the command line.

[Use MSBuild from the command line](msbuild-visual-cpp.md)

[Building C/C++ Isolated Applications and Side-by-side Assemblies](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)<br/>
Describes the deployment model for Windows Desktop applications, based on the idea of isolated applications and side-by-side assemblies.

[Optimizing Your Code](reference/optimizing-your-code.md)

[C/C++ Building Reference](../build/reference/c-cpp-building-reference.md)<br/>
Provides links to reference articles about program building in C++, compiler and linker options, and various build tools.


## Related Sections

[Compiling and Building](/visualstudio/ide/compiling-and-building-in-visual-studio)<br/>
Describes the Visual Studio build system and tools.