---
title: "C/C++ Building Reference - Visual Studio"
description: "Reference content for C/C++ project system and build tools in Visual Studio."
ms.date: "05/06/2019"
helpviewer_keywords: ["compiling source code [C++], additional information", "cl.exe compiler [C++], building programs", "linker [C++], building reference", "builds [C++], additional information"]
ms.assetid: 100b4ccf-572c-4d1f-970c-fa0bc0cc0d2d
---
# C/C++ Building Reference

Visual Studio provides two ways of building a C/C++ program. The easiest (and most common) way is to [build within the Visual Studio IDE](../creating-and-managing-visual-cpp-projects.md). The other way is to [build from a command prompt using command-line tools](../building-on-the-command-line.md). In either case, you can create and edit your source files using Visual Studio or a third-party editor of your choice.

## In This Section

[MSBuild reference for C++ projects](msbuild-visual-cpp-overview.md)

[MSVC Compiler Reference](compiling-a-c-cpp-program.md)<br/>
Describes the MSVC compiler, which creates an object file containing machine code, linker directives, sections, external references, and function/data names.

[MSVC linker reference](linking.md)<br/>
Describes the linker, which combines code from the object files created by the compiler and from statically linked libraries, resolves the name references, and creates an executable file.

[Unicode Support in the Compiler and Linker](unicode-support-in-the-compiler-and-linker.md)

[Additional MSVC Build Tools](c-cpp-build-tools.md)<br/>
Additional command-line tools for C++.

[C/C++ Build Errors](../../error-messages/compiler-errors-1/c-cpp-build-errors.md)<br/>
Introduces the build errors section in the table of contents.

## Related Sections

[C/C++ Preprocessor Reference](../../preprocessor/c-cpp-preprocessor-reference.md)<br/>
Discusses the preprocessor, which prepares source files for the compiler by translating macros, operators, and directives.

[Understanding Custom Build Steps and Build Events](../understanding-custom-build-steps-and-build-events.md)<br/>
Discusses customizing the build process.

[Building a C/C++ Program](../projects-and-build-systems-cpp.md)<br/>
Provides links to topics describing building your program from the command line or from the integrated development environment of Visual Studio.

[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
Describes setting compiler options in the development environment or on the command line.

[MSVC Compiler Options](compiler-options.md)<br/>
Provides links to topics discussing using compiler options.

[MSVC linker reference](linking.md)<br/>
Describes setting linker options inside or outside the integrated development environment.

[MSVC Linker Options](linker-options.md)<br/>
Provides links to topics discussing using linker options.

[BSCMAKE Reference](bscmake-reference.md)<br/>
Describes the Microsoft Browse Information Maintenance Utility (BSCMAKE.EXE), which builds a browse information file (.bsc) from .sbr files created during compilation.

[LIB Reference](lib-reference.md)<br/>
Describes the Microsoft Library Manager (LIB.exe), which creates and manages a library of Common Object File Format (COFF) object files.

[EDITBIN Reference](editbin-reference.md)<br/>
Describes the Microsoft COFF Binary File Editor (EDITBIN.EXE), which modifies Common Object File Format (COFF) binary files.

[DUMPBIN Reference](dumpbin-reference.md)<br/>
Describes the Microsoft COFF Binary File Dumper (DUMPBIN.EXE), which displays information about Common Object File Format (COFF) binary files.

[NMAKE Reference](nmake-reference.md)<br/>
Describes the Microsoft Program Maintenance Utility (NMAKE.EXE), which is a tool that builds projects based on commands contained in a description file.
