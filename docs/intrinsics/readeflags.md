---
title: "__readeflags | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__readeflags"]
dev_langs: ["C++"]
helpviewer_keywords: ["__readeflags intrinsic"]
ms.assetid: f9d2f4d8-c428-491f-b8de-04d0566b2b6b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __readeflags

Reads the program status and control (EFLAGS) register.

## Syntax

```
unsigned     int __readeflags(void);
unsigned __int64 __readeflags(void);
```

## Return Value

The value of the EFLAGS register. The return value is 32 bits long on a 32-bit platform and 64 bits long on a 64-bit platform.

## Remarks

These routines are available only as intrinsics.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__readeflags`|x86, x64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## See Also

[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)<br/>
[__writeeflags](../intrinsics/writeeflags.md)