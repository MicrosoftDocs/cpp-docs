---
description: "Learn more about: /diagnostics (Compiler diagnostic options)"
title: "/diagnostics (Compiler diagnostic options)"
ms.date: "11/11/2016"
f1_keywords: ["/diagnostics", "VC.Project.VCCLCompilerTool.DiagnosticsFormat"]
helpviewer_keywords: ["/diagnostics compiler diagnostic options [C++]", "-diagnostics compiler diagnostic options [C++]", "diagnostics compiler diagnostic options [C++]"]
ms.assetid: db1cc175-6e93-4a2e-9396-c3725d2d8f71
---
# /diagnostics (Compiler diagnostic options)

Use the **/diagnostics** compiler option to specify the display of error and warning location information.

## Syntax

```
/diagnostics:{caret|classic|column}
```

## Remarks

This option is supported in Visual Studio 2017 and later.

The **/diagnostics** compiler option controls the display of error and warning information.

The **/diagnostics:classic** option is the default, which reports only the line number where the issue was found.

The **/diagnostics:column** option also includes the column where the issue was found. This can help you identify the specific language construct or character that is causing the issue.

The **/diagnostics:caret** option includes the column where the issue was found and places a caret (^) under the location in the line of code where the issue was detected.

Note that in some cases, the compiler does not detect an issue where it occurred. For example, a missing semicolon may not be detected until other, unexpected symbols have been encountered. The column is reported and the caret is placed where the compiler detected that something was wrong, which is not always where you need to make your correction.

The **/diagnostics** option is available starting in Visual Studio 2017.

### To set this compiler option in the Visual Studio development environment

1. Open your project's **Property Pages** dialog box.

1. Under **Configuration Properties**, expand the **C/C++** folder and choose the **General** property page.

1. Use the dropdown control in the **Diagnostics Format** field to select a diagnostics display option. Choose **OK** or **Apply** to save your changes.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
