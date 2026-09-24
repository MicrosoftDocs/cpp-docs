---
title: "__rmpquery"
description: "Learn how to use the Microsoft C++ __rmpquery intrinsic on x64."
author: twhitney
ms.author: twhitney
ms.date: 09/16/2026
ms.topic: reference
f1_keywords: ["__rmpquery", "ammintrin/__rmpquery"]
helpviewer_keywords: ["__rmpquery intrinsic", "RMPQUERY instruction"]
ai-usage: ai-assisted
---
# `__rmpquery`

**Microsoft Specific**

Reads the reverse map table (RMP) permission information for a guest page.

## Syntax

```C
typedef struct rmpquery_result {
   unsigned __int8 target_perm_mask;
   unsigned __int8 vmsa;
   unsigned __int8 page_size;
} rmpquery_result;

unsigned int __rmpquery(
   unsigned __int64 guest_va,
   unsigned __int8 target_vmpl,
   rmpquery_result *result
);
```

### Parameters

`guest_va`\
[in] The guest virtual address.

`target_vmpl`\
[in] The target virtual machine privilege level (VMPL).

`result`\
[out] The address at which to store the query result.

## Return value

Returns a status code that indicates the result of the operation.

| Value | Description |
| -- | -- |
| `0` | The operation completed successfully. |
| `2` | The current address space identifier (ASID) isn't zero, or the RMP entry is immutable. |

## Remarks

The `__rmpquery` intrinsic corresponds to the AMD `RMPQUERY` machine instruction. It's available only as an intrinsic and can be used only in kernel mode.

For more information, see [AMD64 Architecture Programmer's Manual, Volume 2: System Programming](https://docs.amd.com/v/u/en-US/24593_3.45_APM_Vol2_PUB).

## Requirements

| Intrinsic  | Architecture | Header |
|------------|------------|---------------|
| `__rmpquery` | AMD x86/x64 with SEV-SNP support | `<ammintrin.h>`| 

**END Microsoft Specific**

## See also

[Compiler intrinsics](compiler-intrinsics.md)\
[`__psmash`](psmash.md)\
[`__pvalidate`](pvalidate.md)\
[`__rmpadjust`](rmpadjust.md)\
[`__rmpread`](rmpread.md)\
[`__rmpupdate`](rmpupdate.md)
