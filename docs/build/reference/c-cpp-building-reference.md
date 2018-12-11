---
title: "C/C++ Building Reference"
ms.date: "11/04/2016"
helpviewer_keywords: ["compiling source code [C++], additional information", "cl.exe compiler [C++], building programs", "linker [C++], building reference", "builds [C++], additional information"]
ms.assetid: 100b4ccf-572c-4d1f-970c-fa0bc0cc0d2d
---
# C/C++ Building Reference

Visual C++ provides two ways of building a C/C++ program. The easiest (and most common) way is to [build within the Visual C++ development environment](../building-cpp-projects-in-visual-studio.md). The other way is to [build from a command prompt using command-line tools](../building-on-the-command-line.md). In either case, you can create your source files using the Visual C++ source editor or a third-party editor of your choice.

## In This Section

[MSBuild Overview for C++ projects](msbuild-visual-cpp-overview.md)

[Compiling a C/C++ Program](compiling-a-c-cpp-program.md)<br/>
Describes the compiler, which creates an object file containing machine code, linker directives, sections, external references, and function/data names.

[Linking](linking.md)<br/>
Describes the linker, which combines code from the object files created by the compiler and from statically linked libraries, resolves the name references, and creates an executable file.

[Release Builds](release-builds.md)<br/>
Presents information on why and when you would want to change from a debug build to a release build and also discusses some of the problems you may encounter when changing from a debug to a release build.

[Configure Visual C++ for 64-bit, x64 targets](configuring-programs-for-64-bit-visual-cpp.md)<br/>
Describes how to configure both Visual Studio and the command line to use the 64-bit toolset and how to target 64-bit architectures, and discusses common migration issues when code is moved to 64-bit architectures.

[Configure Visual C++ for ARM processors](configuring-programs-for-arm-processors-visual-cpp.md)<br/>
Describes the conventions used by ARM processors, and discusses common migration issues when code is moved to ARM architectures.

[Configuring Programs for Windows XP](configuring-programs-for-windows-xp.md)<br/>
Describes how to set the Platform Toolset to target Windows XP development.

[C/C++ Build Tools](c-cpp-build-tools.md)<br/>
Provides the following command-line tools for viewing or manipulating build output:

[C/C++ Build Errors](../../error-messages/compiler-errors-1/c-cpp-build-errors.md)<br/>
Introduces the build errors section in the table of contents.

## Related Sections

[C/C++ Preprocessor Reference](../../preprocessor/c-cpp-preprocessor-reference.md)<br/>
Discusses the preprocessor, which prepares source files for the compiler by translating macros, operators, and directives.

[Understanding Custom Build Steps and Build Events](../understanding-custom-build-steps-and-build-events.md)<br/>
Discusses customizing the build process.

[Building a C/C++ Program](../building-c-cpp-programs.md)<br/>
Provides links to topics describing building your program from the command line or from the integrated development environment of Visual Studio.

[Setting Compiler Options](setting-compiler-options.md)<br/>
Describes setting compiler options in the development environment or on the command line.

[Compiler Options](compiler-options.md)<br/>
Provides links to topics discussing using compiler options.

[Setting Linker Options](setting-linker-options.md)<br/>
Describes setting linker options inside or outside the integrated development environment.

[Linker Options](linker-options.md)<br/>
Provides links to topics discussing using linker options.

[BSCMAKE Reference](bscmake-reference.md)<br/>
Describes the Microsoft Browse Information Maintenance Utility (BSCMAKE.EXE), which builds a browse information file (.bsc) from .sbr files created during compilation.

[LIB Reference](lib-reference.md)<br/>
Describes the Microsoft Library Manager (LIB.exe), which creates and manages a library of Common Object File Format (COFF) object files.

[EDITBIN Reference](editbin-reference.md)<br/>
Describes the Microsoft COFF Binary File Editor (EDITBIN.EXE), which modifies Common Object File Format (COFF) binary files.

[DUMPBIN Reference](dumpbin-reference.md)<br/>
Describes the Microsoft COFF Binary File Dumper (DUMPBIN.EXE), which displays information about Common Object File Format (COFF) binary files.

[NMAKE Reference](../nmake-reference.md)<br/>
Describes the Microsoft Program Maintenance Utility (NMAKE.EXE), which is a tool that builds projects based on commands contained in a description file.