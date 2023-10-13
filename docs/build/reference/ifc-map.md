---
title: "/ifcMap"
description: "Map named modules and header units to IFC files."
ms.date: 10/13/2023
author: "tylermsft"
ms.author: "twhitney"
f1_keywords: ["/ifcMap", "VC.Project.VCCLCompilerTool.ifcMap"]
helpviewer_keywords: ["/ifcMap", "Specify named module and header unit mappings to IFC files."]
---
# `/ifcMap`

This switch tells the compiler where to find the [TOML](https://toml.io/en/) file that maps named modules and header units to their respective IFC (.ifc) files.

## Syntax

> **`/ifcMap`** *`filename`*

## Remarks

The *`filename`* argument specifies a TOML file (Tom's Obvious Minimal Language). The file can be relative to the working directory of the compiler or an absolute path.
Multiple `/ifcMap` arguments may be provided to the compiler.

The TOML file may contain a mix of `[[module]]` and `[[header-unit]]` references. Syntax errors or unrecognized table names result in compiler error `C7696` (TOML parse error).

### TOML for named modules

The format of the TOML file must adhere to the following specification for named modules:

```cpp
# Using literal strings
[[module]]
name = 'M'
ifc = 'C:\modules\M.ifc'

# Using basic strings
[[module]]
name = "N"
ifc = "C:\\modules\\N.ifc"
```

This TOML file maps the named modules 'M' and 'N' to their respective IFC files. The equivalent [`/reference'](module-reference.md) is:

```cmd
/reference M=C:\modules\M.ifc /reference N=C:\modules\N.ifc
```

When `[[module]]` is specified in the TOML, the compiler implicitly enables [`/Zc:preprocessor`](zc-preprocessor.md) similarly to how it is implicitly enabled when [`/module`](module.md) is used. For more information about the behavior of the 'angle' and 'quote' lookup methods, see the [/module Remarks](module.md#remarks).

For more information about what types of module names are valid for the `name` field, see [`/reference remarks`](module-reference.md#remarks).

### TOML for header units

The format of the TOML for header units is:

```
# Using literal strings
[[header-unit]]
name = ['quote', 'my-utility.h']
ifc = 'C:\header-units\my-utility.h.ifc'

[[header-unit]]
name = ['angle', 'vector']
ifc = 'C:\header-units\vector.ifc'

# Using basic strings
[[header-unit]]
name = ["quote", "my-engine.h"]
ifc = "C:\\header-units\\my-engine.h.ifc"

[[header-unit]]
name = ["angle", "algorithm"]
ifc = "C:\\header-units\\algorithm.ifc"
```

When `[[header-unit]]` is specified in the TOML, the compiler implicitly enables [`/Zc:preprocessor`](zc-preprocessor.md) like how it is implicitly enabled when [`/headerUnit`](headerunit.md) is used. For more information about the behavior of the 'angle' and 'quote' lookup methods, see the [/headerUnit Remarks](headerunit.md#remarks).

### To set this compiler option in the Visual Studio development environment

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In the **Additional options** box, add `/ifcMap tomlfile.toml`.

## See also

[Overview of modules in C++](../../cpp/modules-cpp.md)\
[Walkthrough: Build and import header units in Visual C++ projects](../../cpp/build/walkthrough-build-and-import-header-units-in-visual-cpp-projects.md)\
[Using C++ Modules in MSVC from the Command Line](https://devblogs.microsoft.com/cppblog/using-cpp-modules-in-msvc-from-the-command-line-part-1/)