---
title: "/Zc:preprocessor (Enable preprocessor conformance mode)"
description: "Use the /Zc:preprocessor compiler option to enable compiler support for a standard conforming preprocessor."
ms.date: 02/17/2022
f1_keywords: ["preprocessor", "/Zc:preprocessor", "VC.Project.VCCLCompilerTool.PreprocessorStandard"]
helpviewer_keywords: ["preprocessor conformance", "/Zc:preprocessor", "Enable preprocessor conformance mode"]
---
# `/Zc:preprocessor` (Enable preprocessor conformance mode)

This option enables a token-based preprocessor that conforms to C99 and C++11 and later standards. For more information, see [MSVC new preprocessor overview](../../preprocessor/preprocessor-experimental-overview.md).

## Syntax

> **`/Zc:preprocessor`**[**`-`**]

## Remarks

Use the **`/Zc:preprocessor`** compiler option to enable the conforming preprocessor. You can use **`/Zc:preprocessor-`** option to explicitly specify the traditional (non-conforming) preprocessor.

The **`/Zc:preprocessor`** option is available starting in Visual Studio 2019 version 16.5. An earlier, incomplete version of the new preprocessor option is available in versions of Visual Studio starting in Visual Studio 2017 version 15.8. For more information, see [`/experimental:preprocessor`](experimental-preprocessor.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Preprocessor** property page.

1. Modify the **Use Standard Conforming Preprocessor** property and then choose **OK**.

## See also

[/Zc (Conformance)](zc-conformance.md)
