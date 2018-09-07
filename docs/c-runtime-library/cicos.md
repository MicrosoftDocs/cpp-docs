---
title: "_CIcos | Microsoft Docs"
ms.custom: ""
ms.date: "04/11/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_CIcos"]
apilocation: ["msvcr90.dll", "msvcrt.dll", "msvcr120.dll", "msvcr100.dll", "msvcr80.dll", "msvcr110_clr0400.dll", "msvcr110.dll"]
apitype: "DLLExport"
f1_keywords: ["CIcos", "_CIcos"]
dev_langs: ["C++"]
helpviewer_keywords: ["_CIcos intrinsic", "CIcos intrinsic"]
ms.assetid: 6fc203fb-66f3-4ead-9784-f85833c26f1b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _CIcos

Calculates the cosine of the top value in the floating-point stack.

## Syntax

```C
void __cdecl _CIcos();
```

## Remarks

This version of the [cos](../c-runtime-library/reference/cos-cosf-cosl.md) function has a specialized calling convention that the compiler understands. It speeds up the execution because it prevents copies from being generated and helps with register allocation.

The resulting value is pushed onto the top of the floating-point stack.

## Requirements

**Platform:** x86

## See also

[Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[cos, cosf, cosl](../c-runtime-library/reference/cos-cosf-cosl.md)<br/>
