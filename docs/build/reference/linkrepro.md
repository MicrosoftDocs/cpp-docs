---
title: "/LINKREPRO (Link repro directory name)"
description: Linker or library tool option to set the directory for a link repro.
ms.date: "09/24/2019"
f1_keywords: ["/LINKREPRO"]
helpviewer_keywords: ["LINKREPRO linker option", "/LINKREPRO linker option", "-LINKREPRO linker option", "linker repro reporting"]
---
# /LINKREPRO (Link repro directory name)

Tells the linker or library tool to generate a link repro in a specified directory.

## Syntax

> **/LINKREPRO:**_directory-name_

### Arguments

**/LINKREPRO:**_directory-name_\
The user-specified directory to store the link repro in. Directory names that include spaces must be enclosed in double quotes.

## Remarks

The **/LINKREPRO** option is used to create a *link repro*. It's a set of build artifacts that allow Microsoft to reproduce a problem that occurs at link time, or during library operations. It's useful for problems such as a backend crash involving Link-Time Code Generation (LTCG), an LNK1000 linker error, or a linker crash. The tool produces a link repro when you specify the **/LINKREPRO** linker option, or when you set the `link_repro` environment variable in your command-line build environment. For more information, see the [Link repros](../../overview/how-to-report-a-problem-with-the-visual-cpp-toolset.md#link-repros) section of [How to report a problem with the Microsoft C++ toolset](../../overview/how-to-report-a-problem-with-the-visual-cpp-toolset.md).

Both the **/LINKREPRO** linker option and the `link_repro` environment variable require you to specify an output directory for the link repro. On the command line or in the IDE, specify the directory by using a **/LINKREPRO:**_directory-name_ option. The _directory-name_ you specify may be an absolute or relative path, but the directory must exist. The command-line option overrides any directory value set in the `link_repro` environment variable.

For information on how to limit link repro generation to a specific target file name, see the [/LINKREPROTARGET](linkreprotarget.md) option. This option can be used to specify a specific target to generate a link repro for. It's useful in complex builds that invoke the linker or library tool more than once.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. Enter the **/LINKREPRO:**_directory-name_ option in the **Additional Options** box. The _directory-name_ value you specify must exist. Choose **OK** to apply the change.

Once you've generated the link repro, open this property page again to remove the **/LINKREPRO** option from your builds.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)\
[/LINKREPROTARGET](linkreprotarget.md)
