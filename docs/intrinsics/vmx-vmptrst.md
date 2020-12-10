---
description: "Learn more about: __vmx_vmptrst"
title: "__vmx_vmptrst"
ms.date: "09/02/2019"
f1_keywords: ["__vmx_vmptrst"]
helpviewer_keywords: ["__vmx_vmptrst intrinsic", "VMPTRST instruction"]
ms.assetid: 8dc66e47-03a0-41b0-8e25-c1485f42817a
---
# __vmx_vmptrst

**Microsoft Specific**

Stores the pointer to the current virtual-machine control structure (VMCS) at the specified address.

## Syntax

```C
void __vmx_vmptrst(
   unsigned __int64 *VmcsPhysicalAddress
);
```

### Parameters

*VmcsPhysicalAddress*\
[in] The address where the current VMCS pointer is stored.

## Remarks

The VMCS pointer is a 64-bit physical address.

The `__vmx_vmptrst` function is equivalent to the `VMPTRST` machine instruction. This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "Intel Virtualization Technical Specification for the IA-32 Intel Architecture," document number C97063-002, at the [Intel Corporation](https://software.intel.com/articles/intel-sdm) site.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__vmx_vmptrst`|x86, x64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[__vmx_vmptrld](../intrinsics/vmx-vmptrld.md)
