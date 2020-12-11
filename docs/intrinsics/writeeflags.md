---
description: "Learn more about: __writeeflags"
title: "__writeeflags"
ms.date: "09/02/2019"
f1_keywords: ["__writeeflags"]
helpviewer_keywords: ["__writeeflags intrinsics"]
ms.assetid: a62a522c-d7fa-4f10-a620-a3b32bdf3f17
---
# __writeeflags

**Microsoft Specific**

Writes the specified value to the program status and control (EFLAGS) register.

## Syntax

```C
void __writeeflags(unsigned Value); /* x86 */
void __writeeflags(unsigned __int64 Value); /* x64 */
```

### Parameters

*Value*\
[in] The value to write to the EFLAGS register. The `Value` parameter is 32 bits long for a 32-bit platform and 64 bits long for a 64-bit platform.

## Remarks

These routines are available only as intrinsics.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__writeeflags`|x86, x64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[__readeflags](../intrinsics/readeflags.md)
