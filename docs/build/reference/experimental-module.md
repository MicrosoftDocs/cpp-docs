---
title: "/experimental:module (Enable module support)"
description: "Use the /experimental:module compiler option to enable experimental compiler support for named modules."
ms.date: 01/27/2022
f1_keywords: ["module", "/experimental:module"]
helpviewer_keywords: ["module", "/experimental:module", "Enable module support"]
---
# `/experimental:module` (Enable module support)

Enables experimental compiler support for C++ Standard modules. This option is obsolete for C++20 standard modules in Visual Studio version 16.11 and later. It's still required (along with [`/std:c++latest`](std-specify-language-standard-version.md)) for the experimental Standard library modules.

## Syntax

> **`/experimental:module`**\[**`-`**]

## Remarks

In versions of Visual Studio before Visual Studio 2019 version 16.11, you can enable experimental modules support by use of the **`/experimental:module`** compiler option along with the [`/std:c++latest`](std-specify-language-standard-version.md) option. In Visual Studio 2019 version 16.11, module support is enabled automatically by either **`/std:c++20`** or **`/std:c++latest`**. Use **`/experimental:module-`** to disable module support explicitly.

This option is available starting in Visual Studio 2015 Update 1. As of Visual Studio 2019 version 16.2, C++20 Standard modules aren't fully implemented in the Microsoft C++ compiler. Modules support is feature complete in Visual Studio 2019 version 16.10. You can use the modules feature import the Standard Library modules provided by Microsoft. A module and the code that consumes it must be compiled with the same compiler options.

For more information on modules and how to use and create them, see [Overview of modules in C++](../../cpp/modules-cpp.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Set the **Configuration** drop-down to **All Configurations**.

1. Select the **Configuration Properties** > **C/C++** > **Language** property page.

1. Modify the **Enable C++ Modules (experimental)** property, and then choose **OK**.

## See also

[`/headerUnit` (Use header unit IFC)](headerunit.md)\
[`/exportHeader` (Create header units)](module-exportheader.md)\
[`/reference` (Use named module IFC)](module-reference.md)\
[`/translateInclude` (Translate include directives into import directives)](translateinclude.md)\
[`/Zc` (Conformance)](zc-conformance.md)
