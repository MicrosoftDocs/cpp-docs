---
title: "__svm_invlpga"
ms.date: "11/04/2016"
f1_keywords: ["__svm_invlpga"]
helpviewer_keywords: ["__svm_invlpga intrinsic", "INVLPGA instruction"]
ms.assetid: aa6578ce-8278-464b-8815-a0fc45330915
---
# __svm_invlpga

**Microsoft Specific**

Invalidates the address mapping entry in the computer's translation look-aside buffer. Parameters specify the virtual address and address space identifier of the page to invalidate.

## Syntax

```
void __svm_invlpga(void *Va, int ASID);
```

#### Parameters

|Parameter|Description|
|---------------|-----------------|
|*Va*|[in] The virtual address of the page to invalidate.|
|*ASID*|[in] The address space identifier (ASID) of the page to invalidate.|

## Remarks

The `__svm_invlpga` function is equivalent to the `INVLPGA` machine instruction. This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "AMD64 Architecture Programmer's Manual Volume 2: System Programming," document number 24593, revision 3.11, at the [AMD corporation](https://developer.amd.com/resources/developer-guides-manuals/) site.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__svm_invlpga`|x86, x64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## See also

[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)
