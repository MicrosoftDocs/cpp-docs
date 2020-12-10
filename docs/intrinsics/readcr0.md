---
description: "Learn more about: __readcr0"
title: "__readcr0"
ms.date: "09/02/2019"
f1_keywords: ["__readcr0"]
helpviewer_keywords: ["__readcr0 intrinsic"]
ms.assetid: 25bdb093-d83c-48d7-9c0f-224de8e2c61c
---
# __readcr0

**Microsoft Specific**

Reads the CR0 register and returns its value.

## Syntax

```C
unsigned long __readcr0(void);  /* X86 */
unsigned __int64 __readcr0(void);  /* X64 */
```

## Return value

The value in the CR0 register.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__readcr0`|x86, x64|

**Header file** \<intrin.h>

## Remarks

The intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
