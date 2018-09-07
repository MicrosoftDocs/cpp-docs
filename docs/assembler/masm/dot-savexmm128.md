---
title: ".SAVEXMM128 | Microsoft Docs"
ms.custom: ""
ms.date: "08/30/2018"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
f1_keywords: [".SAVEXMM128"]
dev_langs: ["C++"]
helpviewer_keywords: [".SAVEXMM128 directive"]
ms.assetid: 551eb472-b8d0-47b1-8d82-995d1f485723
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# .SAVEXMM128

Generates either a `UWOP_SAVE_XMM128` or a `UWOP_SAVE_XMM128_FAR` unwind code entry for the specified XMM register and offset using the current prologue offset. MASM will choose the most efficient encoding.

## Syntax

> .savexmm128 xmmreg , offset

## Remarks

.SAVEXMM128 allows ml64.exe users to specify how a frame function unwinds, and is only allowed within the prologue, which extends from the [PROC](../../assembler/masm/proc.md) FRAME declaration to the [.ENDPROLOG](../../assembler/masm/dot-endprolog.md) directive. These directives do not generate code; they only generate `.xdata` and `.pdata`. .SAVEXMM128 should be preceded by instructions that actually implement the actions to be unwound. It is a good practice to wrap both the unwind directives and the code they are meant to unwind in a macro to ensure agreement.

*offset* must be a multiple of 16.

For more information, see [MASM for x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).

## See also

[Directives Reference](../../assembler/masm/directives-reference.md)<br/>