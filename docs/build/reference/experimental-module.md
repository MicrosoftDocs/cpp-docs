---
title: "/experimental:module (Enable module support)"
description: "Use the /experimental:module compiler option to enable experimental compiler support for named modules."
ms.date: 02/12/2025
f1_keywords: ["module", "/experimental:module"]
helpviewer_keywords: ["module", "/experimental:module", "Enable module support"]
---
# `/experimental:module` (Enable experimental module support)

Enables experimental compiler support for C++ Standard modules. This option is obsolete for C++20 standard modules in Visual Studio 2019 version 16.11 and later. This switch is only used (along with [`/std:c++latest`](std-specify-language-standard-version.md)) if you are still using the older experimental Standard library modules. We recommend that you use the new Standard Library modules provided by Microsoft without using this switch.

## Syntax

> **`/experimental:module`**\[**`-`**]

## Remarks

Although you can use this switch to use the older experimental named modules listed below, we recommend that you use the the new, standardized, way of consuming the C++ Standard Library as modules described in [Import the C++ standard library using modules](../../cpp/tutorial-import-stl-named-module.md).

Before you can use the experimental modules, ensure that **C++ Modules for v143 build tools (x64/x86 - experimental)** in selected the VS Installer. It's available in the **Individual components** tab of the installer. Search for **experimental** to see the option. For more information, see [Install C++ support in Visual Studio](../install/install-visual-cpp.md).

In versions of Visual Studio before Visual Studio 2019 version 16.11, you can enable experimental modules support using the **`/experimental:module`** compiler option along with the [`/std:c++latest`](std-specify-language-standard-version.md) option. In Visual Studio 2019 version 16.11, module support is enabled automatically by either **`/std:c++20`** or **`/std:c++latest`**. Use **`/experimental:module-`** to disable experimental module support.

This compiler switch is available starting in Visual Studio 2015 Update 1. Modules support is feature complete in Visual Studio 2019 version 16.10.

For more information about how to use and create modules, see [Overview of modules in C++](../../cpp/modules-cpp.md).

The experimental library consists of the following named modules:

- `std.regex` provides the content of header `<regex>`
- `std.filesystem` provides the content of header `<filesystem>`
- `std.memory` provides the content of header `<memory>`
- `std.threading` provides the contents of headers `<atomic>`, `<condition_variable>`, `<future>`, `<mutex>`, `<shared_mutex>`, and `<thread>`
- `std.core` provides everything else in the C++ Standard Library

To consume these modules, add an import declaration to the top of the source code file. For example:

```cpp
import std.core;
import std.regex;
```

To consume the experimental Microsoft Standard Library modules, compile your program with the [`/EHsc`](eh-exception-handling-model.md) and [`/MD`](md-mt-ld-use-run-time-library.md) options.

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
