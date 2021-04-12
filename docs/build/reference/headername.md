---
title: "/headerName (Build a header unit from the specified header)"
description: "Use the /headerName compiler option to establish a mapping between a header file and the header unit to build."
ms.date: 04/13/2021
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

The **`/headerName`** compiler option is available starting in Visual Studio 2019 version 16.10 preview 2.

The **`/headerName`** compiler option, in all its forms, requires the [/std:c++latest](std-specify-language-standard-version.md) option.\
If you specify **`/headerName:{quote,angle}`**, you must also specify [`/exportHeader`](module-exportheader.md).

**`/headerName:quote`** looks up *`header-filename`* using the same rules as `#include "header-name"` and builds it as a header unit (*`.ifc`* file).\
**`/headerName:angle`** looks up *`header-filename`* using the same rules as `#include <header-name>` and builds it as a header unit (*`.ifc`* file).

### Examples

Given a project that references a header file it defines called `m.h`, the compiler option to compile it into a header unit looks similar to this:

```Bash
$ cl /std:c++latest /exportHeader /headerName:quote m.h /Fom.h.obj
```

The `/headerName:{quote,angle}`switch acts like a flag and does not explicitly need an argument. The following examples are valid:

```Bash
$ cl /std:c++latest /exportHeader /headerName:angle /MP /Fo.\ vector iostream algorithm
$ cl /std:c++latest /exportHeader /headerName:quote /MP /Fo.\ my-utilities.h a/b/my-core.h
```

You can specify multiple `/headerName` switches on the same command line, and every argument after that switch will be processed with the specified *`header-filename`* lookup rules. The following example processes all the headers as the previous two command line examples in the same way. It looks up the headers using the lookup rules applied as if they had been specified as: `#include <vector>`, `#include "my-utilties.h"`, and `#include "a/b/my-core.h"`:

```bash
$ cl /std:c++latest /exportHeader /headerName:angle /MP /Fo.\ vector iostream algorithm /headerName:quote my-utilities.h a/b/my-core.h
```

### To set this compiler option in the Visual Studio development environment

> [!NOTE]
> Users don't typically set this command line switch. It is set by the build system.

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Set the **Configuration** drop-down to **All Configurations**.

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to add the *`/headerName`* options and arguments. Then, choose **OK** or **Apply** to save your changes.

## See also

[`/exportHeader` (Create header units)](module-exportheader.md)\
[`/headerUnit` (Create header units)](headerunit.md)\
[`/reference` (Use named module IFC)](module-reference.md)\
[`/translateInclude` (Translate include directives into import directives)](translateinclude.md)
