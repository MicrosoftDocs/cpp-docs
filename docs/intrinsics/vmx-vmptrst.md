---
title: "__vmx_vmptrst | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__vmx_vmptrst"]
dev_langs: ["C++"]
helpviewer_keywords: ["__vmx_vmptrst intrinsic", "VMPTRST instruction"]
ms.assetid: 8dc66e47-03a0-41b0-8e25-c1485f42817a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __vmx_vmptrst

**Microsoft Specific**

Stores the pointer to the current virtual-machine control structure (VMCS) at the specified address.

## Syntax

```
void __vmx_vmptrst( 
   unsigned __int64 *VmcsPhysicalAddress 
);
```

#### Parameters

[in] *`VmcsPhysicalAddress`
The address where the current VMCS pointer is stored.

## Remarks

The VMCS pointer is a 64-bit physical address.

The `__vmx_vmptrst` function is equivalent to the `VMPTRST` machine instruction. This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "Intel Virtualization Technical Specification for the IA-32 Intel Architecture," document number C97063-002, at the [Intel Corporation](https://software.intel.com/en-us/articles/intel-sdm) site.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__vmx_vmptrst`|x86, x64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## See Also

[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)<br/>
[__vmx_vmptrld](../intrinsics/vmx-vmptrld.md)