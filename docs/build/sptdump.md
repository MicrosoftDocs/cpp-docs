---
description: "Learn more about: SPTDump"
title: "SPTDump"
ms.date: 05/05/2026
ai-usage: ai-assisted
helpviewer_keywords: ["SPTDump program", "sample profile-guided optimizations, SPTDump", "SPGO"]
---
# SPTDump

`SPTDump` is a command-line tool for inspecting Sample Profile Trace (SPT) files used in Sample Profile-Guided Optimization (SPGO) workflows. Use it to view SPT metadata and sample data. Validate trace contents before conversion to SPD, and troubleshoot issues such as SPD version mismatches.

An SPT file contains raw hardware performance sample events collected from an application workload.

## Syntax

> `SPTDump` [*options*] *sptfile*

### Parameters

*options*\
Specify the following options to `SPTDump`:

- **/all** Output the entire SPT file. This option is the default.
- **/header** Output the SPT file header.
- **/progid** Output program IDs (GUID and age for each binary).
- **/strtab** Output the string table.
- **/event** Output sample events.
- **/help** Display help information.

*sptfile*\
The path to the SPT file to inspect.

## Remarks

> [!NOTE]
> Start this tool from a Visual Studio developer command prompt.

Use `SPTDump` to inspect the contents of a Sample Profile Trace (SPT) file. [SPTAggregate](sptaggregate.md) produces SPT files from ETL event trace logs collected by `xperf`. Import SPT files into an SPD file (Sample Profile Database) by using [SPDConvert](spdconvert.md).

To diagnose an "SPD version incompatible" error, use `/progid` to display the GUID and age for each binary in the SPT file, and then compare those values against the SPD file by using [`SPDDump /header`](spddump.md).

## Example

This example outputs the full contents of an SPT file:

`SPTDump sample.spt`

This example outputs only the program IDs (GUID and age) for binaries in an SPT file:

`SPTDump /progid sample.spt`

## SPT header format

SPT file is a binary format with a 32-byte header, string table, program ID table, and sample event data stream. This document describes version 1 of the format. The version field updates if the layout changes in the future.

The SPT header is 32 bytes:

- `[0x00-0x03]` Signature (uint32 LE) = 0x5350543A ("SPT:")
- `[0x04-0x07]` Version (uint32 LE) = 1
- `[0x08-0x0B]` RawDataId (uint32 LE) = 0 (unused/reserved)
- `[0x0C-0x0F]` TargetArch (uint32 LE) = 0 (unused/reserved)
- `[0x10-0x13]` StringTableOffset (uint32 LE) = offset to binary name string table (typically 0x20)
- `[0x14-0x17]` ProgramIdTableOffset (uint32 LE) = offset to RSDSKEY table (typically StringTableOffset+StringTableCapacity)
- `[0x18-0x19]` StringTableUsed (uint16 LE) = bytes used in string table
- `[0x1A-0x1B]` StringTableCapacity (uint16 LE) = bytes allocated in string table (typically 0x4000)
- `[0x1C-0x1D]` ProgramIdsUsed (uint16 LE) = number of program IDs (often just 1)
- `[0x1E-0x1F]` ProgramIdCapacity (uint16 LE) = capacity in count (not bytes) for program IDs (typically 0x100)

The StringTable immediately follows the header at the specified offset. It contains a null-terminated UTF-8 binary filename.\
The ProgramIdTable follows the StringTable at the specified offset. Each entry is 24 bytes: 16-byte Rich Signature Data Stream (RSDS) GUID + 4-byte age + 4-byte string index into StringTable.\
The data stream starts at `ProgramIdTableOffset + (ProgramIdCapacity * 24)`, and starts with a `SPT_OP_BINARY_ID` opcode.

**SPT Opcodes**

In the following descriptions:
- RVA means the 32-bit relative virtual address of an instruction in the binary, that is, it's offset in the module.
- LE means little-endian byte order.

`SPT_OP_REPEAT` (0x82)\
Repeat the next record for the specified number of times. A repeat count of 2 means that there are 3 identical records in total. The repeat count resets after processing it.\
Layout: 1 byte: opcode 0x82. 1 byte: padding. 8 bytes: repeat count (uint64 LE)

`SPT_OP_UNHALT_CYCLE`, `SPT_OP_RETIRE_INSTR`, `SPT_OP_RETIRE_BR_INSTR`, `SPT_OP_L1_ICACHE_MISS`, `SPT_OP_L1_DCACHE_MISS`, `SPT_OP_ETW_INSTR` (0x01, 0x02, 0x03, 0x04, 0x05, 0x41)\
Layout: 1 byte: opcode. 1 byte: RVA count (N). 4N bytes: N RVAs (uint32 LE each)\
Each RVA represents an IP sample hit count = 1 + repeat count.

`SPT_OP_LBR` (0x10)\
Layout: 1 byte: opcode 0x10. 1 byte: event count (N). 8N bytes: N LBR pairs, each pair is: 4 bytes: To RVA (uint32 LE), 4 bytes: From RVA (uint32 LE)\
Each pair represents a branch arc with hit count = 1 + repeat count.

`SPT_OP_ETW_CALLSTACK` (0x42)\
Layout: 1 byte: opcode 0x42. 1 byte: RVA count (N). 4N bytes: N RVAs (uint32 LE each, representing stack frames).\
When:
- N = 2: Two RVAs form a single stack arc (RVA[0], RVA[1])
- N > 2: Creates N-1 arcs from consecutive pairs: (RVA[0]->RVA[1]), (RVA[1]->RVA[2]), ..., (RVA[N-2]->RVA[N-1])
Each series, whether it's a single arc or consecutive pairs, has hit count = 1 + repeat count.

`SPT_OP_BINARY_ID` (0x81)\
Layout: 1 byte: opcode 0x81. 1 byte: padding. 2 bytes: program ID (uint16 LE). 4 bytes: total data length in this segment (uint32 LE).\
Marks the start of data records for a specific binary specified by an index ID. The index ID refers back to the RSDSKey and binary name string table in the SPT header.\
The data length includes the 4-byte length field itself. This opcode can occur multiple times in a data stream.

## See also

[Tutorial: Use Sample Profile-Guided Optimization (SPGO) to improve performance](sample-profile-guided-optimization.md)\
[`SPDConvert`](spdconvert.md)\
[`SPDDump`](spddump.md)\
[`SPTAggregate`](sptaggregate.md)