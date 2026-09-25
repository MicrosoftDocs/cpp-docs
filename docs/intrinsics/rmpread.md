---
title: "__rmpread"
description: "Learn how to use the Microsoft C++ __rmpread intrinsic on x64."
author: twhitney
ms.author: twhitney
ms.date: 09/25/2026
ms.topic: reference
f1_keywords: ["__rmpread", "ammintrin/__rmpread"]
helpviewer_keywords: ["__rmpread intrinsic", "RMPREAD instruction"]
ai-usage: ai-assisted
---
# `__rmpread`

**Microsoft Specific**

Reads the reverse map table (RMP) entry for a page and writes the RMP state to memory.

## Syntax

```C
typedef struct rmp_entry {
   unsigned __int64 guest_pa;
   unsigned __int8 assigned;
   unsigned __int8 page_size : 1;
   unsigned __int8 rmp_2mb_region_status : 1;
   unsigned __int8 reserved1 : 6;
   unsigned __int8 immutable;
   unsigned __int8 reserved2;
   unsigned __int32 asid;
} rmp_entry;

unsigned int __rmpread(
   unsigned __int64 system_pa,
   rmp_entry *rmp_entry_state
);
```

### Parameters

`system_pa`\
[in] The system physical address.

`rmp_entry_state`\
[out] The address at which to store the RMP entry.

## Return value

Returns a status code that indicates the result of the operation.

| Value | Description |
| -- | -- |
| `0` | The operation completed successfully. |
| `1` | An input parameter is invalid. |
| `2` | The current address space identifier (ASID) isn't zero. |

## Remarks

The `__rmpread` intrinsic corresponds to the AMD `RMPREAD` machine instruction. It's available only as an intrinsic and can be used only in kernel mode.

For more information, see [AMD64 Architecture Programmer's Manual, Volume 2: System Programming](https://docs.amd.com/v/u/en-US/24593_3.45_APM_Vol2_PUB).

## Requirements

Available starting with MSVC 19.52.3683

| Intrinsic | Architecture | Header |
|-----------|------------|---------------|
| `__rmpread` | AMD x86/x64 with SEV-SNP support | `<ammintrin.h>`|

**END Microsoft Specific**

## See also

[Compiler intrinsics](compiler-intrinsics.md)\
[`__psmash`](psmash.md)\
[`__pvalidate`](pvalidate.md)\
[`__rmpadjust`](rmpadjust.md)\
[`__rmpquery`](rmpquery.md)\
[`__rmpupdate`](rmpupdate.md)
