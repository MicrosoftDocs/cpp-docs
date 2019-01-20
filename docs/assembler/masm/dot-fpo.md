---
title: ".FPO"
ms.date: "08/30/2018"
f1_keywords: [".FPO"]
helpviewer_keywords: [".FPO directive"]
ms.assetid: 35f4cd61-32f9-4262-b657-73f04f775d09
---
# .FPO

The .FPO directive controls the emission of debug records to the .debug$F segment or section.

## Syntax

> FPO (*cdwLocals*, *cdwParams*, *cbProlog*, *cbRegs*, *fUseBP*, *cbFrame*)

### Parameters

*cdwLocals*<br/>
Number of local variables, an unsigned 32 bit value.

*cdwParams*<br/>
Size of the parameters in DWORDS, an unsigned 16 bit value.

*cbProlog*<br/>
Number of bytes in the function prolog code, an unsigned 8 bit value.

*cbRegs*<br/>
Number registers saved.

*fUseBP*<br/>
Indicates whether the EBP register has been allocated. either 0 or 1.

*cbFrame*<br/>
Indicates the frame type.  See [FPO_DATA](/windows/desktop/api/winnt/ns-winnt-_fpo_data) for more information.

## See also

- [Directives Reference](../../assembler/masm/directives-reference.md)
