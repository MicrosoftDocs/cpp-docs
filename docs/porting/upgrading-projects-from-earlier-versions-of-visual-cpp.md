---
title: "Upgrading C++ projects from earlier versions of Visual Studio"
description: "How to upgrade Microsoft C++ projects from older versions of Visual Studio."
ms.date: "10/25/2019"
helpviewer_keywords: ["32-bit code porting", "upgrading Visual C++ applications, 32-bit code"]
ms.assetid: 18cdacaa-4742-43db-9e4c-2d9e73d8cc84
---
# Upgrading C++ projects from earlier versions of Visual Studio

To upgrade a project created in Visual Studio 2008 or earlier, you must first use Visual Studio 2010 to convert the project from the VCBuild to the MSBuild format. For more information, see [Instructions for Visual Studio 2008](use-native-multi-targeting.md#instructions-for-visual-studio-2008).

To upgrade a project created in Visual Studio 2010 or later, simply open the project in the latest version of Visual Studio. Visual Studio offers to upgrade the project to the current schema. If you choose **No**, and you have the older version of Visual Studio on your computer, you can work in the project in a newer version of Visual Studio and continue to target the older toolset. For more information, see [Use native multi-targeting in Visual Studio to build old projects](use-native-multi-targeting.md). If you choose **Yes**, then the project will be converted and cannot be converted back to the earlier version. Therefore, in upgrade scenarios, it is good practice to make a copy of the existing project and solution files.

If your project must continue to run on Windows XP, you can upgrade it to Visual Studio 2019, but you have to specify the toolset as v141 or earlier.

## Upgrade reports

When you upgrade a project, you get an upgrade report, which is also saved in your project folder as UpgradeLog.htm. The upgrade report shows a summary of what problems were encountered and some information about changes that were made, including:

1. Project properties

2. Include files

3. Code that no longer compiles cleanly due to compiler conformance improvements or changes in the standard

4. Code that relies on Visual Studio or Windows features that are no longer available or header files that either aren't included in a default installation of Visual Studio, or were removed from the product

5. Code that no longer compiles due to changes in APIs such as renamed APIs, changed function signatures, or deprecated functions

6. Code that no longer compiles due to changes in diagnostics, such as a warning becoming an error

7. Linker errors due to libraries that were changed, especially when /NODEFAULTLIB is used

8. Runtime errors or unexpected results due to behavior changes

9. Errors that were introduced in the tools. If you encounter an issue, report it to the Visual C++ team through your normal support channels or by using the [Visual Studio C++ Developer Community](https://developercommunity.visualstudio.com/spaces/62/index.html) page.

Many upgraded projects and solutions can be built successfully without modification. However, the older the project, the more likely that it will require changes to project settings as well as source code. The C++ code editor displays red squiggles under the errors, and green squiggles to indicate warnings flagged by the default code analysis tools.

We recommend that you use the following guidelines to address the settings issues first, and then if the project still doesn't build, you can address the code issues. For more information, see [Overview of potential upgrade issues](../porting/overview-of-potential-upgrade-issues-visual-cpp.md).

## In this section

[Upgrade your code to the Universal CRT](upgrade-your-code-to-the-universal-crt.md)<br/>
[Modifying WINVER and _WIN32_WINNT](modifying-winver-and-win32-winnt.md)<br/>
[Fix your dependencies on library internals](fix-your-dependencies-on-library-internals.md)<br/>
[Floating-point migration issues](floating-point-migration-issues.md)<br/>
[Use native multi-targeting in Visual Studio to build old projects](use-native-multi-targeting.md)<br/>
[Visual C++ features deprecated in Visual Studio 2019 preview](features-deprecated-in-visual-studio.md)<br/>
[Build System Changes](build-system-changes.md)

## See also

[What's New for Visual C++ in Visual Studio](../overview/what-s-new-for-visual-cpp-in-visual-studio.md)<br/>
[Visual C++ change history 2003 - 2015](../porting/visual-cpp-change-history-2003-2015.md)<br/>
[Nonstandard Behavior](../cpp/nonstandard-behavior.md)
