---
description: "Learn more about: __sidt"
title: "__sidt"
ms.date: "09/02/2019"
f1_keywords: ["__sidt"]
helpviewer_keywords: ["sidt instruction", "__sidt intrinsic"]
ms.assetid: 01e83d14-6e63-4dea-8f64-5a0339d69641
---
# __sidt

**Microsoft Specific**

Stores the value of the interrupt descriptor table register (IDTR) in the specified memory location.

## Syntax

```C
void __sidt(void * Destination);
```

### Parameters

*Destination*\
[in] A pointer to the memory location where the IDTR is stored.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__sidt`|x86, x64|

**Header file** \<intrin.h>

## Remarks

The `__sidt` function is equivalent to the `SIDT` machine instruction. For more information, search for the document, "Intel Architecture Software Developer's Manual, Volume 2: Instruction Set Reference," at the [Intel Corporation](https://software.intel.com/articles/intel-sdm) site.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[__lidt](../intrinsics/lidt.md)
