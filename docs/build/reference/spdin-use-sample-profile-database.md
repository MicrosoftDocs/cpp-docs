---
title: "/SPDIN (Use Sample Profile Database)"
description: "Learn more about linker option: /SPDIN (Use Sample Profile Database)"
ms.date: 05/05/2026
ai-usage: ai-assisted
helpviewer_keywords: ["/SPDIN linker option", "-SPDIN linker option", "sample profile-guided optimization, /SPDIN"]
---
# /SPDIN (Use Sample Profile Database)

Specifies a Sample Profile Database (SPD) file that contains profiling data for use in a Sample Profile-Guided Optimization (SPGO) build.
Also used to override the default or file specified with `/SPD` for reading the sample profile database.

## Syntax

> **/SPDIN:**_filename_

## Argument

`filename`\
Specifies the path to the `.spd` file that contains the profiling data to use for optimization. When expanded, the fully qualified path must not exceed `MAX_PATH` (260 characters).\
If the file doesn't exist, the linker creates an empty file that will be used to collect data.

## Remarks

After collecting a performance trace by using `xperf`, converting it by using [`SPTAggregate`](../sptaggregate.md), and importing the data into an SPD file by using [`SPDConvert`](../spdconvert.md), use `/SPDIN` and [`/SPGO`](spgo-enable-sample-profile-guided-optimization.md) to produce an optimized binary.

The GUID and age of the binary recorded in the SPD file must match the SPT file. If they don't match, you may see a "SPD version incompatible" error. To diagnose this error, use [`SPTDump /progid`](../sptdump.md) to inspect the binary identifiers in the SPT file, and [`SPDDump /header`](../spddump.md) to inspect the SPD file. The linker uses a valid SPD file to the extent possible. Minor updates to the code that don't alter the program's control flow are tolerated. Unchanged functions also use the data for optimization. If you provide a valid, but otherwise unrelated SPD, the process works, but likely no data is usable for optimization.

Use [`/SPDEMBED`](spdembed-embed-sample-profile-database.md) together with `/SPGO` to embed the SPD data into the PDB file produced by the build.

Use [`/SPD`](spd-specify-sample-profile-database.md) to specify a nondefault name or location for the SPD file. `/SPDIN` overrides this option, if specified.

For more information about the SPGO workflow, see [Tutorial: Use Sample Profile-Guided Optimization (SPGO) to improve performance](../sample-profile-guided-optimization.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).
1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.
1. Add `/SPDIN:filename` to the **Additional Options** box. Choose **OK** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC Linker Options](linker-options.md)\
[/SPD (Specify Sample Profile Database)](spd-specify-sample-profile-database.md)\
[/SPDEMBED (Embed Sample Profile Database)](spdembed-embed-sample-profile-database.md)\
[/SPGO (Enable Sample Profile-Guided Optimization)](spgo-enable-sample-profile-guided-optimization.md)\
[Tutorial: Use Sample Profile-Guided Optimization (SPGO) to improve performance](../sample-profile-guided-optimization.md)