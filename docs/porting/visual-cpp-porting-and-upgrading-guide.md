---
title: "Microsoft C++ Porting and Upgrading Guide"
description: "Upgrade Microsoft C++ code to the latest version of Visual Studio."
ms.date: "10/29/2019"
ms.assetid: f5fbcc3d-aa72-41a6-ad9a-a706af2166fb
ms.topic: "overview"
---
# Microsoft C++ Porting and Upgrading Guide

This topic provides a guide for upgrading Microsoft C++ code to the latest version of Visual Studio. If you are upgrading from a project created in Visual Studio 2008 or earlier, you must first use Visual Studio 2010 to convert the project to MSBuild format, then open the project in Visual Studio 2019. For projects created in Visual Studio 2010 through 2015, just open the project in Visual Studio 2019. For complete instructions, see [Upgrading C++ projects from earlier versions of Visual Studio](upgrading-projects-from-earlier-versions-of-visual-cpp.md).

The toolsets in Visual Studio 2015, Visual Studio 2017 and Visual Studio 2019 are binary-compatible, which enables you to upgrade to a more recent version of the compiler without having to upgrade library dependencies. For more information, see [C++ Binary Compatibility between 2015 and 2019](binary-compat-2015-2017.md).

When upgrading projects that use open-source libraries or are meant to run on multiple platforms, we recommended migrating to a CMake-based project. For more information, see [CMake projects in Visual Studio](../build/cmake-projects-in-visual-studio.md)

## Reasons to upgrade C++ code

If a legacy application is running satisfactorily, in a secure environment, and is not under active development, then there might not be much incentive to upgrade it. However, if an application requires ongoing maintenance, or new feature development including performance or security improvements, then you might consider upgrading the code for any of the following reasons:

- The same code can run faster due to improved compiler optimizations.

- Modern C++ features and programming practices eliminate many common causes of bugs and is far easier to maintain that older C-style idioms.

- Build times are significantly faster, due to performance improvements in the compiler and linker.

- Better standards conformance. The [/permissive-](../build/referencepermissive-standards-conformance.md) compiler option enables you to identify code that was formerly allowed by the Microsoft C++ compiler but does not conform to the current C++ standard.

- Better run-time security, including more secure [C Runtime library]() features and compiler features such as [guard checking](../build/reference/guard-enable-guard-checks.md) and address sanitizers (Visual Studio 2019 version 16.4).

## Multitargeting vs. upgrading

If upgrading your code base to a new toolset is not an option, you can still use a recent version of Visual Studio to build and edit projects that compile with older toolsets and libraries. In Visual Studio 2019 you can take advantage of features such as:

- modern static analysis tools, including the C++ Core Guidelines checkers and Clang-Tidy, to help identify potential problems in your source code.

- automatic formatting according to your choice of modern styles can help make legacy code much more readable.

For more information, see [Use native multi-targeting in Visual Studio to build old projects](use-native-multi-targeting.md).

## In this section

|Title|Description|
|-----------|-----------------|
|[Upgrading C++ projects from earlier versions of Visual Studio](upgrading-projects-from-earlier-versions-of-visual-cpp.md)|How to upgrade your code base to Visual Studio 2019 and v142 of the compiler.|
|[C++ Binary Compatibility between 2015 and 2019](binary-compat-2015-2017.md)|Consume v140 libraries as-is from v142 projects.|
|[Use native multi-targeting in Visual Studio to build old projects](use-native-multi-targeting.md)|Use Visual Studio 2019 with older compilers and libraries.|
|[Visual C++ change history 2003 - 2015](visual-cpp-change-history-2003-2015.md)|A list of all the changes in the Microsoft C++ libraries and build tools from Visual Studio 2003 through 2015 that might require changes in your code.|
|[Visual C++ What's New 2003 through 2015](visual-cpp-what-s-new-2003-through-2015.md)|All the "what's new" information for Microsoft C++ from Visual Studio 2003 through Visual Studio 2015.|
|[Porting and Upgrading: Examples and Case Studies](porting-and-upgrading-examples-and-case-studies.md)|For this section, we ported and upgrades several samples and applications and discussed the experiences and results. You might find that reading these gives you a sense of what is involved in the porting and upgrading process. Throughout the process, we discuss tips and tricks for upgrading and show how specific errors were fixed.|
|[Porting to the Universal Windows Platform](porting-to-the-universal-windows-platform-cpp.md)|Contains information about porting code to Windows 10|
|[Introduction to Visual C++ for UNIX Users](introduction-to-visual-cpp-for-unix-users.md)|Provides information for UNIX users who are new to Visual C++ and want to become productive with it.|
|[Running Linux programs on Windows](porting-from-unix-to-win32.md)|Discusses options for migrating UNIX applications to Windows.|

## See also

[C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md)
[What's New for The C++ compiler in Visual Studio](../overview/what-s-new-for-visual-cpp-in-visual-studio.md)
[C++ conformance improvements in Visual Studio](../overview/cpp-conformance-improvements.md)
