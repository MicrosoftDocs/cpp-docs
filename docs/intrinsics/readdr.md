---
title: "__readdr"
ms.date: "11/04/2016"
f1_keywords: ["__readdr"]
helpviewer_keywords: ["__readdr intrinsic"]
ms.assetid: 061b05da-c85e-4052-b392-106f14bb84f1
---
# __readdr

Reads the value of the specified debug register.

## Syntax

```
unsigned         __readdr(unsigned int DebugRegister);
unsigned __int64 __readdr(unsigned int DebugRegister);
```

#### Parameters

*DebugRegister*<br/>
[in] A constant from 0 through 7 that identifies the debug register.

## Return Value

The value of the specified debug register.

## Remarks

These intrinsics are available only in kernel mode, and the routines are available only as intrinsics.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__readdr`|x86, x64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## See also

[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)<br/>
[__readeflags](../intrinsics/readeflags.md)