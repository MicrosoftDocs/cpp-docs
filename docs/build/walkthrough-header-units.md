---
description: "Learn more about C++ header units by converting a header file to a header unit"
title: "Walkthrough: Build and import header units in Microsoft Visual C++ projects"
ms.date: "4/13/2021"
ms.custom: "conceptual"
helpviewer_keywords: ["import", "header unit", "ifc", "stl"]
---

# Walkthrough: Build and import header units in Microsoft Visual C++

This article is about building and importing header units using Visual Studio 2019. See [Walkthrough: Import STL libraries using header units](walkthrough-import-stl-header-units.md) to learn specifically how to import Standard Template Library headers as header units.

Header units are the recommended alternative to [precompiled header files](creating-precompiled-header-files.md). They're easier to set up and easier to use than a [shared PCH](https://devblogs.microsoft.com/cppblog/shared-pch-usage-sample-in-visual-studio), while providing similar performance benefits. Unlike a PCH, when a header unit changes, only it and its dependencies are rebuilt.

## Prerequisites

Support for header units requires at least Visual Studio 2019 16.10.0 Preview 2.

## What is a header unit

Header units are a binary representation of a header file, and end with an `.ifc` extension. This is also the format used to store named modules.

Header units provide a "module-like" experience for header files even though they lack the level of isolation provided by named modules. For example, everything in a header unit (including macro definitions) are visible, while those in a module aren't. Another difference is that header units aren't affected by macro definitions the way header files are. For example, you can't `#define` a symbol that causes the header unit to conditionally turn on and off functionality the way you can with a header file.

Header units are defined by the C++ standard, and can be used cross-platform.

Before you can import a header unit, a header file must be compiled into a header unit. Header units are independent of the machine they're built on. One machine could produce IFCs and another machine consume them. A PCH can't do that because the persisted data structures are largely tied to the memory layout of the machine where they're compiled.

Ideally, you should use the same compiler flags to compile a header unit and the program that imports it. Flags, like `/EHsc`, `/MD[d]`, and others, have an impact on the semantics of the program that are captured in a header unit.

## Ways to compile a header unit

There are several ways to compile a file into a header unit:

-Automatically scan for header units: This approach is best suited to smaller projects that include many different header files. See [Walkthrough: Import STL libraries as header units](walkthrough-import-stl-header-units.md#approach1) for a demonstration of this approach. The reason it's better suited to smaller projects, or for those where build time isn't a crucial consideration, is because it takes extra time for the build system to scan all of the files to find what should be built into header units.

-Build a shared header units project: This approach is best suited for larger projects, and for when you want more control over the organization of the imported header units. You create a static library (or libraries) that contain the header units that you want, and then reference it from the projects that then import the header units they need. See [Walkthrough: Import STL libraries as header units](walkthrough-import-stl-header-units.md#approach2) for a demonstration of this approach.

- Choose individual header units to build by changing the compilation action for a file. This approach is demonstrated here. This approach gives you file by file control over which header files are treated as header units. It's also a good way to quickly and selectively try out header units in your project.

To build header units from the headers in your codebase, you can use any of the methods above. To build and use header units for library headers that aren't part of your codebase, use the technique described in [Walkthrough: Import STL libraries using header units](walkthrough-import-stl-header-units.md).
 
## Convert a project to use header units

In this example, you'll compile a header file as a header unit. Begin by creating the following project in Visual Studio:

1. Create a new C++ console app project.
1. Replace the source file contents as follows:
```cpp
#include "Pythagorean.h"

int main()
{
    PrintPythogoreanTriple(2,3);
    return 0;
}
```
1. Add a header file called `Pythagorean.h`, and replace its contents with the following:
```cpp
#pragma once
#include <iostream>

void PrintPythogoreanTriple(int a, int b)
{
    std::cout << "Pythagorean triple a:" << a << " b:" << b << " c:" << a*a + b*b << std::endl;
}
```

To enable header units, set the project C++ language standard to use the latest features:

1. In the left-hand pane of the project property pages, select **Configuration Properties** > **General**
1. Change the **C++ Language Standard** dropdown to **Preview-Features from the Latest C++ Working Draft**
![Set language standard to preview version](media/set-cpp-language-latest.png)

### Compile a header file as a header unit

In the **Solution Explorer**, select the file you want to compile as a header unit. Right-click the file, and select **Properties**. Then do one of the following depending on the file type:

For header files:
- Set the **Item Type** property to **C/C++ compiler**. By default, header files have an **Item Type** of **C/C++ header**. Setting this property also sets **C/C++** > **Advanced** > **Compile As** to **Compile as C++ Header Unit (/exportHeader)** for you.
![Changing the item type to c/c++ compiler](media/change-item-type.png)

For source files (or header files that don't have a `.h` or `.hpp` extension):
- Set the **Compile As** property to **Compile as C++ Header Unit (/exportHeader)**.
![Changing Compile As to Compile as C++ Header Unit ](media/change-compile-as.png)

### Change your code to import a header unit

In the source file for the example project, the file that contains `main()`, change `#include "Pythagorean.h"` to `import "Pythagorean.h";` (don't forget the trailing semicolon that is required for `import` statements). When you're compiling a header unit from a system header, use angle brackets (`#include <file>;`). If it's a project header, use `import "file";`

Build the solution (**Build** > **Build Solution** from the main menu, or press `F6`) and run it to see that it produces the expected output: `Pythagorean triple a:2 b:3 c:13`

In your own projects, repeat this process to compile the header files you want to import as header units.

If you only want to convert a few header files to header units, this is a good approach. But if you have many header files that you want to compile, and the convenience of having the build system automatically handle it outweighs the impact on build performance, you can have the build system scan for, and build, header units for you. See [Walkthrough: Import STL libraries as header units](walkthrough-import-stl-header-units.md#approach1).

## See also

[Walkthrough: Import STL libraries as header units](walkthrough-import-stl-header-units.md#approach1)\
[Overview of modules in C++](../cpp/modules-cpp.md) \
[`/translateInclude`](./reference/translateinclude.md) \
[`/exportHeader`](./reference/module-exportheader.md) \
[`/headerUnit`](./reference/headerunit.md) \