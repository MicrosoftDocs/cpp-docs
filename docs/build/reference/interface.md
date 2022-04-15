---
title: "/interface"
description: "Use the /interface compiler option to treat the input file as a module interface unit."
ms.date: 04/15/2022
author: "tylermsft"
ms.author: "twhitney"
f1_keywords: ["/interface", "VC.Project.VCCLCompilerTool.Interface"]
helpviewer_keywords: ["/interface", "Translate include directives into import directives"]
---
# `/interface`

This switch instructs the compiler to treat the input file on the command line as a module interface unit.

## Syntax

> **`/interface`** *`filename`*

## Remarks

Use this switch when a module interface has a different extension than `.ixx`.

In the following example, the module interface has a `.cppm` extension instead of `.ixx`, so the `/interface` switch is used to compile it as a module interface:

```bash
cl /c /std:c++latest /interface /TP my-module.cppm
```

The compiler derives the name for the generated `.ifc` file from the module interface name. For example, given a module name `MyModule` defined in `my-module.cppm`, the generated `.ifc` will be named `MyModule.ifc`.

This switch must be used in with the [`/TP` (Specify source file type)](tc-tp-tc-tp-specify-source-file-type.md) compiler flag.

**`/interface`** is available in Visual Studio 2019 version 16.10, or later.\
**`/interface`** requires [/std:c++20](std-specify-language-standard-version.md) or later.

## See also

[Overview of modules in C++](../../cpp/modules-cpp.md)\
[Using C++ Modules in MSVC from the Command Line](https://devblogs.microsoft.com/cppblog/using-cpp-modules-in-msvc-from-the-command-line-part-1/)