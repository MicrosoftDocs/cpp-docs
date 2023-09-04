---
title: "/Zc:zc-checkGwOdr (Enforce Standard C++ ODR violations under /Gw)"
description: "Learn about the Microsoft C++ /Zc:checkGwOdr compiler option for improving C++ standards conformance when using /Gw (Optimize global data)"
ms.date: 08/31/2023
f1_keywords: ["/Zc:checkGwOdr"]
helpviewer_keywords: ["/Zc:checkGwOdr", "Zc:checkGwOdr", "-Zc:checkGwOdr"]
---
# `/Zc:checkGwOdr` (Enforce Standard C++ ODR violations under `/Gw`)

This switch enforces C++ standards conformance when using [`/Gw` (Optimize global data)](gw-optimize-global-data.md). When using `/Gw`, certain One Definition Rule (ODR) violations are ignored. This flag ensures that the appropriate errors are raised.

## Syntax

> **`/Zc:checkGwOdr`**\[**`-`**]

## Remarks

This switch is off by default.

To see an example of ODR violations that are ignored when using `/Gw`, see [Standards conformance improvements to /Gw](https://devblogs.microsoft.com/cppblog/standards-conformance-improvements-to-gw-in-visual-studio-version-17-5-preview-2/).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to include *`/Zc:checkGwOdr`* or *`/Zc:checkGwOdr-`* and then choose **OK**.

## See also

[`/Zc` (Conformance)](zc-conformance.md)\
[One Definition Rule (ODR)](https://en.wikipedia.org/wiki/One_Definition_Rule)\
[Standards conformance improvements to /Gw](https://devblogs.microsoft.com/cppblog/standards-conformance-improvements-to-gw-in-visual-studio-version-17-5-preview-2/)
