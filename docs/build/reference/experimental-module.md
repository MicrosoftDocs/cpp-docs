---
title: "/experimental:module (Enable module support)"
description: "Use the /experimental:module compiler option to enable experimental compiler support for named modules."
ms.date: 02/12/2025
f1_keywords: ["module", "/experimental:module"]
helpviewer_keywords: ["module", "/experimental:module", "Enable module support"]
---
# `/experimental:module` (Enable experimental module support)

Enables compiler support for Microsoft's experimental form of C++ Standard modules. This option is obsolete in Visual Studio 2019 version 16.11 and later.

## Syntax

> **`/experimental:module`**\[**`-`**]

## Remarks

 This switch applies to the time before the new, standardized, way of consuming the C++ Standard Library as modules was available. Although you can use this switch to use the older experimental named modules, we recommend that you use the new, standardized, way of consuming the C++ Standard Library as modules described in [Import the C++ standard library using modules](../../cpp/tutorial-import-stl-named-module.md).

This compiler switch is available starting in Visual Studio 2015 Update 1. In the VS Installer under the **Individual components** tab, ensure that **C++ Modules for v143 build tools (x64/x86 - experimental)** is selected. You can use the search box with **experimental** to find it. For more information, see [Install C and C++ support in Visual Studio](../vscpp-step-0-installation.md).

| Version  | Status |
|---|---|
| Visual Studio 2015 Update 1  | `/experimental:module` introduced. |
| Visual Studio 2019 version 16.10 | C++20 modules support is feature complete. |
| Visual Studio 2019 16.11 and earlier | Enable experimental modules support using **`/experimental:module`** along with [`/std:c++latest`](std-specify-language-standard-version.md). |
| Visual Studio 2019 version 16.11 and later | Modules support is enabled automatically with **`/std:c++20`** or later, or **`/std:c++latest`**. Use **`/experimental:module-`** to disable experimental module support. |

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

For more information about how to use and create modules, see [Overview of modules in C++](../../cpp/modules-cpp.md).

## See also

[Import the C++ standard library using modules](../../cpp/tutorial-import-stl-named-module.md)\
[`/headerUnit` (Use header unit IFC)](headerunit.md)\
[`/exportHeader` (Create header units)](module-exportheader.md)\
[`/reference` (Use named module IFC)](module-reference.md)\
[`/translateInclude` (Translate include directives into import directives)](translateinclude.md)\
[`/Zc` (Conformance)](zc-conformance.md)
