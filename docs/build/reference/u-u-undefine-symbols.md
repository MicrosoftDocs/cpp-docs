---
title: "/U, /u (Undefine symbols)"
description: "Use the Microsoft C/C++ compiler /U and /u options to undefine preprocessor symbols."
ms.date: 09/03/2020
f1_keywords: ["VC.Project.VCCLCompilerTool.UndefinePreprocessorDefinitions", "VC.Project.VCCLWCECompilerTool.UndefinePreprocessorDefinitions", "VC.Project.VCCLCompilerTool.UndefineAllPreprocessorDefinitions", "/u", "VC.Project.VCCLWCECompilerTool.UndefineAllPreprocessorDefinitions"]
helpviewer_keywords: ["-U compiler option [C++]", "Undefine Symbols compiler option", "/U compiler option [C++]", "U compiler option [C++]"]
ms.assetid: 7bc0474f-6d1f-419b-807d-0d8816763b2a
---
# /U, /u (Undefine symbols)

The **`/U`** compiler option undefines the specified preprocessor symbol. The **`/u`** compiler option undefines the Microsoft-specific symbols that the compiler defines.

## Syntax

> **`/U`**\[ ]*symbol*\
> **`/u`**

## Arguments

*symbol*<br/>
The preprocessor symbol to undefine.

## Remarks

Neither of the **`/U`** and **`/u`** options can undefine a symbol created by using the **`#define`** directive.

The **`/U`** option can undefine a symbol that was previously defined by using the **`/D`** option.

By default, the compiler may define a large number of Microsoft-specific symbols. Here are a few common ones:

| Symbol | Function |
|--|--|
| `_CHAR_UNSIGNED` | Default char type is unsigned. Defined when the [`/J`](j-default-char-type-is-unsigned.md) option is specified. |
| `_CPPRTTI` | Defined for code compiled with the [`/GR`](gr-enable-run-time-type-information.md) option. |
| `_CPPUNWIND` | Defined for code compiled with the [`/EHsc`](eh-exception-handling-model.md) option. |
| `_DLL` | Defined when the [`/MD`](md-mt-ld-use-run-time-library.md) option is specified. |
| `_M_IX86` | By default, defined to 600 for x86 targets. |
| `_MSC_VER` | Defined as a unique integer value for each compiler version. For more information, see [Predefined macros](../../preprocessor/predefined-macros.md). |
| `_WIN32` | Defined for WIN32 applications. Always defined. |
| `_MT` | Defined when the [`/MD`](md-mt-ld-use-run-time-library.md) or [`/MT`](md-mt-ld-use-run-time-library.md) option is specified. |

For a complete list of Microsoft-specific predefined macros, see [Predefined macros](../../preprocessor/predefined-macros.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Advanced** property page.

1. Modify the **Undefine Preprocessor Definitions** or **Undefine All Preprocessor Definitions** properties.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UndefineAllPreprocessorDefinitions%2A> or <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UndefinePreprocessorDefinitions%2A>.

## See also

[MSVC compiler options](compiler-options.md)<br/>
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)<br/>
[**`/J`** (Default char type is unsigned)](j-default-char-type-is-unsigned.md)<br/>
[**`/GR`** (Enable run-time type information)](gr-enable-run-time-type-information.md)<br/>
[**`/EH`** (Exception handling model)](eh-exception-handling-model.md)<br/>
[**`/MD`**, **`/MT`**, **`/LD`** (Use run-time library)](md-mt-ld-use-run-time-library.md)
