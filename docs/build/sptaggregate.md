---
description: "Learn more about: SPTAggregate"
title: "SPTAggregate"
ms.date: 05/01/2026
ai-usage: ai-assisted
helpviewer_keywords: ["SPTAggregate program", "sample profile-guided optimizations, SPTAggregate", "SPGO"]
---
# SPTAggregate

`SPTAggregate` is a command-line tool for Sample Profile-Guided Optimization (SPGO). Use it to combine one or more ETL (Event Trace Log) files that `xperf` collects into a single SPT (Sample Profile Trace) file. You can optionally filter data by process or binary name and exclude kernel events. After you create the SPT file, use [SPDConvert](spdconvert.md) to import it into an SPD (Sample Profile Database) file for optimization workflows.

ETL (Event Trace Log) files contain raw hardware performance events that `xperf` records. `SPTAggregate` converts those ETL files into SPT format, which packages the sample events for import into an SPD (Sample Profile Database) file by [SPDConvert](spdconvert.md).

## Syntax

> `SPTAggregate` [*options*] **/etl** *etlfiles* *sptfile*

### Parameters

*options*\
Specify the following options to `SPTAggregate`:

- **/process:**\<*processes*\> Filter events by process name. Specify one or more process names as a comma-separated list.\
  Example: `/process:myapp.exe`
- **/binary:**\<*binaries*\> Filter events by binary name. Specify one or more binary names as a comma-separated list.\
  Example: `/binary:mylib.dll,myapp.exe`
- **/nokernel** Exclude OS kernel events.
- **/help** Display help information.

*etlfiles*\
A comma-separated list of ETL (Event Trace Log) files to process. Collect ETL files by using `xperf`.

*sptfile*\
The output SPT file to create.

## Remarks

> [!NOTE]
> Run this tool from a Visual Studio developer command prompt.

Use `SPTAggregate` to convert one or more ETL files collected by `xperf` into an SPT file. The `/etl` flag is required and must precede the list of ETL files. You can import the resulting SPT file into an SPD file by using [`SPDConvert`](spdconvert.md).

`SPTAggregate` uses `xperf`, which must be in your path and set up with the `perfcore.ini` changes as described in [Configure perfcore.ini](sample-profile-guided-optimization.md#configure-perfcoreini).

When `SPTAggregate` runs `xperf`, it uses parameters like: `xperf -a spt -genSPT outputfile.spt -binary application.exe,support.dll,companion.dll` where `-a spt` specifies generate a sample profile trace analysis report, `-genSPT` specifies the output SPT file, and `-binary` focuses analysis on the specified binaries.

For more information about `xperf` flags, see the [Xperf Command-Line Reference](/windows-hardware/test/wpt/xperf-command-line-reference) documentation.

## Example

This example converts a single ETL file into an SPT file:

`SPTAggregate /etl filename.etl filename.spt`

This example filters events to a specific process:

`SPTAggregate /process:filename.exe /etl filename.etl filename.spt`

This example aggregates two ETL files and excludes kernel events:

`SPTAggregate /nokernel /etl run1.etl,run2.etl filename.spt`

## See also

[Tutorial: Use Sample Profile-Guided Optimization (SPGO) to improve performance](sample-profile-guided-optimization.md)\
[Profile-Guided Optimizations](profile-guided-optimizations.md)\
[`SPDConvert`](spdconvert.md)\
[`SPDDump`](spddump.md)\
[`SPTDump`](sptdump.md)
