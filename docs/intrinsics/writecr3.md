---
title: "__writecr3"
ms.date: "11/04/2016"
f1_keywords: ["_writecr3"]
helpviewer_keywords: ["_writecr3 intrinsic"]
ms.assetid: 959d49fa-69d5-47cf-88d2-7688367fe38f
---
# __writecr3

**Microsoft Specific**

Writes the value `Data` to the CR3 register.

## Syntax

```
void writecr3(
   unsigned __int64 Data
);
```

#### Parameters

*Data*<br/>
[in] The value to write to the CR3 register.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__writecr3`|x86, x64|

**Header file** \<intrin.h>

## Remarks

This intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)
