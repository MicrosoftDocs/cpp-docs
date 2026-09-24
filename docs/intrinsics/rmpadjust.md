---
title: "__rmpadjust"
description: "Learn how to use the Microsoft C++ __rmpadjust intrinsic on x64."
author: twhitney
ms.author: twhitney
ms.date: 09/16/2026
ms.topic: reference
f1_keywords: ["__rmpadjust", "ammintrin/__rmpadjust"]
helpviewer_keywords: ["__rmpadjust intrinsic", "RMPADJUST instruction"]
ai-usage: ai-assisted
---
# `__rmpadjust`

**Microsoft Specific**

Modifies reverse map table (RMP) permissions for a guest page.

## Syntax

```C
unsigned int __rmpadjust(
   unsigned __int64 guest_va,
   unsigned __int8 page_size,
   unsigned __int8 target_vmpl,
   unsigned __int8 target_perm_mask,
   unsigned __int8  vmsa);
);
```

### Parameters

`guest_va`\
[in] The guest virtual address.

`page_size`\
[in] The page size.

`target_vmpl`\
[in] The target virtual machine privilege level (VMPL).

`target_perm_mask`\
[in] The desired permission mask.

`vmsa`\
[in] Indicates if the page may be used as a VM Save Area page (0=No, 1=Yes). Ignored when the current `VMPL` != 0

## Return value

Returns a status code that indicates the result of the operation.

| Value | Description |
| -- | -- |
| `0` | The operation completed successfully. |
| `1` | An input parameter is invalid. |
| `2` | The current VMPL has insufficient permissions. |
| `6` | The guest page and RMP entry page sizes don't match. |

## Remarks

The `__rmpadjust` intrinsic corresponds to the AMD `RMPADJUST` machine instruction. It's available only as an intrinsic and can be used only in kernel mode.

For more information, see [AMD64 Architecture Programmer's Manual, Volume 2: System Programming](https://docs.amd.com/v/u/en-US/24593_3.45_APM_Vol2_PUB).

## Requirements

| Intrinsic   | Architecture | Header |
|-------------|------------|---------------|
| `__rmpadjust` | AMD x86/x64 with SEV-SNP support | `<ammintrin.h>` |

**END Microsoft Specific**

## See also

[Compiler intrinsics](compiler-intrinsics.md)\
[`__psmash`](psmash.md)\
[`__pvalidate`](pvalidate.md)\
[`__rmpquery`](rmpquery.md)\
[`__rmpread`](rmpread.md)\
[`__rmpupdate`](rmpupdate.md)
