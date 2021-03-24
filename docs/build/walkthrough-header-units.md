---
description: "Learn more about C++ header units by converting a project to use header units"
title: "Walkthrough: Build and import header units in Visual C++ projects"
ms.date: "3/26/2021"
ms.custom: "conceptual"
f1_keywords: []
helpviewer_keywords: ["import", "header unit", "ifc", "stl"]
---

# Walkthrough: Build faster with header units

This section is about building and importing header units in Microsoft Visual C++ in general.

See [Walkthrough: Import STL libraries using header units]() to learn how to increase build time for projects that use STL libraries by importing them as header units.

## Prerequisites

Support for header units requires Visual Studio 19.10 Preview 2.

## What is a header unit

A header unit is an interpretation of a header file as if it was a self-contained translation unit that exports all declarations contained therein. They are used to provide some “module-like” feel to header files even though they lack the level of isolation and one definition rule (ODR) guarantees provided by named modules.  Their essential use is to save on repeated processing of the same content of a header file in order to improve on compilation time.  That requires ability to refer to the saved work, for re-use.  Unfortunately, the semantics provided by a header file is really its content – not the filepath of the header file -- whereas a module is identified uniquely by its name.  This document specifies the MSVC compiler switches recommended for producing the IFC files for header units, and how to consume them. In the process, it addresses a few weaknesses in the current IFC production.  Consequently, the MSVC compiler needs to be modified to comply.

### IFC files

Want to describe what these are briefly? Also from Header Units: production and consumption by Gabriel Reis

 An IFC file is a binary format that stores the definition of a named module interface file or a header unit. This is the thing the compiler brings in when an *import* statement is processed.

Brought in with /reference M=/path/to/some-file.ifc which establishes a mapping between the module name and where to find the corresponding IFC file.

/exportHeader requests the generation of the .IFC file.

Contrast with Shared PCH usage sample in Visual Studio (see https://devblogs.microsoft.com/cppblog/shared-pch-usage-sample-in-visual-studio/

See the following topics to help you with the way you'd like to use header units.

## In this section

[Compile faster with Standard Template Library (STL) header units](walkthrough-import-stl-header-units.md)
[Build and import header units](walkthrough-build-import-header-units.md)
[Strategies for reusing header units](header-unit-strategies.md)  maybe this folds into the article above JTW
[header-unit.json reference](header-unit-json-reference.md)

## See also

[Modules docs]()\
[Precompiled header docs]()\
[ISO papers?]()\
[/translateInclude]()\
[/headerUnit]()\
[/headerName]()


## ?

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