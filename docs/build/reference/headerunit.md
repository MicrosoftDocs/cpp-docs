---
title: "/headerUnit (Use header unit IFC)"
description: "Use the /headerUnit compiler option to associate a header file with the header unit to import in its place."
ms.date: 02/01/2022
f1_keywords: ["/headerUnit"]
helpviewer_keywords: ["/headerUnit", "Use header unit IFC"]
author: "tylermsft"
ms.author: "twhitney"
---
# `/headerUnit` (Use header unit IFC)

Imports a header unit. Tells the compiler where to find the *`.ifc`* file (the binary representation of the header unit) for the specified header.

## Syntax

> **`/headerUnit`** *`header-filename`*=*`ifc-filename`*\
> **`/headerUnit:quote`** \[*`header-filename`*=*`ifc-filename`*\]\
> **`/headerUnit:angle`** \[*`header-filename`*=*`ifc-filename`*\]

### Arguments

*`header-filename`*\
During `import header-name;` the compiler resolves `header-name` to a file on disk. Use *`header-filename`* to specify that file. Once matched, the compiler opens the corresponding IFC named by *`ifc-filename`* for import.

*`ifc-filename`*\
The name of a file that contains compiled header unit information. To import more than one header unit, add a separate **`/headerUnit`** option for each file.

## Remarks

The **`/headerUnit`** compiler option requires [`/std:c++20`](std-specify-language-standard-version.md) or later.

The **`/headerUnit`** compiler option is available in Visual Studio 2019 version 16.10 or later.

When the compiler comes across `import "file";` or `import <file>;` this compiler option helps the compiler find the compiled header unit (*`.ifc`*) for the specified header file. The path to this file can be expressed in these ways:

- **`/headerUnit`** looks up the compiled header unit in the current directory, or at the location specified by *`ifc-filename`*.

- **`/headerUnit:quote`** looks up the compiled header unit file using the same rules as `#include "file"`.

- **`/headerUnit:angle`** looks up the compiled header unit file using the same rules as `#include <file>`.

The compiler can't map a single *`header-name`* to multiple *`.ifc`* files. Mapping multiple *`header-name`* arguments to a single *`.ifc`* is possible, but it isn't recommended. The contents of the *`.ifc`* are imported as if it was only the header specified by *`header-name`*.

The compiler implicitly enables the new preprocessor when this option is used. If any form of `/headerUnit` is specified on the command line, then [`/Zc:preprocessor`](zc-preprocessor.md) is added to the command line by the compiler. To opt out of the implicit `/Zc:preprocessor`, specify: `/Zc:preprocessor-`

If you disable the new preprocessor, but a file you compile imports a header unit, the compiler will report an error.

### Examples

Given a project that references two header files and their header units as listed in this table:

| Header file | IFC file |
|--|--|
| *`C:\utils\util.h`* | *`C:\util.h.ifc`* |
| *`C:\app\app.h`* | *`C:\app\app.h.ifc`* |

The compiler options to reference the header units for these particular header files would look like this:

```CMD
cl ... /std:c++latest /headerUnit C:\utils\util.h=C:\util.h.ifc /headerUnit:quote app.h=app.h.ifc
```

### To set this compiler option in the Visual Studio development environment

You normally shouldn't set this in the Visual Studio development environment. It's set by the build system.

## See also

[`/exportHeader` (Create header units)](module-exportheader.md)\
[`/headerName` (Create a header unit from the specified header)](headername.md)\
[`/reference` (Use named module IFC)](module-reference.md)\
[`/translateInclude` (Translate include directives into import directives)](translateinclude.md)
