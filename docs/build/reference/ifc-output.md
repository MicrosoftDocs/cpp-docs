---
title: "/ifcOutput"
description: "Specify output file or directory for `.ifc` files."
ms.date: 11/21/2022
author: "tylermsft"
ms.author: "twhitney"
f1_keywords: ["/ifcOutput", "VC.Project.VCCLCompilerTool.ifcOutput"]
helpviewer_keywords: ["/ifcOutput", "Specify where the compiled `.ifc` should go"]
---
# `/ifcOutput`

This switch tells the compiler where to output built *`.ifc`* files. If the destination is a directory, then the compiler generates the name of each `.ifc` file based on the interface name or the header unit name.

## Syntax

> **`/ifcOutput`** *`filename`*\
> **`/ifcOutput`** *`directory\`*

## Remarks

By default, the compiler derives the name for each generated *`.ifc`* file from the module interface name. For example, given a module name `MyModule`, the generated *`.ifc`* will be named *`MyModule.ifc`*, unless you override the name with the `/ifcOutput` switch.

Use this switch to specify an alternative *`.ifc`* filename or directory. If you want to use the default built *`.ifc`* filenames, but specify a directory where they should be built, ensure that you add a trailing backslash (`\`) to the directory name.

When you're building multiple *`.ifc`* files, only use the directory form of the `/ifcOutput` switch. If you provide multiple `/ifcOutput` switches, the compiler only uses the last one.

If you build with the [`/MP` (Build with multiple processes)](mp-build-with-multiple-processes.md) switch, we recommend that you use the directory form of the `/ifcOutput` switch if you have multiple input module files.

In the following example, the *`.ifc`* file for module `m` defined in *`m.ixx`* is built as `c:\example\m.ifc`.

```bash
cl ... /c /std:c++latest m.ixx /ifcOutput c:\example\
```

In the following example, the built *`.ifc`* file for module `m` defined in *`m.ixx`** is built as `c:\example\MyModule.ifc`:

```bash
cl ... /c /std:c++latest m.ixx /ifcOutput c:\example\MyModule.ifc
```

### To set this compiler option in the Visual Studio development environment

1. To apply the **`/ifcOutput`** option to one file in the IDE, select the file in **Solution Explorer**. Right-click to open the context menu and select **Properties** to open the **Property Pages** dialog.

1. Set the **Configuration** dropdown to **All Configurations**. Set the **Platform** dropdown to **All Platforms**.

1. Open the **Configuration Properties** > **C/C++** > **Output Files** property page.

1. Use the dropdown control to modify the **Module Output File Name** property to a directory name (ending in `\`) or an alternate file name. Or you can specify a directory + file name, for example, `c:\example\mymodule.ifc`. Choose **OK** or **Apply** to save your changes.

Alternatively, you can specify the `/ifcOutput` switch with a right-click on the project name in the **Solution Explorer** > **Configuration Properties** > **C/C++** > **Command Line**.

## See also

[Overview of modules in C++](../../cpp/modules-cpp.md)\
[Using C++ Modules in MSVC from the Command Line](https://devblogs.microsoft.com/cppblog/using-cpp-modules-in-msvc-from-the-command-line-part-1/)