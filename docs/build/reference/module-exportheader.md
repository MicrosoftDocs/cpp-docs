---
title: "/exportHeader (Create header units)"
description: "Use the /exportHeader compiler option to create module header units for the header-name or include files specified."
ms.date: 05/18/2020
author: "tylermsft"
ms.author: "twhitney"
f1_keywords: ["/exportHeader"]
helpviewer_keywords: ["/exportHeader", "Create header units"]
---
# `/exportHeader` (Create header units)

Tells the compiler to create the header units specified by the input arguments. The compiler generates header units as IFC (*`.ifc`*) files.

## Syntax

> **`/exportHeader /headerName:angle`** *`header-name`*\
> **`/exportHeader /headerName:quote`** *`header-name`*\
> **`/exportHeader`** *`full path to header file`*

### Arguments

The argument to `/exportHeader` is a `/headerName` command-line option that specifies the name,  *`header-name`*, of the header file to export.  

## Remarks

**`/exportHeader`** is available starting in Visual Studio 2019 version 16.10 Preview 2.

The **`/exportHeader`** compiler option requires you enable the [/std:c++latest](std-specify-language-standard-version.md) option. 

One **`/exportHeader`** compiler option can specify as many header-name arguments as your build requires. You don't need to specify them separately.

The compiler implicitly enables the new preprocessor when this switch is used. That is, [`/Zc:preprocessor`](zc-preprocessor.md) is added to the command line by the compiler if any form of `/exportHeader` is used on the command line. To opt out of the implicit `/Zc:preprocessor`, use: `/Zc:preprocessor-`

By default, the compiler doesn't produce an object file when a header unit is compiled. To produce an object file, specify the **`/Fo`** compiler option. For more information, see [`/Fo` (Object File Name)](fo-object-file-name.md).

You may find it helpful to use the complementary option **`/showResolvedHeader`**. The **`/showResolvedHeader`** option prints an absolute path to the file the *`header-name`* argument resolves to.

**`/exportHeader`** can handle multiple inputs at once, even under **`/MP`**. We recommended you use **`/ifcOutput  <directory>`** to create a separate *`.ifc`* file for each compilation.

### Examples

To build a header unit such as `<vector>` might look like:

```cmd
cl . . . /std:c++latest /exportHeader /headerName:angle vector
```

Building a local project header such as `"utils/util.h"` might look like:

```cmd
cl . . . /std:c++latest /exportHeader /headerName:quote util/util.h
```

### To set this compiler option in the Visual Studio development environment

You normally shouldn't set this in the Visual Studio development environment. It is set by the build system.

## See also

[`/headerName (Build a header unit from the specified header)`](headername.md) \
[`/headerUnit` (Use header unit IFC)](headerunit.md)\
[`/reference` (Use named module IFC)](module-reference.md)\
[`/translateInclude` (Translate include directives into import directives)](translateinclude.md)
