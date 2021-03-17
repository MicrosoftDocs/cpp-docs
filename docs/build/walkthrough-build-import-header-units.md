---
description: "Learn more about: Walkthrough: Compiling a C++/CX Program on the Command Line"
title: "Walkthrough: Build and import header units in Visual C++ projects"
ms.date: "3/11/2021"
f1_keywords: ["__vectorcall_cpp", "__vectorcall", "_vectorcall"]
helpviewer_keywords: ["__vectorcall keyword", "__vectorcall"]
---
# Walkthrough: Build and import header units in your Visual C++ projects

## Prerequisites

Maybe list version

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

cl /ifcSearchDir [Dir1] /ifcSearchDir [Dir2] source.cpp 

In this case ifcs for header units (as well as named modules) will be found in the ifc search path by the names stored in the ifc. 

Using explicit /headerUnit reference 

/headerUnit:angle vector=/path/to/some-file.ifc 

The header file will be resolved by searching <vector> on the include path  

/headerUnit:quote my/header.h=/path/to/some-file.ifc 

The header file will be resolved by searching “my/header.h “ on the include path 

/headerUnit /path/to/header=/path/to/some-file.ifc 

The header file is explicitly specified by the path. 

In this case the resolved header path for import <header> or import “header” will be compared with the resolved header paths specified by /headerUnit* and the matching ifc will be used (without comparing the name stored in the ifc). 

## 3rd party

IDE usage 

People can create header_units.json in their headers directories. 

To translate 3rd party library headers, they will need to use /headerUnit:* switches.  

In VC projects they will be able to specify headers to translate as Additional Header Units Dependencies

## See also

[MSVC Compiler Options](reference/compiler-options.md)
