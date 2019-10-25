---
title: "Microsoft C++ Porting and Upgrading Guide"
ms.date: "10/25/2019"
ms.assetid: f5fbcc3d-aa72-41a6-ad9a-a706af2166fb
ms.topic: "overview"
---
# Microsoft C++ Porting and Upgrading Guide

This topic provides a guide for upgrading Microsoft C++ code to the latest version of Visual Studio. This includes getting the code to compile and run correctly on a newer release of the tools, as well as taking advantage of new C++ language features and Visual Studio IDE features. The following scenarios are covered:

- Upgrading from a project created in Visual Studio 2008 or earlier. First use Visual Studio 2010 to convert the project to MSBuild format, then open the project in Visual Studio 2019.
- Upgrading from a project created in Visual Studio 2010 through 2015. Just open the project in Visual Studio 2019. The toolsets in Visual Studio 2015, Visual Studio 2017 and Visual Studio 2019 are binary-compatible, which eliminates the need to upgrade library dependencies.
- Upgrading to the [Universal CRT](upgrade-your-code-to-the-universal-crt)
- Upgrading third-party library dependencies
- Upgrading from earlier versions of the Windows SDK
- Upgrading to newer C++ language standards
- Porting from Win32 to the Universal Windows Platform (UWP)

The native Visual Studio build system (MSBuild) was originally designed for Windows applications. MSBuild templates are also provided for remote building of Linux, Android and iOS projects. We recommend moving to CMake in Visual Studio when upgrading projects that use open-source libraries or are meant to run on multiple platforms.

## Multitargeting vs. upgrading

If upgrading your code base to a new toolset is not an option, you can still use a recent version of Visual Studio to build and edit projects that target older compiler toolsets and libraries. For more information, see [Use native multi-targeting in Visual Studio to build old projects](use-native-multi-targeting.md).

## Reasons to upgrade C++ code

If a legacy application is running satisfactorily, in a secure environment, and is not under active development, then there might not be much incentive to upgrade it. However, if an application requires ongoing maintenance, or new feature development including performance or security improvements, then you might consider upgrading the code for any of the following reasons:

- The same code can run faster due to improved compiler optimizations.

- Modern C++ features and programming practices eliminate many common causes of bugs and is far easier to maintain that older C-style idioms.

- Build times are significantly faster, due to performance improvements in the compiler and linker.

- Better standards conformance. The [/permissive-](../build/referencepermissive-standards-conformance.md) compiler option enables you to identify code that was formerly allowed by the Microsoft C++ compiler but does not conform to the current C++ standard.

- Better run-time security, including more secure [C Runtime library]() features and compiler features such as [guard checking](../build/reference/guard-enable-guard-checks.md) and address sanitizers (Visual Studio 2019 version 16.4).

- Modern static analysis tools, including the C++ Core Guidelines and Clang-Tidy, help identify potential problems in your source code.

- Automatic formatting according to your choice of modern styles can help make legacy code much more readable.

## In this section

|Title|Description|
|-----------|-----------------|
|[Upgrading Projects from Earlier Versions of Visual C++](upgrading-projects-from-earlier-versions-of-visual-cpp.md)|Discusses how to use projects created in earlier versions of Visual Studio.|
|[What's New for The C++ compiler in Visual Studio](../overview/what-s-new-for-visual-cpp-in-visual-studio.md)|Changes in the IDE and tools to the current version of Visual Studio|
|[C++ conformance improvements in Visual Studio](../overview/cpp-conformance-improvements.md)|Standards conformance improvements from Visual Studio 2015 to Visual Studio|
|[Visual C++ change history 2003 - 2015](visual-cpp-change-history-2003-2015.md)|A list of all the changes in the Microsoft C++ libraries and build tools from Visual Studio 2003 through 2015 that might require changes in your code.|
|[Visual C++ What's New 2003 through 2015](visual-cpp-what-s-new-2003-through-2015.md)|All the "what's new" information for Microsoft C++ from Visual Studio 2003 through Visual Studio 2015.|
|[Porting 3rd-party libraries](porting-third-party-libraries.md)|How to use the **vcpkg** command line tool to port older open-source libraries to versions compiled with more recent Visual C++ toolsets.|
|[Porting and Upgrading: Examples and Case Studies](porting-and-upgrading-examples-and-case-studies.md)|For this section, we ported and upgrades several samples and applications and discussed the experiences and results. You might find that reading these gives you a sense of what is involved in the porting and upgrading process. Throughout the process, we discuss tips and tricks for upgrading and show how specific errors were fixed.|
|[Porting to the Universal Windows Platform](porting-to-the-universal-windows-platform-cpp.md)|Contains information about porting code to Windows 10|
|[Introduction to Visual C++ for UNIX Users](introduction-to-visual-cpp-for-unix-users.md)|Provides information for UNIX users who are new to Visual C++ and want to become productive with it.|
|[Running Linux programs on Windows](porting-from-unix-to-win32.md)|Discusses options for migrating UNIX applications to Windows.|

## See also

[C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md)
