---
description: "Learn more about: __readmsr"
title: "__readmsr"
ms.date: "09/02/2019"
f1_keywords: ["__readmsr"]
helpviewer_keywords: ["Read Model Specific Register", "rdmsr instruction", "__readmsr intrinsic"]
ms.assetid: 7ab1f8e8-72cb-4ce4-817d-3e728a3c9716
---
# __readmsr

**Microsoft Specific**

Generates the `rdmsr` instruction, which reads the model-specific register specified by **`register`** and returns its value.

## Syntax

```C
__int64 __readmsr(
   int register
);
```

### Parameters

*register*\
[in] The model-specific register to read.

## Return value

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

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
