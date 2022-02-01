---
title: "/translateInclude"
description: "Use the /translateInclude compiler option to treat #include directives as import statements when an importable header unit is available."
ms.date: 01/31/2022
author: "tylermsft"
ms.author: "twhitney"
f1_keywords: ["/translateInclude"]
helpviewer_keywords: ["/translateInclude", "Translate include directives into import directives"]
---
# `/translateInclude`

This switch has two functions:
* Instructs the compiler to treat `#include` as `import` for header files that have been built into header unit (`.ifc`) files and are specified on the command line with [`/headerUnit` (Use header unit IFC)](headerunit.md).
* When used in conjunction with [`/scanDependencies`](scandependencies.md) or [`/sourceDependencies-directives`](sourcedependencies-directives.md), the compiler lists headers included in the source that are also listed in a [`header-units.json`](header-unit-json-reference.md) file as imported header units in the generated dependency file. This dependency file is used by the build system to generate compiled header unit files (`.ifc` files). Then, instead of running those header files through the preprocessor, they are imported. For more details, see [Walkthrough: Build and import header units in Microsoft Visual C++](../walkthrough-header-units.md).

## Syntax

> **`/translateInclude`**

## Remarks

`/translateInclude` is available starting in Visual Studio 2019 version 16.10.\
The **`/translateInclude`** compiler option requires [/std:c++20](std-specify-language-standard-version.md) or a later option such as **`/std:c++latest`**.

The Microsoft build system does the following when **`/translateInclude`** and either [`/scanDependencies`]() or [`/sourceDependencies:directives`](sourcedependencies-directives.md) is specified:

1. Get all header units and modules from referenced projects and add them, as well as their dependencies, via `/reference` and `/headerUnit` to the command line for all sources in the project.
1. The compiler scans all of the sources that are marked to be scanned. They are marked by default based on file extension, or may be marked explicitly in the IDE. For an example of marking files explicitly, see [Walkthrough: Build and import header units in Microsoft Visual C++](../walkthrough-header-units.md).
1. Read the produced dependencies JSON files. If header units dependencies are reported in the dependency files, scan those headers too.
1. Repeat step #3 until no new header unit dependencies are reported.
1. Create a dependency graph using all dependency data.
1. Add `/reference` and `/headerUnit` for all directly and indirectly referenced modules and header units, as well as those from step #1.
1. Build the scanned sources based on the order of their dependencies.  
1. Build the rest of the sources, adding `/reference` and `/headerUnit` for all built modules and header units, their dependencies, and referenced projects from step #1.

Next, when `#include` is encountered in your source, the compiler treats it as if you had written `import`, and reports it as a header init dependency in the generated dependency file. As far as the compiler system is concerned, it looks like the code was written with `import` as long as one of the following conditions is true:
* A `/headerUnit` for the included header is specified on the command line.
* A `header-units.json` file exists in the header directory and it contains the header file name.

You can see an example of a `header-units.json` file under the installation directory for Visual Studio (`%ProgramFiles%\Microsoft Visual Studio\2022\Enterprise\VC\Tools\MSVC\14.30.30705\include\header-units.json`). This file, which ships with Microsoft Visual C++, is used by the compiler to determine whether a Standard Template Library header can be compiled as a header unit. If an `#include` file isn't listed in the `header-units.json` file, it's treated as a normal `#include`

The `header-units.json` file is only consulted when `/translateInclude` is specified.

### Example

For an example, see  [Walkthrough: Build and import header units in Microsoft Visual C++](../walkthrough-header-units.md).

## To set this compiler option in Visual Studio

To enable `/translateInclude`, in the project properties, set **Translate Includes to Imports**:

1. In the left-hand pane of the project property pages, select **Configuration Properties** > **C/C++** > **General**
1. Change the **Translate Includes to Imports** dropdown to **Yes**
![Screenshot of the Property Pages dialog with the Translate Includes to Imports property highlighted.](../media/vs2019-translate-includes-option.png)

## See also

[`/headerUnit` (Use header unit IFC)](headerunit.md).\
[`/exportHeader` (Create header units)](module-exportheader.md)\
[`/reference` (Use named module IFC)](module-reference.md)\
[`/scanDependencies`](scandependencies.md)\
[`/sourceDependencies-directives`](sourcedependencies-directives.md)
