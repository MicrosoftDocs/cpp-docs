---
title: "/QIntel-jcc-erratum"
description: "Describes the Microsoft C/C++ compiler (MSVC) /QIntel-jcc-erratum option."
ms.date: "12/16/2019"
helpviewer_keywords: ["/QIntel-jcc-erratum"]
---
# /QIntel-jcc-erratum

Tells the compiler to generate instructions to mitigate a Jump Condition Code (JCC) erratum in certain Intel processors.

## Syntax

> **/QIntel-jcc-erratum**

## Remarks

The **/QIntel-jcc-erratum** option is available in Visual Studio 2019 version 16.5 and later. It causes the compiler to insert instructions to mitigate an *erratum*, or issue, in certain Intel processors. For more information about the erratum, see [Mitigations for Jump Conditional Code Erratum](https://www.intel.com/content/dam/support/us/en/documents/processors/mitigations-jump-conditional-code-erratum.pdf) on the Intel website.

The **/QIntel-jcc-erratum** option is off by default.

### Applicability

<!-- explanation of when to use the flag goes here -->

### Effects

<!-- explanation of what the compiler does goes here -->

### Performance impact

<!-- explanation of how the flag affects performance, if applicable -->

### Additional information

For more information, see <!-- put Intel docs, C++ team dev blog entries, etc. here -->

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Enter the **/QIntel-jcc-erratum** compiler option in the **Additional Options** box. Choose **OK** to apply the change.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[/Q Options (Low-Level Operations)](q-options-low-level-operations.md)\
[MSVC Compiler Options](compiler-options.md)\
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
