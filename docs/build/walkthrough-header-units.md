---
description: "Learn more about C++ header units by converting a header file to a header unit"
title: "Walkthrough: Build and import header units in Microsoft Visual C++ projects"
ms.date: "4/13/2021"
ms.custom: "conceptual"
helpviewer_keywords: ["import", "header unit", "ifc", "stl"]
---

# Walkthrough: Build and import header units in Microsoft Visual C++

This article is about building and importing header units using Visual Studio 2019. See [Walkthrough: Import STL libraries using header units](walkthrough-import-stl-header-units.md) to learn how to import STL libraries, specifically, as header units.

Header units are a simpler alternative to [precompiled header files](creating-precompiled-header-files.md). They are easier to setup and easier to use than a [shared PCH](https://devblogs.microsoft.com/cppblog/shared-pch-usage-sample-in-visual-studio), while providing similar performance benefits. Unlike a PCH, when a header unit changes, only it and its dependencies are rebuilt.

## Prerequisites

Support for header units requires at least Visual Studio 2019 16.10.0 Preview 2.

## What is a header unit

Before you can import a header unit, it must first be compiled into a header unit. Header units are a binary representation of a header file, and end with an `.ifc` extension. A header unit must stand alone. That is, it can include other headers, but must be able to compile on its own.

An important feature of header units is that they are portable. A header unit is defined by the C++ standard, and can be used cross-platform.

Header units are also independent of the machine they are built on. You can use them with distributed builds across machines. One machine can produce all of the IFCs and another machine consume them. A PCH can't do this because the persisted data structures are largely tied to the memory layout of the machine they are compiled on. Ideally, you should use the same compiler flags to compile the header unit and the program that imports them because some flags, like /EHsc, /MD[d], etc. have an impact on the semantics of the program which are captured in a header unit.

Header units provide a "module-like" experience for header files even though they lack the level of isolation provided by named modules. For example, everything in a header unit (including macro definitions) are visible, while those in a module aren't. Another difference is that header units are not affected by macro definitions the way header files are. For example, you can't `#define` a symbol that causes the header unit to conditionally turn on and off functionality the way you can with a header file.

## Ways to compile a header unit

There are several ways to compile a file into a header unit:

1-Automatically scan for header units: This approach is best suited to smaller projects that include many different headers. See [Walkthrough: Import STL libraries as header units](walkthrough-import-stl-header-units.md#approach1) for a demonstration of this approach.

2-Build a shared header units project: This approach is best suited for larger projects, and for when you want more control over the modularization of the imported header units. You create a static library (or libraries) that contain the header units, and then reference it from the projects that need to import them. See [Walkthrough: Import STL libraries as header units](walkthrough-import-stl-header-units.md#approach2) for a demonstration of this approach.

3-Tell the build system which header units to build by changing the compilation action for a file. That approach is demonstrated here. This approach gives you file by file control over which header files are treated as header units. It's another way to quickly and selectively try out header units.

To build header units from the headers in your codebase, you can use any of the methods above. To build and use header units for library headers, which are not part of your codebase, use the technique described in [Walkthrough: Import STL libraries using header units](walkthrough-import-stl-header-units.md).
 
## Convert a simple project to use header units

In this example you'll compile a header file as a header unit. Begin by creating the following project in Visual Studio:

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
1. Add a header file called `Pythagorean.h`, and replace its contents as follows:
```cpp
#pragma once
#include <iostream>

void PrintPythogoreanTriple(int a, int b)
{
    std::cout << "Pythagorean triple a:" << a << " b:" << b << " c:" << a*a + b*b << std::endl;
}
```

To enable header units, set the project C++ language standard:

1. In the left-hand pane of the project property pages, select **General**
1. Change the **C++ Language Standard** dropdown to **Preview - Features from the Latest C++ Working Draft**
![Set language standard to preview version](media/set-cpp-language-latest.png)

### Compile a header file as a header unit

To compile a file (and what it imports) as a header unit, open the file's properties by selecting it in the **Solution Explorer**, right-click it, and select **Properties**. Then do one of the following depending on the file type:
- For header files, set its **Item Type** property to **C/C++ compiler**. By default, header files have an **Item Type** of **C/C++ header**. Note, setting this property also sets **C/C++** > **Advanced** > **Compile As** to **Compile as C++ Header Unit (/exportHeader)** for you.
![Changing the item type to c/c++ compiler](media/change-item-type.png.png)

- For source files, set its **Compile As** property to **Compile as C++ Header Unit (/exportHeader)**.
![Changeing Compile As to Compile as C++ Header Unit ](media/change-compile-as.png)

### Change your code to import the header unit

In the source file for the example project, change `#include "Pythagorean.h"` to `import "Pythagorean.h";` (don't forget the trailing semicolon that is required for `import` statements)  If the include file you are converting to a header unit is on the system path, that is `#include <file>`, use `import <file>;`

After making that change, build the solution (**Build** > **Build Solution** from the main menu, or press `F6`) and run it to see that it produces the expected output: `Pythagorean triple a:2 b:3 c:13`

In your own projects, this process can be repeated to compile other header files to header units. If you only want to convert a few header files to header units, this is a good approach.

If you have many header files that you want to compile, and the convenience of having the build system automatically take care of it at the expense of reduced build performance, see [Walkthrough: Import STL libraries as header units](walkthrough-import-stl-header-units.md#approach1) for a demonstration of the approach that you can use with your own project.

## See also

[Overview of modules in C++](../cpp/modules-cpp.md)
[`/translateInclude`](./reference/translateinclude.md)
[`/exportHeader`](./reference/module-exportheader.md)
[`/headerUnit`](./reference/headerunit.md)
[Walkthrough: Import STL libraries as header units](walkthrough-import-stl-header-units.md#approach1) 