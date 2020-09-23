---
title: "/module:reference (Use named module IFC)"
description: "Use the /module:reference compiler option to create module header units for the header-name or include files specified."
ms.date: 09/13/2020
f1_keywords: ["/module:reference"]
helpviewer_keywords: ["/module:reference", "Use named module IFC"]
---
# `/module:reference` (Use named module IFC)

Tells the compiler to use an existing IFC (*`.ifc`*) for the current compilation.

## Syntax

> **`/module:reference`** *`module-name=filename`*\
> **`/module:reference`** *`filename`*

### Arguments

*`filename`*\
The name of a file that contains *IFC data*, prebuilt module information. To import more than one module, include a separate **`/module:reference`** option for each file.

*`module-name`*\
A valid name of an exported primary module interface unit name or full module partition name.

## Remarks

The **`/module:reference`** compiler option requires you enable experimental modules support by use of the [`/experimental:module`](experimental-module.md) compiler option, along with the [/std:c++latest](std-specify-language-standard-version.md) option. This option is available starting in Visual Studio 2019 version 16.8.

If the **`/module:reference`** argument is a *`filename`* without a *`module-name`*, the file gets opened at runtime to verify the *`filename`* argument names a specific import. It can result in slower runtime performance in scenarios that have many **`/module:reference`** arguments.

The *`module-name`* must be a valid primary module interface unit name or full module partition name. Examples of primary module interface names include:

- `M`
- `M.N.O`
- `MyModule`
- `my_module`

Examples of full module partition names include:

- `M:P`
- `M.N.O:P.Q`
- `MyModule:Algorithms`
- `my_module:algorithms`

If a module reference is created using a *`module-name`*, other modules on the command line don't get searched if the compiler encounters an import of that name. For example, given this command line:

```cmd
cl ... /experimental:module /module:reference m.ifc /module:reference m=n.ifc
```

In the case above, if the compiler sees `import m;` then *`m.ifc`* doesn't get searched.

### Examples

Given three modules as listed in this table:

| Module | IFC file |
|--|--|
| *`M`* | *`m.ifc`* |
| *`M:Part1`* | *`m-part1.ifc`* |
| *`Core.Networking`* | *`Networking.ifc`* |

The reference options using a *`filename`* argument could look like:

```cmd
cl ... /experimental:module /module:reference m.ifc /module:reference m-part.ifc /module:reference Networking.ifc
```

The reference options using *`module-name=filename`* could look like:

```cmd
cl ... /experimental:module /module:reference m=m.ifc /module:reference M:Part1=m-part.ifc /module:reference Core.Networking=Networking.ifc
```

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Set the **Configuration** drop-down to **All Configurations**.

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to add the *`/module:reference`* option and its arguments. Then, choose **OK** or **Apply** to save your changes.

## See also

[`/experimental:module` (Enable module support)](experimental-module.md)\
[`/headerUnit` (Use header unit IFC)](headerunit.md)\
[`/module:exportHeader` (Create header units)](module-exportheader.md)\
[`/translateInclude` (Translate include directives into import directives)](translateinclude.md)
