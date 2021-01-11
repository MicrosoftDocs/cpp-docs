---
description: "Learn more about: __svm_clgi"
title: "__svm_clgi"
ms.date: "09/02/2019"
f1_keywords: ["__svm_clgi"]
helpviewer_keywords: ["CLGI instruction", "__svm_clgi intrinsic"]
ms.assetid: 6640f5ab-9472-46f9-a042-e15c4f1ff858
---
# __svm_clgi

**Microsoft Specific**

Clears the global interrupt flag.

## Syntax

```C
void __svm_clgi( void );
```

## Remarks

The `__svm_clgi` function is equivalent to the `CLGI` machine instruction. The global interrupt flag determines whether the microprocessor ignores, postpones, or handles interrupts, due to events such as an I/O completion, a hardware temperature alert, or a debug exception.

This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for "AMD64 Architecture Programmer's Manual Volume 2: System Programming," at the [AMD corporation](https://developer.amd.com/resources/developer-guides-manuals/) site.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__svm_clgi`|x86, x64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[__svm_stgi](../intrinsics/svm-stgi.md)
