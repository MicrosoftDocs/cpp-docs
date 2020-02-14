---
title: Using Clang-Tidy in Visual Studio
ms.date: 10/04/2019
ms.topic: "conceptual"
f1_keywords:
  - "vs.codeanalysis.clangtidy"
author: frozenpandaman
ms.author: efessler
---
# Using Clang-Tidy in Visual Studio

Code Analysis natively supports [Clang-Tidy](https://clang.llvm.org/extra/clang-tidy/) for both MSBuild and CMake projects, whether using Clang or MSVC toolsets. Clang-Tidy checks can run as part of background code analysis, appear as in-editor warnings (squiggles), and display in the Error List.

In order to use Clang-Tidy, the "C++ Clang tools for Windows" component must be installed via the Visual Studio Installer.

Clang-Tidy is the default analysis tool when using the LLVM/clang-cl toolset, available in both MSBuild and CMake. You can configure it to run alongside or replace the standard Code Analysis experience when using an MSVC toolset; if using the clang-cl toolset Microsoft Code Analysis will not be available.

Clang-Tidy runs after successful compilation; you may need to resolve source code errors to get Clang-Tidy results.

## MSBuild

You can configure Clang-Tidy to run as part of both Code Analysis and build under the **Code Analysis** > **General** page in the Project Properties window. Options to configure the tool can be found under the Clang-Tidy sub-menu.

For more information, see [How to: Set Code Analysis Properties for C/C++ Projects](../code-quality/how-to-set-code-analysis-properties-for-c-cpp-projects.md).

## CMake

In CMake projects, you can configure Clang-Tidy checks within `CMakeSettings.json`. Once opened, click "Edit JSON" in the top right-hand corner of the CMake Project Settings Editor. The following keys are recognized:

- `enableMicrosoftCodeAnalysis`: Enables Microsoft Code Analysis
- `enableClangTidyCodeAnalysis`: Enables Clang-Tidy analysis
- `clangTidyChecks`: Clang-Tidy configuration, specified as a comma-separated list, i.e. checks to be enabled or disabled

If neither of the "enable" options are specified, Visual Studio will select the analysis tool matching the Platform Toolset used.

## Warning display

Clang-Tidy runs result in warnings displayed in the Error List and as in-editor squiggles underneath relevant sections of code. Use the "Category" column in the Error List to sort and organize Clang-Tidy warnings. You can configure in-editor warnings by toggling the "Disable Code Analysis Squiggles" setting under **Tools** > **Options**.

## Clang-Tidy configuration

You can configure the checks that clang-tidy runs inside Visual Studio via the **Clang-Tidy Checks** option. This input is provided to the **--checks** argument of the tool. Any further configuration can be included in custom **.clang-tidy** files. See the [Clang-Tidy documentation on LLVM.org](https://clang.llvm.org/extra/clang-tidy/) for more details.

## See also

- [Clang/LLVM Support for MSBuild Projects](https://devblogs.microsoft.com/cppblog/clang-llvm-support-for-msbuild-projects/)
- [Clang/LLVM Support for CMake Projects](https://devblogs.microsoft.com/cppblog/visual-studio-cmake-support-clang-llvm-cmake-3-14-vcpkg-and-performance-improvements/)
