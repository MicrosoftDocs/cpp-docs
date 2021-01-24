---
description: "Learn more about: __vmx_vmread"
title: "__vmx_vmread"
ms.date: "09/02/2019"
f1_keywords: ["__vmx_vmread"]
helpviewer_keywords: ["VMREAD instruction", "__vmx_vmread intrinsic"]
ms.assetid: 08bdd7a0-6435-4ea6-b9a0-f592d870e5aa
---
# __vmx_vmread

**Microsoft Specific**

Reads a specified field from the current virtual machine control structure (VMCS) and places it in the specified location.

## Syntax

```C
unsigned char __vmx_vmread(
   size_t Field,
   size_t *FieldValue
);
```

### Parameters

*Field*\
[in] The VMCS field to read.

*FieldValue*\
[in] A pointer to the location to store the value read from the VMCS field specified by the `Field` parameter.

## Return value

|Value|Meaning|
|-----------|-------------|
|0|The operation succeeded.|
|1|The operation failed with extended status available in the `VM-instruction error field` of the current VMCS.|
|2|The operation failed without status available.|

## Remarks

The `__vmx_vmread` function is equivalent to the `VMREAD` machine instruction. The value of the `Field` parameter is an encoded field index that is described in Intel documentation. For more information, search for Appendix C of "Intel Virtualization Technical Specification for the IA-32 Intel Architecture," at the [Intel Corporation](https://software.intel.com/articles/intel-sdm) site.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__vmx_vmread`|x64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[__vmx_vmwrite](../intrinsics/vmx-vmwrite.md)
