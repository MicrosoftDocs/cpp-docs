---
title: "ML Fatal Error A1008"
ms.date: "12/17/2019"
ms.custom: "error-reference"
f1_keywords: ["A1008"]
helpviewer_keywords: ["A1008"]
ms.assetid: fe592f9d-c37b-4cd8-a51d-e3c15ddcab83
---
# ML Fatal Error A1008

**unmatched macro nesting**

Either a macro was not terminated before the end of the file or the terminating directive [ENDM](../../assembler/masm/endm.md) was found outside of a macro block.

One cause of this error is omission of the dot before [.REPEAT](../../assembler/masm/dot-repeat.md) or [.WHILE](../../assembler/masm/dot-while.md).

## See also

[ML Error Messages](../../assembler/masm/ml-error-messages.md)<br/>