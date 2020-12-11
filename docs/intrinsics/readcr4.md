---
description: "Learn more about: __readcr4"
title: "__readcr4"
ms.date: "09/02/2019"
f1_keywords: ["__readcr4"]
helpviewer_keywords: ["__readcr4 intrinsic"]
ms.assetid: b841a27b-fe0d-4ee9-b76b-f91d3eb061fa
---
# __readcr4

**Microsoft Specific**

Reads the CR4 register and returns its value.

## Syntax

```C
unsigned __int64 __readcr4(void);
```

## Return value

The value in the CR4 register.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__readcr4`|x86, x64|

**Header file** \<intrin.h>

## Remarks

The intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
