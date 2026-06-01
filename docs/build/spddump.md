---
description: "Learn more about: SPDDump"
title: "SPDDump"
ms.date: 04/30/2026
ai-usage: ai-assisted
helpviewer_keywords: ["SPDDump program", "sample profile-guided optimizations, SPDDump", "SPGO"]
---
# SPDDump

Use `SPDDump` to inspect Sample Profile Database (SPD) files and object files that contain sample profile data for Sample Profile-Guided Optimization (SPGO). Use this tool to verify SPD contents, troubleshoot SPD/PDB compatibility problems, and view profile details such as functions, flow graphs, coverage, and dynamic instruction estimates. Run `SPDDump` from a Visual Studio Developer Command Prompt.

An SPD file contains processed profile data that the compiler uses to make optimization decisions during a build.

## Syntax

> `SPDDump` [*options*] *spdfile*

### Parameters

*options*\
Specify the following options for `SPDDump`:

- **/all** Output the entire SPD file. This option is the default.
- **/header** Output the SPD file header.
- **/module** Output the module header in the SPD file. Implies **/header**.
- **/symbol** Output the module symbol table. Implies **/module**.
- **/func** Output the function profile. Implies **/module**.
- **/funcid:**\<*fid*\> Output the function profile for the function with the given function ID.
- **/cg** Include callee information in function profile output. Implies **/func**.
- **/fg** Include the flow graph in function profile output. Implies **/func**.
- **/data** Output the data profile. Implies **/module**.
- **/minidump** Exclude sample correlation information such as RVA ranges from output.
- **/coverage** Output basic block coverage information.
- **/dyninst**[**:**\<*n*\>] Output a dynamic instruction estimate for the top 50 functions, or the top *n* functions if specified.
- **/help** Display help information.

*spdfile*\
The path to the SPD file or object file to inspect.

## Remarks

> [!NOTE]
> Run this tool from a Visual Studio developer command prompt.

Use `SPDDump` to inspect the contents of a Sample Profile Database (SPD) file. [`SPDConvert`](spdconvert.md) produces SPD files. The build process that uses [`/SPGO`](sample-profile-guided-optimization.md) embeds these files in PDB files.

To diagnose an "SPD version incompatible" error, use `/header` to examine the PDB GUID and age stored in the SPD file. Then, compare those values against the SPT file by using [`SPTDump /progid`](sptdump.md).

## Example

This example outputs estimated basic block coverage information for an SPD file:

`SPDDump /coverage filename.spd`

This example outputs the SPD header to check the PDB GUID and age:

`SPDDump /header filename.spd`

This example outputs a dynamic instruction estimate for the top 10 functions:

`SPDDump /dyninst:10 filename.spd`

## See also

[Tutorial: Use Sample Profile-Guided Optimization (SPGO) to improve performance](sample-profile-guided-optimization.md)\
[SPDConvert](spdconvert.md)\
[SPTDump](sptdump.md)\
[SPTAggregate](sptaggregate.md)
