---
description: "Learn more about: __readcr3"
title: "__readcr3"
ms.date: "09/02/2019"
f1_keywords: ["__readcr3"]
helpviewer_keywords: ["__readcr3 intrinsic"]
ms.assetid: e24392c3-cad7-4788-8f31-94bf2e9e0053
---
# __readcr3

**Microsoft Specific**

Reads the CR3 register and returns its value.

## Syntax

```C
unsigned __int64 __readcr3(void);
```

## Return value

The value in the CR3 register.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__readcr3`|x86, x64|

**Header file** \<intrin.h>

## Remarks

The intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
