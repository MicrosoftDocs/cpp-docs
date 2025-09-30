---
title: "/ifcMap"
description: "Map named modules and header units to IFC files."
ms.date: 10/16/2023
author: "tylermsft"
ms.author: "twhitney"
f1_keywords: ["/ifcMap"]
helpviewer_keywords: ["/ifcMap", "Specify named module and header unit mappings to IFC files."]
---
# `/ifcMap`

This switch tells the compiler where to find the IFC reference map file, which maps references to named modules and header units to their corresponding IFC (`.ifc`) files.

## Syntax

> **`/ifcMap`** *`filename`*

## Remarks

The *`filename`* argument specifies the IFC reference map file. It can be relative to the compiler's working directory, or an absolute path.

You can provide multiple `/ifcMap` arguments to the compiler.

The IFC reference map file format is a subset of the [TOML](https://toml.io/en/) file format. The IFC reference map file can contain a mix of `[[module]]` and `[[header-unit]]` references.

Syntax errors or unrecognized table names result in compiler error `C7696` (TOML parse error).

### Map named modules

The format of the IFC reference map file for named modules is:

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

This IFC reference map file maps the named modules `'M'` and `'N'` to their respective IFC files. The equivalent [`/reference`](module-reference.md) is:

```cmd
/reference M=C:\modules\M.ifc /reference N=C:\modules\N.ifc
```

For more information about what types of module names are valid for the `name` field, see [`/reference remarks`](module-reference.md#remarks).

### Map header units

The format of the IFC reference map file for header units is:

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

This IFC reference map file maps `"my-utility.h"` to `C:\header-units\my-utility.h.ifc`, and `<vector>` to `C:\header-units\vector.ifc`, and so on. The equivalent [`/headerUnit`](headerunit.md) is:

```cmd
/headerUnit:quote my-utility=C:\header-units\my-utility.h.ifc /headerUnit:angle vector=C:\header-units\vector.ifc /headerUnit:quote my-engine.h=C:\header-units\my-engine.h.ifc /headerUnit:angle algorithm=C:\header-units\algorithm.ifc
```

When `[[header-unit]]` is specified in an IFC reference map file, the compiler implicitly enables [`/Zc:preprocessor`](zc-preprocessor.md), just as it's implicitly enabled when [`/headerUnit`](headerunit.md) is used. For more information about the behavior of the `angle` and `quote` lookup methods, see [/headerUnit remarks](headerunit.md#remarks).

## See also

[Overview of modules in C++](../../cpp/modules-cpp.md)\
[Walkthrough: Build and import header units in Visual C++ projects](../walkthrough-header-units.md)\
[Using C++ Modules in MSVC from the Command Line](https://devblogs.microsoft.com/cppblog/using-cpp-modules-in-msvc-from-the-command-line-part-1/)