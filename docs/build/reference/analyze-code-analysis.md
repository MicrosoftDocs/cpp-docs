---
title: "/analyze (Code analysis)"
description: "The Microsoft C++ compiler /analyze option syntax and usage."
ms.date: 07/27/2020
f1_keywords: ["VC.Project.VCCLCompilerTool.EnablePREfast", "/analyze", "VC.Project.VCCLCompilerTool.PREfastAdditionalOptions", "VC.Project.VCCLCompilerTool.PREfastAdditionalPlugins"]
helpviewer_keywords: ["/analyze compiler option [C++]", "-analyze compiler option [C++]", "analyze compiler option [C++]"]
ms.assetid: 81da536a-e030-4bd4-be18-383927597d08
---
# `/analyze` (Code analysis)

Enables code analysis and control options.

## Syntax

::: moniker range=">=msvc-150"

> **`/analyze`**\
> **`/analyze-`**\
> **`/analyze:autolog`**\
> **`/analyze:autolog-`**\
> **`/analyze:autolog:ext`** *extension*\
> **`/analyze:log`** *filename*\
> **`/analyze:max_paths`** *number*\
> **`/analyze:only`**\
> **`/analyze:plugin`** *plugin-dll*\
> **`/analyze:quiet`**\
> **`/analyze:ruleset`** *ruleset*\
> **`/analyze:stacksize`** *number*\
> **`/analyze:WX-`**

::: moniker-end
::: moniker range="msvc-140"

> **`/analyze`**\
> **`/analyze-`**\
> **`/analyze:autolog`**\
> **`/analyze:autolog-`**\
> **`/analyze:autolog:ext`** *extension*\
> **`/analyze:log`** *filename*\
> **`/analyze:max_paths`** *number*\
> **`/analyze:only`**\
> **`/analyze:plugin`** *plugin-dll*\
> **`/analyze:quiet`**\
> **`/analyze:stacksize`** *number*\
> **`/analyze:WX-`**

::: moniker-end

## Arguments

**`/analyze`**\
Turns on analysis in the default mode. Analysis output goes to the console or the Visual Studio **Output** window like other error messages. Use **`/analyze-`** to explicitly turn off analysis.

**`/analyze:autolog`**\
Detailed analyzer results are written as XML to a file with the same base name as the source file and an extension of *`.pftlog`*. **`/analyze:autolog-`** disables this log file.

**`/analyze:autolog:ext`** *extension*\
Detailed analyzer results are written as XML to a file with the same base name as the source file and an extension of *extension*.

**`/analyze:log`** *filename*\
Detailed analyzer results are written as XML to the file that is specified by *filename*.

**`/analyze:max_paths`** *number*\
The *number* parameter that is used with this option specifies the maximum number of code paths to be analyzed. If this parameter isn't specified, the number is 256 by default. Larger values cause more thorough checking, but the analysis might take longer.

**`/analyze:only`**\
Typically, the compiler generates code and does more syntax checking after it runs the analyzer. The **`/analyze:only`** option turns off this code generation pass. It makes analysis faster, but doesn't emit compiler errors and warnings that the code generation pass of the compiler might find. If the program isn't free of code-generation errors, analysis results might be unreliable. We recommend you use this option only if the code already passes code-generation syntax checking without errors.

**`/analyze:plugin`** *plugin-dll*\
Enables the specified PREfast plugin as part of code analysis runs.

::: moniker range="<=msvc-150"

LocalEspC.dll is the plugin that implements concurrency-related code analysis checks in the range of C261XX warnings. For example, [C26100](../../code-quality/c26100.md), [C26101](../../code-quality/c26101.md), ...,  [C26167](../../code-quality/c26167.md).

To run LocalEspC.dll, use this compiler option: **`/analyze:plugin LocalEspC.dll`**

::: moniker-end
::: moniker range=">=msvc-160"

ConcurrencyCheck.dll implements concurrency-related code analysis checks in the range of C261XX warnings. For example, [C26100](../../code-quality/c26100.md), [C26101](../../code-quality/c26101.md), ...,  [C26167](../../code-quality/c26167.md).

To run ConcurrencyCheck.dll, first run this command from a developer command prompt:

```cmd
set Esp.Extensions=ConcurrencyCheck.dll
```

Then use this compiler option: **`/analyze:plugin EspXEngine.dll`**.

To run CppCoreCheck.dll, first run this command from a developer command prompt:

```cmd
set Esp.Extensions=CppCoreCheck.dll
```

Then use this compiler option: **`/analyze:plugin EspXEngine.dll`**.

::: moniker-end

**`/analyze:quiet`**\
Turns off analyzer output to the console or Visual Studio **Output** window.

::: moniker range=">=msvc-150"

**`/analyze:ruleset`** *file_path.ruleset*\
Lets you specify which rule sets to analyze, including custom rule sets that you can create yourself. When this switch is set, the rules engine is more efficient, because it excludes non-members of the specified rule set before running. Otherwise, the engine checks all rules.

The rulesets that ship with Visual Studio are found in *`%VSINSTALLDIR%\Team Tools\Static Analysis Tools\Rule Sets`*.

The following sample custom rule set tells the rules engine to check for C6001 and C26494. You can place this file anywhere as long as it has a *`.ruleset`* extension and you provide the full path in the argument.

```xml
<?xml version="1.0" encoding="utf-8"?>
<RuleSet Name="New Rule Set" Description="New rules to apply." ToolsVersion="15.0">
  <Rules AnalyzerId="Microsoft.Analyzers.NativeCodeAnalysis" RuleNamespace="Microsoft.Rules.Native">
    <Rule Id="C6001" Action="Warning" />
    <Rule Id="C26494" Action="Warning" />
  </Rules>
</RuleSet>
```

::: moniker-end

**`/analyze:stacksize`** *number*\
The *number* parameter that is used with this option specifies the size, in bytes, of the stack frame for which warning [C6262](../../code-quality/c6262.md) is generated. The space before *number* is optional. If this parameter isn't specified, the stack frame size is 16KB by default.

**`/analyze:WX-`**\
Code analysis warnings aren't treated as errors when you compile by using **`/WX`**. For more information, see [`/WX` (Warning level)](compiler-option-warning-level.md).

## Remarks

For more information, see [Code analysis for C/C++ overview](../../code-quality/code-analysis-for-c-cpp-overview.md) and [Code analysis for C/C++ warnings](../../code-quality/code-analysis-for-c-cpp-warnings.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Code Analysis** > **General** property page.

1. Modify one or more of the **Code Analysis** properties.

### To set this compiler option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnablePREfast%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)\
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
