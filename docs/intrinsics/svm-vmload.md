---
description: "Learn more about: __svm_vmload"
title: "__svm_vmload"
ms.date: "09/02/2019"
f1_keywords: ["__svm_vmload"]
helpviewer_keywords: ["__svm_vmload intrinsic", "VMLOAD instruction"]
ms.assetid: b46a5592-db76-4ffc-8694-2f3494e28bed
---
# __svm_vmload

**Microsoft Specific**

Loads a subset of processor state from the specified virtual machine control block (VMCB).

## Syntax

```C
void __svm_vmload(
   size_t VmcbPhysicalAddress
);
```

### Parameters

*VmcbPhysicalAddress*\
[in] The physical address of the VMCB.

## Remarks

The `__svm_vmload` function is equivalent to the `VMLOAD` machine instruction. This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "AMD64 Architecture Programmer's Manual Volume 2: System Programming," document number 24593, revision 3.11, at the [AMD corporation](https://developer.amd.com/resources/developer-guides-manuals/) site.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__svm_vmload`|x86, x64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[__svm_vmrun](../intrinsics/svm-vmrun.md)\
[__svm_vmsave](../intrinsics/svm-vmsave.md)
