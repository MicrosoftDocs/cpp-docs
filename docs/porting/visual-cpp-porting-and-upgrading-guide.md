---
title: "Microsoft C++ Porting and Upgrading Guide"
ms.date: "10/25/2019"
ms.assetid: f5fbcc3d-aa72-41a6-ad9a-a706af2166fb
ms.topic: "overview"
---
# Micorosft C++ Porting and Upgrading Guide

This topic provides a guide for upgrading Microsoft C++ code. This includes getting the code to compile and run correctly on a newer release of the tools, as well as taking advantage of new C++ language features and Visual Studio IDE features. This topic also includes information about migrating legacy apps to more modern platforms. If an older project uses open-source libraries or is meant to run on multiple platforms, consider migrating to CMake. CMake is well supported in Visual Studio.

## Reasons to Upgrade C++ Code

If a legacy application is running satisfactorily, in a secure environment, and is not under active development, then there might not be much incentive to upgrade it. However, if an application requires ongoing maintenance, or new feature development, then you might consider upgrading the code for any of the following reasons:

- The same code can run faster due to improved compiler optimizations.

- Modern C++ features and programming practices eliminate many common causes of bugs and is far easier to maintain that older C-style idioms.

- Build times are significantly faster, due to performance improvements in the compiler and linker.

- Better standards conformance. The [/permissive-](../build/referencepermissive-standards-conformance.md) compiler option enables you to identify code that was formerly allowed by the Microsoft C++ compiler but does not conform to the current C++ standard.

- Better run-time security, including features such as [guard checking](../build/reference/guard-enable-guard-checks.md) and address sanitizers (Visual Studio 2019 version 16.4).

- Modern static analysis tools, including the C++ Core Guidelines and Clang-Tidy, help identify potential problems in your source code.

- Automatic formatting according to your choice of modern styles can help make legacy code much more readable.

If you are unable to upgrade your code for whatever reason, you can still use Visual Studio 2017 and Visual Studio 2019 to build projects that target older compiler toolsets and libraries. For more information, see [Use native multi-targeting in Visual Studio to build old projects](use-native-multi-targeting.md).

### Upgrade reports

To start upgrading a project or solution, just open the solution in the new version of Visual Studio, and follow the prompts. When you upgrade a project, you get an upgrade report, which is also saved in your project folder as UpgradeLog.htm. The upgrade report shows a summary of what problems were encountered and some information about changes that were made, including:

1. Project properties

2. Include files

3. Code that no longer compiles cleanly due to compiler conformance improvements or changes in the standard

4. Code that relies on Visual Studio or Windows features that are no longer available or header files that either aren't included in a default installation of Visual Studio, or were removed from the product

5. Code that no longer compiles due to changes in APIs such as renamed APIs, changed function signatures, or deprecated functions

6. Code that no longer compiles due to changes in diagnostics, such as a warning becoming an error

7. Linker errors due to libraries that were changed, especially when /NODEFAULTLIB is used.

8. Runtime errors or unexpected results due to behavior changes

9. Errors due to errors that were introduced in the tools. If you encounter an issue, report it to the Visual C++ team through your normal support channels or by using the [Visual Studio C++ Developer Community](https://developercommunity.visualstudio.com/spaces/62/index.html) page.

Visual Studio provides many tools and features that make it easier to upgrade your code. For more information, see [tbd](tbd.md).

## Related Topics

|Title|Description|
|-----------|-----------------|
|[Upgrading Projects from Earlier Versions of Visual C++](upgrading-projects-from-earlier-versions-of-visual-cpp.md)|Discusses how to use projects created in earlier versions of Visual Studio.|
|[What's New for The C++ compiler in Visual Studio](../overview/what-s-new-for-visual-cpp-in-visual-studio.md)|Changes in the IDE and tools to the current version of Visual Studio|
|[C++ conformance improvements in Visual Studio](../overview/cpp-conformance-improvements.md)|Standards conformance improvements from Visual Studio 2015 to Visual Studio|
|[Visual C++ change history 2003 - 2015](visual-cpp-change-history-2003-2015.md)|A list of all the changes in the Microfsoft C++ libraries and build tools from Visual Studio 2003 through 2015 that might require changes in your code.|
|[Visual C++ What's New 2003 through 2015](visual-cpp-what-s-new-2003-through-2015.md)|All the "what's new" information for Microsoft C++ from Visual Studio 2003 through Visual Studio 2015.|
|[Porting 3rd-party libraries](porting-third-party-libraries.md)|How to use the **vcpkg** command line tool to port older open-source libraries to versions compiled with more recent Visual C++ toolsets.|
|[Porting and Upgrading: Examples and Case Studies](porting-and-upgrading-examples-and-case-studies.md)|For this section, we ported and upgrades several samples and applications and discussed the experiences and results. You might find that reading these gives you a sense of what is involved in the porting and upgrading process. Throughout the process, we discuss tips and tricks for upgrading and show how specific errors were fixed.|
|[Porting to the Universal Windows Platform](porting-to-the-universal-windows-platform-cpp.md)|Contains information about porting code to Windows 10|
|[Introduction to Visual C++ for UNIX Users](introduction-to-visual-cpp-for-unix-users.md)|Provides information for UNIX users who are new to Visual C++ and want to become productive with it.|
|[Running Linux programs on Windows](porting-from-unix-to-win32.md)|Discusses options for migrating UNIX applications to Windows.|

## See also

[C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md)
