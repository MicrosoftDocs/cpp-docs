---
title: "GOTO (MASM)"
ms.date: "08/30/2018"
f1_keywords: ["goto"]
helpviewer_keywords: ["GOTO directive"]
ms.assetid: 6a5f73e7-6784-4eae-ac52-4fc77a7f369f
---
# GOTO (MASM)

Transfers assembly to the line marked **:**_macrolabel_.

## Syntax

> **GOTO** *macrolabel*

## Remarks

**GOTO** is permitted only inside [MACRO](macro.md), [FOR](for-masm.md), [FORC](forc.md), [REPEAT](repeat.md), and [WHILE](while-masm.md) blocks. The *macrolabel* target must be the only directive on the line and must be preceded by a leading colon.

## See also

[Directives Reference](../../assembler/masm/directives-reference.md)<br/>
