---
description: "Learn more about: __writecr0"
title: "__writecr0"
ms.date: "09/02/2019"
f1_keywords: ["_writecr0"]
helpviewer_keywords: ["_writecr0 intrinsic"]
ms.assetid: a143d08d-0333-4e1b-91b4-4acb2ae91b5a
---
# __writecr0

**Microsoft Specific**

Writes the value `Data` to the CR0 register.

## Syntax

```C
void writecr0(
   unsigned __int64 Data
);
```

### Parameters

*Data*\
[in] The value to write to the CR0 register.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__writecr0`|x86, x64|

**Header file** \<intrin.h>

## Remarks

This intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
