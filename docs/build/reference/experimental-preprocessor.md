---
title: "/experimental:preprocessor (Enable preprocessor conformance mode)"
description: "Use the /experimental:preprocessor compiler option to enable experimental compiler support for a standard conforming preprocessor."
ms.date: 09/10/2020
f1_keywords: ["preprocessor", "/experimental:preprocessor"]
helpviewer_keywords: ["preprocessor conformance", "/experimental:preprocessor", "Enable preprocessor conformance mode"]
---
# `/experimental:preprocessor` (Enable preprocessor conformance mode)

This option is obsolete starting in Visual Studio 2019 version 16.5, replaced by the [`/Zc:preprocessor`](zc-preprocessor.md) compiler option. **`/experimental:preprocessor`** enables an experimental, token-based preprocessor that more closely conforms to C++11 standards, including C99 preprocessor features. For more information, see [MSVC new preprocessor overview](../../preprocessor/preprocessor-experimental-overview.md).

## Syntax

> **`/experimental:preprocessor`**\[**`-`**]

## Remarks

Use the **`/experimental:preprocessor`** compiler option to enable the experimental conforming preprocessor. You can use **`/experimental:preprocessor-`** option to explicitly specify the traditional preprocessor.

The **`/experimental:preprocessor`** option is available starting in Visual Studio 2017 version 15.8. Starting in Visual Studio 2019 version 16.5, the new preprocessor is complete, and available under the [`/Zc:preprocessor`](zc-preprocessor.md) compiler option.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to include *`/experimental:preprocessor`* and then choose **OK**.

## See also

[/Zc (Conformance)](zc-conformance.md)
