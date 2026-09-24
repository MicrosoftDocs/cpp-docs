---
title: "__rmpupdate"
description: "Learn how to use the Microsoft C++ __rmpupdate intrinsic on x64."
author: twhitney
ms.author: twhitney
ms.date: 09/16/2026
ms.topic: reference
f1_keywords: ["__rmpupdate", "ammintrin/__rmpupdate"]
helpviewer_keywords: ["__rmpupdate intrinsic", "RMPUPDATE instruction"]
ai-usage: ai-assisted
---
# `__rmpupdate`

**Microsoft Specific**

Writes a new reverse map table (RMP) entry.

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

unsigned int __rmpupdate(
   unsigned __int64 system_pa,
   rmp_entry *rmp_entry_state
);
```

### Parameters

`system_pa`\
[in] The system physical address.

`rmp_entry_state`\
[in] The new RMP entry state.

## Return value

Returns a status code that indicates the result of the operation.

| Value | Description |
| -- | -- |
| `0` | The operation completed successfully. |
| `1` | An input parameter is invalid. |
| `2` | The current address space identifier (ASID) isn't zero, or the RMP entry is immutable. |
| `3` | Another processor is modifying the same RMP entry. |
| `4` | Overlapping 4-KB and 2-MB RMP entries were detected. |

## Remarks

The `__rmpupdate` intrinsic corresponds to the AMD `RMPUPDATE` machine instruction. A hypervisor can use it to change the RMP state of pages directly. It's available only as an intrinsic and can be used only in kernel mode.

For more information, see [AMD64 Architecture Programmer's Manual, Volume 2: System Programming](https://docs.amd.com/v/u/en-US/24593_3.45_APM_Vol2_PUB).

## Requirements

| Intrinsic | Architecture | Header |
|-------------|------------|---------------|
| `__rmpupdate` | AMD x86/x64 with SEV-SNP support | `<ammintrin.h>`|

**END Microsoft Specific**

## See also

[Compiler intrinsics](compiler-intrinsics.md)\
[`__psmash`](psmash.md)\
[`__pvalidate`](pvalidate.md)\
[`__rmpadjust`](rmpadjust.md)\
[`__rmpquery`](rmpquery.md)\
[`__rmpread`](rmpread.md)
