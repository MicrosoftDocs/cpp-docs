---
description: "Learn more about: /options:strict (Unrecognized compiler options are errors)"
title: "/options:strict (Unrecognized compiler options are errors)"
ms.date: 12/15/2021
f1_keywords: ["/options:strict"]
helpviewer_keywords: ["/options:strict compiler option (C++)"]
---
# `/options:strict` (Unrecognized compiler options are errors)

The **`/options:strict`** compiler option tells the compiler to return an error code if a compiler option isn't recognized.

## Syntax

> **`/options:strict`**

## Remarks

The **`/options:strict`** compiler option causes the compiler driver cl.exe to exit with an error code after all command-line options are parsed if another command-line option or argument isn't recognized. The compiler emits error D8043 for any command-line option or argument that isn't recognized.

The **`/options:strict`** option is available starting in Visual Studio 2022 version 17.0. In earlier versions of the compiler, or if **`/options:strict`** isn't specified, the compiler doesn't exit on an unrecognized option. It emits warning D9002, ignores the unrecognized option, and continues processing.

### To set this compiler option in Visual Studio

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Add **`/options:strict`**  to the **Additional options:** pane.

## See also

[`/Zc` (Conformance)](zc-conformance.md)
