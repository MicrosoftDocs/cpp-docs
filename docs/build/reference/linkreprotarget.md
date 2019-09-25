---
title: "/LINKREPROTARGET (Link repro file name)"
description: Linker option to set the directory for a link repro file.
ms.date: "09/24/2019"
f1_keywords: ["/LINKREPROTARGET"]
helpviewer_keywords: ["LINKREPROTARGET linker option", "/LINKREPROTARGET linker option", "-LINKREPROTARGET linker option", "linker repro reporting"]
---
# /LINKREPROTARGET (Link repro file name)

Tells the linker to generate a link repro that has a specified file name.

## Syntax

> **/LINKREPROTARGET:**_file-name_

### Arguments

**/LINKREPROTARGET:**_file-name_\
The user-specified file name to store the link repro in. File names that include spaces must be enclosed in double quotes.

## Remarks

The **/LINKREPROTARGET** linker option is used to specify a file name for a *link repro*. A link repro is a set of build artifacts that allow Microsoft to reproduce a problem that occurs at link time. The linker produces a link repro when you specify the [/LINKREPRO](linkrepro.md) linker option, or when you set the `link_repro` environment variable in your command-line build environment. The **/LINKREPROTARGET** linker option is useful in complex builds that invoke the linker more than once. It lets you specify a different name for each link repro.

For more information about how and when to create a link repro, see the [Link repros](../../overview/how-to-report-a-problem-with-the-visual-cpp-toolset.md#link-repros) section of [How to report a problem with the Microsoft C++ toolset](../../overview/how-to-report-a-problem-with-the-visual-cpp-toolset.md).

To specify a **/LINKREPROTARGET** linker option, the **/LINKREPRO** and  [/OUT](out-output-file-name.md) linker options must also be set.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. Enter the **/LINKREPROTARGET:**_file-name_ option in the **Additional Options** box. Choose **OK** to apply the change.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC Linker Options](linker-options.md)\
[/LINKREPRO](linkrepro.md)
