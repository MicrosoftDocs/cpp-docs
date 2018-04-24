---
title: "ML Fatal Error A1011 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "error-reference"
f1_keywords: ["A1011"]
dev_langs: ["C++"]
helpviewer_keywords: ["A1011"]
ms.assetid: 7fbf092d-4189-4330-a884-dfa2268fc3dd
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# ML Fatal Error A1011
**directive must be in control block**  
  
 The assembler found a high-level directive where one was not expected. One of the following directives was found:  
  
-   [.ELSE](../../assembler/masm/dot-else.md) without [.IF](../../assembler/masm/dot-if.md)  
  
-   [.ENDIF](../../assembler/masm/dot-endif.md) without [.IF](../../assembler/masm/dot-if.md)  
  
-   [.ENDW](../../assembler/masm/dot-endw.md) without [.WHILE](../../assembler/masm/dot-while.md)  
  
-   [.UNTILCXZ](../../assembler/masm/dot-untilcxz.md) without [.REPEAT](../../assembler/masm/dot-repeat.md)  
  
-   [.CONTINUE](../../assembler/masm/dot-continue.md) without [.WHILE](../../assembler/masm/dot-while.md) or [.REPEAT](../../assembler/masm/dot-repeat.md)  
  
-   [.BREAK](../../assembler/masm/dot-break.md) without [.WHILE](../../assembler/masm/dot-while.md) or [.REPEAT](../../assembler/masm/dot-repeat.md)  
  
-   [.ELSE](../../assembler/masm/dot-else.md) following `.ELSE`  
  
## See Also  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)