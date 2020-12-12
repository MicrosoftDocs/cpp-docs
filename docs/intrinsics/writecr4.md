---
description: "Learn more about: __writecr4"
title: "__writecr4"
ms.date: "09/02/2019"
f1_keywords: ["_writecr4"]
helpviewer_keywords: ["_writecr4 intrinsic"]
ms.assetid: ab7651d7-b86b-4be7-a0a0-7263099c70fc
---
# __writecr4

**Microsoft Specific**

Writes the value `Data` to the CR4 register.

## Syntax

```C
void writecr4(
   unsigned __int64 Data
);
```

### Parameters

*Data*\
[in] The value to write to the CR4 register.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__writecr4`|x86, x64|

**Header file** \<intrin.h>

## Remarks

This intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
