---
title: "/experimental:preprocessor (Enable preprocessor conformance mode)"
description: "Use the /experimental:preprocessor compiler option to enable experimental compiler support for a standard conforming preprocessor."
ms.date: "10/31/2019"
f1_keywords: ["preprocessor", "/experimental:preprocessor"]
helpviewer_keywords: ["preprocessor conformance", "/experimental:preprocessor", "Enable preprocessor conformance mode"]
---
# /experimental:preprocessor (Enable preprocessor conformance mode)

This option enables an experimental, token-based preprocessor that more closely conforms to C++11 standards, including C99 preprocessor features. See 

## Syntax

> **/experimental:preprocessor**[**-**]

## Remarks

Use the **/experimental:preprocessor** compiler option to enable the experimental conforming preprocessor. You can use **/experimental:preprocessor-** option to explicitly specify the traditional preprocessor.

The **/experimental:preprocessor** option is available starting in Visual Studio 2017 version 15.8.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to include **/experimental:preprocessor** and then choose **OK**.

## See also

[/Zc (Conformance)](zc-conformance.md)
