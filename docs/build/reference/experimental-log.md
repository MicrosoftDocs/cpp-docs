---
title: "/experimental:log (Structured SARIF diagnostics)"
description: "Use the /experimental:log compiler option to output experimental structured SARIF output for diagnostics."
ms.date: 10/26/2023
f1_keywords: ["/experimental:log"]
helpviewer_keywords: ["/experimental:log", "SARIF", "structured diagnostics"]
---
# `/experimental:log` (Structured SARIF diagnostics)

Output [SARIF](https://sarifweb.azurewebsites.net/) diagnostics to the specified file. For more information, see [Structured SARIF Diagnostics](sarif-output.md).

## Syntax

> **`/experimental:log`** *filename*

## Arguments

*filename*

Where to output SARIF diagnostics. The `.sarif` suffix is added to *filename* to produce the final filename at which to store the resulting SARIF diagnostics. The space between `/experimental:log` and *filename* is optional. Paths that include spaces must be enclosed in double quotes. *filename* may name a relative or absolute path.

## Remarks

This option is available starting in Visual Studio 2022 version 17.8.

Diagnostics are also output as text to the console as usual.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the specific project **Configuration** and **Platform** for which you want to change the property. You can also choose **"All Configurations"** and **"All Platforms"**.

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property, and then choose **OK**.

## Example

The following command produces SARIF information for the entire compilation in the `diags.sarif` file in the current directory:

```cmd
CL /experimental:logdiags main.cpp other.cpp
```

## See also

[Structured SARIF Diagnostics](sarif-output.md)
