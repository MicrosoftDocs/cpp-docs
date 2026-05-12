---
title: "/SPGO (Enable Sample Profile-Guided Optimization)"
description: "Learn more about: /SPGO (Enable Sample Profile-Guided Optimization)"
ms.date: 05/05/2026
ai-usage: ai-assisted
helpviewer_keywords: ["/SPGO linker option", "-SPGO linker option", "sample profile-guided optimization, /SPGO"]
---
# /SPGO (Enable Sample Profile-Guided Optimization)

Enables Sample Profile-Guided Optimization (SPGO) and creates an empty Sample Profile Database (SPD) file alongside the output binary.

## Syntax

> **/SPGO**

## Remarks

The `/SPGO` linker option starts the SPGO workflow. It directs the linker to create an empty `.spd` file that acts as a placeholder for profiling data. After building with `/SPGO`, you collect a performance trace by using `xperf`, convert it to an SPT file by using [`SPTAggregate`](../sptaggregate.md), and then import the data into the SPD file by using [`SPDConvert`](../spdconvert.md). Once the SPD file contains profile data, rebuild by using the SPD file to produce an optimized binary. The compiler and linker look for an SPD input file, either default or specified by [`/SPD`](spd-specify-sample-profile-database.md). The [/SPDIN (Use Sample Profile Database)](spdin-use-sample-profile-database.md) option is available as a convenience when the input file is over-written and that isn't desirable.

When you build by using `/SPGO` but the SPD file contains no profile data yet, you see a message such as:

```
Result: SPD <filename>.spd does not contain sample profile, compiling without profile guided optimizations
```

This message is expected on the first build and indicates that the SPD file is ready to receive profiling data.

By default, the build process creates the SPD file with the same base name as the output file in the directory from which the link was invoked. Use [`/SPD`](spd-specify-sample-profile-database.md) to specify a different name or location.

Use [`/SPDEMBED`](spdembed-embed-sample-profile-database.md) to embed the SPD data into the PDB file after profile data is collected. Ensure that the linker is producing a PDB file by specifying the `/DEBUG` option.

For more information about the SPGO workflow, see [Tutorial: Use Sample Profile-Guided Optimization (SPGO) to improve performance](../sample-profile-guided-optimization.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).
1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.
1. Add `/SPGO` to the **Additional Options** box. Choose **OK** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC Linker Options](linker-options.md)\
[/SPD (Specify Sample Profile Database)](spd-specify-sample-profile-database.md)\
[/SPDEMBED (Embed Sample Profile Database)](spdembed-embed-sample-profile-database.md)\
[/SPDIN (Use Sample Profile Database)](spdin-use-sample-profile-database.md)\
[Tutorial: Use Sample Profile-Guided Optimization (SPGO) to improve performance](../sample-profile-guided-optimization.md)