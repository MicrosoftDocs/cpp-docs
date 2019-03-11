---
title: "__lidt"
ms.date: "11/04/2016"
f1_keywords: ["__lidt", "__lidt_cpp"]
helpviewer_keywords: ["LIDT instruction", "__lidt intrinsic"]
ms.assetid: 8298d25d-a19e-4900-828d-6b3b09841882
---
# __lidt

**Microsoft Specific**

Loads the interrupt descriptor table register (IDTR) with the value in the specified memory location.

## Syntax

```
void __lidt(void * Source);
```

#### Parameters

|Parameter|Description|
|---------------|-----------------|
|*Source*|[in] Pointer to the value to be copied to the IDTR.|

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__lidt`|x86, x64|

**Header file** \<intrin.h>

## Remarks

The `__lidt` function is equivalent to the `LIDT` machine instruction, and is available only in kernel mode. For more information, search for the document, "Intel Architecture Software Developer's Manual, Volume 2: Instruction Set Reference," at the [Intel Corporation](https://software.intel.com/articles/intel-sdm) site.

**END Microsoft Specific**

## See also

[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)<br/>
[__sidt](../intrinsics/sidt.md)
