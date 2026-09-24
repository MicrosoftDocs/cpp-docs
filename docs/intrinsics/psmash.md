---
title: "__psmash"
description: "Learn how to use the Microsoft C++ __psmash intrinsic on x64."
author: twhitney
ms.author: twhitney
ms.date: 09/16/2026
ms.topic: reference
f1_keywords: ["__psmash", "ammintrin/__psmash"]
helpviewer_keywords: ["__psmash intrinsic", "PSMASH instruction"]
ai-usage: ai-assisted
---
# `__psmash`

**Microsoft Specific**

Expands a 2-MB reverse map table (RMP) entry into a corresponding set of contiguous 4-KB RMP entries.

## Syntax

```C
unsigned int __psmash(
   unsigned __int64 system_pa
);
```

### Parameters

`system_pa`\
[in] The system physical address of the 2-MB page.

## Return value

Returns a status code that indicates the result of the operation.

| Value | Description |
| -- | -- |
| `0` | The operation completed successfully. |
| `1` | An input parameter is invalid. |
| `2` | The current address space identifier (ASID) isn't zero. |
| `3` | Another processor is modifying the same RMP entry. |
| `7` | The page doesn't meet the requirements for expansion. |

## Remarks

The `__psmash` intrinsic corresponds to the AMD `PSMASH` machine instruction. It's available only as an intrinsic and can be used only in kernel mode.

For more information, see [AMD64 Architecture Programmer's Manual, Volume 2: System Programming](https://docs.amd.com/v/u/en-US/24593_3.45_APM_Vol2_PUB).

## Requirements

| Intrinsic | Architecture | Header |
|-----------|------------|---------------|
| `__psmash`  | AMD x86/x64 with SEV-SNP support | `<ammintrin.h>`| 

**END Microsoft Specific**

## See also

[Compiler intrinsics](compiler-intrinsics.md)\
[`__pvalidate`](pvalidate.md)\
[`__rmpadjust`](rmpadjust.md)\
[`__rmpquery`](rmpquery.md)\
[`__rmpread`](rmpread.md)\
[`__rmpupdate`](rmpupdate.md)
