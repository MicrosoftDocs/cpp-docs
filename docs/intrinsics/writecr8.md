---
title: "__writecr8"
ms.date: "11/04/2016"
f1_keywords: ["_writecr8"]
helpviewer_keywords: ["_writecr8 intrinsic"]
ms.assetid: 6f8bd632-dddb-4335-971e-1acee24aa2b9
---
# __writecr8

**Microsoft Specific**

Writes the value `Data` to the CR8 register.

## Syntax

```
void writecr8(
   unsigned __int64 Data
);
```

#### Parameters

*Data*<br/>
[in] The value to write to the CR8 register.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__writecr8`|x64|

**Header file** \<intrin.h>

## Remarks

This intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)
