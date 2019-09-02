---
title: "__readeflags"
ms.date: "11/04/2016"
f1_keywords: ["__readeflags"]
helpviewer_keywords: ["__readeflags intrinsic"]
ms.assetid: f9d2f4d8-c428-491f-b8de-04d0566b2b6b
---
# __readeflags

Reads the program status and control (EFLAGS) register.

## Syntax

```C
unsigned     int __readeflags(void); /* x86 */
unsigned __int64 __readeflags(void); /* x64 */
```

## Return Value

The value of the EFLAGS register. The return value is 32 bits long on a 32-bit platform, and 64 bits long on a 64-bit platform.

## Remarks

These routines are available only as intrinsics.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__readeflags`|x86, x64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## See also

[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)\
[__writeeflags](../intrinsics/writeeflags.md)
