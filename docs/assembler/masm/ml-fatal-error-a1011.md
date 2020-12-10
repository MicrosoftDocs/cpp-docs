---
description: "Learn more about: ML Fatal Error A1011"
title: "ML Fatal Error A1011"
ms.date: "12/17/2019"
ms.custom: "error-reference"
f1_keywords: ["A1011"]
helpviewer_keywords: ["A1011"]
ms.assetid: 7fbf092d-4189-4330-a884-dfa2268fc3dd
---
# ML Fatal Error A1011

**directive must be in control block**

The assembler found a high-level directive where one was not expected. One of the following directives was found:

- [.ELSE](dot-else.md) without [.IF](dot-if.md)

- [.ENDIF](dot-endif.md) without [.IF](dot-if.md)

- [.ENDW](dot-endw.md) without [.WHILE](dot-while.md)

- [.UNTILCXZ](dot-untilcxz.md) without [.REPEAT](dot-repeat.md)

- [.CONTINUE](dot-continue.md) without [.WHILE](dot-while.md) or [.REPEAT](dot-repeat.md)

- [.BREAK](dot-break.md) without [.WHILE](dot-while.md) or [.REPEAT](dot-repeat.md)

- [.ELSE](dot-else.md) following `.ELSE`

## See also

[ML Error Messages](ml-error-messages.md)
