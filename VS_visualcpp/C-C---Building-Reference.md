---
title: "C-C++ Building Reference"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: C/C++ Building Reference
ms.assetid: 100b4ccf-572c-4d1f-970c-fa0bc0cc0d2d
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# C-C++ Building Reference
Visual C++ provides two ways of building a C/C++ program. The easiest (and most common) way is to [build within the Visual C++ development environment](../VS_visualcpp/Building-C---Projects-in-Visual-Studio.md). The other way is to [build from a command prompt using command-line tools](../VS_visualcpp/Building-on-the-Command-Line.md). In either case, you can create your source files using the Visual C++ source editor or a third-party editor of your choice.  
  
 If your program uses a makefile rather than a .vcxproj file, you can still build it in the development environment as an [external project](../VS_visualcpp/Building-External-Projects.md).  
  
## In This Section  
 [Compiling a C/C++ Program](../VS_visualcpp/Compiling-a-C-C---Program.md)  
 Describes the compiler, which creates an object file containing machine code, linker directives, sections, external references, and function/data names.  
  
 [Linking](../VS_visualcpp/Linking.md)  
 Describes the linker, which combines code from the object files created by the compiler and from statically linked libraries, resolves the name references, and creates an executable file.  
  
 [Release Builds](../VS_visualcpp/Release-Builds.md)  
 Presents information on why and when you would want to change from a debug build to a release build and also discusses some of the problems you may encounter when changing from a debug to a release build.  
  
 [Optimizing Your Code](../VS_visualcpp/Optimizing-Your-Code.md)  
 Provides links to topics discussing the mechanisms for optimizing code:  
  
 [C/C++ Build Tools](../VS_visualcpp/C-C---Build-Tools.md)  
 Provides the following command-line tools for viewing or manipulating build output:  
  
 [C/C++ Build Errors](../VS_visualcpp/C-C---Build-Errors.md)  
 Introduces the build errors section in the table of contents.  
  
## Related Sections  
 [C/C++ Preprocessor Reference](../VS_visualcpp/C-C---Preprocessor-Reference.md)  
 Discusses the preprocessor, which prepares source files for the compiler by translating macros, operators, and directives.  
  
 [Understanding Custom Build Steps and Build Events](../VS_visualcpp/Understanding-Custom-Build-Steps-and-Build-Events.md)  
 Discusses customizing the build process.  
  
 [Building a C/C++ Program](../VS_visualcpp/Building-C-C---Programs.md)  
 Provides links to topics describing building your program from the command line or from the integrated development environment of Visual Studio.  
  
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)  
 Describes setting compiler options in the development environment or on the command line.  
  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)  
 Provides links to topics discussing using compiler options.  
  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)  
 Describes setting linker options inside or outside the integrated development environment.  
  
 [Linker Options](../VS_visualcpp/Linker-Options.md)  
 Provides links to topics discussing using linker options.  
  
 [BSCMAKE Reference](../VS_visualcpp/BSCMAKE-Reference.md)  
 Describes the Microsoft Browse Information Maintenance Utility (BSCMAKE.EXE), which builds a browse information file (.bsc) from .sbr files created during compilation.  
  
 [LIB Reference](../VS_visualcpp/LIB-Reference.md)  
 Describes the Microsoft Library Manager (LIB.exe), which creates and manages a library of Common Object File Format (COFF) object files.  
  
 [EDITBIN Reference](../VS_visualcpp/EDITBIN-Reference.md)  
 Describes the Microsoft COFF Binary File Editor (EDITBIN.EXE), which modifies Common Object File Format (COFF) binary files.  
  
 [DUMPBIN Reference](../VS_visualcpp/DUMPBIN-Reference.md)  
 Describes the Microsoft COFF Binary File Dumper (DUMPBIN.EXE), which displays information about Common Object File Format (COFF) binary files.  
  
 [NMAKE Reference](../VS_visualcpp/NMAKE-Reference.md)  
 Describes the Microsoft Program Maintenance Utility (NMAKE.EXE), which is a tool that builds projects based on commands contained in a description file.