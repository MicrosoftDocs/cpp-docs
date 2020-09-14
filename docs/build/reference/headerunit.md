---
title: "/headerUnit (Use header unit IFC)"
description: "Use the /headerUnit compiler option to specify an existing IFC header unit to import in the current compilation."
ms.date: 09/13/2020
f1_keywords: ["/headerUnit"]
helpviewer_keywords: ["/headerUnit", "Use header unit IFC"]
---
# `/headerUnit` (Use header unit IFC)

Tells the compiler to translate `#include` directives for an importable header-name into an `import header-name;` directive, rather than use textual inclusion.

## Syntax

> **`/headerUnit`** *`header-filename`*=*`ifc-filename`*

### Arguments

*`header-filename`*\
The name of a file that the compiler resolves a `header-name` to. During `import header-name ;` the compiler resolves `header-name` to some file on disk. Use *`header-filename`* to specify that file. Once matched, the compiler opens the corresponding IFC named by *`ifc-filename`* for import.

*`ifc-filename`*\
The name of a file that contains *IFC data*, prebuilt module information. To import more than one header unit, include a separate **`/headerUnit`** option for each file.

## Remarks

The **`/headerUnit`** compiler option requires you enable experimental modules support by use of the [`/experimental:module`](experimental-module.md) compiler option, along with the [/std:c++latest](std-specify-language-standard-version.md) option. This option is available starting in Visual Studio 2019 version 16.8.

The compiler can't map a single *`header-name`* to multiple IFC files. While mapping multiple *`header-name`* arguments to a single IFC is possible, we don't recommend it. The contents of the IFC get imported as if it was only the header specified by *`header-name`*.

### Examples

Given a project that references two header files and their header units, listed in this table:

| Header file | IFC file |
|--|--|
| *`C:\utils\util.h`* | *`C:\util.h.ifc`* |
| *`C:\app\app.h`* | *`C:\app.h.ifc`* |

The compiler options to reference the header units for these particular header files might look like this example:

```CMD
>cl ... /experimental:module /translateInclude /headerUnit C:\utils\util.h=C:\util.h.ifc /headerUnit C:\app\app.h=C:\app.h.ifc
```

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Set the **Configuration** drop-down to **All Configurations**.

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to add the *`/headerUnit`* options and arguments. Then, choose **OK** or **Apply** to save your changes.

## See also

[`/experimental:module` (Enable module support)](experimental-module.md)\
[`/module:exportHeader` (Create header units)](module-exportheader.md)\
[`/module:reference` (Use named module IFC)](module-reference.md)\
[`/translateInclude` (Translate include directives into import directives)](translateinclude.md)\
