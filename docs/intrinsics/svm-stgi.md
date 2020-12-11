---
description: "Learn more about: __svm_stgi"
title: "__svm_stgi"
ms.date: "09/02/2019"
f1_keywords: ["__svm_stgi"]
helpviewer_keywords: ["__svm_stgi intrinsic", "STGI instruction"]
ms.assetid: 96488da4-5587-4e99-8674-627a9e51be84
---
# __svm_stgi

**Microsoft Specific**

Sets the global interrupt flag.

## Syntax

```C
void __svm_stgi(void);
```

## Remarks

The `__svm_stgi` function is equivalent to the `STGI` machine instruction. The global interrupt flag determines whether the microprocessor ignores, postpones, or handles interrupts, due to events such as an I/O completion, a hardware temperature alert, or a debug exception.

This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for "AMD64 Architecture Programmer's Manual Volume 2: System Programming," at the [AMD corporation](https://developer.amd.com/resources/developer-guides-manuals/) site.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__svm_stgi`|x86, x64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[__svm_clgi](../intrinsics/svm-clgi.md)
