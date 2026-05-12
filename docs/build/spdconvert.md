---
description: "Learn more about: SPDConvert"
title: "SPDConvert"
ms.date: 05/08/2026
ai-usage: ai-assisted
helpviewer_keywords: ["SPDConvert program", "sample profile-guided optimizations, SPDConvert", "SPGO"]
---
# SPDConvert

Use `SPDConvert` to prepare and manage sample profile data for Sample Profile-Guided Optimization (SPGO).

This tool correlates the raw hardware samples in SPT files against the code structure in the SPD. This step performs sample correlation, flow smoothing, and size/speed decisions, and produces an enriched SPD file with execution counts annotated on the flow graph.

You can combine data from multiple sources such as lab benchmarks, internal monitoring, and production telemetry, in a single conversion. To emphasize the importance of a particular scenario, you can specify its SPT file multiple times. Listing a critical benchmark SPT three times effectively triples its weight.

This tool operates in three modes:

- *import* .SPT data into an .SPD file for [/SPGO](sample-profile-guided-optimization.md) builds
- *extract* an embedded .SPD file from a .PDB
- *merge* multiple .SPD files from separate profiling runs

`SPDConvert` works with three file types:
- **ETL** (Event Trace Log) Raw hardware performance events recorded by `xperf`
- **SPT** (Sample Profile Trace) Packaged sample events produced by [`SPTAggregate`](sptaggregate.md) from ETL files
- **SPD** (Sample Profile Database) Processed profile data used by the compiler during an optimized build. You can also embed SPD files in PDB symbol files during a `/spdembed` build

## Syntax

Import SPT data into an existing SPD file:

> `SPDConvert` [*options*] *spdfile* *sptfile(s)*

Extract an embedded SPD file from a PDB:

> `SPDConvert` **/extract** *pdbfile* *spdfile*

Merge multiple SPD files into one:

> `SPDConvert` **/merge** *outputspdfile* *spdfile(s)*

### Parameters

**IMPORT MODE**

*options*\
Specify the following options in import mode:

- **/mode:**\<**IP**\|**LBR**\> Select the profile mode. Use **IP** for instruction pointer profile data (default) or **LBR** for last branch record profile data.
- **/reset:** Reset the count to 0. This action ignores SPTs. Use this option to reset an SPD file before importing new data, or to create an empty SPD file if the specified file doesn't exist.
- **/sptlist:**\<*file*\> Specify SPT file names in a text file, with one file name per line.
- **/summary** Print a summary of the SPD file.
- **/help** Display help information.

*spdfile*\
The SPD file to import sample data into.

*sptfiles*\
One or more SPT files to import. SPT files are produced by [SPTAggregate](sptaggregate.md).

**EXTRACT MODE (/extract)**

*pdbfile*\
The PDB file that contains an embedded SPD.

*spdfile*\
The output SPD file to create.

**MERGE MODE (/merge)**

*outputspdfile*\
The output SPD file to create.

**/retire:**\<*N*\> Set the profile data retire rate to *N*/16, where 0 ≤ *N* ≤ 16. The default is 8. This value controls how much of the existing data in an SPD to delete when adding new SPT data. For example, `/retire:8` deletes 8/16 (half) of the existing data before adding new SPT data. This setting weights newer profile data more heavily because it discards half of the older data. The two most common usages are `/retire:0` which gives equal weight to all profile runs, or `/retire:16` to make only the newest data count because it deletes all the old data. Use `/retire:N` to control how aggressively `SPDConvert` de-emphasizes older profile data. This "carry forward" concept allows you to refresh a profile using existing SPD data without starting over with new profiling data, which is time-consuming. This concept is discussed more in the [SPGO tutorial - Reusing SPD information across builds](sample-profile-guided-optimization.md#reusing-spd-information-across-builds).

*spdfiles*\
One or more SPD files to merge.

## Remarks

> [!NOTE]
> Run this tool from a Visual Studio developer command prompt.

`SPDConvert` is the main conversion tool in the SPGO workflow. After collecting a trace by using `xperf` and converting it to an SPT file by using [`SPTAggregate`](sptaggregate.md), use `SPDConvert` to import the sample data into an SPD file. Pass the resulting SPD file to the compiler by using the [`/SPGO`](sample-profile-guided-optimization.md) flag to build an optimized binary.

Use `/extract` to recover an SPD file that was embedded in a PDB during a `/SPGO` build.
Use `/merge` to combine SPD files from multiple profiling sessions before rebuilding.

The GUID and age of a binary must match between the SPT and SPD files. If they don't match, `SPDConvert` reports an "SPD version incompatible" error. Use [`SPTDump /progid`](sptdump.md) to check the binary identifiers in the SPT file, and [`SPDDump /header`](spddump.md) to check the SPD file.

The GUID and age of the binary recorded in the SPD file must match the SPT file. To diagnose this error, use [`SPTDump /progid`](sptdump.md) to inspect the binary identifiers in the SPT file, and [`SPDDump /header`](spddump.md) to inspect the SPD file. A valid SPD file is used to the extent possible. Minor updates to the code that don't alter the program's control flow are tolerated. Unchanged functions also use the data for optimization. If you provide a valid, but otherwise unrelated SPD, the process works, but likely no data is usable for optimization.

## Example

This example imports LBR profile data from an SPT file into an SPD file:

`SPDConvert /mode:LBR sample.spd sample.spt`

This example imports IP profile data by using a list of SPT files:

`SPDConvert /mode:IP /sptlist:mysptfiles.txt sample.spd`

This example prints a summary of the profile data in an SPD file:

`SPDConvert /summary sample.spd`

This example extracts the embedded SPD from a PDB file:

`SPDConvert /extract sample.pdb sample_extracted.spd`

This example merges two SPD files from different profiling runs:

`SPDConvert /merge combined.spd run1.spd run2.spd`

## See also

[Tutorial: Use Sample Profile-Guided Optimization (SPGO) to improve performance](sample-profile-guided-optimization.md)\
[`SPDDump`](spddump.md)\
[`SPTAggregate`](sptaggregate.md)\
[`SPTDump`](sptdump.md)
