---
title: "/exportHeader (Create header units)"
description: "Use the /exportHeader compiler option to create module header units for the header-name or include files specified."
ms.date: 04/13/2020
f1_keywords: ["/exportHeader"]
helpviewer_keywords: ["/exportHeader", "Create header units"]
---
# `/exportHeader` (Create header units)

Tells the compiler to create the header units specified by the input arguments. The compiler generates header units as IFC (*`.ifc`*) files.

## Syntax

> **`/exportHeader`** *`header-name`* \[...]\
> **`/exportHeader`** *`filename`* \[...]
> **`/exportHeader /headerName:angle`** *`filename`*
> **`/exportHeader /headerName:quote`** *`filename`*


### Arguments

*`header-name`*\
The header file to export. Must take the same form as an argument to an `#include` directive.

*`filename`*\
The relative or absolute path to the header file to create a header unit from.

## Remarks

The **`/exportHeader`** compiler option requires you enable the [/std:c++latest](std-specify-language-standard-version.md) option. **`/exportHeader`** is available starting in Visual Studio 2019 version 16.10 Preview 2.

One **`/exportHeader`** compiler option can specify as many header-name arguments as your build requires. You don't need to specify them separately.

By default, the compiler doesn't produce an object file when a header unit is compiled. To produce an object file, specify the **`/Fo`** compiler option. For more information, see [`/Fo` (Object File Name)](fo-object-file-name.md).

The compiler resolves a *`header-name`* based on the include directory search order, including any you specify. For more information, see [`/I` (Additional include directories)](i-additional-include-directories.md).

The argument *`header-name`* must be specified the same way it would appear in source. The argument is sensitive to quoting rules and to `<` and `>` operators on the command line. The properly escaped command to build a header unit such as `<vector>` using the VS2019 command prompt might look like:

```cmd
cl ... /std:c++latest /exportHeader "<vector>"
```

Building a local project header such as `"utils/util.h"` might look like:

```cmd
cl ... /std:c++latest /exportHeader """util/util.h"""
```

The quoting rules in other command-line processors may differ.

When using the *`header-name`* form of **`/exportHeader`**, you may find it's helpful to use the complementary option **`/module:showResolvedHeader`**. The **`/module:showResolvedHeader`** option prints an absolute path to the file the *`header-name`* argument resolves to.

**`/exportHeader`** can handle multiple inputs at once even under **`/MP`**. We recommended you use **`/module:output <directory>`** to create a separate IFC file for each compilation.

### Examples

Given headers `"C:\util\util.h"` and `"C:\app\app.h"`, you can export them as *`header-name`* arguments by using this command:

```cmd
cl /std:c++latest /IC:\ /exportHeader """util/util.h""" """app/app.h""" /FoC:\obj
```

You can export them as *`filename`* arguments by using this command:

```cmd
cl /std:c++latest /IC:\ /exportHeader C:\util\util.h C:\app\app.h /FoC:\obj
```

### To set this compiler option in the Visual Studio development environment

> [!NOTE]
> This command line switch is typically set by the build system.

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Set the **Configuration** drop-down to **All Configurations**.

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to add the *`/exportHeader`* option and any arguments. Then, choose **OK** or **Apply** to save your changes.

## See also

[`/headerUnit` (Use header unit IFC)](headerunit.md)\
[`/module:reference` (Use named module IFC)](module-reference.md)\
[`/translateInclude` (Translate include directives into import directives)](translateinclude.md)
