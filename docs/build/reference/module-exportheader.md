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

**`/exportHeader`** is available starting in Visual Studio 2019 version 16.10.

The **`/exportHeader`** compiler option requires you enable the [`/std:c++20`](std-specify-language-standard-version.md) or later compiler option (such as **`/std:c++latest`**).

One **`/exportHeader`** compiler option can specify as many header-name arguments as your build requires. You don't need to specify them separately.

The compiler implicitly enables the new preprocessor when this option is used. That is, [`/Zc:preprocessor`](zc-preprocessor.md) is added to the command line by the compiler if any form of `/exportHeader` is used on the command line. To opt out of the implicit `/Zc:preprocessor`, use: `/Zc:preprocessor-`

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

You normally shouldn't set this option in the Visual Studio development environment unless you use a different extension for your header files. By default, the build system applies this option to compiled files that have a *`.h`* extension, or no extension.

1. To apply the **`/exportHeader`** option to a file explicitly in the IDE, select the file in **Solution Explorer**. Right-click to open the context menu and select **Properties** to open the Property Pages dialog.

1. Set the **Configuration** dropdown to **All Configurations**. Set the **Platform** dropdown to **All Platforms**.

1. Open the **Configuration Properties** > **C/C++** > **Advanced** property page.

1. Use the dropdown control to modify the **Compile As** property to **Compile as C++ Header Unit (/exportHeader)**. Choose **OK** or **Apply** to save your changes.

## See also

[`/headerName` (Build a header unit from the specified header)](headername.md)\
[`/headerUnit` (Use header unit IFC)](headerunit.md)\
[`/reference` (Use named module IFC)](module-reference.md)\
[`/translateInclude` (Translate include directives into import directives)](translateinclude.md)
