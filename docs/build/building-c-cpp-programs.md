---
title: "Building C/C++ Projects in Visual Studio"
ms.date: "12/08/2018"
f1_keywords: ["vcbuilding", "buildingaprogramVC"]
helpviewer_keywords: ["builds [C++]", "Visual C++ projects, building", "projects [C++], building", "builds [C++], options", "Visual C++, build options"]
ms.assetid: fa6ed4ff-334a-4d99-b5e2-a1f83d2b3008
---
# Building C/C++ Projects

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