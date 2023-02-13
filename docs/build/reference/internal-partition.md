---
title: "/internalPartition"
description: "Use the /internalPartition compiler option to treat the input file as an internal partition unit."
ms.date: 11/16/2022
author: "tylermsft"
ms.author: "twhitney"
f1_keywords: ["/internalPartition", "VC.Project.VCCLCompilerTool.Interface"]
helpviewer_keywords: ["/internalPartition", "Translate include directives into import directives"]
---
# `/internalPartition`

Use the **`/internalPartition`** compiler option to treat the input file as an *internal partition unit*, which is a [module partition implementation unit](../../cpp/modules-cpp.md#implementing-modules) that doesn't contribute to the external interface of the module.

## Syntax

> **`/internalPartition`** *`filename`*

## Remarks

The following example demonstrates how to use the `/internalPartition` option:

Source file `m-internals.cpp`:

```cpp
// m-internals.cpp
module m:internals;

void internalFunc() {} // cannot have `export` since this is an internal partition
```

Source file `m.ixx`:

```cpp
// m.ixx
export module m;
import :internals; // Cannot export this partition.

export
void wrapper() { internalFunc(); }
```

To compile this interface:

```bash
cl /std:c++latest /internalPartition /c m-internals.cpp
```

This option can't be used with the [`/interface`](interface.md) compiler option.

**`/internalPartition`** is available in Visual Studio 2019 version 16.10, or later.\
**`/internalPartition`** requires [/std:c++20](std-specify-language-standard-version.md) or later.

### To set this compiler option in the Visual Studio development environment

You normally shouldn't set this option in the Visual Studio development environment unless you use a different extension for your partition files. By default, the build system applies this option to files that have a *`.ixx`** extension.

1. To apply the **`/internalPartition`** option to a file explicitly in the IDE, select the file in **Solution Explorer**. Right-click to open the context menu and select **Properties** to open the Property Pages dialog.

1. Set the **Configuration** dropdown to **All Configurations**. Set the **Platform** dropdown to **All Platforms**.

1. Open the **Configuration Properties** > **C/C++** > **Advanced** property page.

1. Use the dropdown control to modify the **Compile As** property to **Compile as C++ Module Internal Partition (/internalPartition)**. Choose **OK** or **Apply** to save your changes.

## See also

[Overview of modules in C++](../../cpp/modules-cpp.md)\
[Using C++ Modules in MSVC from the Command Line](https://devblogs.microsoft.com/cppblog/using-cpp-modules-in-msvc-from-the-command-line-part-1/)\
[C++ Modules conformance improvements with MSVC in Visual Studio 2019 16.5](https://devblogs.microsoft.com/cppblog/c-modules-conformance-improvements-with-msvc-in-visual-studio-2019-16-5/#module-partitions)