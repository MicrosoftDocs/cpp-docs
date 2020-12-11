---
description: "Learn more about: __wbinvd"
title: "__wbinvd"
ms.date: "09/02/2019"
f1_keywords: ["__wbinvd"]
helpviewer_keywords: ["__wbinvd intrinsic", "wbinvd instruction"]
ms.assetid: 628d0981-39e5-49e1-bd43-706d123af121
---
# __wbinvd

**Microsoft Specific**

Generates the Write Back and Invalidate Cache (`wbinvd`) instruction.

## Syntax

```C
void __wbinvd(void);
```

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__wbinvd`|x86, x64|

**Header file** \<intrin.h>

## Remarks

This function is only available in kernel mode with a privilege level (CPL) of 0, and the routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
