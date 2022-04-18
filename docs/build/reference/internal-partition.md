---
title: "/internalPartition"
description: "Use the /internalPartition compiler option to treat the input file as an internal partition unit."
ms.date: 04/15/2022
author: "tylermsft"
ms.author: "twhitney"
f1_keywords: ["/internalPartition", "VC.Project.VCCLCompilerTool.Interface"]
helpviewer_keywords: ["/internalPartition", "Translate include directives into import directives"]
---
# `/internalPartition`

Use this switch to treat the input file on the command line as an [internal partition unit](http://eel.is/c%2B%2Bdraft/module#unit-4.3).

## Syntax

> **`/internalPartition`** *`filename`*

## Remarks

The following example demonstrates using the `/internalPartition` switch:

`m-internals.cpp`:

```cpp
module m:internals;

void internalFunc() {} // cannot have `export` since this is an internal partition
```

`m.ixx`:

```cpp
export module m;
import :internals; // Cannot export this partition.

export
void wrapper() { internalFunc(); }
```

To compile this interface:

```bash
cl /std:c++latest /internalPartition /c m-internals.cpp
```

This switch can't be used with the [`/interface`](interface.md) compiler switch.

**`/internalPartition`** is available in Visual Studio 2019 version 16.10, or later.\
**`/internalPartition`** requires [/std:c++20](std-specify-language-standard-version.md) or later.

## See also

[Overview of modules in C++](../../cpp/modules-cpp.md)\
[Using C++ Modules in MSVC from the Command Line](https://devblogs.microsoft.com/cppblog/using-cpp-modules-in-msvc-from-the-command-line-part-1/)\
[C++ Modules conformance improvements with MSVC in Visual Studio 2019 16.5](https://devblogs.microsoft.com/cppblog/c-modules-conformance-improvements-with-msvc-in-visual-studio-2019-16-5/#module-partitions)