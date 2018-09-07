---
title: "XMMWORD | Microsoft Docs"
ms.custom: ""
ms.date: "08/30/2018"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
f1_keywords: ["XMMWORD"]
dev_langs: ["C++"]
helpviewer_keywords: ["XMMWORD directive"]
ms.assetid: 18026d32-5cab-403e-ad7e-382fb41aa9b8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# XMMWORD

Used for 128-bit multimedia operands with MMX and SSE (XMM) instructions.

## Syntax

> XMMWORD

## Remarks

`XMMWORD` is intended to represent the same type as [__m128](../../cpp/m128.md).

## Example

```asm
    movdqa   xmm0, xmmword ptr [ebx]
```