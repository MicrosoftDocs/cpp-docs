---
title: "__nop | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__nop"]
dev_langs: ["C++"]
helpviewer_keywords: ["nop instruction", "__nop intrinsic"]
ms.assetid: 7a2a938b-87e0-476d-a348-03ea7635b6b9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __nop

**Microsoft Specific**

Generates platform-specific machine code that performs no operation.

## Syntax

```
void __nop();
```

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__nop`|x86, x64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## Remarks

The `__nop` function is equivalent to the `NOP` machine instruction. For more information, search for the document, "Intel Architecture Software Developer's Manual, Volume 2: Instruction Set Reference," at the [Intel Corporation](https://software.intel.com/articles/intel-sdm) site.

## See Also

[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)<br/>
[__noop](../intrinsics/noop.md)