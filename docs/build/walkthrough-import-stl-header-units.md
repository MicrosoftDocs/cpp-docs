---
description: "Learn more about: Walkthrough: Compiling a C++/CX Program on the Command Line"
title: "Walkthrough: Import STL header units"
ms.date: "3/11/2021"
f1_keywords: ["__vectorcall_cpp", "__vectorcall", "_vectorcall"]
helpviewer_keywords: ["__vectorcall keyword", "__vectorcall"]
---
# Walkthrough: Import STL header units


## Prerequisites

Visual Studio 19.10 Preview x

## Building and using header units for STL headers

### Option 1

Enable “Scan All Sources for Module Dependencies” in all projects that use header units. This will make build system to scan all files for imported header units (by which I presume they mean stuff following *import* JTW) and build them (in the correct dependency order) before building the sources which use them if they have not been already built by referenced projects.

This option is convenient if you just want to try header units or for codebases with extensive use of different header units where modularization is more important than build throughput as scanning all sources will take additional build time, especially in big codebases. This option also does not guarantee that a header unit for a particular header will be built only once, though header units that are built by referenced static libraries projects will be re-used.

### Option 2

Create a special project (or projects) to build common header units and reference this project (or projects) in all other projects that use STL header units. 
This option ensures that header units for a particular common header will be built only once during the build and then used everywhere. It is similar to using shared precompiled header file, though it is much simpler and more flexible.

To create this special project, you can do the following:
1.	Create an Empty C++ project.
2.	Open project properties (make sure All Configurations and All Platforms are selected in the Project Properties UI) and set the following properties:
Configuration Properties - General 
Configuration type = Static Library (.lib)
C++ Language Standard = ISO C++ 20 (or c++latest)

[Picture headerunit property pages](See doc building and using header units in VC projects.docx, search "to create this special project") Might just cut and paste that picture into our system

Configuration Properties - C/C++ - General 
Scan Sources for Module Dependencies = Yes  According to Building header units for STL headers and other libraries doc, scan creates the .json file containing module and header units and their dependencies, which is then built into .ifc files. JTW  That is read by the compiler option /sourceDependencies:directives:”the .json file”  This .json file lists which headers can be built as header units and which can't be.
/headerUnit specifies which headers to translate to .ifc
If you plan to build header units for STL headers (or other libraries which support header-units.json, see below), it is also recommended to set
Translate Includes = Yes.  If “Translate Includes to Imports” is enabled, the build will produce header units not only for the specified headers, but also for all headers that are included there and listed in STL library’s header-unit.json  file (in the same directory as the header files).  (JTW This is still somewhat mysterious to me)

[Picture headerunit property pages](See doc building and using header units in VC projects.docx, search "translate includes") <-- might use screen shot  from doc>
 
3.	Add a cpp file to it, say, HeaderUnits.cpp.
4.	Edit HeaderUnits.cpp and add imports to all header that you want to use as header units.
For Instance,
Import <iostream>;
Import <vector>;

If “Translate Includes to Imports” is enabled, the build will produce header units not only for the specified headers, but also for all headers that are included there and listed in STL library’s header-unit.json  file (in the same directory as the header files). This ensures minimal symbols duplication in the header units and best build throughput. 

## command line switches  (need a better place or maybe no place?)

/headerUnit - specifies headers to translate
    can be direct path, "", or <>
    /headerUnit:bracketed:"vector=c:\vector.ifc"  
    /headerUnit:quoted:"MyHeader.h=c:\MyHeader.ifc" 
   /headerUnit:c:\a.h=c:\a.ifc

  /exportHeader
 /moduleOutput:path\filename.ifc

/translateInclude

## See also

[MSVC Compiler Options](reference/compiler-options.md)
