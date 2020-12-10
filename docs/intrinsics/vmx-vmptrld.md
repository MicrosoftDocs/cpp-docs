---
description: "Learn more about: __vmx_vmptrld"
title: "__vmx_vmptrld"
ms.date: "09/02/2019"
f1_keywords: ["__vmx_vmptrld"]
helpviewer_keywords: ["__vmx_vmptrld intrinsic", "VMPTRLD instruction"]
ms.assetid: 95c9ec5b-1a81-41ba-983e-327bd6a65fcb
---
# __vmx_vmptrld

**Microsoft Specific**

Loads the pointer to the current virtual-machine control structure (VMCS) from the specified address.

## Syntax

```C
int __vmx_vmptrld(
   unsigned __int64 *VmcsPhysicalAddress
);
```

### Parameters

*VmcsPhysicalAddress*\
[in] The address where the VMCS pointer is stored.

## Return value

0\
The operation succeeded.

1\
The operation failed with extended status available in the `VM-instruction error field` of the current VMCS.

2\
The operation failed without status available.

## Remarks

The VMCS pointer is a 64-bit physical address.

The `__vmx_vmptrld` function is equivalent to the `VMPTRLD` machine instruction. This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "Intel Virtualization Technical Specification for the IA-32 Intel Architecture," document number C97063-002, at the [Intel Corporation](https://software.intel.com/articles/intel-sdm) site.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__vmx_vmptrld`|x64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[__vmx_vmptrst](../intrinsics/vmx-vmptrst.md)
