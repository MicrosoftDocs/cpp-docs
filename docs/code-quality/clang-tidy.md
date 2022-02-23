---
title: Using Clang-Tidy in Visual Studio
description: "How to use Clang-Tidy in Visual Studio for Microsoft C++ code analysis."
ms.date: 02/22/2022
ms.topic: "conceptual"
f1_keywords: ["vs.codeanalysis.clangtidy"]
---
# Using Clang-Tidy in Visual Studio

::: moniker range="<=msvc-150"

Support for Clang-Tidy requires Visual Studio 2019 version 16.4 or later. To see the documentation for this version, set the Visual Studio **Version** selector control for this article to Visual Studio 2019 or later. It's found at the top of the table of contents on this page.

::: moniker-end

::: moniker range=">=msvc-160"

Code Analysis natively supports [Clang-Tidy](https://clang.llvm.org/extra/clang-tidy/) for both MSBuild and CMake projects, whether using Clang or MSVC toolsets. Clang-Tidy checks can run as part of background code analysis. They appear as in-editor warnings (squiggles), and display in the Error List.

Clang-Tidy support is available starting in Visual Studio 2019 version 16.4. It's included automatically when you choose a C++ workload in the Visual Studio Installer.

Clang-Tidy is the default analysis tool when using the LLVM/clang-cl toolset, available in both MSBuild and CMake. You can configure it when using an MSVC toolset to run alongside, or to replace, the standard Code Analysis experience. If you use the clang-cl toolset, Microsoft Code Analysis is unavailable.

Clang-Tidy runs after successful compilation. You may need to resolve source code errors to get Clang-Tidy results.

## MSBuild

You can configure Clang-Tidy to run as part of both Code Analysis and build under the **Code Analysis** > **General** page in the Project Properties window. Options to configure the tool can be found under the Clang-Tidy submenu.

For more information, see [How to: Set Code Analysis Properties for C/C++ Projects](../code-quality/how-to-set-code-analysis-properties-for-c-cpp-projects.md).

## CMake

In CMake projects, you can configure Clang-Tidy checks within *`CMakeSettings.json`*. Once opened, select "Edit JSON" in the top right-hand corner of the CMake Project Settings Editor. The following keys are recognized:

- `enableMicrosoftCodeAnalysis`: Enables Microsoft Code Analysis
- `enableClangTidyCodeAnalysis`: Enables Clang-Tidy analysis
- `clangTidyChecks`: Clang-Tidy configuration, specified as a comma-separated list, that is, checks to be enabled or disabled

If neither of the "enable" options are specified, Visual Studio will select the analysis tool matching the Platform Toolset used.

## Warning display

Clang-Tidy runs result in warnings displayed in the Error List, and as in-editor squiggles underneath relevant sections of code. Use the "Category" column in the Error List to sort and organize Clang-Tidy warnings. You can configure in-editor warnings by toggling the "Disable Code Analysis Squiggles" setting under **Tools** > **Options**.

## Clang-Tidy configuration

By default, Clang-Tidy does not set any checks when enabled. To see the list of checks in the command-line version, run `clang-tidy -list-checks` in a developer command prompt. You can configure the checks that Clang-Tidy runs inside Visual Studio. In the project Property Pages dialog, open the **Configuration Properties** > **Code Analysis** > **Clang-Tidy** page. Enter checks to run in the **Clang-Tidy Checks** property. A good default set is `clang-analyzer-*`. This property value is provided to the **`--checks`** argument of the tool. Any further configuration can be included in custom *`.clang-tidy`* files. For more information, see the [Clang-Tidy documentation on LLVM.org](https://clang.llvm.org/extra/clang-tidy/).

## See also

- [Clang/LLVM support for MSBuild projects](https://devblogs.microsoft.com/cppblog/clang-llvm-support-for-msbuild-projects/)
- [Clang/LLVM support for CMake projects](https://devblogs.microsoft.com/cppblog/visual-studio-cmake-support-clang-llvm-cmake-3-14-vcpkg-and-performance-improvements/)

::: moniker-end
