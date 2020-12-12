---
description: "Learn more about: ML Fatal Error A1010"
title: "ML Fatal Error A1010"
ms.date: "12/17/2019"
ms.custom: "error-reference"
f1_keywords: ["A1010"]
helpviewer_keywords: ["A1010"]
ms.assetid: 9e0b5241-67f4-4740-8701-3b2d2d1ad9e4
---
# ML Fatal Error A1010

**unmatched block nesting :**

A block beginning did not have a matching end, or a block end did not have a matching beginning. One of the following may be involved:

- A high-level directive such as [.IF](dot-if.md), [.REPEAT](dot-repeat.md), or [.WHILE](dot-while.md).

- A conditional-assembly directive such as [IF](if-masm.md), [REPEAT](repeat.md), or **WHILE**.

- A structure or union definition.

- A procedure definition.

- A segment definition.

- A [POPCONTEXT](popcontext.md) directive.

- A conditional-assembly directive, such as an [ELSE](else-masm.md), [ELSEIF](elseif-masm.md), or **ENDIF** without a matching [IF](if-masm.md).

## See also

[ML Error Messages](ml-error-messages.md)
