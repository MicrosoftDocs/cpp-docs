---
title: "_CIpow | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
apiname: ["_CIpow"]
apilocation: ["msvcr100.dll", "msvcr110.dll", "msvcr120.dll", "msvcr80.dll", "msvcr110_clr0400.dll", "msvcrt.dll", "msvcr90.dll"]
apitype: "DLLExport"
f1_keywords: ["CIpow", "_CIpow"]
dev_langs: ["C++"]
helpviewer_keywords: ["CIpow intrinsic", "_CIpow intrinsic"]
ms.assetid: 477aaf0c-ac58-4252-89dd-9f3e35d47536
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _CIpow

Calculates *x* raised to the *y* power based on the top values in the stack.

## Syntax

```
void __cdecl _CIpow();
```

## Remarks

This version of the `pow` function has a specialized calling convention that the compiler understands. It speeds up the execution because it prevents copies from being generated and helps with register allocation.

The resulting value is pushed onto the top of the stack.

## Requirements
 **Platform:** x86

## See Also

[Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[pow, powf, powl](../c-runtime-library/reference/pow-powf-powl.md)