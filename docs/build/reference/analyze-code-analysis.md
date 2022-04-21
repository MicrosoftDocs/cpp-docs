---
title: "/analyze (Code analysis)"
description: "The Microsoft C++ compiler /analyze option syntax and usage."
ms.date: 02/17/2022
f1_keywords: ["VC.Project.VCCLCompilerTool.EnablePREfast", "/analyze", "VC.Project.VCCLCompilerTool.PREfastAdditionalOptions", "VC.Project.VCCLCompilerTool.PREfastAdditionalPlugins", "VC.Project.VCCLCompilerTool.DisableAnalyzeExternal", "VC.Project.VCCLCompilerTool.AnalyzeExternalRuleset"]
helpviewer_keywords: ["/analyze compiler option [C++]", "-analyze compiler option [C++]", "analyze compiler option [C++]"]
ms.assetid: 81da536a-e030-4bd4-be18-383927597d08
---
# `/analyze` (Code analysis)

Enables code analysis and control options.

## Syntax

General analysis options:
> **`/analyze`**\[**`-`**]\
> **`/analyze:only`**\
> **`/analyze:quiet`**\
> **`/analyze:max_paths`** *`number`*\
> **`/analyze:stacksize`** *`number`*\
> **`/analyze:WX-`**

Analysis plugin options:
> **`/analyze:plugin`** *`plugin_dll`*

::: moniker range=">=msvc-160"

External file analysis options:
> **`/analyze:external-`**\
> **`/analyze:external:ruleset`** *`ruleset_files`*

::: moniker-end

Analysis log options:
> **`/analyze:autolog`**\[**`-`**]\
> **`/analyze:autolog:ext`** *`extension`*\
> **`/analyze:log`** *`log_path`*

::: moniker range=">=msvc-160"

Log file format options:
> **`/analyze:log:format:sarif`**\
> **`/analyze:log:format:xml`**

Log file content options:
> **`/analyze:sarif:analyzedfiles`**\[**`-`**]\
> **`/analyze:sarif:configuration`**\[**`-`**]\
> **`/analyze:log:compilerwarnings`**\
> **`/analyze:log:includesuppressed`**

::: moniker-end

::: moniker range="msvc-150"

Ruleset options:
> **`/analyze:ruleset`** *ruleset_file*

::: moniker-end

::: moniker range=">=msvc-160"

Ruleset options:
> **`/analyze:projectdirectory`** *`project_directory`*\
> **`/analyze:rulesetdirectory`** *`ruleset_directories`*\
> **`/analyze:ruleset`** *`ruleset_files`*

::: moniker-end

### Arguments

#### General analysis options

**`/analyze`**\[**`-`**]\
Turns on code analysis. Use **`/analyze-`** to explicitly turn off analysis. **`/analyze-`** is the default behavior.

By default, analysis output goes to the console or the Visual Studio Output window like other error messages. Code analysis also creates a log file named *`filename.nativecodeanalysis.xml`*, where *`filename`* is the name of the analyzed source file.

**`/analyze:only`**\
By default, the compiler compiles the code to generate object files before code analysis runs. The **`/analyze:only`** option makes the compiler skip the code generation pass, and does code analysis directly. Compiler errors still prevent code analysis from running. However, the compiler won't report other warnings that it might find during the code generation pass. If the program isn't free of code-generation warnings, analysis results might be unreliable. We recommend you use this option only if the code passes code-generation syntax checks without errors or warnings.

**`/analyze:quiet`**\
Turns off analysis output to the console or Visual Studio Output window.

**`/analyze:max_paths`** *`number`*\
The *`number`* parameter specifies the maximum number of code paths to analyze. Analysis defaults to 256 paths. Larger values cause more thorough checking, but the analysis might take longer.

**`/analyze:stacksize`** *`number`*\
The *`number`* parameter specifies the size in bytes of the stack frame that generates warning [C6262](../../code-quality/c6262.md). The default stack frame size is 16KB.

**`/analyze:WX-`**\
Tells the compiler not to treat code analysis warnings as errors even when the **`/WX`** option is used. For more information, see [`/WX` (Warning level)](compiler-option-warning-level.md).

#### Analysis plugin options

**`/analyze:plugin`** *`plugin_dll`*\
Enables the specified code analysis plug-in DLL for code analysis.

Space between **`/analyze:plugin`** and the *`plugin_dll`* file path is optional if the path doesn't require double-quotes (**`"`**). For example, you can write `/analyze:plugin EspxEngine.dll`. However, if the path is enclosed in double-quotes, you can't have a space between **`/analyze:plugin`** and the file path. Here's an example: `/analyze:plugin"c:\path\to\EspxEngine.dll"`.

The code analysis engine uses plug-ins to help find specific categories of defects. The code analysis engine comes with some built-in plug-ins that detect various defects. To use another plug-in with the code analysis engine, specify it by using the **`/analyze:plugin`** option.

::: moniker range="<=msvc-150"

