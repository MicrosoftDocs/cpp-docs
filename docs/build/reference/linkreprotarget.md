---
title: "/LINKREPROTARGET (Link repro file name)"
description: Linker or library tool option to set a target file name for a link repro.
ms.date: "09/24/2019"
f1_keywords: ["/LINKREPROTARGET"]
helpviewer_keywords: ["LINKREPROTARGET linker option", "/LINKREPROTARGET linker option", "-LINKREPROTARGET linker option", "linker repro reporting"]
---
# /LINKREPROTARGET (Link repro file name)

Tells the linker or library tool to generate a link repro only when the target has the specified file name.

## Syntax

> **/LINKREPROTARGET:**_file-name_

### Arguments

**/LINKREPROTARGET:**_file-name_\
The target file name to filter on. A link repro is only generated when the named file is the output target. File names that include spaces must be enclosed in double quotes. The file name should include the base name and the extension, but not the path.

## Remarks

The **/LINKREPROTARGET** option is used to specify a target file name to generate a *link repro* for. A link repro is a set of build artifacts that allow Microsoft to reproduce a problem that occurs at link time, or during library operations. The linker or library tool produces a link repro when you specify the [/LINKREPRO](linkrepro.md) option, or when you set the `link_repro` environment variable in your command-line build environment.

The **/LINKREPROTARGET** option is useful in complex builds that invoke the linker or library tool more than once. It lets you specify a specific target for the link repro, such as *problem.dll*. It lets you generate the link repro only when the tool produces a specific file.

For more information about how and when to create a link repro, see the [Link repros](../../overview/how-to-report-a-problem-with-the-visual-cpp-toolset.md#link-repros) section of [How to report a problem with the Microsoft C++ toolset](../../overview/how-to-report-a-problem-with-the-visual-cpp-toolset.md).

The **/LINKREPRO** and  [/OUT](out-output-file-name.md) options must be set for the **/LINKREPROTARGET** option to have any effect.

**/LINKREPROTARGET** is available starting in Visual Studio 2019 version 16.1.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. Enter the **/LINKREPROTARGET:**_file-name_ option in the **Additional Options** box. Choose **OK** to apply the change.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)\
[/LINKREPRO](linkrepro.md)
