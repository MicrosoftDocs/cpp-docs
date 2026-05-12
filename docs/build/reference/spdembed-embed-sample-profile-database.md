---
title: "/SPDEMBED (Embed Sample Profile Database)"
description: "Learn more about: /SPDEMBED (Embed Sample Profile Database)"
ms.date: 05/05/2026
ai-usage: ai-assisted
helpviewer_keywords: ["/SPDEMBED linker option", "-SPDEMBED linker option", "sample profile-guided optimization, /SPDEMBED"]
---
# /SPDEMBED (Embed Sample Profile Database)

Embeds the Sample Profile Database (SPD) data into the Program Database (PDB) file during a Sample Profile-Guided Optimization (SPGO) build.

## Syntax

> **/SPDEMBED**

## Remarks

When you build with [`/SPDIN`](spdin-use-sample-profile-database.md), the linker uses the profile data in the SPD file to make optimization decisions. Use `/SPDEMBED` together with `/SPGO` to embed the SPD data into the PDB file produced by the build. Embedding the SPD in the PDB keeps the profile data together with the debug symbols, which simplifies distribution and archiving of build artifacts.

To extract an SPD file that you embedded in a PDB, use [`SPDConvert /extract`](../spdconvert.md).

For more information about the SPGO workflow, see [Tutorial: Use Sample Profile-Guided Optimization (SPGO) to improve performance](../sample-profile-guided-optimization.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).
1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.
1. Add `/SPDEMBED` to the **Additional Options** box. Choose **OK** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC Linker Options](linker-options.md)\
[/SPD (Specify Sample Profile Database)](spd-specify-sample-profile-database.md)\
[/SPDIN (Use Sample Profile Database)](spdin-use-sample-profile-database.md)\
[/SPGO (Enable Sample Profile-Guided Optimization)](spgo-enable-sample-profile-guided-optimization.md)\
[Tutorial: Use Sample Profile-Guided Optimization (SPGO) to improve performance](../sample-profile-guided-optimization.md)