The plug-in `LocalEspC.dll` implements concurrency-related analysis checks. These checks raise warnings in the C261XX range, such as [C26100](../../code-quality/c26100.md) through [C26167](../../code-quality/c26167.md).

To load `LocalEspC.dll`, use compiler option `/analyze:plugin LocalEspC.dll`.

::: moniker-end

::: moniker range=">=msvc-160"

Some plug-ins, like `EspXEngine.dll`, which ships with Visual Studio, employ extensions that can do further analysis. Visual Studio includes these extensions for EspXEngine: `ConcurrencyCheck.dll`, `CppCoreCheck.dll`, `EnumIndex.dll`, `HResultCheck.dll`, and `VariantClear.dll`. They check for defects for concurrency issues, CppCoreGuidelines violations, inappropriate uses of `enum` values as indexes, `HRESULT` values, or `VARIANT` values, respectively.

When you build on the command line, you can use the `Esp.Extensions` environment variable to specify EspXEngine extensions. For example:

```cmd
set Esp.Extensions=ConcurrencyCheck.dll;CppCoreCheck.dll;
```

Use a semicolon (**`;`**) to delimit the extensions, as shown in the example. A trailing semicolon isn't needed. You can use an absolute file path for an extension, or specify a relative path from the directory that contains `EspXEngine.dll`.

The `EspXEngine.dll` plug-in uses `ConcurrencyCheck.dll` to implement concurrency-related code analysis checks. These checks raise warnings in the C261XX range, such as [C26100](../../code-quality/c26100.md) through [C26167](../../code-quality/c26167.md).

If you're building in a developer command prompt window, first set the `Esp.Extensions` environment variable to specify the `ConcurrencyCheck.dll` extension:

```cmd
set Esp.Extensions=ConcurrencyCheck.dll
```

Then, use compiler option `/analyze:plugin EspXEngine.dll` to use the EspXEngine plug-in.

::: moniker-end

::: moniker range=">=msvc-160"

#### External file analysis options

Starting in Visual Studio 2019 version 16.10, you can specify different analysis rules and behavior for external headers. Use the **`/external:I`**, **`/external:env`**, or **`/external:anglebrackets`** options to specify directories as "external" directories. Any files that are included by using `#include`from an external directory or its subdirectories are considered as external headers. For more information, see [`/external` (External headers diagnostics)](external-external-headers-diagnostics.md).

Code analysis provides these options to control analysis of external files:

**`/analyze:external-`**\
Skips analysis of external header files. By default, code analysis analyzes external header files just like other files. When the **`/analyze:external-`** option is set, code analysis skips any files specified as external, except templates from external files. Templates defined in external headers are treated as non-external by using the **`/external:templates-`** option. The **`/external:Wn`** option doesn't affect code analysis. For example, code analysis analyzes external files and reports defects even when `/external:W0` is specified.

**`/analyze:external:ruleset`** *`ruleset_files`*\
The *`ruleset_files`* parameter specifies one or more semicolon-delimited ruleset files to use for analysis of external files. For information on rulesets, refer to "Options for rulesets" section.

There's an environment variable (`CAExcludePath`) that provides similar but simpler capability to skip analysis of files under the directories specified in the environment variable. If a directory is specified in both **`/external:*`** option and in the `CAExcludePath` environment variable, it's considered as excluded, and **`/analyze:external*`** options won't apply to that directory.

::: moniker-end

#### Analysis log options

**`/analyze:autolog`**\[**`-`**]\
This flag used to be required to enable creation of analysis log file for each of the source files being analyzed. Log files are now created by default, so this flag is mostly redundant.
When used, it changes the default log extension to *`*.pftlog`* instead of *`.xml`*. Use **`/analyze:autolog-`** to disable logging to files.

**`/analyze:autolog:ext`** *`extension`*\
Overrides the default extension of the analysis log files, and uses *`extension`* instead. If you use the *`.sarif`* extension, the log file uses the SARIF format instead of the default XML format.

**`/analyze:log`** *`log_path`*\
Specifies a log file path *`log_path`* instead of the automatically generated log file path. When the *`log_path`* path has a trailing backslash and refers to an existing directory, code analysis creates all log files in the specified directory. Otherwise, *`log_path`* specifies a file path. A file path instructs the compiler to combine logs for all analyzed source files into the specified log file. If the file path has a *`.sarif`* extension, the log file uses the SARIF format instead of the default XML format. You can override this behavior by using the **`/analyze:log:format:*`** option.

::: moniker range=">=msvc-160"

#### Log file format options

Starting in Visual Studio 2019 version 16.9, you can specify different log format options for code analysis.

**`/analyze:log:format:xml`**\
Forces the use of XML log format irrelevant of the file extension used.

**`/analyze:log:format:sarif`**\
Forces the use of SARIF log format irrelevant of the file extension used.

#### Log file content options

Starting in Visual Studio 2019 version 16.9, you can specify different log content options for code analysis.

