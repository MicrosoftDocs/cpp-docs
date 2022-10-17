---
description: "Learn more about: __vmx_on"
title: "__vmx_on"
ms.date: 05/16/2022
f1_keywords: ["__vmx_on"]
helpviewer_keywords: ["VMXON instruction", "__vmx_on intrinsic"]
ms.assetid: 16804991-6a75-4adf-8ec2-bc95acfa4801
---
# __vmx_on

**Microsoft Specific**

Activates virtual machine extensions (VMX) operation in the processor.

## Syntax

```C
unsigned char __vmx_on(
   unsigned __int64 *VmxonRegionPhysicalAddress
);
```

### Parameters

*`VmxonRegionPhysicalAddress`*\
[in] A pointer to a 64-bit, 4KB-aligned physical address that points to a VMXON region.

## Return value

|Value|Meaning|
|-----------|-------------|
|0|The operation succeeded.|
|1|The operation failed with extended status available in the `VM-instruction error field` of the current VMCS.|
|2|The operation failed without status available.|

## Remarks

The `__vmx_on` function corresponds to the `VMXON` machine instruction. This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, see "Intel 64 and IA-32 Architectures Software Developer's Manual, Volume 3C: System Programming Guide, Part 3" in the [Intel 64 and IA-32 Architecture Developer Manuals](https://www.intel.com/content/www/us/en/developer/articles/technical/intel-sdm.html).

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__vmx_on`|x64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
