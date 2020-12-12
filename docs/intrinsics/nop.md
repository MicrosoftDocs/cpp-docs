---
description: "Learn more about: __nop"
title: "__nop"
ms.date: "09/02/2019"
f1_keywords: ["__nop"]
helpviewer_keywords: ["nop instruction", "__nop intrinsic"]
ms.assetid: 7a2a938b-87e0-476d-a348-03ea7635b6b9
---
# __nop

**Microsoft Specific**

Generates platform-specific machine code that performs no operation.

## Syntax

```C
void __nop();
```

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__nop`|x86, ARM, x64, ARM64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## Remarks

The `__nop` function is equivalent to the `NOP` machine instruction. For more information on x86 and x64, search for the document, "Intel Architecture Software Developer's Manual, Volume 2: Instruction Set Reference," at the [Intel Corporation](https://software.intel.com/articles/intel-sdm) site.

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[__noop](../intrinsics/noop.md)
