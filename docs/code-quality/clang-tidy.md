---
title: Using Clang-Tidy in Visual Studio
description: "How to use Clang-Tidy in Visual Studio for Microsoft C++ code analysis."
ms.date: 03/1/2022
ms.topic: "concept-article"
f1_keywords: ["vs.codeanalysis.clangtidy","vs.codeanalysis.propertypages.ClangTidyToolPath","vs.codeanalysis.propertypages.AdditionalOptions","vs.codeanalysis.propertypages.MaxProcesses"]
---
# Using Clang-Tidy in Visual Studio

::: moniker range="<=msvc-150"

Support for Clang-Tidy requires Visual Studio 2019 version 16.4 or later. To see the documentation for this version, set the Visual Studio **Version** selector control for this article to Visual Studio 2019 or later. It's at the top of the table of contents on this page.

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

In CMake projects, you can configure Clang-Tidy checks within *`CMakeSettings.json`* or *`CMakePresets.json`*. 

Clang-Tidy recognizes the following keys:

- `enableMicrosoftCodeAnalysis`: Enables Microsoft Code Analysis
- `enableClangTidyCodeAnalysis`: Enables Clang-Tidy analysis
- `clangTidyChecks`: Clang-Tidy configuration. A comma-separated list of checks to enable or disable. A leading `-` disables the check. For example, `cert-oop58-cpp, -cppcoreguidelines-no-malloc, google-runtime-int` enables `cert-oop58-cpp` and `google-runtime-int`, but disables `cppcoreguidelines-no-malloc`. For a list of Clang-Tidy checks, see the [Clang-Tidy documentation](https://clang.llvm.org/extra/clang-tidy/checks/list.html).

If neither of the "enable" options are specified, Visual Studio selects the analysis tool matching the Platform Toolset used.

### CMake settings

To edit your Clang-Tidy settings, open your CMake settings, and select **Edit JSON** in the CMake Project Settings Editor. You can use the keys above to fill out your Clang-Tidy specifications in the CMake Settings JSON file.

An example CMake settings implementation looks like this:

```json
{
  "configurations": [
  {
    "name": "x64-debug",
    "generator": "Ninja",
    ....
   "clangTidyChecks": "llvm-include-order, -modernize-use-override",
   "enableMicrosoftCodeAnalysis": true,
   "enableClangTidyCodeAnalysis": true
  }
  ]
}
```

### CMake presets

The same keys can be used in your CMake presets via the `vendor` object.

An example CMake preset implementation looks like this:

```json
"configurePreset": [
{ "name": "base",
  ....
  "vendor": {
    "microsoft.com/VisualStudioSettings/CMake/1.0": {
      "clangTidyChecks": "llvm-include-order, -modernize-use-override",
      "enableMicrosoftCodeAnalysis": true,
      "enableClangTidyCodeAnalysis": true
      }
    }
}
]
```
## Warning display

Clang-Tidy runs result in warnings displayed in the Error List, and as in-editor squiggles underneath relevant sections of code. To sort and organize Clang-Tidy warnings, use the **Category** column in the **Error List** window. You can configure in-editor warnings by toggling the **Disable Code Analysis Squiggles** setting under **Tools** > **Options**.

## Clang-Tidy configuration

By default, Clang-Tidy does not set any checks when enabled. To see the list of checks in the command-line version, run `clang-tidy -list-checks` in a developer command prompt. You can configure the checks that Clang-Tidy runs inside Visual Studio. In the project Property Pages dialog, open the **Configuration Properties** > **Code Analysis** > **Clang-Tidy** page. Enter checks to run in the **Clang-Tidy Checks** property. A good default set is `clang-analyzer-*`. This property value is provided to the **`--checks`** argument of the tool. Any further configuration can be included in custom *`.clang-tidy`* files. For more information, see the [Clang-Tidy documentation on LLVM.org](https://clang.llvm.org/extra/clang-tidy/).

## Clang-Tidy Tool Directory

If you'd like to have custom rules built into your clang-tidy executable and run it in Microsoft Visual Studio, you can change the path to the executable that Visual Studio runs. In the project Property Pages dialog, open the **Configuration Properties** > **Code Analysis** > **Clang-Tidy** page. Manually type in the path or **Browse** and select the path under the **Clang-Tidy Tool Directory** property. The new executable is used once the change is saved, and the app is recompiled.

## Clang-Tidy Additional Options

The **Clang-Tidy Additional Options** property lets you specify additional compiler arguments that are passed to Clang-Tidy using the `--extra-args` command-line option. These arguments can be used to control how Clang-Tidy parses your code, such as defining macros, include paths, or language standards. Enter arguments as a semi-colon separated list. For example: `-std=c++20;-DMY_DEFINE=1;-Ipath\to\include`.

## Clang-Tidy Prepend Additional Options

The **Clang-Tidy Prepend Additional Options** property lets you specify compiler arguments that are passed to Clang-Tidy using the `--extra-args-before` command-line option. These arguments are inserted before the default compiler arguments when Clang-Tidy parses your code. Enter arguments as a semi-colon separated list. For example: `-std=c++20;-DMY_DEFINE=1;`.

## Max Number of Processes

The **Max Number of Processes** property lets you specify how many processes Clang-Tidy can use to run analysis in parallel. By default, Clang-Tidy runs serially. Set this property to enable parallel execution and specify the number of parallel processes. Set it to `0` to use all available logical processors on your system. Increasing the number of processes can improve analysis speed on multi-core machines.

## See also

[Clang/LLVM support for MSBuild projects](https://devblogs.microsoft.com/cppblog/clang-llvm-support-for-msbuild-projects/)\
[Clang/LLVM support for CMake projects](https://devblogs.microsoft.com/cppblog/visual-studio-cmake-support-clang-llvm-cmake-3-14-vcpkg-and-performance-improvements/)

::: moniker-end
