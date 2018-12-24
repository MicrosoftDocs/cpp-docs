---
title: "__svm_vmrun"
ms.date: "11/04/2016"
f1_keywords: ["__svm_vmrun"]
helpviewer_keywords: ["__svm_vmrun intrinsic", "VMRUN instruction"]
ms.assetid: ae98a781-fc17-47b2-b40f-86fcebf1867b
---
# __svm_vmrun

**Microsoft Specific**

Starts execution of the virtual machine guest code that corresponds to the specified virtual machine control block (VMCB).

## Syntax

```
void __svm_vmrun(
   size_t VmcbPhysicalAddress
);
```

#### Parameters

|Parameter|Description|
|---------------|-----------------|
|*VmcbPhysicalAddress*|[in] The physical address of the VMCB.|

## Remarks

The `__svm_vmrun` function uses a minimal amount of information in the VMCB to begin executing the virtual machine guest code. Use the [__svm_vmsave](../intrinsics/svm-vmsave.md) or [__svm_vmload](../intrinsics/svm-vmload.md) function if you require more information to handle a complex interrupt or to switch to another guest.

The `__svm_vmrun` function is equivalent to the `VMRUN` machine instruction. This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "AMD64 Architecture Programmer's Manual Volume 2: System Programming," document number 24593, revision 3.11 or later, at the [AMD corporation](https://developer.amd.com/resources/developer-guides-manuals/) site.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__svm_vmrun`|x86, x64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## See also

[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)<br/>
[__svm_vmsave](../intrinsics/svm-vmsave.md)<br/>
[__svm_vmload](../intrinsics/svm-vmload.md)
