---
description: "Learn more about: __vmx_off"
title: "__vmx_off"
ms.date: "09/02/2019"
f1_keywords: ["__vmx_off"]
helpviewer_keywords: ["VMXOFF instruction", "__vmx_off intrinsic"]
ms.assetid: 78a32d46-9291-406c-b982-a550855aff18
---
# __vmx_off

**Microsoft Specific**

Deactivates virtual machine extensions (VMX) operation in the processor.

## Syntax

```C
void __vmx_off();
```

## Remarks

The `__vmx_off` function is equivalent to the `VMXOFF` machine instruction. This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "Intel Virtualization Technical Specification for the IA-32 Intel Architecture," document number C97063-002, at the [Intel Corporation](https://software.intel.com/articles/intel-sdm) site.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__vmx_off`|x86, x64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
