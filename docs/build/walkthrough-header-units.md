---
description: "Learn more about C++ header units by converting a project to use header units"
title: "Walkthrough: Build and import header units in Visual C++ projects"
ms.date: "4/13/2021"
ms.custom: "conceptual"
f1_keywords: []
helpviewer_keywords: ["import", "header unit", "ifc", "stl"]
---

# Walkthrough: Build and import header units in Visual C++ projects

This section is about building and importing header units in Microsoft Visual C++.

See [Walkthrough: Import STL libraries using header units]() to learn specifically how to import STL libraries as header units.

## Prerequisites

Support for header units requires Visual Studio 19.10 Preview 2.

## What is a header unit

Header units are a binary representation of a header file, and end with an `.ifc` extension. Header units provide a “module-like” experience for header files even though they lack the level of isolation provided by named modules. For example, macros in a header unit are visible, while those in a module aren't. Another difference is that header units are not affected by macro definitions the way header files are. For example, you can't `#define` a symbol that causes the header unit to conditionally turn on and off functionality the way you can with a header file. Also, unlike `#include` files, header units are not  affected by the order they are imported in.

Header units are a simpler alternative to using [precompiled header files](creating-precompiled-header-files.md) Header units are easier to setup and easier to use than a [shared PCH](https://devblogs.microsoft.com/cppblog/shared-pch-usage-sample-in-visual-studio), while providing similar performance benefits. Also, unlike a PCH, when a header unit changes, only it and its dependencies are rebuilt.

<< under construction >>

## In this section

Before a header unit can be imported, it must be built. You can either tell the IDE which header units need to be built, or you can have the IDE scan for them. When a header file or module interface file (*.ixx) is built, it is also scanned for dependencies.

### Automatic

Perf issues with scanning for them (build throughput, intellisense init) that might not be desirable in large codebases that only make use of a few header units.

set “Scan Sources for Module Dependencies” to “Yes” in C/C++ - General tab

### Set properties

To build as a header unit:

.h files marked c/c++ compile will be compiled as header units
any file marked 'compile as header unit'


- right-click on the file in Solution Explorer, select Properties. Change Item Type to be C/C++ Compile (.h files are “C/C++ Include” by default), hit Apply. 
- If the header file extension is different from “.h”, set “Compile As” to “Compile As Header Unit” in the C/C++ Advanced

### Provide a list *.json thing

## Building a header unit project

This section about creating a project that builds your header units

[this from](https://microsoft-my.sharepoint.com/:w:/p/gdr/Ea5Jy1oVuwxJpsiLYuem9FgBYioxSLmGER2QVPp4muq7vQ?e=4%3AW1atMJ&at=9&CID=AAA917D6-FC4D-41F0-9803-4DD2BD0B63CF&wdLOR=c6BFFEDA4-B56F-4FE8-AEFA-2F6A29107415)
cl /exportHeader /headerName:angle vector=/path/to/source/file 

for requesting the generation of an IFC file for header-name <vector> resolving to /path/to/source/file, and 

cl /exportHeader /headerName:quote my/header.h=/path/to/source/file 

for requesting the generation of an IFC file for header-name “my/header.h” resolving to /path/to/source/file. 

## Consuming header units

If you want to use modules or header units built outside of your solution/codebase, you can use C/C++ >  Additional Module dependencies & perhaps Additional Header Unit Dependencies. 


[this from](https://microsoft-my.sharepoint.com/:w:/p/gdr/Ea5Jy1oVuwxJpsiLYuem9FgBYioxSLmGER2QVPp4muq7vQ?e=4%3AW1atMJ&at=9&CID=AAA917D6-FC4D-41F0-9803-4DD2BD0B63CF&wdLOR=c6BFFEDA4-B56F-4FE8-AEFA-2F6A29107415)
Using ifc search path: 

Using ifc search path: 

`cl /ifcSearchDir [Dir1] /ifcSearchDir [Dir2] source.cpp `

In this case `ifcs` for header units (as well as named modules) will be found in the ifc search path by the names stored in the ifc. 

Using explicit `/headerUnit` reference 

`/headerUnit:angle vector=/path/to/some-file.ifc` 

The header file will be resolved by searching `<vector>` on the include path  

`/headerUnit:quote my/header.h=/path/to/some-file.ifc `

The header file will be resolved by searching `"my/header.h"` on the include path:

`/headerUnit /path/to/header=/path/to/some-file.ifc` 

The header file is explicitly specified by the path. 

In this case the resolved header path for import `<header>` or `import "header"` will be compared with the resolved header paths specified by `/headerUnit*` and the matching `.ifc` will be used (without comparing the name stored in the `.ifc`).

## Strategies for sharing C++ header units

Header units that are built as a part of a static library project, are automatically available to all directly and indirectly referencing projects. 

To use modules and header units built as a part of a dll project, their symbols have to be exported from the dll as any other C/C++ symbols and “All Modules arePublic” property should be set to true.

If you build header units for the headers in your codebase, you might want to control which ones should be automatically available to all referencing projects and which ones should be “private” by specifying  “Public C++ Modules Directories”. 

You might also want to specify “Public Include Directories” for your public headers to be automatically added to Include Directories (/I) in the referencing projects.

[Picture of header unit property pages]( see Building and using header units in VC projects.docx under Reusing built header units between different projects)

Ensure that projects that share header units are built with compatible compilation options, just as you would with shared pre-compiled headers. The compiler will issue warnings if it detects different compilation options in how the module or header unit was produced and how it is used.

If you reference two or more projects that built two or more modules with the same name or two or more header unit for the same header file,  you can use C/C++ >  Additional Module dependencies & Additional Header Unit Dependencies to resolve those collisions by specifying which module or header unit should be used for this project. Otherwise the one that is chosen is undefined.

## 3rd party

IDE usage 

People can create header_units.json in their headers directories. 

To translate 3rd party library headers, they will need to use /headerUnit:* switches.  

In VC projects they will be able to specify headers to translate as Additional Header Units Dependencies

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

[Overview of modules in C++](../cpp/modules-cpp.md)
[`/translateInclude`](./reference/translateinclude.md)
[`/exportHeader`](./reference/module-exportheader.md)
[`/headerUnit`](./reference/headerunit.md)
[Build faster using Standard Template Library (STL) header units]() to learn how to import STL libraries for faster compilation throughput.