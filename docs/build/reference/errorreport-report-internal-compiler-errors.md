---
title: "/errorReport (Report Internal Compiler Errors)"
description: "Reference for the Microsoft C/C++ compiler /errorReport command-line option."
ms.date: "02/09/2020"
f1_keywords: ["VC.Project.VCCLCompilerTool.ErrorReporting"]
helpviewer_keywords: ["/errorReport compiler option [C++]", "-errorReport compiler option [C++]"]
ms.assetid: 819828f8-b0a5-412c-9c57-bf822f17e667
---
# /errorReport (Report Internal Compiler Errors)

> [!NOTE]
> The **/errorReport** option is deprecated. Starting in Windows Vista, error reporting is controlled by [Windows Error Reporting (WER)](/windows/win32/wer/windows-error-reporting) settings.

## Syntax

> **/errorReport:**\[**none** \| **prompt** \| **queue** \| **send** ]

## Remarks

An internal compiler error (ICE) results when the compiler can't process a source code file. When an ICE occurs, the compiler doesn't produce an output file, or any useful diagnostic that you can use to fix your code.

The **/errorReport** arguments are overridden by the Windows Error Reporting service settings. The compiler automatically sends reports of internal errors to Microsoft, if reporting is enabled by Windows Error Reporting. No report is sent if disabled by Windows Error Reporting.

### To set this compiler option in the Visual Studio development environment

1. Open the project **Property Pages** dialog box. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Advanced** property page.

1. Modify the **Error Reporting** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ErrorReporting%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)\
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
