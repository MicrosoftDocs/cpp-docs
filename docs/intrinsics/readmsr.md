---
title: "__readmsr"
ms.date: "11/04/2016"
f1_keywords: ["__readmsr"]
helpviewer_keywords: ["Read Model Specific Register", "rdmsr instruction", "__readmsr intrinsic"]
ms.assetid: 7ab1f8e8-72cb-4ce4-817d-3e728a3c9716
---
# __readmsr

**Microsoft Specific**

Generates the `rdmsr` instruction, which reads the model-specific register specified by `register` and returns its value.

## Syntax

```
__int64 __readmsr(
   int register
);
```

#### Parameters

*register*<br/>
[in] The model specific register to read.

## Return Value

The value in the specified register.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__readmsr`|x86, x64|

**Header file** \<intrin.h>

## Remarks

This function is only available in kernel mode, and the routine is only available as an intrinsic.

For more information, see the AMD documentation.

**END Microsoft Specific**

## See also

[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)