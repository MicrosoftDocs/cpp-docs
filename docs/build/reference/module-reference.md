---
title: "/reference (Use named module IFC)"
description: "Use the /reference compiler option to create module header units for the header-name or include files specified."
ms.date: 02/17/2022
f1_keywords: ["/reference", "VC.Project.VCCLCompilerTool.AdditionalModuleDependencies"]
helpviewer_keywords: ["/reference", "Use named module IFC"]
---
# `/reference` (Use named module IFC)

Tells the compiler to use an existing IFC (*`.ifc`*) for the current compilation.

## Syntax

> **`/reference`** *`module-name=filename`*\
> **`/reference`** *`filename`*

### Arguments

*`filename`*\
The name of a file that contains *IFC data*, which is prebuilt module information. To import more than one module, include a separate **`/reference`** option for each file.

*`module-name`*\
A valid name of an exported primary module interface unit name or full module partition name.

## Remarks

In most cases, you won't need to specify this switch because the project system discovers module dependencies within a solution automatically.

The **`/reference`** compiler option requires you enable the [`/std:c++20`](std-specify-language-standard-version.md) or later compiler option (such as **`/std:c++latest`**). The **`/reference`** option is available starting in Visual Studio 2019 version 16.10.

If the **`/reference`** argument is a *`filename`* without a *`module-name`*, the file gets opened at runtime to verify the *`filename`* argument names a specific import. It can result in slower runtime performance in scenarios that have many **`/reference`** arguments.

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
cl ... /std:c++latest /reference m.ifc /reference m=n.ifc
```

In the case above, if the compiler sees `import m;` then *`m.ifc`* doesn't get searched.

### Examples

Given three modules as listed in this table:

| Module | IFC file |
|--|--|
| *`M`* | *`m.ifc`* |
| *`M:Part1`* | *`m-part1.ifc`* |
| *`Core.Networking`* | *`Networking.ifc`* |

The reference options using a *`filename`* argument would be like this:

```cmd
cl ... /std:c++latest /reference m.ifc /reference m-part.ifc /reference Networking.ifc
```

The reference options using *`module-name=filename`* would be like this:

```cmd
cl ... /std:c++latest /reference m=m.ifc /reference M:Part1=m-part.ifc /reference Core.Networking=Networking.ifc
```

## See also

[`/scanDependencies` (List module dependencies in standard form)](scandependencies.md)\
[`/sourceDependencies:directives` (List module and header unit dependencies)](sourcedependencies-directives.md)\
[`/headerUnit` (Use header unit IFC)](headerunit.md)\
[`/exportHeader` (Create header units)](module-exportheader.md)
