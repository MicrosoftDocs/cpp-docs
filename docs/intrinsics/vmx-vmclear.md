---
description: "Learn more about: __vmx_vmclear"
title: "__vmx_vmclear"
ms.date: "09/02/2019"
f1_keywords: ["__vmx_vmclear"]
helpviewer_keywords: ["VMCLEAR instruction", "__vmx_vmclear intrinsic"]
ms.assetid: e3eb98e4-50fc-4c93-9bac-340fd1f0a466
---
# __vmx_vmclear

**Microsoft Specific**

Initializes the specified virtual machine control structure (VMCS) and sets its launch state to `Clear`.

## Syntax

```C
unsigned char __vmx_vmclear(
   unsigned __int64 *VmcsPhysicalAddress
);
```

### Parameters

*VmcsPhysicalAddress*\
[in] A pointer to a 64-bit memory location that contains the physical address of the VMCS to clear.

## Return value

|Value|Meaning|
|-----------|-------------|
|0|The operation succeeded.|
|1|The operation failed with extended status available in the `VM-instruction error field` of the current VMCS.|
|2|The operation failed without status available.|

## Remarks

An application can perform a VM-enter operation by using either the [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) or [__vmx_vmresume](../intrinsics/vmx-vmresume.md) function. The [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) function can be used only with a VMCS whose launch state is `Clear`, and the [__vmx_vmresume](../intrinsics/vmx-vmresume.md) function can be used only with a VMCS whose launch state is `Launched`. Consequently, use the [__vmx_vmclear](../intrinsics/vmx-vmclear.md) function to set the launch state of a VMCS to `Clear`. Use the [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) function for your first VM-enter operation and the [__vmx_vmresume](../intrinsics/vmx-vmresume.md) function for subsequent VM-enter operations.

The `__vmx_vmclear` function is equivalent to the `VMCLEAR` machine instruction. This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "Intel Virtualization Technical Specification for the IA-32 Intel Architecture," document number C97063-002, at the [Intel Corporation](https://software.intel.com/articles/intel-sdm) site.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__vmx_vmclear`|x64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md)\
[__vmx_vmresume](../intrinsics/vmx-vmresume.md)
