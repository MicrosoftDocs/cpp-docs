---
title: "/SPD (Specify Sample Profile Database)"
description: "Learn more about: /SPD (Specify Sample Profile Database)"
ms.date: 05/05/2026
ai-usage: ai-assisted
helpviewer_keywords: ["/SPD linker option", "-SPD linker option", "sample profile-guided optimization, /SPD"]
---
# /SPD (Specify Sample Profile Database)

Specifies the name and location of the Sample Profile Database (SPD) file used by the Sample Profile-Guided Optimization (SPGO) workflow.

## Syntax

> **/SPD:**_filename_

## Argument

`filename`\
Specifies the name of the `.spd` file. When expanded, the fully qualified path must not exceed `MAX_PATH` (260 characters).

## Remarks

When you build with [`/SPGO`](spgo-enable-sample-profile-guided-optimization.md), the linker creates an empty SPD file alongside the output binary. By default, the SPD file uses the same base name as the output file and is created in the directory where you invoked the link. Use `/SPD` to specify a different name or path.

When linking with [`/SPDIN`](spdin-use-sample-profile-database.md), use `/SPDIN` to specify the input SPD file and `/SPD` to specify the output SPD file.

For more information about the SPGO workflow, see [Tutorial: Use Sample Profile-Guided Optimization (SPGO) to improve performance](../sample-profile-guided-optimization.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).
1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.
1. Add `/SPD:filename` to the **Additional Options** box. Choose **OK** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC Linker Options](linker-options.md)\
[/SPDEMBED (Embed Sample Profile Database)](spdembed-embed-sample-profile-database.md)\
[/SPDIN (Use Sample Profile Database)](spdin-use-sample-profile-database.md)\
[/SPGO (Enable Sample Profile-Guided Optimization)](spgo-enable-sample-profile-guided-optimization.md)\
[Tutorial: Use Sample Profile-Guided Optimization (SPGO) to improve performance](../sample-profile-guided-optimization.md)