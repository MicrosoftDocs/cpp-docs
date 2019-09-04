---
title: "/experimental:module (Enable module support)"
description: "Use the /experimental:module compiler option to enable experimental compiler support for modules."
ms.date: "09/03/2019"
f1_keywords: ["module", "/experimental:module"]
helpviewer_keywords: ["module", "/experimental:module", "Enable module support"]
---
# /experimental:module (Enable module support)

Enables experimental compiler support for modules, as specified by the draft C++20 standard.

## Syntax

> **/experimental:module**[**-**]

## Remarks

You can enable experimental modules support by use of the **/experimental:module** compiler option along with the [/std:c++latest](std-specify-language-standard-version.md) option. You can use **/experimental:module-** to disable module support explicitly.

This option is available starting in Visual Studio 2015 Update 1. As of Visual Studio 2019 version 16.2, Draft C++20 Standard modules are not fully implemented in the Microsoft C++ compiler. You can use the modules feature to create single-partition modules and to import the Standard Library modules provided by Microsoft. A module and the code that consumes it must be compiled with the same compiler options.

For more information on modules and how to use and create them, see [Overview of modules in C++](../../cpp/modules-cpp.md).

Here's an example of the compiler command-line options used to create an export module from source file *ModuleName.ixx*:

```cmd
cl /EHsc /MD /experimental:module /module:export /module:name ModuleName /module:wrapper C:\Output\path\ModuleName.h /module:output C:\Output\path\ModuleName.ifc -c ModuleName.ixx
```

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Set the **Configuration** drop-down to **All Configurations**.

1. Select the **Configuration Properties** > **C/C++** > **Language** property page.

1. Modify the **Enable C++ Modules (experimental)** property, and then choose **OK**.

## See also

[/Zc (Conformance)](zc-conformance.md)
