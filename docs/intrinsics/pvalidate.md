---
title: "__pvalidate"
description: "Learn how to use the Microsoft C++ __pvalidate intrinsic on x64."
author: twhitney
ms.author: twhitney
ms.date: 09/16/2026
ms.topic: reference
f1_keywords: ["__pvalidate", "ammintrin/__pvalidate"]
helpviewer_keywords: ["__pvalidate intrinsic", "PVALIDATE instruction"]
ai-usage: ai-assisted
---
# `__pvalidate`

**Microsoft Specific**

Validates or rescinds validation of a guest page's reverse map table (RMP) entry.

## Syntax

```C
unsigned int __pvalidate(
   unsigned __int64 guest_va,
   unsigned __int8 page_size,
   unsigned __int8 validate_page,
   unsigned __int8 *validate_changed
);
```

### Parameters

`guest_va`\
[in] The guest virtual address.

`page_size`\
[in] The page size.

`validate_page`\
[in] The new value for the RMP entry's validated bit.

`validate_changed`\
[out] The address at which to store whether the validated bit changed.

## Return value

Returns a status code that indicates the result of the operation.

| Value | Description |
| -- | -- |
| `0` | The operation completed successfully, whether or not the validated bit changed. |
| `1` | An input parameter is invalid. |
| `6` | The guest page and RMP entry page sizes don't match. |

## Remarks

The `__pvalidate` intrinsic corresponds to the AMD `PVALIDATE` machine instruction. It's available only as an intrinsic and can be used only in kernel mode.

For more information, see [AMD64 Architecture Programmer's Manual, Volume 2: System Programming](https://docs.amd.com/v/u/en-US/24593_3.45_APM_Vol2_PUB).

## Requirements

| Intrinsic   | Architecture | Header |
|-------------|------------|---------------|
| `__pvalidate` | AMD x86/x64 with SEV-SNP support | `<ammintrin.h>`|

**END Microsoft Specific**

## See also

[Compiler intrinsics](compiler-intrinsics.md)\
[`__psmash`](psmash.md)\
[`__rmpadjust`](rmpadjust.md)\
[`__rmpquery`](rmpquery.md)\
[`__rmpread`](rmpread.md)\
[`__rmpupdate`](rmpupdate.md)