**`/analyze:sarif:analyzedfiles`**\[**`-`**]\
Adds file artifacts entries to the SARIF log file for analyzed files that don't issue warnings. This option is disabled by default. Artifacts for the source file and for files that emitted results are always included.

**`/analyze:sarif:configuration`**\[**`-`**]\
Adds rule configuration entries to determine how the user overrode the default rule configuration (disabled by default).

**`/analyze:log:compilerwarnings`**\
Adds both any defects the analysis engine finds, and all compiler warnings, to the analysis log file. By default, compiler warnings aren't included in the analysis log file. For more information on compiler warnings during code analysis, see the **`/analyze:only`** option.

**`/analyze:log:includesuppressed`**\
Adds both suppressed warnings and unsuppressed warnings to the analysis log file. By default, suppressed warnings aren't included in the analysis log file. If ruleset files are specified for analysis, the warnings disabled by the ruleset files aren't included in the log even when **`/analyze:log:includesuppressed`** is specified.

::: moniker-end

::: moniker range=">=msvc-150"

#### Ruleset options

::: moniker-end

::: moniker range=">=msvc-160"

**`/analyze:projectdirectory`** *`project_directory`*\
Specifies the current project directory. If the ruleset (or an item it includes) is a file name, the compiler first looks for the file under the specified *`project_directory`*. If not found, it next searches the *`ruleset_directories`* specified by **`/analyze:rulesetdirectory`**, if any. If the ruleset (or an item it includes) is a relative path, the compiler first looks for the file under the project directory. If the ruleset isn't found, then it looks in the current working directory. This option is available starting in Visual Studio 2019 version 16.9.

**`/analyze:rulesetdirectory`** *`ruleset_directories`*\
Specifies a semicolon-separated list of ruleset search paths. If the ruleset (or an item it includes) is a file name, then the compiler first looks for the file under the *`project_directory`* specified by **`/analyze:projectdirectory`**, if any, followed by the specified *`ruleset_directories`*. This option is available starting in Visual Studio 2019 version 16.9.

**`/analyze:ruleset`** *`ruleset_files`*\
Specifies one or more ruleset files to use for analysis. This option can make analysis more efficient; the analysis engine tries to exclude checkers that have no active rules specified in the ruleset files before running. Otherwise, the engine runs all checkers enabled.

::: moniker-end

::: moniker range="msvc-150"

**`/analyze:ruleset`** *`ruleset_file`*\
Specifies a ruleset file to use for analysis. This option can make analysis more efficient; the analysis engine tries to exclude checkers that have no active rules specified in the ruleset file before running. Otherwise, the engine runs all checkers enabled.

::: moniker-end

::: moniker range=">=msvc-150"

The ruleset files that ship with Visual Studio are found in *`%VSINSTALLDIR%\Team Tools\Static Analysis Tools\Rule Sets`*.

The following example custom ruleset tells the analysis engine to check for C6001 and C26494, and report them as warnings.

::: moniker-end

::: moniker range="msvc-150"

You can place this file anywhere as long as you specify the full path in the argument.

::: moniker-end

::: moniker range=">=msvc-160"

You can place this file anywhere as long as you specify the full path in the argument, or under the directories specified in the **`/analyze:projectdirectory`** or **`/analyze:rulesetdirectory`** options.

::: moniker-end

::: moniker range=">=msvc-150"

```xml
<?xml version="1.0" encoding="utf-8"?>
<RuleSet Name="New Rule Set" Description="New rules to apply." ToolsVersion="15.0">
  <Rules AnalyzerId="Microsoft.Analyzers.NativeCodeAnalysis" RuleNamespace="Microsoft.Rules.Native">
    <Rule Id="C6001" Action="Warning" />
    <Rule Id="C26494" Action="Warning" />
  </Rules>
</RuleSet>
```

By default, the file extension for ruleset files is *`*.ruleset`*. Visual Studio uses the default extension when browsing for ruleset files. However, you can use any extension.

For more information about rulesets, see [Use rule sets to specify the C++ rules to run](../../code-quality/using-rule-sets-to-specify-the-cpp-rules-to-run.md).

::: moniker-end

## Remarks

For more information, see [Code analysis for C/C++ overview](../../code-quality/code-analysis-for-c-cpp-overview.md) and [Code analysis for C/C++ warnings](../../code-quality/code-analysis-for-c-cpp-warnings.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Code Analysis** > **General** property page.

1. Modify one or more of the **Code Analysis** properties.

1. Choose **OK** or **Apply** to save your changes.

::: moniker range=">=msvc-160"

To set external file analysis options in Visual Studio 2019 version 16.10 and later:

1. Open the project's **Property Pages** dialog box.

1. Select the **Configuration Properties** > **C/C++** > **External Includes** property page.

1. Set properties:

   - **Disable Code Analysis for External Headers** sets the **`/analyze:external-`** option.

   - **Analysis Ruleset for External Headers** sets the **`/analyze:external:ruleset path`** option.

1. Choose **OK** or **Apply** to save your changes.

::: moniker-end

### To set this compiler option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnablePREfast%2A>.

## See also

[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
