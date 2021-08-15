---
title: "/QIntel-jcc-erratum"
description: "Describes the Microsoft C/C++ compiler (MSVC) /QIntel-jcc-erratum option."
ms.date: "01/07/2020"
f1_keywords: ["QIntel-jcc-erratum"]
helpviewer_keywords: ["/QIntel-jcc-erratum", "-QIntel-jcc-erratum"]
---
# /QIntel-jcc-erratum

::: moniker range="<=msvc-150"

The **/QIntel-jcc-erratum** option is available in Visual Studio 2019 version 16.5 and later.

::: moniker-end

::: moniker range=">=msvc-160"

Specifies that the compiler generates instructions to mitigate the performance impact caused by the Intel Jump Conditional Code (JCC) erratum microcode update in certain Intel processors.

## Syntax

> **/QIntel-jcc-erratum**

## Remarks

Under **/QIntel-jcc-erratum**, the compiler detects jump and macro-fused jump instructions that cross or end on a 32-byte boundary. It aligns these instructions to the boundary. This change mitigates the performance impact of microcode updates that prevent the JCC erratum in certain Intel processors. For more information about the erratum, see [Mitigations for Jump Conditional Code Erratum](https://www.intel.com/content/dam/support/us/en/documents/processors/mitigations-jump-conditional-code-erratum.pdf) on the Intel website.

The **/QIntel-jcc-erratum** option is available in Visual Studio 2019 version 16.5 and later. This option is only available in compilers that target x86 and x64. The option isn't available in compilers that target ARM processors.

The **/QIntel-jcc-erratum** option is off by default, and works only in optimized builds. This option can increase code size.

**/QIntel-jcc-erratum** is incompatible with [/clr](clr-common-language-runtime-compilation.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Code Generation** property page.

1. Select a value for the **Enable Intel JCC Erratum Mitigation** property. Choose **OK** to apply the change.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[/Q options (Low-level operations)](q-options-low-level-operations.md)\
[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)

::: moniker-end
