---
title: "/ifcMap"
description: "Map named modules and header units to IFC files."
ms.date: 10/13/2023
author: "tylermsft"
ms.author: "twhitney"
f1_keywords: ["/ifcMap"]
helpviewer_keywords: ["/ifcMap", "Specify named module and header unit mappings to IFC files."]
---
# `/ifcMap`

This switch tells the compiler where to find the [TOML](https://toml.io/en/) file that maps named modules and header units to their respective IFC (.ifc) files.

## Syntax

> **`/ifcMap`** *`filename`*

## Remarks

The *`filename`* argument specifies a TOML (Tom's Obvious Minimal Language) file. The file can be relative to the compiler's working directory, or an absolute path.
Multiple `/ifcMap` arguments can be provided to the compiler.

The TOML file can contain a mix of `[[module]]` and `[[header-unit]]` references. Syntax errors or unrecognized table names result in compiler error `C7696` (TOML parse error).

### TOML for named modules

The format of the TOML file must adhere to the following specification for named modules:

```
# Using literal strings
[[module]]
name = 'M'
ifc = 'C:\modules\M.ifc'

# Using basic strings
[[module]]
name = "N"
ifc = "C:\\modules\\N.ifc"
```

This TOML file maps the named modules `'M'` and `'N'` to their respective IFC files. The equivalent [`/reference'](module-reference.md) is:

```cmd
/reference M=C:\modules\M.ifc /reference N=C:\modules\N.ifc
```

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

The equivalent [`/headerUnit`](headerunit.md) for the previous TOML is:

```cmd
/headerUnit:quote my-utility=C:\header-units\my-utility.h.ifc /headerUnit:angle vector=C:\header-units\vector.ifc /headerUnit:quote my-engine.h=C:\header-units\my-engine.h.ifc /headerUnit:angle algorithm=C:\header-units\algorithm.ifc
```

When `[[header-unit]]` is specified in the TOML, the compiler implicitly enables [`/Zc:preprocessor`](zc-preprocessor.md), just as it's implicitly enabled when [`/headerUnit`](headerunit.md) is used. For more information about the behavior of the 'angle' and 'quote' lookup methods, see the [/headerUnit Remarks](headerunit.md#remarks).

## See also

[Overview of modules in C++](../../cpp/modules-cpp.md)\
[Walkthrough: Build and import header units in Visual C++ projects](../walkthrough-header-units.md)\
[Using C++ Modules in MSVC from the Command Line](https://devblogs.microsoft.com/cppblog/using-cpp-modules-in-msvc-from-the-command-line-part-1/)