---
title: "_CIsin | Microsoft Docs"
ms.custom: ""
ms.date: "04/10/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "article"
apiname: ["_CIsin"]
apilocation: ["msvcr80.dll", "msvcr100.dll", "msvcrt.dll", "msvcr110.dll", "msvcr120.dll", "msvcr90.dll", "msvcr110_clr0400.dll"]
apitype: "DLLExport"
f1_keywords: ["CIsin", "_CIsin"]
dev_langs: ["C++"]
helpviewer_keywords: ["_CIsin intrinsic", "CIsin intrinsic"]
ms.assetid: f215f39a-2341-4f1c-ba8e-cb522451ceb2
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# _CIsin

Calculates the sine of the top value in the floating-point stack.

## Syntax

```C
void __cdecl _CIsin();
```

## Remarks

This intrinsic version of the [sin](../c-runtime-library/reference/sin-sinf-sinl.md) function has a specialized calling convention that the compiler understands. It speeds up the execution because it prevents copies from being generated and helps with register allocation.

The resulting value is pushed onto the top of the floating-point stack.

## Requirements

**Platform:** x86

## See also

[Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[sin, sinf, sinl](../c-runtime-library/reference/sin-sinf-sinl.md)<br/>
