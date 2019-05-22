---
title: "__svm_skinit"
ms.date: "11/04/2016"
f1_keywords: ["__svm_skinit"]
helpviewer_keywords: ["SKINIT instruction", "__svm_skinit intrinsic"]
ms.assetid: 787ec781-4cf2-40a2-aa20-5192334b131a
---
# __svm_skinit

**Microsoft Specific**

Initiates the loading of verifiably secure software, such as a virtual machine monitor.

## Syntax

```
void __svm_skinit(
   int SLB
);
```

#### Parameters

|Parameter|Description|
|---------------|-----------------|
|`SLB`|The 32-bit physical address of a 64K byte Secure Loader Block (SLB).|

## Remarks

The `__svm_skinit` function is equivalent to the `SKINIT` machine instruction. This function is part of a security system that uses the processor and a Trusted Platform Module (TPM) to verify and load trusted software called a security kernel (SK). A virtual machine monitor is an example of a security kernel. The security system verifies program components loaded during the initialization process, and protects components from tampering by interrupts, device access, or another program if the computer is a multiprocessor.

The `SLB` parameter specifies the physical address of a 64K block of memory called the *Secure Loader Block* (SLB). The SLB contains a program called the secure loader that establishes the operating environment for the computer, and subsequently loads the security kernel.

This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "AMD64 Architecture Programmer's Manual Volume 2: System Programming," document number 24593, revision 3.11, at the [AMD corporation](https://developer.amd.com/resources/developer-guides-manuals/) site.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__svm_skinit`|x86, x64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## See also

[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)