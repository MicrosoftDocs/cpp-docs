---
title: "_enable"
ms.date: "11/04/2016"
f1_keywords: ["_enable", "_enable_cpp"]
helpviewer_keywords: ["enable intrinsic", "_enable intrinsic", "ssm instruction"]
ms.assetid: 8bee669b-6bd8-4e25-9383-bb7d57295b4d
---
# _enable

**Microsoft Specific**

Enables interrupts.

## Syntax

```
void _enable(void);
```

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`_enable`|x86, ARM, x64|

**Header file** \<intrin.h>

## Remarks

`_enable` instructs the processor to set the interrupt flag. On x86 systems, this function generates the Set Interrupt Flag (`sti`) instruction.

This function is only available in kernel mode. If used in user mode, a Privileged Instruction exception is thrown.

**END Microsoft Specific**

## See also

[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)
