---
description: "Learn more about: __readcr2"
title: "__readcr2"
ms.date: "09/02/2019"
f1_keywords: ["__readcr2"]
helpviewer_keywords: ["__readcr2 intrinsic"]
ms.assetid: d02c97d8-1953-46e7-a79e-a781e2c5bf27
---
# __readcr2

**Microsoft Specific**

Reads the CR2 register and returns its value.

## Syntax

```C
unsigned __int64 __readcr2(void);
```

## Return value

The value in the CR2 register.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__readcr2`|x86, x64|

**Header file** \<intrin.h>

## Remarks

The intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
