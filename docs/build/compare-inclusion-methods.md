---
description: "Learn about the different ways to include library headers in C++: header files vs modules vs header units vs precompiled headers."
title: "Compare header units, modules, and precompiled headers"
ms.date: 11/30/2022
f1_keywords: ["#include", "header file", "header unit", "module", "named module", "PCH", "precompiled header file", "IFC"]
helpviewer_keywords: ["headers, C++ library", "libraries, Standard C++", "C++ Standard Library, headers", "STL", "Standard template library, headers", "precompiled header files, creating", "PCH files, creating", "import", "header unit", "ifc", "modules [C++]", "named modules [C++]", "import standard library (STL) using named modules"]
---
# Compare header units, modules, and precompiled headers

Historically, you'd include the standard library with a directive like `#include <vector>`. However, it's expensive to include header files because they're reprocessed by every source file that includes them.

Precompiled headers (PCH) were introduced to speed compilation by translating them once and reusing the result. But precompiled headers can be difficult to maintain.

In C++20, modules were introduced as a significant improvement on header files and precompiled headers.

Header units were introduced in C++20 as a way to temporarily bridge the gap between header files and modules. They provide some of the speed and robustness benefits of modules, while you migrate your code to use modules.

Then, the C++23 standard library introduced support for importing the standard library as named modules. This is the fastest and most robust way to consume the standard library.

To help you sort out the different options, this article compares the traditional `#include` method against precompiled headers, header units, and importing named modules.

The following table is arranged by compiler processing speed and robustness, with `#include` being the slowest and least robust, and `import` being the fastest and most robust.

| Method | Summary |
|---|---|
| `#include` | One disadvantage is that they expose macros and internal implementation. Internal implementation is often exposed as functions and types that start with an underscore. That's a convention to indicate that something is part of the internal implementation and shouldn't be used.<br/><br/>Header files are fragile because the order of #includes can modify behavior or break code and are affected by macro definitions.<br/><br/>Header files slow compilation. Particularly when multiple files include the same file because then the header file is reprocessed multiple times. |
| [Precompiled header](../build/creating-precompiled-header-files.md) | A precompiled header (PCH) improves compile time by creating a compiler memory snapshot of a set of header files. This is an improvement on repeatedly rebuilding header files.<br/><br/>PCH files have restrictions that make them difficult to maintain.<br/><br/>PCH files are faster than `#include` but slower than `import`.|
| [Header units](../build/walkthrough-header-units.md) | This is a new feature in C++20 that allows you to import 'well-behaved' header files as modules.<br/><br/>Header units are faster than `#include`, and are easier to maintain, significantly smaller, and also faster than pre-compiled header files (PCH).<br/><br/>Header units are an 'in-between' step meant to help transition to named modules in cases where you rely on macros defined in header files, since named modules don't expose macros.<br/><br/>Header units are slower than importing a named module.<br/><br/>Header units aren't affected by macro defines unless they're specified on the command line when the header unit is built--making them more robust than header files.<br/><br/>Header units expose the macros and internal implementation defined in them just as header file do, which named modules don't.<br/><br/>As a rough approximation of file size, a 250-megabyte PCH file might be represented by an 80-megabyte header unit file. |
| [Modules](../cpp/modules-cpp.md) | This is the fastest and most robust way to import functionality.<br/><br/>Support for importing modules was introduced in C++20. The C++23 standard library introduces the two named modules described in this topic.<br/><br/>When you import `std`, you get the standard names such as `std::vector`, `std::cout`, but no extensions, no internal helpers such as `_Sort_unchecked`, and no macros.<br/><br/>The order of imports doesn't matter because there are no macro or other side-effects.<br/><br/>As a rough approximation of file size, a 250-megabyte PCH file might be represented by an 80-megabyte header unit file, which might be represented by a 25-megabyte module.<br/><br/>Named modules are faster because when a named module is compiled into an `.ifc` file and an `.obj` file, the compiler emits a structured representation of the source code that can be loaded quickly when the module is imported. The compiler can do some work (like name resolution) before emitting the `.ifc` file because of how named modules are order-independent and macro-independent--so this work doesn't have to be done when the module is imported. In contrast, when a header file is consumed with `#include`, its contents must be preprocessed and compiled again and again in every translation unit. <br/><br/>Precompiled headers, which are compiler memory snapshots, can mitigate those costs, but not as well as named modules. |

If you can use C++20 features and the C++23 standard library in your app, use named modules.

If you can use C++20 features but want to transition over time to modules, use header units in the interim.

If you can't use C++20 features, use `#include` and consider precompiled headers.

## See also

[Precompiled header files](creating-precompiled-header-files.md)\
[Overview of modules in C++](../cpp/modules-cpp.md)\
[Tutorial: Import the C++ standard library using modules](../cpp/tutorial-import-stl-named-module.md)\
[Walkthrough: Import STL libraries as header units](walkthrough-import-stl-header-units.md#approach1)\
[Walkthrough: Build and import header units in your Visual C++ projects](walkthrough-header-units.md)