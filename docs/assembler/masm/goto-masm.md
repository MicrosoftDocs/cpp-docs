---
title: "GOTO (MASM) | Microsoft Docs"
ms.custom: ""
ms.date: "06/11/2018"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
f1_keywords: ["goto"]
dev_langs: ["C++"]
helpviewer_keywords: ["GOTO directive"]
ms.assetid: 6a5f73e7-6784-4eae-ac52-4fc77a7f369f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# GOTO (MASM)

Transfers assembly to the line marked **:**_macrolabel_.
  
## Syntax

> **GOTO** *macrolabel*

## Remarks

**GOTO** is permitted only inside [MACRO](macro.md), [FOR](for-masm.md), [FORC](forc.md), [REPEAT](repeat.md), and [WHILE](while-masm.md) blocks. The *macrolabel* target must be the only directive on the line and must be preceded by a leading colon.

## See also

- [Directives Reference](../../assembler/masm/directives-reference.md)
