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
> **`/experimental:log`** *directoryname\*

## Arguments

*filename*

The output file for SARIF diagnostics. The compiler automatically adds the `.sarif` extension to *filename*. The space between `/experimental:log` and *filename* is optional. Use double quotes around paths containing spaces. Both relative and absolute paths are supported.

*directoryname\*

The output directory for SARIF diagnostics (for example, `/experimental:log sarif_output\`). Each source file name forms the base name for each SARIF file saved in the directory. The compiler automatically adds the `.sarif` extension to each file name. The space between `/experimental:log` and *directoryname* is optional. Use double quotes around paths containing spaces. Both relative and absolute paths are supported.

## Remarks

This option is available starting in Visual Studio 2022 version 17.8.

Diagnostics are also output as text to the console as usual.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).
1. Select the specific project **Configuration** and **Platform** for which you want to change the property. You can also choose **"All Configurations"** and **"All Platforms"**.
1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.
1. Modify the **Additional Options** property, and then choose **OK**.

## Example

The following command produces SARIF information for the entire compilation and saves it in the `sarif_output` directory in the files `main.sarif` and `other.sarif`:

```cmd
CL /experimental:log sarif_output\ main.cpp other.cpp
```

## See also

[Structured SARIF Diagnostics](sarif-output.md)
