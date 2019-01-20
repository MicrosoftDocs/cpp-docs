---
title: "__halt"
ms.date: "11/04/2016"
f1_keywords: ["__halt", "__halt_cpp"]
helpviewer_keywords: ["__halt intrinsic", "HLT instruction"]
ms.assetid: a074f44a-101c-45a5-8a5e-cfd223c34002
---
# __halt

**Microsoft Specific**

Halts the microprocessor until an enabled interrupt, a nonmaskable interrupt (NMI), or a reset occurs.

## Syntax

```
void __halt( void );
```

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__halt`|x86, x64|

**Header file** \<intrin.h>

## Remarks

The `__halt` function is equivalent to the `HLT` machine instruction, and is available only in kernel mode. For more information, search for the document, "Intel Architecture Software Developer's Manual, Volume 2: Instruction Set Reference," at the [Intel Corporation](https://software.intel.com/articles/intel-sdm) site.

**END Microsoft Specific**

## See also

- [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)
