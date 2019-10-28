---
title: "Upgrade C++ projects from earlier versions of Visual Studio"
description: "How to upgrade Microsoft C++ projects from older versions of Visual Studio."
ms.date: "10/29/2019"
helpviewer_keywords: ["32-bit code porting", "upgrading Visual C++ applications, 32-bit code"]
ms.assetid: 18cdacaa-4742-43db-9e4c-2d9e73d8cc84
---
# Upgrade C++ projects from earlier versions of Visual Studio

To upgrade a project created in Visual Studio 2008 or earlier, you must first use Visual Studio 2010 to convert the project from the VCBuild format (.vcproj) to the MSBuild format (.vcxproj). For more information, see [Instructions for Visual Studio 2008](use-native-multi-targeting.md#instructions-for-visual-studio-2008).

To upgrade a project created in Visual Studio 2010 or later, simply open the project in the latest version of Visual Studio. Visual Studio offers to upgrade the project to the current schema. If you choose **No**, and you have the older version of Visual Studio on your computer, you can work in the project in a newer version of Visual Studio and continue to target the older toolset. For example, if your project must continue to run on Windows XP, you can upgrade it to Visual Studio 2019, but you have to specify the toolset as v141 or earlier. For more information, see [Use native multi-targeting in Visual Studio to build old projects](use-native-multi-targeting.md). If you choose **Yes**, then the project will be converted and cannot be converted back to the earlier version. Therefore, in upgrade scenarios, it is good practice to make a copy of the existing project and solution files.

## Upgrade reports

When you upgrade a project, you get an upgrade report, which is also saved in your project folder as UpgradeLog.htm. The upgrade report shows a summary of what problems were encountered and some information about changes that were made, including:

1. Project properties

2. Include files

3. Code that no longer compiles cleanly due to compiler conformance improvements or changes in the standard

4. Code that relies on Visual Studio or Windows features that are no longer available or header files that either aren't included in a default installation of Visual Studio, or were removed from the product

5. Code that no longer compiles due to changes in APIs such as renamed APIs, changed function signatures, or deprecated functions

6. Code that no longer compiles due to changes in diagnostics, such as a warning becoming an error

7. Linker errors due to libraries that were changed, especially when /NODEFAULTLIB is used.

8. Runtime errors or unexpected results due to behavior changes

9. Errors that were introduced in the tools. If you encounter an issue, report it to the Visual C++ team through your normal support channels or by using the [Visual Studio C++ Developer Community](https://developercommunity.visualstudio.com/spaces/62/index.html) page.

Some upgraded projects and solutions can be built successfully without modification. However, most projects will likely require changes to project settings as well as source code. There is no single correct way to go about fixing these, but some kind of phased approach is recommended. Before starting, review [Overview of potential upgrade issues](../porting/overview-of-potential-upgrade-issues-visual-cpp.md) for more information on many kinds of common errors.

 1. Set the Platform Toolset, C++ Language Standard, and Windows SDK version (if applicable) to the desired versions. (**Project** > **Properties** > **Configuration Properties** > **General**)
 1. If you have a lot of errors, turn off the [permissive-](../build/permissive-standards-conformance.md) option (**Project** > **Properties** > **Configuration Properties** > **C/C++** > **Language**) and [code analysis](/visualstudio/code-quality/code-analysis-for-c-cpp-overview) (**Project** > **Properties** > **Configuration Properties** > **Code Analysis**) option temporarily to reduce the error count.
 1. Ensure that all dependencies are present and that the include paths or library locations are correct. (**Project** > **Properties** > **Configuration Properties** > **VC++ Directories**)
 1. Identify and fix errors due to references to APIs that no longer exist.
 1. Fix any remaining errors that prevent compilation. Refer to [Overview of potential upgrade issues](../porting/overview-of-potential-upgrade-issues-visual-cpp.md) for fixes for common errors.
 1. Turn **permissive-** back on and fix any new errors that appear due to non-conformant code that previously compiled in MSVC.
 1. Turn on code analysis to identify potential problems or outdated coding patterns that are no longer considered acceptable. If code analysis flags many errors, you can turn off some of the warnings to focus on the most important ones first. The IDE can help with Quick Fixes for some kinds of issues. See [Upgrade legacy C++ code with Visual Studio](ide-tools-for-upgrading-code.md) for more information.
 1. Consider other opportunities for modernizing the code, for example by replacing custom data structures and algorithms with those from the C++ standard library or the Boost open-source library. By using standard features, you make it easier for others to maintain the code and also have a strong confidence that the code has been well-tested and reviewed by many experts on the standards committee and the broader C++ community.

For hard-to-fix errors, try searching or posting a question on Stack Overflow or [C++ Developer Community](https://developercommunity.visualstudio.com/spaces/62/index.html).

## In this section

[Overview of potential upgrade issues](overview-of-potential-upgrade-issues-visual-cpp.md)<br/>
[Upgrade your code to the Universal CRT](upgrade-your-code-to-the-universal-crt.md)<br/>
[Update WINVER and _WIN32_WINNT](modifying-winver-and-win32-winnt.md)<br/>
[Fix your dependencies on library internals](fix-your-dependencies-on-library-internals.md)<br/>
[Floating-point migration issues](floating-point-migration-issues.md)<br/>
[C++ features deprecated in Visual Studio 2019](features-deprecated-in-visual-studio.md)<br/>
[VCBuild vs. MSBuild](build-system-changes.md)<br/>
[Port 3rd-party libraries](porting-third-party-libraries.md)<br/>

## See also

[What's New for Visual C++ in Visual Studio](../overview/what-s-new-for-visual-cpp-in-visual-studio.md)<br/>
[Visual C++ change history 2003 - 2015](../porting/visual-cpp-change-history-2003-2015.md)<br/>
[Nonstandard Behavior](../cpp/nonstandard-behavior.md)<br/>
[Port data applications](../data/data-access-programming-mfc-atl.md)<br/>
