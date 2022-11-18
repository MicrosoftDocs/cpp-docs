---
title: "/headerName (Build a header unit from the specified header)"
description: "Use the /headerName compiler option to establish a mapping between a header file and the header unit to build."
ms.date: 11/16/2022
author: "tylermsft"
ms.author: "twhitney"
f1_keywords: ["/headerName"]
helpviewer_keywords: ["/headerName", "Use header unit IFC"]
---
# `/headerName` (Build a header unit from the specified header)

Build the specified header file into a header unit (*`.ifc`* file).

## Syntax

> **`/headerName:quote`** `header-filename`\
> **`/headerName:angle`** `header-filename`

### Arguments

*`header-filename`*\
The name of a header file that the compiler should compile into a header unit (*`.ifc`* file).

## Remarks

The **`/headerName:quote`** and **`/headerName:angle`** compiler options are available starting in Visual Studio 2019 version 16.10.

The **`/headerName`** compiler options, in all their forms, require the [`/std:c++20`](std-specify-language-standard-version.md) or later compiler option (such as **`/std:c++latest`**).\
If you specify a **`/headerName`** option, you must also specify [`/exportHeader`](module-exportheader.md).

- **`/headerName:quote`** looks up *`header-filename`* using the same rules as `#include "header-filename"` and builds it as a header unit (*`.ifc`* file).
- **`/headerName:angle`** looks up *`header-filename`* using the same rules as `#include <header-filename>` and builds it as a header unit (*`.ifc`* file).

For more information about the path searching rules for included files in quotes or angle brackets, see [`#include` directive](../../preprocessor/hash-include-directive-c-cpp.md).

### Examples

Given a project that references a header file it defines called *`m.h`*, the compiler option to compile it into a header unit looks similar to this example:

```bash
cl /std:c++latest /exportHeader /headerName:quote m.h /Fom.h.obj
```

The **`/headerName:quote`** and **`/headerName:angle`** options act like a flag and don't need an argument. The following examples are valid:

```bash
cl /std:c++latest /exportHeader /headerName:angle /MP /Fo.\ vector iostream algorithm
cl /std:c++latest /exportHeader /headerName:quote /MP /Fo.\ my-utilities.h a/b/my-core.h
```

You can specify multiple **`/headerName`** options on the same command line. Every argument after a **`/headerName`** option is processed with the specified include file lookup rules for quotes or angle brackets until the next **`/headerName`** option. The following example processes all the headers as the previous two command line examples in the same way as before. It looks up the headers using the lookup rules applied as if they had been specified as: `#include <vector>`, `#include <iostream>`, `#include <algorithm>`, `#include "my-utilties.h"`, and `#include "a/b/my-core.h"`:

```bash
cl /std:c++latest /exportHeader /headerName:angle /MP /Fo.\ vector iostream algorithm /headerName:quote my-utilities.h a/b/my-core.h
```

### To set this compiler option in the Visual Studio development environment

> [!NOTE]
> You normally shouldn't set this option in the Visual Studio development environment. It's set by the build system.

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Set the **Configuration** drop-down to **All Configurations**. Set the **Platform** drop-down to **All Platforms**.

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to add the *`/headerName:quote`* or *`/headerName:angle`* options and the header filenames the options apply to. Then, choose **OK** or **Apply** to save your changes.

## See also

[`/exportHeader` (Create header units)](module-exportheader.md)\
[`/headerUnit` (Use header unit IFC)](headerunit.md)\
[`/reference` (Use named module IFC)](module-reference.md)\
[`/translateInclude` (Translate include directives into import directives)](translateinclude.md)
