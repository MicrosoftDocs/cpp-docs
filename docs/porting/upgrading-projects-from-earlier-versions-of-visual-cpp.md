---
title: "Upgrade C++ projects from earlier versions of Visual Studio"
description: "How to upgrade Microsoft C++ projects from older versions of Visual Studio."
ms.date: 04/07/2022
helpviewer_keywords: ["32-bit code porting", "upgrading Visual C++ applications, 32-bit code"]
ms.assetid: 18cdacaa-4742-43db-9e4c-2d9e73d8cc84
---
# Upgrade C++ projects from earlier versions of Visual Studio

To upgrade a project created in an earlier version of Visual Studio, just open the project in the latest version of Visual Studio. Visual Studio offers to upgrade the project to the current schema.

If you choose **No**, the project doesn't get upgraded. For projects created in Visual Studio 2010 and later, you can still use the project in the newer version of Visual Studio. Just set your project properties to continue to target the older toolset. If you leave the older version of Visual Studio on your computer, its toolset is available in later versions. For example, if your project must continue to run on Windows XP, you can upgrade to Visual Studio 2019. You then specify the toolset as v141_xp or earlier in your project properties. For more information, see [Use native multi-targeting in Visual Studio to build old projects](use-native-multi-targeting.md).

If you choose **Yes**, then the project gets upgraded in place. It can't be converted back to the earlier version. In upgrade scenarios, that's why it's good practice to make a backup copy of the existing project and solution files.

> [!NOTE]
> Visual Studio 2022 has deprecated support for the upgrade of project types that have *`.dsw`* or *`.dsp`* extensions. You can use an earlier version of Visual Studio, such as Visual Studio 2019, to upgrade these projects, then upgrade them in Visual Studio 2022 to use the latest tools and features of Visual Studio.

## Upgrade reports

When you upgrade a project, you get an upgrade report. The report is also saved in your project folder as UpgradeLog.htm. The upgrade report shows a summary of what problems were found during conversion. It lists some information about changes that were made, including:

- Project properties.

- Include files.

- Code that no longer compiles cleanly because of compiler conformance improvements or changes in the standard.

- Code that relies on Visual Studio or Windows features that are no longer available. Or, header files that either aren't included in a default installation of Visual Studio, or were removed from the product.

- Code that no longer compiles because of changes in APIs such as renamed APIs, changed function signatures, or deprecated functions.

- Code that no longer compiles because of changes in diagnostics, such as a warning becoming an error

- Linker errors because of libraries that were changed, especially when /NODEFAULTLIB is used.

- Runtime errors or unexpected results because of behavior changes.

- Errors that were introduced in the tools. If you find an issue, report it to the Visual C++ team through your normal support channels or by using the [Visual Studio C++ Developer Community](https://aka.ms/feedback/report?space=62) page.

Some upgraded projects and solutions can be built successfully without modification. However, most projects will likely require changes to both project settings and your source code. There's no single correct way to go about fixing these issues, but we recommend using a phased approach. Before you start, review [Overview of potential upgrade issues](../porting/overview-of-potential-upgrade-issues-visual-cpp.md) for more information on many kinds of common errors.

1. Set the Platform Toolset, C++ Language Standard, and Windows SDK version (if applicable) to the preferred versions. (**Project** > **Properties** > **Configuration Properties** > **General**)

1. If you have lots of errors, you can temporarily turn off some options while you fix them. To turn off the [`/permissive-`](../build/reference/permissive-standards-conformance.md) option, use **Project** > **Properties** > **Configuration Properties** > **C/C++** > **Language**. To turn off the [code analysis](../code-quality/code-analysis-for-c-cpp-overview.md) option, use **Project** > **Properties** > **Configuration Properties** > **Code Analysis**.

1. Ensure that all dependencies are present and that the include paths or library locations are correct. (**Project** > **Properties** > **Configuration Properties** > **VC++ Directories**)

1. Identify and fix errors caused by references to APIs that no longer exist.

1. Fix any remaining errors that prevent compilation. Refer to [Overview of potential upgrade issues](../porting/overview-of-potential-upgrade-issues-visual-cpp.md) for fixes for common errors.

1. Turn **`/permissive-`** back on and fix any new errors caused by non-conforming code that previously compiled in MSVC.

1. Turn on code analysis to identify potential problems or outdated coding patterns that are no longer considered acceptable. If code analysis flags many errors, you can turn off some of the warnings to focus on the most important ones first. The IDE can help with Quick Fixes for some kinds of issues.

1. Consider other opportunities for modernizing the code. For example, replace custom data structures and algorithms with ones from the C++ standard library, or the Boost open-source library. By using standard features, you make it easier for others to maintain the code. You can be confident that this code has been well-tested and reviewed by many experts on the standards committee and the broader C++ community.

For hard-to-fix errors, you can search for solutions or post a question on [Microsoft Learn Q&A](/answers/topics/c%2B%2B.html). For problems in the C++ compiler and tools, try the [C++ Developer Community](https://aka.ms/vsfeedback/browsecpp) website.

## In this section

[Overview of potential upgrade issues](overview-of-potential-upgrade-issues-visual-cpp.md)\
[Upgrade your code to the Universal CRT](upgrade-your-code-to-the-universal-crt.md)\
[Update WINVER and _WIN32_WINNT](modifying-winver-and-win32-winnt.md)\
[Fix your dependencies on library internals](fix-your-dependencies-on-library-internals.md)\
[Floating-point migration issues](floating-point-migration-issues.md)\
[C++ features deprecated in Visual Studio](features-deprecated-in-visual-studio.md)\
[VCBuild vs. MSBuild](build-system-changes.md)\
[Port 3rd-party libraries](porting-third-party-libraries.md)

## See also

[What's New for Visual C++ in Visual Studio](../overview/what-s-new-for-visual-cpp-in-visual-studio.md)\
[Visual C++ change history 2003 - 2015](../porting/visual-cpp-change-history-2003-2015.md)\
[Nonstandard Behavior](../cpp/nonstandard-behavior.md)\
[Port data applications](../data/data-access-programming-mfc-atl.md)
