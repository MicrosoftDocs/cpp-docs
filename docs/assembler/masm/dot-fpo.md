---
description: "Learn more about: .FPO (32-bit MASM)"
title: ".FPO"
ms.date: "11/05/2019"
f1_keywords: [".FPO"]
helpviewer_keywords: [".FPO directive"]
---
# .FPO (32-bit MASM)

The `.FPO` directive controls the emission of debug records to the `.debug$F` segment or section. Use this directive with 32-bit MASM only.

## Syntax

> `.FPO` (*`cdwLocals`*, *`cdwParams`*, *`cbProlog`*, *`cbRegs`*, *`fUseBP`*, *`cbFrame`*)

### Parameters

*`cdwLocals`*\
Number of local variables, an unsigned 32-bit value.

*`cdwParams`*\
Size of the parameters in DWORDS, an unsigned 16-bit value.

*`cbProlog`*\
Number of bytes in the function prolog code, an unsigned 8-bit value.

*`cbRegs`*\
Number registers saved.

*`fUseBP`*\
Indicates whether the EBP register is allocated. Use either 0 or 1.

*`cbFrame`*\
Indicates the frame type. For more information, see [`FPO_DATA`](/windows/win32/api/winnt/ns-winnt-fpo_data).

## See also

[Directives reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
