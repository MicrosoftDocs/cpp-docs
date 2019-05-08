---
title: "__svm_vmload"
ms.date: "11/04/2016"
f1_keywords: ["__svm_vmload"]
helpviewer_keywords: ["__svm_vmload intrinsic", "VMLOAD instruction"]
ms.assetid: b46a5592-db76-4ffc-8694-2f3494e28bed
---
# __svm_vmload

**Microsoft Specific**

Loads a subset of processor state from the specified virtual machine control block (VMCB).

## Syntax

```
void __svm_vmload(
   size_t VmcbPhysicalAddress
);
```

#### Parameters

|Parameter|Description|
|---------------|-----------------|
|*VmcbPhysicalAddress*|[in] The physical address of the VMCB.|

## Remarks

The `__svm_vmload` function is equivalent to the `VMLOAD` machine instruction. This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "AMD64 Architecture Programmer's Manual Volume 2: System Programming," document number 24593, revision 3.11, at the [AMD corporation](https://developer.amd.com/resources/developer-guides-manuals/) site.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__svm_vmload`|x86, x64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## See also

[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)<br/>
[__svm_vmrun](../intrinsics/svm-vmrun.md)<br/>
[__svm_vmsave](../intrinsics/svm-vmsave.md)