---
description: "Learn more about: __writemsr"
title: "__writemsr"
ms.date: "09/02/2019"
f1_keywords: ["__writemsr"]
helpviewer_keywords: ["Write Model Specific Register instruction", "wrmsr instruction", "__writemsr intrinsic"]
ms.assetid: 938b1553-51a8-4822-a818-6bed79b0fde5
---
# __writemsr

**Microsoft Specific**

Generates the Write to Model Specific Register (`wrmsr`) instruction.

## Syntax

```C
void __writemsr(
   unsigned long Register,
   unsigned __int64 Value
);
```

### Parameters

*Register*\
[in] The model-specific register.

*Value*\
[in] The value to write.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__writemsr`|x86, x64|

**Header file** \<intrin.h>

## Remarks

This function may only be used in kernel mode, and this routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
