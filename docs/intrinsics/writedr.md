---
title: "__writedr"
ms.date: "11/04/2016"
f1_keywords: ["__writedr"]
helpviewer_keywords: ["__writedr intrinsic"]
ms.assetid: ac55c1ee-df2f-41d4-a429-6f369d2a934d
---
# __writedr

Writes the specified value to the specified debug register.

## Syntax

```
void __writedr(unsigned DebugRegister, unsigned DebugValue);
void __writedr(unsigned DebugRegister, unsigned __int64 DebugValue);
```

#### Parameters

*DebugRegister*<br/>
[in] A number from 0 through 7 that identifies the debug register.

*DebugValue*<br/>
[in] A value to write to the debug register.

## Remarks

These intrinsics are available only in kernel mode, and the routines are available only as intrinsics.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__writedr`|x86, x64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## See Also

[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)<br/>
[__readdr](../intrinsics/readdr.md)